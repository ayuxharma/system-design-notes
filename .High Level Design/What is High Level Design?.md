# 🏗️ High-Level Design (HLD) — Overview

High-level design or **HLD** is an initial step in the development of applications where the **overall structure of a system is planned**.

- Focuses on **how different components of the system work together** without internal implementation details.
- Helps all teams (developers, architects, managers) stay aligned with goals.
- Ensures smooth communication and a shared understanding of the system.
- Also known as **macro-level design**.

---

## 🔁 Common Request Flow (User → Backend → Data → Backend → User)

![flow](https://github.com/user-attachments/assets/52b041d7-576b-4f0c-aa0d-a2c04722ed6d)

---

# 🏗️ System Architecture Flow — Detailed Notes

This represents a **typical modern web-scale system architecture**.  
Each component helps route traffic, secure requests, execute logic, and store or process data.

---

## 1. **Users → CDN / Edge Layer**

### What This Layer Does
- First entry point for all users.
- Distributed globally to reduce latency.

### Responsibilities
- **Static Asset Caching:** Images, CSS, JS, HTML.
- **TLS Termination:** HTTPS encryption & decryption.
- **DDoS Protection & Rate Limiting.**
- **Optional Edge Compute:** Small logic (auth checks, redirects, A/B tests).

---

## 2. **CDN / Edge → Load Balancer / API Gateway**

### Load Balancer (LB)
- Distributes traffic across backend servers.
- Prevents overload & improves availability.
- Supports: round-robin, least connections, IP hash, health checks.

### API Gateway
- The “front door” for all API calls.
- Responsibilities:
  - Authentication / Authorization
  - Rate limiting
  - Request/Response transformations
  - Routing
  - Logging & analytics

> **LB = traffic distributor**  
> **API Gateway = traffic manager**

---

## 3. **Application Services (Backend Layer)**

This is the **core business logic**.

### Responsibilities
- Handle API requests.
- Validate inputs.
- Interact with datastore, identity, cache, queues.
- Return responses.

### Examples
- User Service  
- Payment Service  
- Product Service  
- Recommendation Service  

These services are usually **stateless**, making horizontal scaling easy.

---

## 4. **Datastores**

Where data is stored long-term.

### Types of Datastores
- **SQL** (MySQL, PostgreSQL) — relational, consistent.
- **NoSQL** (MongoDB, DynamoDB, Cassandra) — flexible, highly scalable.
- **Caches** (Redis, Memcached) — fast in-memory reads.
- **Blob Storage** (S3, GCS) — files, media.
- **Search Engines** (Elasticsearch, OpenSearch).

### Interaction
- Services read/write data.
- Caches handle high-speed reads.
- Writes typically go to persistent stores.

---

## 5. **Identity / Access Service**

Handles system-wide authentication & authorization.

### Responsibilities
- Validate JWT/OAuth tokens.
- Manage sessions.
- Enforce user permissions.
- Work with API Gateway to check access early.

---

## 6. **Async Queue & Worker System**

Used for operations that should not slow down the user request.

### Queue Examples
- Kafka
- RabbitMQ
- AWS SQS
- Google Pub/Sub

### Worker Tasks
- Sending emails/SMS notifications
- Processing payments
- Heavy computations
- Search index updates
- Generating reports
- Media processing (resizing)
- Analytics pipelines

📌 **Why async?**  
To keep the main API fast while offloading heavy tasks.

---

## 7. **Logs & Metrics (Observability)**

Essential for monitoring and debugging.

### Logs
- Request logs
- Error logs
- Audit logs
- Application logs

### Metrics
- CPU, memory
- API latency
- RPS (requests per second)
- Queue depth
- DB performance
- Error rate

### Tools
- Prometheus & Grafana
- ELK Stack
- Datadog
- CloudWatch

---

## 8. **Response Path → User**

1. App services compute the response.
2. API Gateway formats it.
3. CDN may cache it.
4. User receives the result quickly.

Caching improves repeated request performance significantly.

---

# 🔄 End-to-End Flow Summary

**User → CDN/Edge (Cache, TLS, DDoS) → LB / API Gateway → App Services → Databases / Queues / Identity → Logs & Metrics → Response → User**

---

# 🧠 Key Concepts Learned

- **CDN** = speed + caching + protection  
- **TLS** = secure encrypted communication  
- **Load Balancer** = traffic distribution  
- **API Gateway** = auth + routing + analytics  
- **Application Services** = business logic  
- **Datastores** = persistent data  
- **Queues/Workers** = async heavy processing  
- **Observability** = logs + metrics  

---

# 📚 Additional Concepts

## **CDN (Content Delivery Network)**  
A distributed network of servers that delivers content (images, videos, scripts, static files) quickly based on user location.

## **TLS (Transport Layer Security)**  
A protocol that encrypts communication between client and server.  
TLS = what powers **HTTPS** (the lock icon).

---

# 🧩 Components of High-Level Design

1. **System Architecture**  
   Shows how the overall system is structured and how components interact.

2. **Modules & Components**  
   Breaks the system into logical modules with defined responsibilities.

3. **Data Flow Diagrams (DFDs)**  
   Visualize how data moves from input to output.

4. **Interface Design**  
   - API design  
   - User interfaces  
   Ensures smooth communication between components.

5. **Technology Stack**  
   Programming languages, frameworks, databases, tools.

6. **Deployment Architecture**  
   Cloud infra, servers, networks, load balancers, clusters, etc.

---

# 📄 What Is a High-Level Design Document (HLD)?

An HLD document includes:
- Data flows  
- Flowcharts  
- Architectural diagrams  
- System interactions  
- Module descriptions  

It explains **how the system works at a macro level** and connects all major components.

---

# 🆚 HLD vs LLD

| Aspect | HLD | LLD |
|-------|-----|------|
| Purpose | Big-picture architecture | Detailed implementation |
| Content | Components, interactions, databases, flows | Classes, methods, data structures |
| Level | Abstract | Very detailed |
| Used By | Architects, managers, senior devs | Developers |
| Focus | *What* the system should contain | *How* each part is built |

---

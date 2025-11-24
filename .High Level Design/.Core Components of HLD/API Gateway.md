# 🚪 API Gateway 

## 📌 What is an API Gateway?

An **API Gateway** is a centralized entry point between clients and backend services.  
It acts as a **reverse proxy**, routing requests and handling authentication, SSL, throttling, caching, logging, and monitoring — while hiding internal system complexity.

<img width="767" height="319" alt="image" src="https://github.com/user-attachments/assets/bfe017b0-6a20-47e8-bd23-1fa652186fce" />

---

## 📌 How an API Gateway Works

It manages incoming requests and performs:

- Authentication
- SSL termination
- Routing to services
- Rate limiting and traffic control
- Protocol translation
- Caching and aggregation

<img width="1000" height="503" alt="image" src="https://github.com/user-attachments/assets/22600c1d-d814-42fe-b4fb-f69ba04f7f40" />

---

## 🧠 How It Processes a Request

1. **User request sent from client (web/mobile).**
2. **Gateway checks which service the request belongs to.**
3. **Authentication (User ID/Password, OAuth, JWT).**
4. **SSL (Secure Socket Layer) establishes encrypted connection.**
5. **Routing & Transformation**
6. **Aggregation of multiple service responses if required.**
7. **Response sent back to client.**

---

## 📌 Key Responsibilities of an API Gateway

| Feature | Description |
|--------|-------------|
| **Routing** | Sends incoming requests to the correct backend service. |
| **Protocol Translation** | Converts formats: HTTP → WebSocket / gRPC, etc. |
| **Request Aggregation** | Combines responses from multiple services. |
| **Authentication / Authorization** | Uses OAuth, API keys, JWT, etc. |
| **Rate Limiting / Throttling** | Prevents abuse and controls traffic. |
| **Load Balancing** | Distributes traffic across multiple service instances. |
| **Caching** | Improves speed by reusing previous responses. |
| **Monitoring & Logging** | Tracks usage, failures, and performance metrics. |

---

## 🏗️ API Gateway in Microservices vs Monolithic Architecture

| Aspect | Monolithic Architecture | Microservices Architecture |
|--------|-------------------------|----------------------------|
| **Request Routing** | Routes to different modules of one app. | Routes to multiple independent microservices. |
| **Service Discovery** | Not needed. | Needed to locate services dynamically. |
| **Authorization Complexity** | Simple, single system. | Complex—multiple services require verification. |
| **Load Balancing** | Simple. | Balances multiple services & instances. |
| **Fault Tolerance** | Less complex. | Critical to isolate failures. |

---

## 🛍️ Example: API Gateway in Microservices

<img width="801" height="401" alt="image" src="https://github.com/user-attachments/assets/321f4802-9d1c-4f85-aeba-8dee58fcfe26" />

✔ Gateway routes requests to services like User, Cart, Orders, Payment  
✔ Handles auth, rate limits, caching, transformations  
✔ Standardized responses returned to client  

---

## 🧱 Example: API Gateway in Monolith

<img width="801" height="401" alt="image" src="https://github.com/user-attachments/assets/beb0ba36-756f-4143-b7a6-679c1251e4e4" />

✔ Still used as a single secure entry point  
✔ Handles SSL, auth, throttling, versioning, caching  

---

## ⭐ Benefits of using API Gateway

- Centralized access control
- Enhanced security (Auth, SSL, DDoS protection)
- Faster responses via caching & aggregation
- Easier scaling and service management
- Reduces client complexity

---

## ⚠️ Challenges of using API Gateway

- Can become a **single point of failure**
- May introduce **latency**
- Configuration and scaling may be **complex**
- Needs continuous **security updates**

---

## 🔧 Popular API Gateway Solutions

| Provider | Feature Type |
|---------|--------------|
| **Amazon API Gateway** | Fully managed REST & WebSocket APIs |
| **Kong** | Open-source, plugin-based, high performance |
| **Apigee (Google)** | Enterprise analytics + API monetization |
| **Azure API Management** | Built-in security, versioning, management |
| **Apache APISIX** | Cloud-native, extremely fast, plugin ecosystem |

---


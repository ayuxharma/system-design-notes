# Microservices Architecture

Microservices are an architectural approach to developing software applications as a collection of small, independent services that communicate with each other over a network.

Instead of building a monolithic application where all functionality is tightly integrated into a single codebase, microservices break the application into smaller, loosely coupled services.  
Each microservice acts as an independent mini-application and can be written in different programming languages or frameworks.

---

## How Do Microservices Work?

- Each microservice handles a specific **business feature** (e.g., authentication, product management).
- Services communicate via **APIs** for standardized data exchange.
- Different technologies or frameworks can be used for each service.
- Microservices can be **updated, deployed, and scaled independently**, increasing system resilience and flexibility.

![image](https://github.com/user-attachments/assets/908e6aa9-d6ef-47bb-af72-684ec37fbe97)

---

## Main Components of Microservices Architecture

### **1. Microservices**
Small, loosely coupled services that perform specific business functions.

### **2. API Gateway**
A central entry point for external clients that:
- Manages routing
- Handles authentication
- Performs rate limiting, logging, etc.

### **3. Service Registry & Discovery**
A dynamic directory that maintains the network locations of microservices.

### **4. Load Balancer**
Distributes incoming traffic across multiple service instances.

### **5. Containerization**
- Docker packages microservices with all dependencies.
- Kubernetes handles deployment, scaling, and orchestration.

### **6. Event Bus / Message Broker**
Enables asynchronous communication using pub/sub patterns between services.

### **7. Database per Microservice**
Each microservice usually maintains its own database, ensuring:
- Data autonomy  
- Independent scaling  
- Loose coupling  

### **8. Caching**
Frequently accessed data is stored close to the service to reduce repetitive queries and improve performance.

### **9. Fault Tolerance & Resilience**
Circuit breakers, retries, and failover mechanisms ensure robust and reliable system behavior.

---

## Design Patterns for Microservices Architecture

### **1. API Gateway Pattern**
Simplifies client interactions by providing a single endpoint and hiding multiple backend services.

### **2. Service Registry Pattern**
Maintains a list of active microservices and their network locations, enabling dynamic service discovery.

### **3. Circuit Breaker Pattern**
Stops calls to failing services and prevents cascading failures; retries after timeout.

### **4. Saga Pattern**
Breaks complex, multi-service business processes into small steps.  
If a step fails, compensating actions reverse previous operations.

### **5. Event Sourcing Pattern**
Stores every change as an event; the current state is derived by replaying events.

### **6. Strangler Pattern**
Gradually migrates a monolithic system to microservices by replacing components over time.

### **7. Bulkhead Pattern**
Isolates services to prevent cascading failures, similar to compartments in a ship.

### **8. API Composition Pattern**
Aggregates data from multiple services into one response, reducing client calls.

### **9. CQRS Pattern**
Separates **commands** (update operations) and **queries** (read operations) for better scalability and performance.

---

## Real-World Example: Amazon E-Commerce Microservices

Amazon uses microservices where each service handles a specific task such as:

![image](https://github.com/user-attachments/assets/6919d1bf-5ca5-4c59-a93a-51ffe9427e1d)

- **User Service** – Manages user accounts and preferences  
- **Search Service** – Helps users search for products  
- **Catalog Service** – Handles product listings  
- **Cart Service** – Manages user cart operations  
- **Wishlist Service** – Stores items users want to save  
- **Order Taking Service** – Accepts user orders  
- **Order Processing Service** – Coordinates fulfillment  
- **Payment Service** – Securely handles transactions  
- **Logistics Service** – Manages shipping and tracking  
- **Warehouse Service** – Maintains inventory  
- **Notification Service** – Sends alerts and updates  
- **Recommendation Service** – Suggests products to customers  

---

## How to Migrate from Monolithic to Microservices Architecture

![image](https://github.com/user-attachments/assets/cb7f34a6-eaf7-4c2b-8d67-f438985faf4c)

### **Step 1: Analyze the Monolithic Architecture**
Identify components and decide what can be extracted into microservices.

### **Step 2: Decompose by Business Capabilities**
Each microservice should represent a clear business function.

### **Step 3: Use the Strangler Pattern**
Gradually replace monolithic components without risky full rewrites.

### **Step 4: Define Clear APIs**
Ensure seamless communication and integration among services.

### **Step 5: Setup CI/CD Pipelines**
Automate testing, building, and deployment.

### **Step 6: Implement Service Discovery**
Allow microservices to dynamically find each other.

### **Step 7: Centralized Logging & Monitoring**
Track service behavior and troubleshoot issues effectively.

### **Step 8: Unify Cross-Cutting Concerns**
Maintain consistent authentication, security, and policies.

### **Step 9: Iterate Continuously**
Refine services based on feedback and evolving requirements.

---

## Applications of Microservices

- **E-commerce platforms:** Inventory, payments, orders, users  
- **Banking & FinTech:** Accounts, transactions, fraud detection  
- **Streaming services:** Profiles, recommendations, billing  
- **Travel & booking:** Flights, hotels, payments, notifications  
- **Healthcare systems:** Appointments, patient records, billing  
- **Social media apps:** Feed, chat, notifications, profiles  

---

## Benefits of Microservices Architecture

- Independent teams can work simultaneously  
- Failure isolation improves system reliability  
- Independent scaling for services  
- Rapid development and deployment  
- Freedom to choose the best tech stack per service  
- Lightweight, cross-functional teams  

---

## Challenges of Microservices Architecture

- Complex communication and network latency issues  
- Harder development, testing, and deployment  
- Data consistency across services is difficult  
- Distributed transactions add complexity  
- Requires strong observability, monitoring, and logging  

---

## Microservices vs Monolithic Architecture

| **Aspect** | **Microservices Architecture** | **Monolithic Architecture** |
|-----------|--------------------------------|------------------------------|
| Architecture Style | Independent small services | Single integrated codebase |
| Team Structure | Small, cross-functional teams | Large centralized team |
| Scalability | Individual services scale independently | Whole app must scale |
| Deployment | Independent deployments | Entire app deployed as one unit |
| Resource Utilization | Efficient & targeted | Based on whole application |
| Development Speed | Faster iterations | Slower due to large codebase |
| Flexibility | High – different tech stacks allowed | Low – common tech stack |
| Maintenance | Easier for small services | Harder due to large codebase |

---

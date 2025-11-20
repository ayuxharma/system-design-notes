# 📘 System Design Roadmap — Key Concepts (Simplified)

System Design is about understanding how large-scale systems are structured, how they scale, and how components work together efficiently.  
Below is a step-by-step roadmap of core concepts used in high-level system design.

---
![img](https://github.com/user-attachments/assets/797613e3-faa8-421f-b9b1-5030ab8922da)

## 1. **Capacity Estimation**
Capacity estimation predicts the compute, memory, storage, and bandwidth needed to handle expected traffic.

It ensures:
- No performance bottlenecks  
- Smooth scaling during high load  
- Optimal resource planning  

**Example:**  
In Twitter, popular tweets must reach millions instantly. Capacity estimation decides:
- Server count  
- Storage needs  
- Throughput vs latency behavior
  
![img](https://github.com/user-attachments/assets/31a21b94-0b12-45c4-941e-0f5289f73dea)

---

## 2. **HTTP vs HTTPS + Methods**
**HTTP** → transfers data between browser & server  
**HTTPS** → secure HTTP with SSL/TLS encryption  

Common methods:
- **GET** → retrieve  
- **POST** → create  
- **PUT** → update  
- **DELETE** → remove  

![img](https://github.com/user-attachments/assets/560608a4-bd38-45a9-a417-2d3344872148)

**Two ways for server-to-client updates:**
- WebSockets  
- Polling  

---

## 3. **WebSockets**
A full-duplex (two-way) protocol enabling real-time communication.

Used in:
- Chat apps  
- Games  
- Live dashboards  
- Collaborative apps  

![img](https://github.com/user-attachments/assets/b5b40880-1e40-479b-b721-1222691c6801)

---

## 4. **Polling**
Polling is another method to receive updates from a server.

### ✔ Short Polling  
Client frequently sends requests at fixed intervals, whether data changed or not.

### ✔ Long Polling (preferred)  
Server waits until new data is available → then responds.  
Reduces request load.

![img](https://github.com/user-attachments/assets/db9dd787-c963-49dc-987b-5c836e876716)

---

## 5. **Server-Sent Events (SSE)**
One-way real-time updates from **server → client** using HTTP.

Used in:
- News feed updates  
- Live scores  
- Data streaming  
- Monitoring dashboards  

![img](https://github.com/user-attachments/assets/82b9c229-2089-4707-b804-4a3e11680650)

---

## 6. **Rate Limiting**
Rate limiting restricts how many requests a user or API client can send within a time window.

Used for:
- Preventing abuse  
- Avoiding overload  
- API safety  

![img](https://github.com/user-attachments/assets/a74453b6-06ef-43ef-a34b-524ff0c9fd07)

---

## 7. **Resiliency**
Resiliency ensures systems continue working even when components fail.

Techniques:
- Replication  
- Redundancy  
- Auto-recovery  
- Failover systems  

Failures may occur due to:
- Hardware faults  
- Memory leaks  
- Network issues  
- Human errors  

---

## 8. **Paging**
Dividing large datasets into smaller slices (pages) to improve:
- Load performance  
- User experience  
- API efficiency  

Used in:
- Product listings  
- Timeline feeds  
- Search results  

![img](https://github.com/user-attachments/assets/19a01e16-298f-4130-aa86-5ff826e2a985)

---

## 9. **Logging**
Logs capture events happening across a system.

Useful for:
- Debugging  
- Tracing request flow  
- Monitoring health  
- Error analysis  

Approaches:
- Centralized logging  
- Distributed logging  
- Cloud logging (AWS CloudWatch, GCP Stackdriver, etc.)

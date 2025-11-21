# Load Balancer

A **load balancer** is a networking device or software application that distributes and balances incoming traffic among servers to provide:

- High availability  
- Efficient resource utilization  
- High performance  

It works as a **"traffic cop"**, routing client requests across servers and ensuring no single server becomes overloaded.

---

<img width="880" height="529" alt="image" src="https://github.com/user-attachments/assets/641d701e-fe94-4e1a-bea2-3d5a9e4e782d" />

---

## Why Load Balancer?

Without a load balancer, several issues arise:

### ❌ Problems Without Load Balancing:

- **Single Point of Failure:** If the only server crashes, the entire service becomes unavailable.
- **Overloaded Servers:** Increasing traffic can overwhelm a single server.
- **Limited Scalability:** Adding new servers does not help unless traffic is distributed.

---

<img width="1042" height="569" alt="image" src="https://github.com/user-attachments/assets/e0b62f83-16a9-476f-aae7-42e90cda21ae" />

---

## Key Characteristics of Load Balancers

- **Traffic Distribution:** Divides incoming requests across servers.
- **High Availability:** Redirects traffic away from failed or unhealthy servers.
- **Scalability:** Supports horizontal scaling (adding more servers).
- **Optimization:** Prevents resource bottlenecks.
- **Health Monitoring:** Continuously checks server health.
- **SSL Termination:** Can handle SSL/TLS encryption to reduce backend load.

---

<img width="1042" height="569" alt="image" src="https://github.com/user-attachments/assets/e4e87f74-8c6c-4df9-bef0-d7fcee21f530" />

---

## How a Load Balancer Works

1. User sends a request.
2. Load balancer intercepts instead of sending directly to backend server.
3. It checks **server health and workload**.
4. Routes request to the most optimal server.
5. Detects server failures and reroutes traffic automatically.
6. Ensures minimal latency and maximum uptime.

---

<img width="1001" height="500" alt="image" src="https://github.com/user-attachments/assets/9aa30735-6c6f-4201-ad8e-aa7db067ab2f" />

---

## Benefits of Load Balancing

| Benefit | Description |
|--------|------------|
| 🚀 Better Performance | Prevents servers from overload. |
| 📈 Scalability | Works with autoscaling for traffic spikes. |
| 🛠 Failure Handling | Detects unhealthy servers and bypasses them. |
| 🚫 Prevent Bottlenecks | Smooth request distribution. |
| 💾 Efficient Resource Use | Ensures equal sharing of workload. |
| 💡 Session Persistence | Keeps user sessions intact (e.g., carts, login). |

---

## Challenges of Load Balancing

| Challenge | Description |
|----------|------------|
| ⚠ Single Point of Failure | If LB fails without redundancy, traffic stops. |
| 💸 Cost & Complexity | Advanced LB systems require configuration and cost. |
| ⚙ Config Issues | Incorrect configuration can reduce performance. |
| 🕒 Extra Hop Delay | Every request passes through LB, adding slight latency. |
| 🔐 SSL Management | Handling encryption at LB increases complexity. |

---


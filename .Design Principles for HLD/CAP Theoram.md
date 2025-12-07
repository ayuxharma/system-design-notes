# CAP Theorem in Distributed Systems

According to the CAP theorem, only **two out of the three** desirable characteristics — **Consistency, Availability, and Partition Tolerance** — can be guaranteed simultaneously in a distributed shared-data system.

The theorem provides a mental model to understand trade-offs when designing distributed systems and helps identify which systems fit specific use cases.

<img width="1000" height="500" alt="image" src="https://github.com/user-attachments/assets/fd6c0e24-abf7-47cd-8c50-8d409f938e92" />

---

## Properties of the CAP Theorem

Below are the three distributed system characteristics defined by the CAP Theorem:

<img width="800" height="400" alt="image" src="https://github.com/user-attachments/assets/21123ed3-fedc-43fc-acb4-c35efcb825c6" />

---

## 1. Consistency (C)

Consistency means all clients see the same data at the same time, regardless of which node they are connected to.

For **eventual consistency**, nodes may temporarily hold different data, but will eventually converge.

<img width="1000" height="500" alt="image" src="https://github.com/user-attachments/assets/96c4437a-561c-4fe1-b329-08c23e76708f" />

### Explanation of the Diagram:
- All nodes communicate continuously and share updates.
- Any change made on one node is immediately propagated to others.
- Ensures all clients always receive the most up-to-date data.

---

## 2. Availability (A)

Availability means that **every non-failing node** returns a response for read/write requests **within a bounded time**, even if other nodes are down.

<img width="1000" height="500" alt="image" src="https://github.com/user-attachments/assets/210aa0cd-c117-424b-b098-100eb9c545f7" />

### Explanation of the Diagram:
- Users always receive a response, even if parts of the system are degraded.
- The request may succeed or fail, but the system never hangs.
- Ensures the system remains responsive at all times.

---

## 3. Partition Tolerance (P)

Partition tolerance means the system continues to operate **even when communication between nodes is lost** due to network failures.

<img width="1000" height="500" alt="image" src="https://github.com/user-attachments/assets/7b18b459-014c-4a1e-8a33-4fc783b7c60e" />

### Explanation of the Diagram:
- Handles unpredictable network failures.
- Continues operating despite message loss.
- Can recover gracefully after the partition is healed.

---

# Trade-Offs in the CAP Theorem

<img width="1000" height="500" alt="image" src="https://github.com/user-attachments/assets/716158ff-3bfc-4058-ab06-8de2a775c9b9" />

Distributed systems can be categorized based on which two of the three guarantees they choose:

---

## 1. CA Systems (Consistency + Availability)

- Provide both consistency and availability.
- **Do NOT tolerate partitions** — if a partition occurs, guarantees cannot be maintained.
- Rare in real-world wide-area systems, because partitions are unavoidable.

---

## 2. CP Systems (Consistency + Partition Tolerance)

- Maintain consistent data even during network partitions.
- Sacrifice availability — some nodes may reject requests until the partition is resolved.
- **Examples:** MongoDB, Redis (primary-replica mode), HBase.

---

## 3. AP Systems (Availability + Partition Tolerance)

- System remains available even during partitions.
- Some nodes may serve stale (inconsistent) data until the partition heals.
- **Examples:** Cassandra, CouchDB, DynamoDB.

---

# Example to Understand the CAP Theorem

<img width="1000" height="500" alt="image" src="https://github.com/user-attachments/assets/4e482263-33e5-4d56-ba7d-916248c40500" />

### Scenario:
- Two servers: **S1** and **S2**.
- They can normally communicate — system is partition tolerant.

### Partition Occurs:
- Network failure prevents S1 and S2 from syncing.
- Client writes to **S1** and then reads from **S2**.

### Result:
- S1 and S2 have different data → inconsistency.

### Two Options:
1. **Ensure Consistency → Sacrifice Availability**  
   S2 must reject the read because it can't guarantee correctness.

2. **Ensure Availability → Sacrifice Consistency**  
   S2 returns stale data.

➡️ This demonstrates CAP: **During partitions, you must choose either consistency or availability.**

---

# Use Cases of CAP Theorem in System Design

---

## 1. Banking Transactions — CP System

### Why CP?
- Accuracy of account balances is critical → **Consistency**
- Network disruptions can occur → **Partition Tolerance**
- User might experience delays, but data must never be incorrect.

Banks sacrifice availability for correctness.

---

## 2. Social Media Newsfeed — AP System

### Why AP?
- Users expect instant response → **Availability**
- Slight data inconsistencies (e.g., seeing a post later on one device) are acceptable.
- Must continue functioning even with network issues → **Partition Tolerance**

Social media platforms trade strict consistency for smoother user experience.

---

## 3. Online Shopping Cart — Hybrid CAP Approach

### Why AP + CP?

- **Adding items to cart (AP):**  
  - Must remain available even during network disturbances.
  - Temporary inconsistencies are acceptable.

- **Checkout & Payment (CP):**  
  - Must be consistent across servers.
  - Ensures no duplicate orders or incorrect bills.

E-commerce systems often switch between modes depending on the operation.

---

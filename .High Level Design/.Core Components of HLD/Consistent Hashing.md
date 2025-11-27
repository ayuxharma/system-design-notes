# Consistent Hashing (System Design Notes)

Consistent hashing is a distributed hashing technique used in load balancing.  
Its goal is to minimize key remapping when nodes are added or removed.

It places **both servers (nodes)** and **client requests (keys)** on a virtual circular ring called a **hash ring**.  
The ring is considered to have *infinite* points, and nodes/keys are placed using the same hash function.

<img width="800" height="400" alt="image" src="https://github.com/user-attachments/assets/9e81b9dd-2028-4030-9758-26ac5ec0c5cb" />

---

## 🔹 How Requests Are Assigned to Servers
- The ring is ordered clockwise.
- A request (key) is served by the **first server node encountered while moving clockwise** from the key’s position.

<img width="800" height="400" alt="image" src="https://github.com/user-attachments/assets/7dc2382a-5b30-446a-aa05-2a6a19d0781d" />

---

# 🔹 Issues With Traditional Hashing
- **Uneven data distribution** – simple hash functions cause imbalance.
- **Scalability issues** – most keys must be rehashed if a node is added/removed.
- **Inflexible when nodes change** – adding/removing servers breaks mapping.
- **Node failure problems** – no graceful handling; data becomes inaccessible.
- **High overhead** – frequent rehashing when scaling up/down.

---

# 🔹 Why Consistent Hashing?
Consistent hashing **minimizes key remapping** when nodes join/leave.

- Only a **small portion** of keys move when scaling changes.
- Reduces overhead during node addition/removal.
- Improves system **stability**, **availability**, and **fault tolerance**.
- Helps evenly distribute data and handle node failures gracefully.
- Supports data replication for reliability.

---

# 🔹 Working / Phases of Consistent Hashing

### **Phase 1 — Hash Function Selection**
A deterministic hash function (MD5/SHA-1/SHA-256) is chosen for mapping keys & nodes.

### **Phase 2 — Node Assignment**
Nodes are placed on the ring based on hash values.

### **Phase 3 — Key Replication**
Keys may be replicated across multiple nodes for fault tolerance.

### **Phase 4 — Node Addition/Removal**
Only nearby key ranges are reassigned, minimizing remapping.

### **Phase 5 — Load Balancing**
Keys can be shifted to ensure balanced distribution across nodes.

### **Phase 6 — Failure Recovery**
If a node fails, its keys are mapped to the next available node.

---

## 🔹 Example: Node Failure

If Node 3 fails in a 5-node ring:
- Only the key range between Node 2 → Node 3 is impacted.
- Those keys move to the next clockwise node (Node 4).

<img width="800" height="400" alt="image" src="https://github.com/user-attachments/assets/47bafe62-1c29-4c71-996d-a76749605672" />

---

# 🔹 Consistent Hashing Algorithm (Implementation Steps)

### **1. Choose a Hash Function**
Uniformly distributed (MD5/SHA family).

### **2. Define the Hash Ring**
Represents the full hash value range in a circular form.

### **3. Assign Nodes to the Ring**
Hash each node ID → gives its position on the ring.

### **4. Key Mapping**
Hash the key → find its ring position → walk clockwise → first node stores it.

### **5. Node Addition**
- Hash new node → place on ring.
- Only keys between new node and its predecessor are moved.

### **6. Node Removal**
- Remove node → the successor node inherits its key range.

### **7. Load Balancing**
Periodically redistribute keys if imbalance occurs.

---

# 🔹 Advantages of Consistent Hashing
- **Load Balancing**: Even distribution of keys across nodes.
- **Scalability**: Easily handles changes in node count.
- **Minimal Remapping**: Only a few keys move during changes.
- **High Failure Tolerance**: Node failures affect minimal data.
- **Simplified Operations**: Easy to add/remove servers.

---

# 🔹 Disadvantages of Consistent Hashing
- **Complex Hash Functions** may increase overhead.
- **Performance Cost** due to remapping & replication tasks.
- **Less Flexibility** in some dynamic environments.
- **High Resource Usage** when nodes are frequently added/removed.
- **Management Complexity** — requires more expertise for maintenance.

# Database Sharding

Database sharding is a technique for **horizontal scaling** of databases, where the data is split across multiple database instances (shards) to improve performance and reduce load on a single database.

<img width="500" height="400" alt="image" src="https://github.com/user-attachments/assets/c60f96a1-71f4-4c3c-a0e2-3fd347a6906e" />

It is a database architecture pattern where a large dataset is split into smaller logical chunks called **shards**, stored across different database nodes (physical shards).

Each shard:

- contains the same schema as the original database  
- holds a unique subset of the data  
- receives only its share of read/write load  

<img width="1000" height="500" alt="image" src="https://github.com/user-attachments/assets/77fe82fe-e632-40d5-904f-466f63f5755a" />


---

# Methods of Sharding

## 1. Key-Based (Hash-Based) Sharding

We take a shard key (userID, email, IP, etc.), feed it to a hash function, and the hash result determines the shard.

Example:  
3 DB servers → assign record using:

shard_id = record_id % 3



<img width="1000" height="500" alt="image" src="https://github.com/user-attachments/assets/f86f8c00-2399-4c04-88da-14bca3035c6b" />

### Pros
- evenly distributes data
- reduces hotspots if hash space is uniform

### Cons
- poor key choice → skewed distribution
- resharding required when adding servers
- not ideal for range queries

---

## 2. Range-Based (Horizontal) Sharding

Data is partitioned based on ranges of a value.

Example:

- A–P → shard1
- Q–Z → shard2

<img width="1000" height="485" alt="image" src="https://github.com/user-attachments/assets/bcbf3bbb-c37d-4900-853e-c007c01779be" />

### Pros
- supports range queries efficiently
- easy to understand

### Cons
- uneven distribution risk
- needs active load monitoring

---

## 3. Vertical Sharding

Splits columns instead of rows into separate shards.

Example (Twitter):

- shard A → user profile  
- shard B → followers  
- shard C → tweets  

<img width="1001" height="507" alt="image" src="https://github.com/user-attachments/assets/a0f38994-7640-428c-8e06-d65d7ac17426" />

### Pros
- queries fetch fewer columns → improved performance
- schema focused per shard

### Cons
- uneven access pattern creates hotspots
- schema update complexity

---

## 4. Directory-Based Sharding

Uses a lookup table or metadata store mapping shard key → shard location.

<img width="1000" height="500" alt="image" src="https://github.com/user-attachments/assets/6469c4c9-84ed-4cc1-b4c8-2ef5af731d0e" />

### Pros
- flexible, dynamic scaling
- central control for shard lookup

### Cons
- single point of failure at directory
- extra lookup step increases latency

---

# How to optimize sharding for even distribution

- Use **consistent hashing**
- Choose sharding key carefully
- Monitor shard size & rebalance when needed
- Automate data placement
- Avoid hotspotting keys

---

# Alternatives to Sharding

Alternative | Description
---|---
Vertical Scaling | Add RAM/CPU/SSD to single DB server
Replication | Create DB copies to distribute reads
Partitioning | Split data logically inside same DB server
Caching | Reduce DB access for frequent reads
CDN | Offload static content reads geographically

---

# Advantages of Sharding

- improves performance
- supports high scalability
- resource utilization balance
- fault isolation
- cost-effective with commodity hardware

---

# Disadvantages of Sharding

- increased operational complexity
- cross-shard queries slow + harder
- rebalancing challenges
- more monitoring/backup complexity
- risk of shard-specific data loss

# Caching

Caching is a technique used to store frequently accessed data in a fast and easily accessible location. The goal of caching is to improve system performance by reducing the time required to fetch repeated data.

Caching acts as a **local temporary storage layer**, making retrieval faster compared to fetching the same data repeatedly from a slower backend database.

Example:  
In Twitter, when a tweet goes viral, many users may request the same data. A cache reduces repeated database hits and provides the content faster.

---

<img width="1000" height="500" alt="image" src="https://github.com/user-attachments/assets/ab2c2e1c-95f1-4ae6-8ee4-80eefac27d63" />

---

## 🔧 How Cache Works

| Step | Action |
|------|--------|
| 1 | First request goes to the database → **Cache Miss** |
| 2 | Response gets stored in cache |
| 3 | Next request checks cache first |
| 4 | If found → returns fast response → **Cache Hit** |

A **cache hit** makes future responses significantly faster.

---

## ❓ Why Not Store Everything in Cache?

- Cache memory is expensive.
- Storing too much slows lookup speed.
- Cache is often **volatile**, meaning data may be lost on restart.
- Not all data is useful or frequently accessed.

So, only **highly requested or critical data** should be cached.

---

## Types of Cache

Caching can be implemented in multiple ways depending on scale and system architecture.

---

### 1️⃣ Application Server Cache

Cache stored locally within the application server.

- Fast access
- No network hop needed

**Drawback:**  
In multi-server environments, each node has its own cache — leading to **inconsistent data** and repeated cache misses.

---

<img width="1001" height="501" alt="image" src="https://github.com/user-attachments/assets/9a18d454-96be-43aa-bb59-d39b51a7e378" />

---

### 2️⃣ Distributed Cache

Cache is split across multiple nodes using a **consistent hashing mechanism**, allowing scalable and coordinated caching.

- Each node holds a part of total cache data
- Used in large distributed applications

---

<img width="1000" height="500" alt="image" src="https://github.com/user-attachments/assets/adcae10a-1d9a-44a9-8065-ec44c145fdfd" />

---

### 3️⃣ Global Cache

A single shared cache for all nodes.

Two models:

| Model | Description |
|-------|------------|
| A | Cache fetches missing data from DB |
| B | Requesting node fetches missing data from DB |

---

<img width="1000" height="500" alt="image" src="https://github.com/user-attachments/assets/154c5125-2de2-496d-83dd-3cc2c25bc288" />

---

### 4️⃣ CDN Cache

A **Content Delivery Network** stores static content (HTML, CSS, JS, images, videos) closer to users globally.

<img width="1000" height="500" alt="image" src="https://github.com/user-attachments/assets/81c6395f-0125-4712-a164-b1c9810e4a36" />

---

## 🧠 Applications of Caching

- **Web Page Caching** (browser caching)
- **Database Query Caching**
- **CDN Static Asset Caching**
- **Session Caching**
- **API Response Caching**

Caching improves response times and reduces backend workload.

---

## Cache Invalidation Strategies

Ensures stale or outdated cache is updated or removed.

Common strategies:

- **Time-based expiration** (TTL)
- **Write-through / write-around / write-back**
- **Event-driven invalidation (on data change)**

---

## Eviction Policies

Used when the cache is full to decide which data gets removed.

| Policy | Meaning |
|--------|---------|
| LRU | Least Recently Used item removed |
| LFU | Least Frequently Used removed |
| FIFO | Oldest inserted removed |

---

## 👍 Pros of Caching

- Faster performance and responsiveness
- Reduced load on backend systems
- Improves scalability
- Lower operational cost

---

## 👎 Cons of Caching

- Risk of stale or inconsistent data
- Cache eviction complexity
- Adds system complexity
- Requires careful invalidation strategy

---

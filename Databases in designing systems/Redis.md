# Redis 

## Redis Introduction

**Redis (Remote Dictionary Server)** is a fast, in-memory data store commonly used for **caching** to reduce server load by minimizing disk and/or network read and write operations.

Redis is often placed in front of databases to speed up data access and improve system performance.

---

## Uses of Redis

Redis is widely used for:

- **Caching** frequently accessed data to reduce latency
- **Session storage** for web applications
- **Real-time analytics** and leaderboards
- **Queues and task lists** in background job systems
- **Messaging systems** and pub/sub use cases

---

## How Redis Works

Redis acts as a **caching layer** between the client and the primary database.

### Request Flow

1. Client sends a request
2. API Gateway forwards the request to Redis
3. **Cache Hit**
   - Redis already has the data
   - Data is returned immediately to the client
4. **Cache Miss**
   - Redis fetches data from the database
   - Stores it in memory
   - Returns it to the client

This flow:
- Improves response time
- Reduces database load
- Enhances system scalability

---

## Redis Example (Python)

```python
import redis
r = redis.Redis(host='localhost', port=6379, db=0)

r.set('name', 'Alia')
print(r.get('name').decode('utf-8'))

r.set('name', 'Riya')
print(r.get('name').decode('utf-8'))

r.delete('name')
print(r.get('name'))
```


```
OUTPUT:

Alia
Riya
None
```


Understanding the Example
import redis


Imports the Redis Python client library.

r = redis.Redis(host='localhost', port=6379, db=0)


Creates a connection to Redis:

host='localhost' → Redis running locally

port=6379 → Default Redis port

db=0 → Logical database 0




r.set('name', 'Alia')
Stores the key name with value Alia in Redis.

python
Copy code
r.get('name')
Fetches the value stored under key name.

Returns bytes (e.g., b'Alia')

.decode('utf-8') converts bytes to string


r.delete('name')
Deletes the key from Redis.


## When to Use Redis Server

Consider a system using a **MySQL database** where:

- Queries are frequent
- Data does not change often
- Disk-based reads take **100–1000 ms**

### Optimization with Redis

- Store query results in Redis
- For future requests:
  - Check Redis first
  - If data exists, return from memory
  - Avoid querying the database

This significantly improves system performance.

### Example

In a messaging application, Redis can store the **last 5 messages** using the **list data structure**, enabling fast reads.

---

## Why Redis Is So Fast?

Redis achieves high speed due to:

- **In-memory storage** (no disk I/O)
- **Single-threaded event loop**, avoiding thread contention
- **Highly optimized data structures**
- **Lightweight network protocol (RESP)**

These design choices allow Redis to:

- Handle millions of requests per second
- Respond in microseconds
- Maintain low and predictable latency



| Feature          | Redis                             | MongoDB                |
| ---------------- | --------------------------------- | ---------------------- |
| Database Type    | In-memory key-value store (NoSQL) | Document-based NoSQL   |
| Data Model       | Key-value, lists, sets, hashes    | BSON documents         |
| Storage          | Primarily in-memory               | Disk-based             |
| Persistence      | Optional (RDB, AOF)               | Built-in persistence   |
| Performance      | Extremely fast                    | Slower than Redis      |
| Query Capability | Limited                           | Rich querying          |
| Best Use Case    | Caching, real-time systems        | Complex data & queries |
| Scalability      | Simple and fast                   | More complex           |



## Conclusion

Redis is a powerful in-memory data store ideal for:

- **Caching**
- **Real-time analytics**
- **Messaging systems**
- **High-throughput microservices**

Its speed, scalability, and optional persistence make Redis a perfect fit for low-latency, high-performance system designs, where it significantly outperforms disk-based databases like MongoDB.

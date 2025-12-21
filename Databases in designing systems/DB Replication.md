# Database Replication 

Making and keeping duplicate copies of a database on other servers is known as **database replication**. It is essential for improving modern systems' scalability, reliability, and data availability.

By distributing their data across multiple servers, organizations can guarantee the data remains accessible even in case of server failure. This redundancy also improves data reliability because multiple copies can recover data in case of corruption or loss.

Database replication also helps distribute workloads among servers, boosting scalability and performance.

---

## Importance of Database Replication

Database replication is important due to:

- **High Availability** – ensures data availability even if servers fail.
- **Disaster Recovery** – enables fast recovery by keeping copies in multiple locations.
- **Load Balancing** – read operations can be distributed across replicas.
- **Fault Tolerance** – replica server takes over if another fails.
- **Scalability** – distributes write loads across servers.
- **Data Locality** – data can be placed geographically closer to users.

---

## How Database Replication Works

1. **Choose the primary database (source)**  
   - where data changes originate.

2. **Configure replica databases (targets)**  
   - receive data from the primary.

3. **Capture data changes**  
   - through logs or CDC (Change Data Capture).

4. **Transmit changes to replicas**  
   - in real-time or scheduled intervals.

5. **Replicas apply changes**  
   - to stay synchronized.

6. **Monitor synchronization**  
   - detect lag, conflicts, or delays.

7. **Read/write operations occur**  
   - reads can be routed to replicas; writes often go to primary.

---

## Types of Database Replication

### 1. Master–Slave Replication
- Writes only happen on the primary master.
- Slaves replicate changes asynchronously/synchronously.

### 2. Master–Master (Multi-master) Replication
- Multiple masters accept writes.
- Changes propagate across all masters.

### 3. Snapshot Replication
- Copies full database periodically at a specific point in time.

### 4. Transactional Replication
- Sends real-time transaction updates to subscribers.

### 5. Merge Replication
- Subscribers and master can update data.
- Conflict resolution is required.

---

## Database Replication Strategies

### Full Replication
- Entire database copied across replicas.

### Partial Replication
- Replicates selected tables/rows/columns.

### Selective Replication
- Replicates based on conditions/criteria.

### Sharding
- Splits database horizontally into shards.

### Hybrid Replication
- Combines multiple strategies for specific needs.

---

## Replication Configurations

### Synchronous Replication
- Data commit waits for replica acknowledgment.
- Strong consistency.

### Asynchronous Replication
- Writes don’t wait for replica confirmation.
- Low latency but weaker consistency.

### Semi-synchronous Replication
- At least one replica updated synchronously.
- Remaining replicas updated asynchronously.

---

## Challenges in Database Replication

- **Data Consistency Issues**
- **Higher Operational Complexity**
- **Increased Cost**
- **Conflict Resolution**
- **Latency**, especially in synchronous replication

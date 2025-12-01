# Availability in System Design

Availability refers to a system or service’s readiness and accessibility to users at any given moment. It measures the percentage of time a system remains operational and functional. High availability is achieved using redundancy, fault tolerance, and recovery mechanisms, ensuring uninterrupted user access.

---

## How Availability Is Measured

**Formula:**
Availability (%) = (Uptime / (Uptime + Downtime)) * 100


**Key Terms:**
- **Uptime:** Time system is working as expected.
- **Downtime:** Time system is unavailable due to failures, maintenance, or issues.

**Example (99.9% Availability):**
- Total minutes in a year: 525,600  
- Allowed downtime: 0.1% → 525.6 minutes (~8.76 hours/year)

---

## Importance of Availability in System Design

### 1. User Experience
Ensures users can access services whenever needed. Downtime leads to frustration and dissatisfaction.

### 2. Business Continuity
Even short outages can cause financial losses, reputational damage, and legal implications.

### 3. Service Level Agreements (SLAs)
Businesses commit to uptime guarantees. Violating SLAs may result in penalties.

### 4. Competitive Advantage
Higher availability increases user trust and retention.

### 5. Disaster Recovery
Helps systems withstand and recover from hardware failures, outages, cyberattacks, or natural disasters.

### 6. Regulatory Compliance
Industries like finance and healthcare require minimum uptime standards.

---

## How to Achieve High Availability

### 1. Redundancy
Duplicate servers, hardware, and networks ensure backup components take over automatically.

### 2. Load Balancing
Distributes incoming requests across multiple servers to prevent overload and maintain performance.

### 3. Failover Mechanisms
Automatic switching to standby systems when failures occur.

### 4. Disaster Recovery (DR)
Plans and infrastructure to restore operations during catastrophic failures.

### 5. Monitoring & Alerting
Real-time detection of issues with automated alerts for quick remediation.

### 6. Performance Optimization
Removes bottlenecks and reduces the risk of system failure.

### 7. Scalability
Scaling the system (horizontal or vertical) to handle increased demand.

---

## System Availability vs. Asset Reliability

| Aspect | System Availability | Asset Reliability |
|--------|----------------------|--------------------|
| Definition | Frequency system is fully operational | How reliably individual components perform |
| Scope | Entire system | Specific component/hardware |
| Focus | Overall uptime | Component failure rate |
| Impact | User access | Risk of system downtime |

---

## Availability vs. Fault Tolerance

| Aspect | Availability | Fault Tolerance |
|--------|-------------|----------------|
| Definition | Percentage of time system is accessible | Ability to operate even during failures |
| Goal | Maximize uptime | Continue operations without interruptions |
| Focus | Consistent service access | Detecting and recovering from faults |
| Measures | Uptime % (e.g., 99.9%) | MTBF, MTTR |
| Strategies | Redundancy, load balancing, DR | Redundant components, graceful degradation |
| Use Cases | E-commerce, banking, SaaS | Aerospace, healthcare, critical systems |
| Redundancy Level | Medium | High |

---

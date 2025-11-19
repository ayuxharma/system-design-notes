# Requirements Analysis

Requirements analysis is an essential step in software development. It determines whether a system will meet its objectives and succeed.  
To make this process effective, requirements are generally divided into two categories:

<img width="800" height="400" src="https://github.com/user-attachments/assets/9224eb5f-e1ca-493e-955a-6f959da964d5" />

---

# Functional Requirements

Functional requirements define **what the system should do** — the features, actions, and operations it must perform to satisfy business needs.

**Key Points**
- Focus on system behavior and functionality.  
- Directly observable and testable.  
- Examples: authentication, data processing, search, payments, report generation.

**Sample Questions**
- What features should the system include?  
- What edge cases must be handled?

---

# Non-Functional Requirements (NFRs)

Non-functional requirements define **how the system should operate**, focusing on performance, reliability, security, and user experience.

**Key Aspects**
- Performance (speed, responsiveness)  
- Security (protection against unauthorized access)  
- Usability (ease of use)  
- Reliability (stability, uptime)  
- Scalability (handling growth)  
- Maintainability (ease of updates)  
- Portability (run in different environments)

**Sample Questions**
- How fast should the system respond?  
- How secure and reliable must it be?

---

# Examples

## Online Banking System

**Functional Requirements**
- Users can log in using username and password.  
- Users can check account balance.  
- Users receive transaction notifications.

**Non-Functional Requirements**
- Response time < 2 seconds.  
- All transactions must be encrypted.  
- System should handle 100M users with minimal downtime.

---

# Differences Between Functional & Non-Functional Requirements

| Aspect | Functional Requirements | Non-Functional Requirements |
|--------|--------------------------|------------------------------|
| **Definition** | What the system should do | How the system should perform |
| **Purpose** | Defines features & behavior | Defines system quality attributes |
| **Scope** | Actions the system must support | Conditions under which actions must occur |
| **Measurement** | Verified by outputs/results | Validated via metrics, benchmarks, SLAs |
| **Impact** | Guides core system features | Influences architecture & performance |
| **User View** | Visible to end users | Shapes user experience |
| **Documentation** | Use cases, user stories | Technical specs, constraints |
| **Evaluation** | Functional testing | Performance, security, usability testing |
| **Dependency** | Needed to meet business needs | Needed to operate efficiently & reliably |
| **Examples** | Login, processing, search | Scalability, response time, security |

---

# Importance of Balancing Both

Balancing functional and non-functional requirements ensures a system is both **useful** and **reliable**.

- Enhances user experience  
- Improves performance & reliability  
- Reduces outages and security risks  
- Prevents costly rework  
- Supports long-term scalability and maintainability  

---

# Common Challenges

- **Ambiguity**: unclear or incomplete requirements  
- **Changing needs**: shifting business goals and user expectations  
- **Prioritization issues**: NFRs often overlooked  
- **Measuring NFRs**: hard to quantify usability, scalability, reliability  
- **Conflicting requirements**: e.g., strong security vs. high performance  

---

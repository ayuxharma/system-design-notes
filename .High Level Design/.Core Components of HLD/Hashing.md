# Hashing

Hashing refers to the process of generating a fixed-size output from an input of variable size using mathematical hash functions. It is used to determine an index or location for storing an item in a data structure.

<img width="801" height="401" alt="image" src="https://github.com/user-attachments/assets/eef879f3-bc3a-42b0-98c0-60db9e900a92" />

---

## 🔹 Need for Hash Data Structure

- Data on the internet is increasing rapidly and needs efficient storage and retrieval.
- Arrays allow **O(1)** insertion but searching is **O(log n)** or **O(n)**.
- For large datasets, this becomes inefficient.
- Hashing allows:
  - **O(1)** insertion
  - **O(1)** search
- Hence hashing is preferred over arrays for efficient lookups.

---

## 🔹 Components of Hashing

### 1. **Key**
Input (string, integer, etc.) given to the hash function.

### 2. **Hash Function**
Processes the key and returns an index called the **hash index**.

### 3. **Hash Table**
Array-like structure that stores data at the computed index.

<img width="660" height="342" alt="image" src="https://github.com/user-attachments/assets/432fe92e-01e4-421e-8e3d-44799c9fa5f4" />

---

## 🔹 What is a Collision?

A collision occurs when two different keys generate the same hash index.  
Since a small hash is generated from a large key, collisions are possible and must be handled using collision-resolution techniques.

<img width="800" height="400" alt="image" src="https://github.com/user-attachments/assets/a0ae6c3c-b6ad-41f1-99c0-1d384aa83677" />

---

## 🔹 Advantages of Hashing

- **Key-value support** — Ideal for maps/dictionaries.
- **Fast Retrieval** — Search, insert, delete in **O(1)** time.
- **Efficient Operations** — Highly optimized lookups.
- **Reduced Memory Usage** — Uses fixed, efficient storage.
- **Scalability** — Performs consistently well with large datasets.
- **Security** — Used in password hashing & integrity checks.

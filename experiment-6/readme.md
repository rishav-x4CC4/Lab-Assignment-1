# Experiment 6: Matrix Chain Multiplication (Dynamic Programming)

## 📌 Problem Statement
Implement **Matrix Chain Multiplication** using **Dynamic Programming (DP)**.  
Find the minimum number of scalar multiplications needed to multiply a given sequence of matrices.  

---

## 📖 Theory
- Matrix multiplication is **associative**:  
  \[(AB)C = A(BC)\]  
- The **order of multiplication** affects the total number of operations.  
- Goal: Determine the **optimal parenthesization** that minimizes multiplications.  

### 🔹 Example
Dimensions: `A1(40×20), A2(20×30), A3(30×10), A4(10×30)`  

- Parenthesization 1: `((A1×A2)×A3)×A4` → 40×20×30 + 40×30×10 + 40×10×30 = **36,000 ops**  
- Parenthesization 2: `(A1×(A2×A3))×A4` → 20×30×10 + 40×20×10 + 40×10×30 = **18,000 ops**  

Clearly, choosing the right order **reduces computation drastically**.  

---

## 📜 Code Files
- `matrix_chain.cpp` → Implementation of Matrix Chain Multiplication using DP.  

---

## ⏱️ Time & Space Complexity

| Algorithm               | Time Complexity | Space Complexity | Notes |
|--------------------------|----------------|------------------|-------|
| Brute Force (all orders) | O(n!)          | O(1)             | Impractical |
| DP (Optimal Solution)    | O(n³)          | O(n²)            | Efficient for medium-sized problems |

---

## 📊 Pros and Cons

### ✅ Pros
- Guarantees **optimal parenthesization cost**.  
- Reduces time compared to brute force (`O(n!) → O(n³)`).  
- Demonstrates the power of **Dynamic Programming**.  

### ❌ Cons
- Higher memory usage (**O(n²)** DP table).  
- Still inefficient for **very large n**.  

---

## 🏁 Conclusion
- Matrix Chain Multiplication shows how **Dynamic Programming** can drastically improve performance over brute force.  
- The algorithm reduces complexity from **exponential (O(n!)) to polynomial (O(n³))**.  
- Useful in compiler optimization and database query optimization.

# Experiment 8: 0/1 Knapsack Problem (Greedy vs Dynamic Programming)

## 📌 Problem Statement
Implement the **0/1 Knapsack Problem** using:  
1. **Greedy Algorithm (Fractional Knapsack)** – approximate solution.  
2. **Dynamic Programming (DP)** – exact optimal solution.  

Compare their performance and discuss pros and cons.  

---

## 📖 Theory

### 🔹 0/1 Knapsack Problem
- Given `n` items with values and weights, and a knapsack capacity `W`.  
- Each item can either be **taken (1)** or **not taken (0)**.  
- Goal: Maximize the total value in the knapsack without exceeding capacity.  

### 🔹 Greedy Approach (Fractional Knapsack)
- Sort items by **value/weight ratio**.  
- Take items greedily until knapsack is full.  
- Allows **fractional items**, so it’s **not valid for 0/1 Knapsack**, but useful for comparison.  

### 🔹 Dynamic Programming Approach
- Builds a table of size `n × W`.  
- Recurrence:  
  \[
  K[i][w] = \max(val[i-1] + K[i-1][w-wt[i-1]],\ K[i-1][w])
  \]  
- Guarantees an **optimal solution**.  

---

## 📜 Code Files
- `knapsack_greedy.cpp` → Greedy (Fractional) Knapsack.  
- `knapsack_dp.cpp` → Dynamic Programming (0/1 Knapsack).  

---

## ⏱️ Time & Space Complexity

| Approach                | Time Complexity | Space Complexity | Notes |
|--------------------------|----------------|------------------|-------|
| Greedy (Fractional)      | O(n log n)     | O(1)             | Fast, but not valid for 0/1 case |
| DP (0/1 Knapsack)        | O(n·W)         | O(n·W)           | Guarantees optimal solution |

---

## 📊 Pros and Cons

### ✅ Greedy (Fractional)
**Pros**  
- Very fast (O(n log n)).  
- Easy to implement.  
- Works well when fractional items are allowed.  

**Cons**  
- Not valid for **0/1 Knapsack**.  
- May give suboptimal results in 0/1 scenarios.  

---

### ✅ Dynamic Programming (0/1 Knapsack)
**Pros**  
- Always produces **optimal solution**.  
- Works for true 0/1 decision problems.  

**Cons**  
- Higher time and space usage (O(n·W)).  
- May be inefficient for very large `W`.  

---

## 🏁 Conclusion
- **Greedy (Fractional)** is efficient but does not solve the true 0/1 Knapsack problem.  
- **Dynamic Programming** is the correct approach for 0/1 Knapsack, providing an optimal solution.  
- In practice:  
  - Use **Greedy** for fractional knapsack problems.  
  - Use **DP** when the problem is strictly 0/1.  

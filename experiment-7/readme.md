# Experiment 7: Shortest Path Algorithms (Dijkstra vs Bellman-Ford)

## 📌 Problem Statement
Implement and compare **Dijkstra’s Algorithm** and **Bellman-Ford Algorithm** for finding the **single-source shortest path** in a weighted graph.  
Use **array-based implementations** (no STL containers).  

---

## 📖 Theory

### 🔹 Dijkstra’s Algorithm
- Works for graphs with **non-negative edge weights**.  
- Uses a **greedy approach**: repeatedly selects the nearest unvisited vertex.  
- Efficient but fails with **negative weight edges**.  

### 🔹 Bellman-Ford Algorithm
- Works with **negative edge weights**.  
- Uses **Dynamic Programming**: relaxes all edges `V-1` times.  
- Can detect **negative weight cycles**.  
- Slower than Dijkstra.  

---

## 📜 Code Files
- `dijkstra.cpp` → Array-based implementation of Dijkstra’s Algorithm.  
- `bellman_ford.cpp` → Array-based implementation of Bellman-Ford Algorithm.  

---

## ⏱️ Time & Space Complexity

| Algorithm      | Time Complexity | Space Complexity | Notes |
|----------------|----------------|------------------|-------|
| Dijkstra       | O(V²) (array-based) | O(V) | Cannot handle negative weights |
| Bellman-Ford   | O(V·E)          | O(V)             | Works with negative weights, detects cycles |

---

## 📊 Pros and Cons

### ✅ Dijkstra
**Pros**  
- Very efficient for sparse graphs with **non-negative weights**.  
- Faster than Bellman-Ford (especially with adjacency matrix or priority queue).  

**Cons**  
- Cannot handle **negative edge weights**.  
- In this array-based version: runs in **O(V²)**, slower than heap-based implementation.  

---

### ✅ Bellman-Ford
**Pros**  
- Works with **negative edge weights**.  
- Can detect **negative weight cycles**.  
- Simple implementation with edge list.  

**Cons**  
- Slower than Dijkstra (`O(V·E)`).  
- Not suitable for very large graphs.  

---

## 🏁 Conclusion
- **Dijkstra’s Algorithm** is faster and ideal when all edge weights are non-negative.  
- **Bellman-Ford Algorithm** is more versatile, handling negative weights and detecting cycles, but at a higher computational cost.  
- In real-world applications:  
  - Use **Dijkstra** when graph weights are all non-negative.  
  - Use **Bellman-Ford** when negative weights are possible.  
- Both algorithms here are implemented with **arrays** for consistency with previous experiments.  

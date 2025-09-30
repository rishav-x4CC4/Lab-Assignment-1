# Experiment 5: Activity Selection Problem (Greedy Approach)

## 📌 Problem Statement
Implement the **Activity Selection Problem** using the **Greedy Algorithm**.  
The goal is to select the maximum number of activities that don’t overlap, given their start and finish times.  

---

## 📖 Theory
- **Input**: A set of activities with their start and finish times.  
- **Output**: Maximum number of non-overlapping activities.  

### 🔹 Greedy Strategy
1. Sort activities by their **finish times**.  
2. Select the first activity (earliest finish).  
3. For each next activity, check if its start time is **greater or equal** to the last selected activity’s finish time.  
4. If yes → select it.  

This works because selecting the activity that finishes earliest leaves the maximum room for the remaining activities.  

---

## 📜 Code Files
- `activity_selection.cpp` → Implementation of Greedy Activity Selection.  

---

## ⏱️ Time & Space Complexity

| Step | Time Complexity | Space Complexity |
|------|----------------|------------------|
| Sorting activities | O(n log n) | O(1) |
| Selecting activities | O(n) | O(1) |
| **Total** | **O(n log n)** | **O(1)** |

---

## 📊 Pros and Cons

### ✅ Pros
- Simple and efficient (O(n log n)).  
- Provides an **optimal solution** using Greedy.  
- Very easy to implement.  

### ❌ Cons
- Works only for problems where **Greedy choice property** and **Optimal substructure** hold.  
- Requires activities to be **sorted by finish time**.  

---

## 🏁 Conclusion
- The **Greedy Activity Selection algorithm** is an efficient solution with time complexity **O(n log n)**.  
- It guarantees an **optimal solution** by always picking the earliest finishing activity available.  
- Demonstrates the power of **Greedy algorithms** in scheduling problems.  

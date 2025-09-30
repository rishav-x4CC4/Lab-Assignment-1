# Experiment 2: Merge Sort and Quick Sort

## 📌 Problem Statement
Implement **Merge Sort** and **Quick Sort** using the Divide and Conquer approach.  
Compare their performance in terms of time complexity, space complexity, and stability.

---

## ⚙️ Implementation

### Merge Sort
- A **Divide and Conquer** algorithm.
- Splits the array into two halves, recursively sorts them, and merges.
- Requires **extra memory** for merging.
- **Stable sorting algorithm**.

### Quick Sort
- A **Divide and Conquer** algorithm.
- Picks a pivot, partitions the array around it, and recursively sorts partitions.
- **In-place sorting** (no extra memory).
- **Not stable** by default.

---

## 📜 Code Files
- `merge_sort.cpp` → Implementation of Merge Sort.  
- `quick_sort.cpp` → Implementation of Quick Sort.  

---

## ⏱️ Time & Space Complexity

| Algorithm     | Best Case   | Average Case | Worst Case   | Space Complexity | Stability |
|---------------|------------|--------------|--------------|------------------|-----------|
| Merge Sort    | O(n log n) | O(n log n)   | O(n log n)   | O(n)             | Stable    |
| Quick Sort    | O(n log n) | O(n log n)   | O(n²)        | O(log n)         | Not Stable|

---

## 📊 Performance Comparison
- **Merge Sort**
  - Consistent performance across cases.
  - Requires extra memory.
  - Preferred when **stability** is required.

- **Quick Sort**
  - Generally faster in practice (due to cache efficiency and in-place sorting).
  - Worst case is O(n²), but good pivot strategies (like randomization) avoid this.
  - Preferred in **real-world applications**.

---

## ✅ Conclusion
- Both Merge Sort and Quick Sort are **O(n log n)** algorithms on average.  
- Merge Sort is stable and predictable but needs extra memory.  
- Quick Sort is faster in practice but can degrade to O(n²) if pivots are chosen poorly.

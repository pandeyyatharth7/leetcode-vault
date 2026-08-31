# DSA & LeetCode Journey 🚀

Documenting my Data Structures & Algorithms practice as I prep for campus placements, following [Striver's A2Z DSA Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2).

## 📊 Progress Tracker

| # | Problem | Difficulty | Topic | Pattern | Date | Link | Solution |
|---|---------|-----------|-------|---------|------|------|----------|
| 1 | Two Sum | Easy | Arrays | Hashing | 2026-08-31 | [LC](https://leetcode.com/problems/two-sum/) | [Code](./Arrays/two-sum.cpp) |
| 2 | | | | | | | |

## 📁 Repo Structure

```
├── Arrays/
├── Recursion/
├── LinkedList/
├── Stacks-Queues/
├── BinarySearch/
├── Trees/
├── Graphs/
├── DP/
├── Greedy/
└── README.md
```

## 🧠 Approach for Each Problem

Every solved problem includes a short `.md` file alongside the code with:
- **Approach**: brief explanation of the strategy used
- **Why this approach**: what property of the problem led to it (e.g. sorted array → two pointers)
- **Time Complexity**: 
- **Space Complexity**:

Example (`two-sum.md`):
```markdown
## Approach
Used a hashmap to store (value → index) while iterating once through the array.
For each element, check if (target - element) already exists in the map.

## Why
Brute force is O(n²) checking every pair. Hashmap lookup is O(1),
so single pass gives O(n) time.

## Complexity
- Time: O(n)
- Space: O(n)
```

## 📈 Stats
- Total Solved: 1
- Easy: 1 | Medium: 0 | Hard: 0
- Current Streak: 1 day

## 🎯 Goal
150+ problems covering Arrays, Strings, Recursion, Linked Lists, Trees, Graphs, and DP before placement season.

---
*LeetCode Profile: https://leetcode.com/u/pandeyyatharth7/*
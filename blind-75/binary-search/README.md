### Recommended Resource

- [Ultimate Binary Search Guide (LeetCode Post)](https://leetcode.com/discuss/post/786126/python-powerful-ultimate-binary-search-t-rwv8/)

### Binary Search Template

```python
def binary_search(array) -> int:
    def condition(value) -> bool:
        pass

    left, right = min(search_space), max(search_space)  # could be [0, n], [1, n] etc. Depends on problem
    while left < right:
        mid = left + (right - left) // 2
        if condition(mid):
            right = mid
        else:
            left = mid + 1
    return left
```

### Binary Search Notes (Short Form)

1. **Set Boundaries**: Initialize `left` and `right` to cover **all possible values**.
2. **Return Value**: Usually return `left` (smallest `k` satisfying `condition()` after loop ends).
3. **Condition Function**: Core of the approach — requires practice to design correctly.

### Incomplete LeetCode Questions

- [ ] [69. Sqrt(x)](https://leetcode.com/problems/sqrtx/) — Needs final C++ implementation with overflow-safe binary search

## condition mein hamesha tumhe neglect karna hai kuch bhi karke
## (x + mid - 1) / mid; (ceil function)
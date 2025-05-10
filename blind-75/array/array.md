## Array

### Max Heap
1. `priority_queue<int> maxHeap;`  
2. Highest element is on top

### Min Heap
1. `priority_queue<int, vector<int>, greater<int>> minHeap;`  
2. Lowest element is on top

### Priority Queue with Frequency

1. Use `pair<int, int>` as `{frequency, item}` to sort by frequency.
2. `priority_queue<pair<int, int>>` returns item with **highest frequency** first (max-heap).
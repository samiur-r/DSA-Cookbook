**Heap:**

A heap is a specialized tree-based data structure that satisfies the heap property. It is essentially an almost complete binary tree. It can be visualized as a binary tree, but is often implemented as an array where:

- Index 0 is left unused (in most academic contexts, though in many practical scenarios, it's used).
- For an element at index i, its:
 - Left Child exists at index 2*i
 - Right Child exists at index 2*i + 1
 - Parent Node exists at index i/2

**Max-Heap:**

In a max-heap, for any given node I, the value of I is greater than or equal to the values of its children. This property must be recursively true for all nodes in the binary tree.

**Min-Heap:**

In a min-heap, for any given node I, the value of I is less than or equal to the values of its children. Like the max-heap property, this property must be recursively true for all nodes.

**Heapify:**

This is a procedure to convert a general binary tree into a heap. It's a process to adjust nodes to maintain the heap property. The time complexity of building a heap is O(n).

**Heapsort:**

Heapsort is an efficient comparison-based sorting algorithm with O(n log n) time complexity. It involves building a heap from the input data, and then repeatedly extracting the max (in a max heap) or min (in a min heap) and then restoring the heap property until the heap is empty.

**Priority Queue:**

A priority queue is an abstract data type that supports inserting elements with a priority and deleting the element with the highest (or lowest) priority. A heap is a common data structure used to implement a priority queue.
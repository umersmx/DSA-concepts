//A FULL Binary Tree is a tree that has all the possible nodes on all the levels.
//A COMPLETE Binary Tree is a tree of whose left side is filled first and then the right side (of the root/parent node).
//Every FULL Binary Tree is a COMPLETE Binary Tree, but not every COMPLETE Binary Tree is a FULL Binary Tree.

//A HEAP is a complete binary tree.
//Types of heap: Min Heap and Max Heap

//A Min Heap is a heap in which each parent node will be smaller or equal to both of it's children nodes.
//A Max Heap is a heap in which each parent node will be greater or equal to both of it's children nodes.

//Heapify is a process to convert a heap into a MIN heap or a MAX heap.
//The process of just swapping nodes to achieve the desired result.

//Heapify is used to sort some data using HEAP SORT.
//We achieve a MIN or MAX heap by heapifying (starting at the root) and once achieved we take the root node of that tree as sorted.
//We then put the last element of the heap (complete binary tree) as the root of the now rootless tree.
//Then we start heapifying again and so on and so forth...
#include<iostream>
using namespace std;
//Types of Binary Trees:
//Full
//Perfect
//Complete*
//Balance*
//Degenerated
//Skewed

//Adelson Velsky Landis Tree (AVL Tree)
//Reduces time complexity of a typical BST from O(n) to AVL having a time complexity of O(log n)
//Uses a Balance Binary Tree : Range (-1, 0, 1)
//It is also a BST but is self-balancing, a self-balancing BST.
//Formula to find the balance: height of left (no. of nodes on the left side) - height of right (no. of nodes on the right side)
//OR height of left - height of right.


//Each node of an AVL will look like: LEFT|DATA|RIGHT|HEIGHT
//Formula to find the height of each node: 1 + Max(hol, hor)
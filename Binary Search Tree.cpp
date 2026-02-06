//NON LINEAR DATA STRUCTURES

//1) Binary Tree
//A Non-linear data strucure
//Each node has a max of 2 child nodes, a min of 0 child nodes
//Either left child or right  child
//No loops involved; No nodes will be interlinked with other root nodes of the same level
//Root node level 0 is the starting node of the tree, then level 1, then level 2 and so on
//The nodes at the end of the tree from which no more children are formed are called leaf nodes/child nodes.
//The nodes that come in the middle are called intermediate nodes or parent nodes.
//The height/depth of a tree is the level of the leaf nodes of that tree.

//To know the max number of nodes that can fit on a single level: 2^level
//i.e. Level 0 -- 2^0 = 1 node and so on

//Formula for calculating the max number of nodes in the whole tree, given the heght h.
//2^(h+1)-1
//IF h=0, then max number of nodes = 1
//IF h=1, then max number of nodes = 3
//IF h=2, then max number of nodes = 7
//IF h=3, then max number of nodes = 15
//IF h=4, then max number of nodes = 31

//To make a tree of any height h, we need atleast h+1 number of nodes



//TO IMPLEMENT A BINARY TREE
//Similar to a doubly linked list 
//Recursion used


//To store data in hierarchical form, with designations and all, we use a BINARY SEARCH TREE.
//Smaller element (than the parent node) goes to the left
//Greater element (than the parent node) goes to the right

//Ways to traverse a binary search tree:
//Pre order: NODE --> LEFT --> RIGHT
//In order: LEFT --> NODE --> RIGHT
//Post order: LEFT --> RIGHT --> NODE
//The names suggest when the parent node shall be visited each time we visit a node

//TO DELETE FROM A BINARY SEARCH TREE
//CASE 1: If the node to be deleted is a leaf node, then we simply delete and set the directional pointer in the parent node NULL
//CASE 2: The node to be deleted has only one child, either left or right;
// the child node of the delete node will take it's place, its that easy
//CASE 3: If the node to be deleted has both children nodes, left and right;
// then any one of the successor OR predecessor nodes take its place
//Predecessor: The biggest among the smaller nodes (than the root node)
//Successor: The smallest among the bigger nodes (than the root node)



#include<iostream>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
	node (int value){
		data = value;
		left = right = NULL;
	}
};

class BST{
	node *root;
	public:
	BST(){
		root = NULL;
	}
	node* insert(int value){
		node *newNode = new node(value);
		if (root == NULL){
			root = newNode;
			return root;
		}
		node *current = root;
		node *parent = NULL;
		while(current != NULL){
			parent = current;
			if (value < current -> data){
				current = current -> left;
			}
			else{
				current = current -> right;
			}
		}
		if(value < parent -> data){
			parent -> left = newNode;
		}
		else{
			parent -> right = newNode;
		}
	}
};

void post_order(node *root){
	if(root == NULL){
		return;
	}
	post_order(root -> left);
	post_order(root -> right);
	cout << root -> data;
}

void in_order(node *root){
	if(root == NULL){
		return;
	}
	in_order(root -> left);
	cout << root -> data;
	in_order(root -> right);
}

void pre_order(node *root){
	if(root == NULL){
		return;
	}
	cout << root -> data;
	in_order(root -> left);
	in_order(root -> right);
}

int main (){
	BST bst;
	node *root = bst.insert(3);
	bst.insert(2);
	bst.insert(1);
	bst.insert(4);
	bst.insert(5);
	
	cout << "Traversals (Root: " << root -> data << ")" << endl;
	
	cout << "Post-Order: ";
	post_order(root);
	cout << endl;
	
	cout << "In-Order: ";
	in_order(root);
	cout << endl;
	
	cout << "Pre-Order: ";
	pre_order(root);
	cout << endl;
}
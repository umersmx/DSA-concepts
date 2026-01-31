#include<iostream>
using namespace std;
//Limitations of a singly linked list (also know as one way linked list).
//Can only move in the forward direction, we cant traverse backward using minimal time complexity.
//The only way we can traverse the previous node is start traversing from the head again.

//This is where the DOUBLY LINKED LIST (bidirectional) COMES IN.
//A node in a doubly linked list has two directional pointers one pointing to the next node
//and one to the previous node, basically PREV|DATA|NEXT.
//The starting node in the doubly linked list will have its PREV = NULL.
//The ending node in the doubly linked list will have its NEXT = NULL.
//3 cases valid again: At start, At any location, At the end

struct listNode{		//BLUEPRINT FOR A NODE
	listNode *prev;
	int data;
	listNode *next;
};
listNode *head = NULL;		//GLOBAL POINTERS
listNode *temp = NULL;		//GLOBAL POINTERS
listNode *node = NULL;		//GLOBAL POINTERS
listNode *tail = NULL;		//GLOBAL POINTERS

void insert_at_front(int value){
	listNode *node = new listNode;
	node->data = value;
	node->prev = NULL;
	if(head==NULL){
		node->next = NULL;
		head = node;
		tail = node;
	}
	else{
		node->next = head;
		head->prev = node;
		head = node;
	}
}

void insert_at_end(int value){
	listNode *node = new listNode;
	node->data = value;
	node->next = NULL;
	node->prev = NULL;
	if(head==NULL){
		head = node;
		tail = node;
	}
	else{
		node->prev = tail;
		tail->next = node;
		tail = node;
	}
}

int delete_at_front(){
	if (head==NULL){
		cout << "Invalid Request.";
		return 0;
	}
	int value = head->data;
	temp = head;
	head = head->next;
	if(head == NULL){
		tail = NULL;
		delete temp;
		return value;
	}
	else{
		head->prev = NULL;
		delete temp;
		return value;
	}
}
int delete_at_end(){
	if (head==NULL){
		cout << "Invalid Request.";
		return 0;
	}
	int value = tail->data;
	temp = tail;
	tail = tail->prev;
	if(tail == NULL){
		head = NULL;
		delete temp;
		return value;
	}
	else{
	tail->next = NULL;
		delete temp;
		return value;
	}
}

void display(){
	if(head == NULL){
		cout<<"List is empty";
		return;
	}
	temp=head;
	while(temp!=NULL){
		cout << temp->data << " ";
		temp=temp->next;
	}
		cout << endl;
}
int main(){
	insert_at_front(10);
	display();
	insert_at_end(8);
	display();
	insert_at_front(30);
	display();
	insert_at_end(6);
	display();
	insert_at_front(50);
	display();
	
	delete_at_front();
	display();
	delete_at_front();
	display();
	delete_at_end();
	display();
	delete_at_front();
	display();
	delete_at_end();
	display();
}
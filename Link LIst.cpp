#include <iostream>
using namespace std;
//Raw code; for the sake of understanding.
/*struct node{
	int data;
	node *next;
};
	//Most used data structure in projects
	//Storing sequencial data is most comonly done in Linear data structures
	//We make a struct(user defined data type) named node(node now is a user defined data type).
	//We declare the datatype for the node data itself e.g. int.
	//Then we declare the datatype for the NEXT pointer i.e. *next.
int main(){
	node *head = NULL;  //Necessary for link list
	node *tail = NULL;  //Necessary for link list
	node *ptr = NULL;   //Necessary for link list
	//1st Node
	ptr = new node;
	ptr -> data = 15;
	ptr -> next = NULL;
	head = ptr;
	tail = ptr;
	//2nd Node
	ptr = new node;
	ptr -> data = 20;
	ptr	-> next = NULL;
	tail -> next = ptr;
	tail = ptr;
	//3rd Node
	ptr = new node;
	ptr -> data = 25;
	ptr -> next = NULL;
	tail -> next = ptr;
	tail = ptr;
	//4th Node (to be inserted in place of the first node)
	ptr = new node;
	ptr -> data = 5;
	ptr -> next = head; //To let it be in place of the first node.
	cout << head -> next << endl; //Address of 2nd node
	return 0;
}*/


//Proper Code to insert at the start of the link list


/*#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
	node *head = NULL;	//Global Pointer; Head pointer stores the address of the first node
	node *tail = NULL;	//Global Pointer; Tail pointer stores the address of the last node
	node *ptr = NULL;	//Global Pointer
void insert_at_start (int d){
	ptr = new node;
	ptr -> data = d;
	if (head == NULL){	//To make sure that no nodes exist before
		ptr -> next = NULL;
		head = ptr;
		tail = ptr;
	}
	else{
		ptr -> next = head;
		head = ptr; 
	}
}
void disp(){		//Traversal is a process in whch we visit atleast each node once.
	node *temp;
	temp = head;
	while (temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
}
int main(){
	insert_at_start(30);
	insert_at_start(20);
	insert_at_start(10);	
	disp();						
	return 0;
}*/


//To insert element at the end of a link list


/*#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
	node *head = NULL;	//Global Pointer
	node *tail = NULL;	//Global Pointer
	node *ptr = NULL;	//Global Pointer
void insert_at_end (int d){
	ptr = new node;
	ptr -> data = d;
	ptr -> next = NULL;
	if (head == NULL){	//To make sure that no nodes exist before
		head = ptr;
		tail = ptr;
	}
	else{
		tail -> next = ptr;
		tail = ptr; 
	}
}
void disp(){		//Traversal is a process in whch we visit atleast each node once.
	node *temp;
	temp = head;
	while (temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;		//temp = temp +1
	}
}
int main(){
	insert_at_end(30);
	insert_at_end(20);
	insert_at_end(10);	
	disp();						
	return 0;
}*/


//LAB
// Linked list is a linear data structure
//It uses non contiguous memory which means it stores data in random memory location sbut connects them as if they were adjacent.
//Singly Linked List:-
//Uni-directional; forward only
//Node: DATA|*NEXT
//Head pointer used to add nodes or delete nodes

//Doubly Linked List:-
//Node: *PREV|DATA|NEXT*
//Bi-directional; backward and forward
//If we want to delete something from tail then we only concern with tail.
//Viva Question: What is head? What is its purpose?
//The node whose previous (PREV) is null will be our first node.
//The node whose next (NEXT) is null will be our last node.
//A disadvantage of doubly linked list is that it takes up more memory that singly linked list.

//Circular Linked List:-
//The last node has the address of the first node in the next, tail pointer does not exist
//Uni-directional; more like a singly linked list
//It creates some sort of a loop consisting of nodes.



struct listNode{
	int data;
	listNode *next;	//Self referencial data structure
	listNode(){
		next = NULL;
	}
};
class Singly{
	private:
		listNode *head;
		listNode *tail;
	public:
		Singly(){
			head = NULL;
			tail = NULL;
		}
		bool isEmpty(){
			return (head == NULL);	//Ensures the linked list is empty
		}
		void insert_at_start (int value){
			listNode *node = new listNode;
			node -> data = value;
			node -> next = head;
			head = node;
		}
		int delete_from_front (){
			if (isEmpty()){
				return -1;
			}
			int value = head -> data; //Giving the value of head to a variable
			listNode *temp = head;	  //Creating a temporary point carrying the address of head
			head = head -> next;	  //assign the next address right after head to head
			delete temp;
			return value;
		}
		void disp(){
			if(isEmpty()){
				cout << "List is Empty" << endl;
				return;
			}
			listNode *temp = head;
			while (temp!=NULL){
				cout << temp -> data << "  ";
				temp = temp -> next;
			}
		}
		void search(int n){
			listNode *temp = head;
			bool found = false;
			while (temp!=NULL){
				if (temp -> data == n){
					cout << "Key found: " << temp -> data << endl;
					found = true;
					break;
				}
				temp = temp -> next;	//the same as temp = temp + 1
			}
				if (!found){
					cout << "Key not found." << endl;
				}
		}
		void total_nodes(){
			if(isEmpty()){
				cout<<"List is Empty";
				return;
			}
			listNode *temp = head;
			int t = 0;
			while (temp!=NULL){
				temp = temp -> next;
				t++;
			}
				cout << "Total Nodes: " << t << endl;
		}
};
int main(){
	Singly s1;
	s1.insert_at_start(15);
	s1.insert_at_start(20);
	s1.insert_at_start(90);
	s1.insert_at_start(75);
	s1.insert_at_start(60);
	s1.insert_at_start(50);
	s1.disp ();
	cout << endl;
	s1.delete_from_front ();
	s1.disp ();
	cout << endl;
	int s;
	cout << "Enter the value you want to search: ";
	cin >> s;
	s1.search(s);
	s1.total_nodes();
}
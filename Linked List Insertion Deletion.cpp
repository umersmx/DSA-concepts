#include <iostream>
using namespace std;
//Conditions for insertion in a linked list
//1) Node is inserted at the start
//2) Node is inserted in the middle
//3) Node is inserted at the end
//Invalid Conditions for node insertion
//1) The desired location is a negative number (number as in index in array)
//2) The desired location is greater than n+1 (where n is the number of nodes)
//3) The head pointer is NULL AND the desired location is greater than 1 (Linked List does not exist)

// Task: We take a number from user, the square of that number will be our total number of nodes. The data and the
// locations of the nodes will be provided by the user, we have to arranged the linked list accordingly. Obviously
// with checks that check whether the location of each node is valid or not.

//Conditions for deletion of nodes
//1) Delete at beginning
//2) Delete at the end
//3) Delete at any location

//FOR DELETING AT THE BEGINNING
//What we do is that we store the address of the to be deleted node in a temp variable.
//If head==NULL, deletion ain't possible because the linked list does not exist
//Else we let temp=head then we assign head the address of the next node (so our first node is shifted to be the
//previously second node (head=head->next).
//Then we delete the temp (as it was the previously forst node)

//FOR DELETING AT THE END
//What we do is that we store the address of the to be deleted node in a temp variable.
//If head==NULL, deletion ain't possible because the linked list does not exist
//Else we traverse letting temp=head
//Using a while loop for the next of the next of the temp pointer is NULL: while(temp->next->next!==NULL)
//While the given condition is true: temp=temp->next

//FOR DELETING AT ANY LOCATION
//We ask for the location from user and make a funcion with one argument that is loc.
//What we do is that we store the address of the to be deleted node in a temp variable.
//If head==NULL AND loc>1, deletion ain't possible because the linked list does not exist
//Else If loc<0, deletion ain't possible
//Else If loc==1, we use the code for deletion at the beginning
//Else (for a random location in the middle)
//We traverse; temp=head, apply for loop and go till loc-1 (so we can create a link)
//If temp == NULL, deletion not possible
//Else we check (nested) If the node after the temp node is null, if the temp is at the second last node
//to delete the last (temp->next->next==NULL)
//We declare temp->next=NULL (The previously second last node is now the last node as the
//previously last node is now deleted, delete tail
//Now assign tail to temp to make the previously second last node the last one now
//(nested)(for deletion if loc is anywhere in the mid)else we assign the ptr(current node) the address of the next of temp
//then we assign the next of the temp to the next of the ptr (temp->next=ptr->next)
//finally we delete ptr so we can free up space.

class listNode{
	public:
		int data;
		listNode *next;
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
			return(head == NULL);
		}
		void insert_at_start(int value){
			listNode *node = new listNode;
			node -> data = value;
			if (isEmpty()){
				head = tail = node;
			}
			node -> next = head; //We store the address of the previous head into the newly created node making it the 
			//new head
			head = node;
		}
		void insert_at_end(int value){
			listNode *node = new listNode;
			node -> data = value;
			if(isEmpty()){
				head = tail = node;
			}
			tail -> next = node; //We store the address of the previous tail into the newly created node making it the 
			//new tail
			tail = node;
		}
		void display(){
			listNode *temp;
			temp = head;
			while(temp != NULL){
				cout << temp -> data << " ";
				temp = temp -> next;
			}
		}
};
int main(){
	Singly s1;
	s1.insert_at_start(2);
	s1.insert_at_end(5);
	s1.insert_at_start(4);
	s1.display();
}
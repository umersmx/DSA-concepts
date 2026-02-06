#include <iostream>
using namespace std;
//Adding two nodes at once
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
		void insert(int v1, int v2){
			listNode *node = new listNode;
			node -> data = v1;
			if(isEmpty()){
				head = tail = node;
			}
			node -> next = head;
			head = node;
			
			listNode *node1 = new listNode;
			node1 -> data = v2;
			if(isEmpty()){
				head = tail = node1;
			}
			node1 -> next = NULL;
			tail = node1;
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
	s1.insert(10, 20);
	s1.display();
}
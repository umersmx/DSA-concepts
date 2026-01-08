//Circular Linked List
//Application: Operating Systems; Windows
//A linked list in which the tail's next pointer points back to the head.
//And in case of a doubly linked list, the prev pointer of the head points to the tail to form a sort of complete cycle.
//Can be both singly linked or doubly linked.



//New Data Structure Introduced: Stack
//Stack is a linear data structure
//Principle: First In, Last Out OR Last In, First Out (FILO or LIFO).
//Much similar to a bottle of 3 tennis balls. The ball put in the bottle last, comes out first.
//Basically stacking things, the thing put first in the stack is always at the bottom and the last one taken out.

//Terminologies used in Stack:
//PUSH(): A function to perform insertion in a stack.
//POP(): A function to remove elements from a stack.
//TOP: A variable that represents the location of the last input element in a stack (top of the stack).
//isFull(): A check to see whether a stack is full or not.
//isEmpty(): A check to see whether a stack is empty or not.
//Overflow: Adding more elements than the set stack capacity (isFull()=true).
//Underflow: Removing elements even when the stack is empty (isEmpty()=true).

//Implementation of a Stack:
//1) By using Arrays; Static or Dynamic.
//2) By using Linked Lists; Singly Linked.
//Using static arrays, sample code:
//The TOP variable is the index of the array. It is initially -1 (Stack is empty)

//Using Linked lists:
//To PUSH; if we use InsertAtStart, to POP we use DeleteAtStart
//To PUSH; if we use InsertAtEnd, to POP we use DeleteAtEnd

//Applications of Stack: 
// >Using UNDO AND REDO (Ctrl Z, Ctrl Y)
//We have a stack of operations, when we undo, control shifts the latest operation in another stack.
//When we redo, the undone operation shifts back to the original stack of operations.
// >For reversing an array/string. Store the elements using PUSH() in the stack and display all of them back using PULL().
// >Mathematical Expressions
//-Infix Notation (Every operator is between operands, i.e. a+b)
//-Postfix Notation (Every operator is after the operands, i.e. ab+)
//Infix Notation is easily understood by Humans and is input for calculations.
//The Computer converts the infix into postfix and removes any brackets (postfix expressions can't be in brackets)
//The described process is done by a stack.
//Then the postfix notation is used to fetch the results, done again by the stack.
//Common operators: exponent operator (^; Highest Priority), mul/div(*,/; Second Higest), sum/sub(+,-; Lowest Priority)
//The stack used in mathematical expressions has some rules:
//Rule 0: Always use enclose the given expression in a set of parenthesis so that the stack can be emptied at the end.
//Rule 1: If the priority of the top operator in the stack is the same as the priority of the newly scanned operator
//from the infix expression, then the already existing top operator shall be POPped and PUSH the newly scanned operator at the top.
//The POPped operator moves to postfix column.
//Rule 2: If the priority of the top operator in the stack is lower than the newly scanned operator,
//then put the newly scanned operator on the top of stack, nothing else will be moved.
//The previous operator moves a step down.
//Rule 3: If the priority of the top operator in the stack is higher than the newly scanned operator,
//then POP the top operator and PUSH the newly scanned operator to the top of the stack.
//Then we make the stack table of the obtained postfix expression, we include 2 columns; scanned element (postfix)|stack.



/*#include<iostream>
#include<stack> //Standard Template Library (STL) implementation
using namespace std;
int main (){
	stack <int> obj;
	obj.
}*/
	
	
//Actual Code
#include<iostream>
using namespace std;
#define size 5
class stack{
	int top;
	int arr[size];
	int delArr[size];
	public:
	stack(){
		top = -1;
	}
	bool isFull(){
		if(top==size-1){
			return 1;
		}
		else{
			return 0;
		}
		//OR we can just use: return(top==size-1)
	}
	bool isEmpty(){
		if(top<0){
			return 1;
		}
		else{
			return 0;
		}
		//OR we can just use: return(top==-1)
	}
	void push(int value){
		if(!isFull()){
			top++;
			arr[top] = value;
		}
	}
	int pop(){
		if(!isEmpty()){
			int del = arr[top];
			top--;
			return del;		
		}
	}
	void display(){
		if(isEmpty()){
			cout<<"Stack is empty";
			return;
		}
		stack tempstack;
		while(!isEmpty()){
			int temp = pop();
			cout<<temp<<"  ";
			tempstack.push(temp);
		}
		while(!tempstack.isEmpty()){
			push(tempstack.pop());
		}
	}
};
int main(){
	stack ms;
	ms.push(10);
	ms.push(20);
	ms.push(30);
	ms.push(40);
	ms.push(50);
	ms.display();
	return 0;
}

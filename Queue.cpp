//QUEUE
//A Linear Data Structure
//Follows First In First Out principle (FIFO)(LILO)
//To implement Queue we can use arrays/linked lists
//FRONT variable/pointer will always store the index/address of the data input at the very start of the queue.(first value)
//REAR variable/pointer will always store the index/address of the data input at the very end of the queue. (last value)
//When the queue is empty then the FRONT and REAR will be -1/NULL. 

//Application of queue: Print commands, first command gets printed out first.

//To store a value in an empty queue:
//Increment both FRONT AND REAR and store value.

//To store values if the queue already has some value:
//We only increment REAR in this case and store the value there. And so on.

//Enqueue() is the function called to input data in a queue at where REAR is. 
//Dequeue() is the function called to remove data from a queue at wherer FRONT is. 
//First we check to see if our queue has some element or not.
//Then to remove element as of FIFO, in arrays:
//Remove the element at FRONT and increment FRONT.

//How do we know our queue is full?
//We put a check to see if our queue is being overflowed.
//In case of arrays, if FRONT == 0 && REAR == size-1, the queue is full.

//If we want to Enqueue data after we've used Dequeue, we will set REAR to point to the starting index(in case of pointers)
//and then enqueue the data over there as it will be a free slot sue to us dequeueing.
//After this, we keep enqueueing as normal until REAR == FRONT - 1 as FRONT will be having some data making it a substitute for the size.

//If FRONT reaches the end of the initial queue yaani FRONT == size, FRONT should then be at the Oth index of the initial queue
//as seen in a cyclic motion.

//Assignment Question: Can a stack be implemented using a queue?

//A priority queue is a type of queue

//Recursion:
//A process in which a function calls itself again and again inside of itself until the base condition is fulfilled.
//Now where to run this loop?
//In non-linear data structures.
//It implements a stack at the back end and calls turn by turn and then returns the respective values turn by turn.

//Iterative control structures(loops, used in lnear data structures), Recursive Functions (recursion, in non-linear)


//The way of the modulus to implement a circular queue done in lab.
#include<iostream>
using namespace std;

class Queue{
	int s = 4;
	int queue[s];
	int FRONT = -1;
	int REAR = -1;
	
	int enqueue(int v){
		if((FRONT == 0 && REAR == size - 1) || (REAR == FRONT - 1)){
			cout << "Invalid operation, queue overflowed." << endl;
		}
		else if(FRONT == -1 && REAR == -1){  //If the queue is empty
			FRONT = FRONT + 1;
			REAR = REAR + 1;
			queue[REAR] = v;
		}
		else if(FRONT > 0 && REAR == size - 1){  //If REAR is already at the last index
			REAR = 0;  //Circular queue started
			queue[REAR] = v
		}
		else{
			REAR = REAR + 1;
			queue[REAR] = v;
		}
	}
	
	void dequeue(){
		if(FRONT == -1){
			cout << "Invalid operation, queue underflowed." << endl;
		}
		else if(REAR < FRONT && FRONT == size){  //FRONT is at the end of the initial queue
			FRONT = 0; //Next circle starts
			cout << queue[FRONT];
			queue[FRONT] = 0;
			FRONT = FRONT + 1;
		}
		else if(FRONT == REAR){  //Only one element in the queue
			cout << queue[FRONT];
			queue[FRONT] = 0;
			FRONT = -1;
			REAR = -1;
		}
		else{
			cout << queue[FRONT];
			queue [FRONT] = 0;
			FRONT = FRONT + 1;
		}
	}
	
	
};
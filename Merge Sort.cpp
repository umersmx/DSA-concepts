#include <iostream>
using namespace std;
//MERGE SORT
//We make a function with arguments: int *arr, int start_index, int end_index, int *result
//We check If start_index >= end_index, if true then we return that shi
//The formula for Merge sort is basically we have to keep finding them id point of every formed array until we
//get one element in each array
//The formula for that is: int mid = start_index + (end_index-start_index)/2
	void MergeSort (int *arr, int start_index, int end_index, int *result){
		if(start_index >= end_index){
			return;
		}
		int mid = start_index + (end_index-start_index)/2;
		MergeSort(arr, start_index, mid, result); //Left Side
		MergeSort(arr, mid+1, end_index, result); //Right Side
		int i = start_index; //Starting of the left side array
		int j = mid + 1; //Starting of the right side array
		int k = start_index; //Temporary variable used to traverse *result
		while((i <= mid) && (j <= end_index)){ //i must be less than the final index value of the left array which is mid
							   				   //j must be less than the final index value of the right array which is end_index
			if(arr[i] < arr[j]){
				result[k] = arr[i];
				i++;
			}
			else{
				result[k] = arr[j];
				j++;
			}
			k++;
		}
		while(i <= mid){
			result[k] = arr[i];
			k++;
			i++;
		}
		while(j <= end_index){
			result[k] = arr[j];
			k++;
			j++; 
		}
		for(int i = start_index; i <= end_index; i++){
			arr[i] = result[i];
		}
	}
int main (){
	int arr[5];
	for(int i = 0; i <= 4; i++){
		cout << "Enter an element for you array: ";
		cin >> arr[i];
	}
	int result[5];
	MergeSort(arr, 0, 4, result);
	for(int i = 0; i <= 4; i++){
		cout << arr[i] << " ";
	}
}
//Time Complexity of Merge Sort: n log n
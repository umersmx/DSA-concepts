#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
	int first = 0;
	int last = n - 1;
	while (first <= last){
		int mid = first + (last - first) / 2;
		if (key == arr[mid]){
			return mid;
		}
		else if (key < arr[mid]){
			last = mid - 1;
		}
		else{
			first = mid + 1;
		}
	}
	return -1;
}
int main (){
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]); // n = (24 bytes) / (4 bytes) = 6
	cout << "Enter the number you want to find: ";
	int key;
	cin >> key;
	int index = binarySearch(arr, n, key);
	if(index == -1){
		cout << "Key not found." << endl;
	}
	else{
		cout << "Key found at index " << index << endl;
	}
	return 0;
}

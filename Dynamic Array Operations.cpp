#include <iostream>
using namespace std;
int main (){
	//```````````````````````````````````````````````````TASK 1`````````````````````````````````````````````````````
	/*
	int n, m;
	cout << "Enter the capacity of the dynamic array: ";
	cin >> n;
	cout << "Enter the threshold value: ";
	cin >> m;
	int *arr = new int[n];
	for (int i=0 ; i<n ; i++){
		cout << "Enter the index value [" << i << "] of the array: ";
		cin >> arr[i];
	}
	cout << "The values greater than " << m << " are: "; 
	for (int i=0 ; i<n ; i++){
		if (arr[i] > m){
			cout << arr[i] << " ";
		}
	}
	*/
	
	//```````````````````````````````````````````````````TASK 2``````````````````````````````````````````````````````
	/*
	int n, m;
	cout << "Enter the capacity of the first dynamic array: ";
	cin >> n;
	int *arr1 = new int[n];
	cout << "Enter the capacity of the second dynamic array: ";
	cin >> m;
	int *arr2 = new int[m];
	cout << endl;
	for (int i=0 ; i<n ; i++){
		cout << "Enter the index value [" << i << "] of the first array: ";
		cin >> arr1[i];
	}
	cout << endl;
	for (int j=0 ; j<m ; j++){
		cout << "Enter the index value [" << j << "] of the second array: ";
		cin >> arr2[j];
	}
	int *arr3 = new int[n + m];
	cout << endl;
	for (int k=0 ; k<n ; k++){
		arr3[k] = arr1[k];
	}
	for (int l=0 ; l<m ; l++){
		arr3[n + l] = arr2[l];
	}
	cout << "The merged array is: [";
	for (int o=0 ; o<(n+m) ; o++){
		cout << arr3[o] << " ";
	}
	cout << "] " << endl;
	return 0;
	*/
	
	//```````````````````````````````````````````````````TASK 3``````````````````````````````````````````````````````
	/*
	int n;
	cout << "Enter the capacity of the dynamic array: ";
	cin >> n;
	int *arr = new int[n];
	for (int i=0 ; i<n ; i++){
		cout << "Enter the index value [" << i << "] of the array: ";
		cin >> arr[i];
	}
	int rep , max = 1;
	for (int i=0 ; i<n ; i++){
		int count = 1;
		for (int j = i+1 ; j<n ; j++){
			if (arr[i] == arr[j]){
				count++;
			}
		}
		if (count > max){
			max = count;
			rep = arr[i];
			cout << "Most repeated value: " << rep << endl << "Repeated " << max << " times.";
		}
		else if (count == max){
		cout << "All values are repeated one time." << endl;
	} 
	return 0;
	*/
	//```````````````````````````````````````````````````TASK 4``````````````````````````````````````````````````````
	/*
	int row, col;
	cout << "Enter the number of rows in your dynamic 2D array: ";
	cin >> row;
	cout << "Enter the number of columns in your dynamic 2D array: ";
	cin >> col;
	int *arr = new int [row * col];
	for (int i=0 ; i<row ; i++){
		for (int j=0 ; j<col ; j++){
			cout << "Enter the number for the index value [" << i << "][" << j << "]: ";
			cin >> arr[i * col + j];
		}
	}
	int n = 0;
	int m = 0;
	int *arr1 = new int[row * col];
	int *arr2 = new int[row * col];
	for (int i=0 ; i<row ; i++){
		for (int j=0 ; j<col ; j++){
			if (arr[i * col + j] % 2 == 0){
				arr1[n] = arr[i * col + j];
				n++;
			}
			else if (arr[i * col + j] % 2 != 0){
				arr2[m] = arr[i * col + j];
				m++;
			}
		}
	}
	cout << "Array for even numbers in the matrix: [ ";
	for (int i=0 ; i<n ; i++){
		cout << arr1[i] << " ";
	}
	cout << "]" << endl;
	cout << "Array for odd numbers in the matrix: [ ";
	for (int i=0 ; i<m ; i++){
		cout << arr2[i] << " ";
	}
	cout << "]";
	*/
	//```````````````````````````````````````````````````TASK 5``````````````````````````````````````````````````````
	/*
	int row, col;
	cout << "Enter the number of rows in your dynamic 2D array: ";
	cin >> row;
	cout << "Enter the number of columns in your dynamic 2D array: ";
	cin >> col;
	int *arr = new int [row * col];
	for (int i=0 ; i<row ; i++){
		for (int j=0 ; j<col ; j++){
			cout << "Enter the number for the index value [" << i << "][" << j << "]: ";
			cin >> arr[i * col + j];
		}
	}
	for(int i=0 ; i<row ; i++){
	int max = arr[0 * 0];
		for (int j=0 ; j<col ; j++){
			if (arr[i * col + j] > max){
				max = arr[i * col + j];
			}
		}
		cout << "The maximum value in row " << i + 1 << " is: " << max << endl;
	}
	*/
}
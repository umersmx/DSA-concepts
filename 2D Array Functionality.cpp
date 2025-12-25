#include<iostream>
using namespace std;
int main (){
	int arr[3][3];
	int sum;
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			cout << "Enter the element [" << i << "][" << j << "] of the matrix: ";
			cin >> arr[i][j];
		}
	}
	cout << endl;
	cout << "Matrix before transpose: ";
	for(int i=0 ; i<3 ; i++){
		cout << endl;
		for(int j=0 ; j<3 ; j++){
			cout << arr[i][j] << "\t";
		}
	}
	cout << endl;
	cout << "Matrix after transpose: ";
	for(int i=0 ; i<3 ; i++){
		cout << endl;
		for(int j=0 ; j<3 ; j++){
			cout << arr[j][i] << "\t";
		}
	}
	for(int i=0 ; i<1 ; i++){
		for(int j=0 ; j<3 ; j++){
			sum = sum + arr[j][i];
		}
	}
	cout << endl;
	cout << "Sum of all values in the first row: " << sum;
	return 0;
}
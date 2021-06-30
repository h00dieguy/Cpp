//Selection Sort Algorithm: Selection sort is a simple sorting algorithm. This sorting algorithm is an in-place comparison-based algorithm 
// 							in which the list is divided into two parts, the sorted part at the left end and the unsorted part at the right end. 
// 							Initially, the sorted part is empty and the unsorted part is the entire list.
// 							The smallest element is selected from the unsorted array and swapped with the leftmost element, and that element 
// 							becomes a part of the sorted array. This process continues moving unsorted array boundary by one element to right

// Worst complexity: n^2 i.e-  O(n²)
// Average complexity: n^2
// Best complexity: n^2
// Space complexity: 1
// Method: Selection
// Stable: No
// Class: Comparison sort


#include<iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if (arr[j]<arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;

			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
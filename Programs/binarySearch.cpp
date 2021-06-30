// Binary Search algorithm : Binary search is an efficient algorithm for finding an item from a sorted list. 
// 							 It works by repeatedly dividing the list in half portion that could contain the item, 
// 							 until you've narrowed down the possible locations to just one.
// 							 It is also known as half-interval search, logarithmic search, or binary chop, 
// 							 is a search algorithm that finds the position of a target value within a sorted array. 
// 							 Binary search compares the target value to the middle element of the array. 

// Worst time complexity: O(log n)
// Average time complexity: O(log n)
// Best time complexity: O(1)
// Space complexity: O(1)
// Data structure: Array



#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
	int s=0;
	int e=n;

	while(s<=e){
		int mid = (s+e)/2;

		if (arr[mid]==key)
		{
			return mid;
		}
		else if (arr[mid]>key)
		{
			e = mid - 1;
		}
		else{
			s= mid + 1;
		}
	}

	return -1;

}

int main(){

	int n;
	cout<<"Enter size of array: ";
	cin>>n;

	int arr[n];
	cout<<"Enter elements of array: ";
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}

	int key;
	cout<<"Enter number to find its index/position: ";
	cin>>key;

	cout<<"Position of entered number is: "<<binarySearch(arr, n, key)<<endl;
	return 0;
}
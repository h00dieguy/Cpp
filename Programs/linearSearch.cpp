// Linear Search Algorithm : linear search or sequential search is a method for finding an element within a list. 
// 						  It sequentially checks each element of the list until a match is found or the whole list has been searched. 

// Worst time complexity: O(n)
// Average time complexity: O(n)
// Space complexity: O(1)
// Worst-case space complexity: O(1) iterative
// Average performance: O(n/2)



#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
	for (int i = 0; i < n; ++i)
	{
		if (key==arr[i])
		{
			return i;
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
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	int key;
	cout<<"Enter number to find its index/position: ";
	cin>>key;

	cout<<"Position of entered number is: "<<linearSearch(arr, n, key)<<endl;
	return 0;
}
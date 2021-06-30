// An array is defined as the collection of similar type of data items stored at contiguous memory locations.

#include<iostream>
#include<math.h>
#include <climits>
using namespace std;


int main(){
	int n;
	cout<<"Enter size of array: ";
	cin>>n;

	int array[n];
	cout<<"Enter elements of array: ";
	for (int i = 0; i < n; ++i)
	{
		cin>>array[i];
	}
	cout<<endl<<"-- Result --"<<endl;
	cout<<"Current elements of array: ";
	for (int i = 0; i < n; ++i)
	{
		cout<<array[i]<<" ";
	}


	int maxNo = INT_MIN, minNo = INT_MAX;

	for (int i = 0; i < n; ++i)
	{
		maxNo = max(maxNo, array[i]);
		minNo = min(minNo, array[i]);	
	}
	cout<<endl<<"Maximum number in array : "<<maxNo<<endl;
	cout<<"Minimum number in array : "<<minNo<<endl;	
	return 0;
}

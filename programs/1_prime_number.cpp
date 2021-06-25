#include <iostream>

using namespace std;

int main(){

	int num;
	bool flag = 0;
	cout <<"Enter number to check if its Prime or Not: "; 
	cin>>num;

	for (int i = 2; i < num; ++i)
	{
		if (num%i==0)
		{
			cout<<num<<" is Not Prime Number"<<endl;
			flag = 1;
			break;
		}
	}

	if (flag==0)
	{
		cout<<num<<" is Prime Number"<<endl;

	}

	return 0;
}
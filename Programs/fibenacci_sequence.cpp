#include <iostream>
using namespace std;

void fib(int num){
	int t1= 0;
	int t2 = 1;
	int nextTerm;

	cout<<"Fibenacci Sequence for given number : "<<endl;
	for (int i = 1; i <=num; ++i)
	{
		cout<<t1<<endl;

		nextTerm = t1+t2;
		t1=t2;
		t2=nextTerm;
	}
	return;
}

int main(){
	int n;
	cout<<"Enter Number: ";
	cin>>n;

	fib(n);
	return 0;
}
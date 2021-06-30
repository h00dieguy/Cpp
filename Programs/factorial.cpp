#include <iostream>
using namespace std;

int factorial(int num){

	int fact = 1;
	for (int i = 2; i <=num; ++i)
		{
			fact = fact*i;
		}

	return fact;
	}

int main(){

	int n;
	cout<<"Enter number to find its factorial: ";
	cin>>n;

	int ans = factorial(n);
	cout <<"factorial of "<<n<<" is "<<ans<<endl;
	
	return 0;
}


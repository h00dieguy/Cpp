#include <iostream>
using namespace std;

// formula for Binomial Coeficient nCr = factorial(n)/(factorial(r)*factorial(n-r))


int factorial(int num){
	int fact = 1;
	for (int i = 2; i <=num; ++i)
	{
		fact*=i;
	}
	return fact;
}
int main(){
	int n;
	cout<<"Enter Number: ";
	cin>>n;

	cout<<"--- Pascal Triangle ----"<<endl;
	for (int i = 0; i <n; ++i)
	{
		for (int j = 0; j <=i; ++j)
		{
			int ans = factorial(i)/(factorial(j)*factorial(i-j));
			cout<<ans<<" ";		
		}
		cout<<endl;
	}

	
	return 0;
}
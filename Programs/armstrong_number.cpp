#include<iostream>
#include <math.h>
using namespace std;

int main(){
	int n;
	cout << "Enter number: ";
	cin>>n;

	int originalNum = n;
	int result = 0;
	while(n>0){
		int lastdigit = n%10;
		result = result + pow(lastdigit,3);
		n = n/10;
	}

	if (originalNum==result)
	{
		cout<<"Given number "<<originalNum<<" is Armstrong Number!"<<endl;
	}
	else
	{
		cout<<"Given number "<<originalNum<<" is NOT Armstrong Number!"<<endl;
	}
	cout<<result;
	return 0;
}
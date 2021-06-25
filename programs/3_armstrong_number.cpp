#include<iostream>
#include <math.h>
using namespace std;

int main(){

	int num;
	cout<<"Enter Number to check if its Armstrong Number or Not: ";
	cin>>num;

	int originalnum = num;
	int result = 0;
	while(num>0){
		int lastdigit = num%10;
		result =  result + pow(lastdigit,3);
		num = num/10;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
	}

	if (result==originalnum)
	{
		cout<<result<<" is Armstrong Number"<<endl;
	}
	else{
		cout<<originalnum<<" is Not Armstrong Number"<<endl;
		
	}
	return 0;
}
#include<iostream>

using namespace std;

int main(){

	int num;
	cout<<"Enter Number: ";
	cin>>num;

	int reverse = 0;
	while(num>0){
		int lastdigit;
		lastdigit = num%10;
		reverse = reverse*10 + lastdigit;
		num = num/10;
	}

	cout<<"Reverse Number: "<<reverse<<endl;
	return 0;
}
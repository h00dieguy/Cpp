#include <iostream>

using namespace std;

int main()
{
       int n;
       cout<<"Enter number of rows: ";
       cin>>n;
       
       cout<<endl<<"--- Half Pyramid Pattern ---"<<endl<<endl;

       for (int i = 1; i <=n; ++i)
       {
               for (int j = 1; j<=i; j++)
               {
                       cout<<i;
               }
               cout<<endl;
       }

       return 0;
}

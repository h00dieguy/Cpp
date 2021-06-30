#include <iostream>

using namespace std;

int main()
{
       int n ;
       cout << "Enter number of rows : ";
       cin>>n;         

       int count = 1;

       cout<<endl<< "--- Floyd's Triangle Pattern ---"<<endl<<endl;
       for (int i = 1; i <=n; ++i)
       {
               for (int j = 1; j <=i; ++j)
               {       
                       
                       cout<<count<<" ";
                       count++;
               
               }
               cout<<endl;
       }

       return 0;
}

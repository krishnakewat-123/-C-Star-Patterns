#include<iostream>
using namespace std;
/* ############# Description###############
input rows= 5
output:
    
    *********
     *     *
      *   *
       * *
        *
###########################################
*/
int main()
{ 


    int i,j,number;
    cout<<"enter the number::";
    cin>>number;
    for(i=1;i<=number;i++)
    {   for(int k=1;k<i;k++)
        {
            cout<<" ";
        }
        int s=number*2-i;
        for(j=i;j<=s;j++)
        {   if(i==1||i==number||j==i||j==s)
            cout<<"*";
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

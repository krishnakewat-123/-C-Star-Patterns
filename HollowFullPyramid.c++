#include <iostream>
using namespace std;
/*######## Descripion #########
 enter number of rows:4
 output:
   *
  * *
 *   *
*******
################################
*/
int main() 
{
    int rows ;
    
    cout<<"enter number of rows:";
    cin>>rows;
    for (int i =1; i <=rows; i++) 
    {

        for (int j =i; j <rows; j++) 
        {
            cout<<" ";
        }
        
        for (int k =1; k <=2*i-1; k++) 
        {
            if (k == 1 || k == 2 * i-1||i==rows) 
            {
                cout<<"*";
            } 
            else 
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
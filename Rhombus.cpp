#include <iostream>
using namespace std;
/*
enter the number of rows::4
output:   
   * * * *
  * * * *
 * * * *
* * * * 
*/
int main()
{
    int rows;
    cout<<"enter the number of rows::";
    cin>>rows;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            cout<<" ";
        }
        for (int k = 0; k < rows; k++) {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
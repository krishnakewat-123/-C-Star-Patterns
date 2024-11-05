#include <iostream>
using namespace std;
/*############# Description ########
    input:Enter number of rows: 4
    output: * * * * 
            * * * 
            * * 
            * 
 #######################################
*/

int main()
{

    int rows;

    cout <<"Enter number of rows: ";
    cin >>rows;
    cout<<"inverted_Half-pyramid of "<<rows<<" rows:\n";

    for(int i=rows; i>=1; i--) 
    {
        for(int j=1; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
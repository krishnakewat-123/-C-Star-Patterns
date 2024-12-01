#include <iostream>
using namespace std;
/*############# Description ########
    input:Enter number of rows: 4
    output:   *
            * * *
          * * * * *
        * * * * * * *
 #######################################
*/

int main()
{

    int rows;

    cout <<"Enter number of rows: ";
    cin >>rows;
    cout<<"Full-pyramid of "<<rows<<" rows:\n";

    for(int i=1; i<=rows; i++) 
    {   
        for(int space=rows;space>i;space--)
        {
            cout<<"  ";// for space 
        }
        for(int j=1; j<=2*i-1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}

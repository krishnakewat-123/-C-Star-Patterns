#include<iostream>
using namespace std;
/*############ Description #######
    input number of row:4
    output:
    *
    * *
    * * *
    * * * *
 #################################
*/
int main()
{
    int rows;
    
    cout << "Enter the number of rows:";
    cin >> rows;

    cout <<"Half pyramid of "<<rows<<" row(*):\n";

    // ************* logic ***********//
    
    for( int i=0; i<rows; i++ )
    
    {
        for( int j=0; j<=i; j++ )
        {
            cout << "* ";
        }
        cout<<endl;
    }
    //********************************//
    
    return 0;
}

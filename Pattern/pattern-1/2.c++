// square pattern like -
/*  1 1 1 1
    2 2 2 2 
    3 3 3 3 
    4 4 4 4 */

#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=n; j++)
        {
            cout<<i; // we print i here because we need to print the ro no. as in coloumn
        }
        cout<<endl;
    }
    return 0;
}
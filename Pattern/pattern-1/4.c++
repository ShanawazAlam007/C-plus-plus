// square pattern -
/* 4 3 2 1
   4 3 2 1 
   4 3 2 1
   4 3 2 1*/

#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=n; j++)
        {
            cout<<n-j+1;
        }
        cout<<endl;
    }
    
    return 0;
}
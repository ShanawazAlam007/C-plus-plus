/* A B C D
   A B C D
   A B C D 
   A B C D*/

#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=n; j++)
        {
            char c= 'A'+j-1;
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}
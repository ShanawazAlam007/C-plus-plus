/* A
   B B
   C C C*/

#include<iostream>
using namespace std;


int main(){
    int n,i,j;
    cin>>n;
    char c='A';
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
             cout<<c;
            }
        c++;
        cout<<endl;
    }
    return 0;
}


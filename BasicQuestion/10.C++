// taking input in array by user defiend

#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the value of n:";
    cin>>n;
    int a[n];
    cout<<"Enter the matrix";
    for ( i = 0; i < n; i++)
    {
        cout<<"Enter the value of "<<i<<" is: ";
        cin>>a[i];
    }
    for ( i = 0; i < n; i++)
    {
        cout<<"The value of "<<i<<" is: "<<a[i]<<endl;
    }
    
    

}
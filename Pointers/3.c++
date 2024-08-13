/* WAP to computer the sum of all the elements in an array using pointer*/

#include<iostream>
using namespace std;

int sum(int *a,int n){
    int i;
    int s=0;
    for ( i = 0; i < n; i++)
    {
        s=s+a[i];
    }
    return s;
}

int main(){
    int n;
    cin>>n;
    int a[100];

    // taking input using pointer
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int s=sum(a,n);
    cout<<"The sum of the array is:-"<<endl;
    cout<<s<<endl;
    return 0;
}

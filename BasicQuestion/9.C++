// Now lets code about array, it is similar to C

#include<iostream>
using namespace std;

int main(){
    int a[4]={1,2,3,4};
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;
    cout<<a[3]<<endl;
    //now by using loop i will take entry
    int i,n;
    cout<<"Enter the value of n:";
    cin>>n;
    for ( i = 0; i <= n; i++)
    {
        cout<<"THe value of "<<i+1<<" is:"<<i<<endl;
    }
    
    return 0;
}
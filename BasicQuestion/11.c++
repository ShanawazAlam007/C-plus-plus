// pointer and arry

#include<iostream>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    int *p=a;
    cout<<"By using arthemetic pointer"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<< *(p+i)<<endl; // by using arthematic pointer to get values
    }
    cout<<"By using arthemetic pointer get the address"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<< (p+i)<<endl; // by using arthematic pointer to get address
    }
    cout<<"By using array indexing"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<endl;
    }
    return 0;
}
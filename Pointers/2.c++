/*WAP to add two numbers using call by reference*/

#include<iostream>
using namespace std;

int sum(int *a, int *b){
    int c = *a+*b;
    return c;
}

int main(){
    int x,y;
    cout<<"Enter the value of x:"<<endl;
    cin>>x;
    cout<<"Enter the value of y:"<<endl;
    cin>>y;

    int *a=&x;
    int *b=&y;
    int c = sum(a,b);

    cout<<c<<endl;
}
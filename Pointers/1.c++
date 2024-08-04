/*WAP to add two number using pointer*/
#include<iostream>
using namespace std;

void add(int x , int y){
    cout<< x+y<<endl;
}

int main(){
    int x;
    cout<<"Enter the value of x";
    cin>>x;
    int *p=&x;
    int y;
    cout<<"Enter the value of y:";
    cin>>y;
    int *q= &y;
    add(*p , *q);
    return 0;
}


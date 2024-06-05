// about const and manipulation
#include<iostream>
#include<iomanip> // it is use to give width in the output
using namespace std;
int main()
{
    int a=4,b=5;
    float c=6.663;
    const int d=11;
    cout<<"Value of d is: "<<d;
    //int d=12; due to this it will give error because it the d is const.
    cout<<"The value of d is:"<<d;
    cout<<"Value of a without setw: "<<a<<endl;
    cout<<"Value of b without setw: "<<b<<endl;
    cout<<"Value of c without setw: "<<c<<endl;

    cout<<"Value of a with setw: "<<setw(4)<<a<<endl;
    cout<<"Value of b with setw: "<<setw(4)<<b<<endl;
    cout<<"Value of c with setw: "<<setw(4)<<c<<endl;
    return 0;
}

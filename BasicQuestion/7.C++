#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>> age;
    if (age<18)
    {
        cout<<"Your are below 18";
    }
    else if (age==18)
    {
        cout<<"You need pass to enter the party";
    }
    else if(age>18)
    {
        cout<<"You can come to party"; 
    }
    else
    {
        cout<<"CHala ja bhai";
    }
    return 0;
}

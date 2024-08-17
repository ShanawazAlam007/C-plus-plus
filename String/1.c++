#include<iostream>
using namespace std;

int main(){
    char b[10];
    cout<<"Enter the name: ";
    cin>>b;  // input->> Hello
    b[4]='d'; // Helld
    b[3]='\0'; // Hel
    cout<<"The name is :"<<b;
    return 0;
}
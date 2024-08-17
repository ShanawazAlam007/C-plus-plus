/*WAP to find the length of the string without using a library function*/

#include<iostream>
using namespace std;

int count_String(char x[]){
    int i;
    int c=0;
    for(i=0;x[i]!='\0';i++){
        c++;
    }
    return c;
}

int main(){

    char s[100];
    cout<<"ENter the string or any text:"<<endl;
    cin.getline(s,100);
    cout<<"The length of the inputed string  is :-"<<count_String(s)<<endl;
    return 0;
}
/*
Find the length using recursion of the string
*/

#include<iostream>
#include<string>

using namespace std;


int lenght(char s[]){
    if(s[0]=='\0'){
        return 0;
    }
    int smallLeng = lenght(s+1);
    return 1 + smallLeng;
}
int main(){
    char s[100];
    cout<<"Enter the String:";
    cin>>s;
    int len = lenght(s);
    cout<<"The size of the String is:"<<len<<endl;

    return 0;
}
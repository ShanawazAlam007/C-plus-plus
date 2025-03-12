/*Remove the X(this time x is user input) in the string*/

#include<iostream>
using namespace std;

void removeA(char s[], char a){
    if(s[0]=='\0'){
        return;
    }

    if(s[0]!=a){
        removeA(s+1,a);
    }else{
        int i = 1;
        for (;s[i]!='\0'; i++)
        {
            s[i-1]=s[i];
        }
        s[i-1]=s[i];
        removeA(s,a);
    }
}

int main(){
    char s[100];
    cout<<"Enter the string:";
    cin>>s;
    char a;
    cout<<"Enter the char you want to remove:"<<endl;
    cin>>a;
    removeA(s,a);
    cout<<"The string is:"<<s<<endl;

    return 0;
}
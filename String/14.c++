/*Remove the duplicate char in the string*/

#include<iostream>
using namespace std;

void RemoveDup(char s[]){
    if(s[0]=='\0'){
        return;
    }

    if(s[0]!=s[1]){
        RemoveDup(s+1);
    }else{
        int i = 1;
        for(;s[i]!='\0';i++){
            s[i]=s[i+1];
        }
        s[i]=s[i+1];
        RemoveDup(s);
    }
}

int main(){
    char s[100];
    cout<<"Enter the String:";
    cin>>s;
    cout<<"String before removing duplicate values:"<<s<<endl;
    RemoveDup(s);
    cout<<"String after removing duplicate values:"<<s<<endl;
    
    return 0;
}


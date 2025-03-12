/*Remove the duplicate char in the string*/

#include<iostream>
#include<string>
using namespace std;

void RemoveDup(string s){
    if(s.size()==0){
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
    string s;
    cout<<"Enter the String:";
    cin>>s;
    cout<<"String before removing duplicate values:"<<s<<endl;
    RemoveDup(s);
    cout<<"String after removing duplicate values:"<<s<<endl;
    
    return 0;
}


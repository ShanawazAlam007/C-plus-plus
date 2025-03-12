/*Remove the X in the string*/

#include<iostream>
#include<string>

using namespace std;

void removeX(char s[]){
    if(s[0]=='\0'){
        return;
    }
    if(s[0]!='x'){
        removeX(s+1);
    }else{
        int i = 1;
        for(;s[i]!='\0';i++){
            s[i-1]=s[i];
        }
        s[i-1]=s[i];
        removeX(s);
    }
}

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

    removeX(s);
    cout<<"The modified string is:"<<s<<endl;

    int leng = lenght(s);
    cout<<"The size of the String is:"<<leng<<endl;

    return 0;
}
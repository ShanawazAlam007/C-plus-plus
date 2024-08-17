/*WAP to rotate one string and compare with other and check if it is equal or
not if it equal return 1 otherwise 0*/

#include<iostream>
#include<string>

using namespace std;

int Rotation(string p, string q) 
{
    // Write your code here
    if(p.size()!=q.size()){
        return 0;
    }
    int size = p.size()-1;
    string s = "";
    for(int i = size;i>=0;i--){
        s=s+p[i];
    }
    cout<<s<<endl;
    if(s==q){
        return  1;
    }else{
        return 0;
    }
}


int main(){
    string m,n;
    cout<<"Enter the string in :";
    cin>>m;
    cout<<"Enter the string in n:";
    cin>>n;
    int a = Rotation(m,n);
    cout<<a<<endl;
}
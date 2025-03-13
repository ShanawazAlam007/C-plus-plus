/*WAP to find the factorial of the number using recursion*/

#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    cout<<n<<endl;
    return n*fact(n-1);
}

int main(){
    int t;
    cout<<"Enter the number:";
    cin>>t;
    int f= fact(t);
    cout<<"the factorial of the number "<<t<<" is"<<endl;
    cout<<f<<endl;
    return 0;
}
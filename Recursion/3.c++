/*WAP to find the nth Fibonacci number*/

#include<iostream>
using namespace std;

int fibonacii(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }

    int a= fibonacii(n-1) + fibonacii(n-2);
    return a;
}

int main(){
    int n;
    cout<<"Enter the number :-";
    cin>>n;
    int a=fibonacii(n);
    cout<<"The fibonacii series is: "<<a<<endl;
    return 0;
}

#include <iostream>
#include<math.h>
using namespace std;
int power(int X, int N)
{
    // Write your code here. 
    return pow(X,N);
}

int main(){
    int x,y;
    cout<<"Enter the number:"<<endl;
    cin>>x;
    cout<<"Enter the power:";
    cin>>y;
    cout<<"Power is :"<<power(x,y)<<endl;

    return 0;
}
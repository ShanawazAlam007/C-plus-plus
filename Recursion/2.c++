/*WAP to print upto n terms
  like n=5
  1 2 3 4 5
*/
#include<iostream>
using namespace std;

void print_upto_n(int n){
    if(n<1){
        return ;
    }
    print_upto_n(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"The upto number of "<<n<<"is"<<endl;
    print_upto_n(n);
}
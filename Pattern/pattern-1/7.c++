//tringle pattern
/* 
  1
  2 3
  4 5 6
  7 8 9 10*/

#include<iostream>
using namespace std;

int main(){
  int n,i,j;
  cin>>n;
  int p= 1;
  for ( i = 1; i <=n; i++)
  {
    for ( j = 1; j<=i; j++)
    {
      cout<<p;
      p++;
    }
    cout<<endl;
  }
  return 0;
}
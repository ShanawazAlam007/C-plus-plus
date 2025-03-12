//tringle pattern
/* 
  1
  2 3
  3 4 5
  4 5 6 7*/

#include<iostream>
using namespace std;

int main(){
  int n,i,j;
  cin>>n;
  for ( i = 1; i <=n; i++)
  {
    int p=i;
    for ( j = 1; j<=i; j++)
    {
      cout<<p<<" ";
      p++;
    }
    cout<<endl;
  }
  return 0;
}
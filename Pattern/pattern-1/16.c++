/*       1
        121
       12321
      1234321  
*/
#include "D:\Software\coding\C++\Pattern\pattern-1\15.c++"
#include<iostream>
using namespace std;

int main(){
    int i = 1;
    while(i < 5) {
         if(i == 3) {
            continue;
        }
        cout << i << " ";
        i++;
    }
    return 0;
}
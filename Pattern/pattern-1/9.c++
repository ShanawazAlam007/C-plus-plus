/* A B C D 
   B C D E
   C D E F 
   D E F G*/
   
#include<iostream>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;

    for (i = 0; i < n; i++) {
        char k = 'A' + i;
        for (j = 0; j < n; j++) {
            char c = k + j;
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}

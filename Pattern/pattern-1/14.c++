/*      1
       12
      123
     1234
 */
#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cout<<"Enter the value of n:";
    cin >> n;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n-i; j++) {
            cout << " ";
        }
        for (j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
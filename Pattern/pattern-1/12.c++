/*  *
    **
    ***
    ****
    *****
 */
#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;

    for (i = n; i >= 1; i--) {
        for (j = i; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}



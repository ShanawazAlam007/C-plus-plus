/*E
  DE
  CDE
  BCDE
  ABCDE*/

#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;

    for (i = n; i >= 1; i--) {
        char k = 'A' + i - 1;
        for (j = i; j <= n; j++) {
            cout << k;
            k++;
        }
        cout << endl;
    }
    
    return 0;
}

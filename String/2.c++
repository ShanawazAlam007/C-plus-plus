#include<iostream>
using namespace std;

int length(char a[]) {
    int i;
    int c = 0;
    for (i = 0; a[i] != '\0'; i++) {
        c++;
    }
    return c;
}

int main() {
    char b[100];
    cout << "Enter the text: ";
    cin.getline(b, 100);
    cout << "The length of the string is: " << length(b) << endl;
    return 0;
}

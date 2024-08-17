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

void ReverseString(char c[]) {
    int len = length(c);
    int i, j;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = c[i];
        c[i] = c[j];
        c[j] = temp;
    }
}


int main() {
    char b[100];
    cout << "Enter the text: ";
    cin.getline(b, 100);
    cout << "The length of the string is: " << length(b) << endl;
    
    ReverseString(b);
    
    cout << "The reversed string is: " << b << endl;
    return 0;
}
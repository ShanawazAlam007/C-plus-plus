#include <iostream>
using namespace std;

void count_vowel_and_conso(char a[]) {
    int vowel = 0;
    int cons = 0;

    for (int i = 0; a[i] != '\0'; i++) {
        // Compare the character with all possible cases of vowels
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
            a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
            vowel++;
        } else if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) {
            // Check if the character is an alphabet (consonant)
            cons++;
        }
    }

    cout << "No of vowels: " << vowel << endl;
    cout << "No of consonants: " << cons << endl;
}

int main() {
    char c[100];
    cin.getline(c, 100);
    count_vowel_and_conso(c);
    return 0;
}

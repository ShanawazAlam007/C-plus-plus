/*Here we know the loop in C langauge similar concept is applied here nothing else more
so we move further in pointers*/

#include <iostream>
using namespace std;

int main()
{
    int a = 12;  // Here, we create a variable 'a' which holds the value 12 and has a memory address
    int *b = &a; // Here, we create a pointer 'b' that holds the memory address of 'a'

    cout << a << endl;  // Output: 12 (Value of 'a')
    cout << &a << endl; // Output: Memory address of 'a'
    cout << b << endl;  // Output: Memory address of 'a' (Value stored in pointer 'b')
    cout << &b << endl; // Output: Memory address of 'b'
    cout << *b << endl; // Output: 12 (Value at the memory address stored in pointer 'b')

    // Now, let's introduce a double pointer (pointer to pointer)
    int **c;  // Here, we declare a double pointer 'c'
    c = &b;   // Here, we assign the address of 'b' to 'c'

    cout << "Here is the address of b: " << c << endl;  // Output: Address of 'b'
    cout << "Here is the value of b: " << *c << endl;   // Output: Memory address at 'b'
    cout << "Here is the value of b: " << **c << endl;  // Output: Value of 'b'
    cout<<"The adress of c: "<<&c<<endl; // Output: Address of C

    return 0;
}


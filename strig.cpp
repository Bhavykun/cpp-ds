#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello";
    char* p = str;

    cout << "First char: " << *p << endl;        // H
    cout << "Second char: " << *(p + 1) << endl; // e
    cout << "Whole string via pointer: " << p << endl; // Hello

    return 0;
}

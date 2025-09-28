#include <iostream>
using namespace std;

// Function that takes a pointer to int and prints the value
void PrintNumber(int* numberPtr) {
    cout << *numberPtr << endl;
}

// Function that takes a void pointer and prints based on type
void print(void* ptr, char type) {
    switch (type) {
        case 'i':
            cout << *((int*)ptr) << endl;
            break;
        case 'c':
            cout << *((char*)ptr) << endl;
            break;
        case 'f':
            cout << *((float*)ptr) << endl;
            break;
        default:
            cout << "Unknown type." << endl;
    }
}

int main() {
    int n = 5;

    // Print address of variable
    cout << &n << endl;

    int* ptr = &n;

    // Print address stored in pointer (should be same as &n)
    cout << ptr << endl;

    // Dereference pointer to get value
    cout << *ptr << endl;

    // Change value using pointer
    *ptr = 10;
    cout << n << endl;

    // Call function that prints via int pointer
    int number = 42;
    PrintNumber(&number);

    // Use void pointer function
    char ch = 'A';
    float f = 3.14f;
    print(&number, 'i');
    print(&ch, 'c');
    print(&f, 'f');

    return 0;
}

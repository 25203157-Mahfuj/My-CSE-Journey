#include <iostream>
using namespace std;

int main() {
    int num = 50;
    int *ptr = &num;

    cout << "Variable Value (num): " << num << endl;
    cout << "Address of Variable (&num): " << &num << endl;
    cout << "Pointer holds Address (ptr): " << ptr << endl;
    cout << "Value at Pointer (*ptr): " << *ptr << endl;
    *ptr = 100;
    cout << "New Value of num: " << num << endl;

    return 0;
}

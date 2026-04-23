#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr;

    cout << "First element: " << *ptr << endl;

    ptr++;
    cout << "Second element: " << *ptr << endl;

    ptr++;
    cout << "Third element: " << *ptr << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int A[100], noe, target, position = -1;

    cout << "Enter number of elements: ";
    cin >> noe;

    cout << "Enter array elements: ";
    for (int i = 0; i < noe; i++) {
        cin >> A[i];
    }

    cout << "Enter value to search: ";
    cin >> target;

    // Linear Search
    for (int i = 0; i < noe; i++) {
        if (A[i] == target) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        cout << "Element found at index " << position;
    }
    else {
        cout << "Element not found";
    }

    return 0;
}

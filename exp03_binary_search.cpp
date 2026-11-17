#include <iostream>
using namespace std;

int main() {
    int A[100], noe, target;
    int low, high, mid, position = -1;

    cout << "Enter number of elements: ";
    cin >> noe;

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < noe; i++) {
        cin >> A[i];
    }

    cout << "Enter value to search: ";
    cin >> target;

    low = 0;
    high = noe - 1;

    // Binary Search
    while (low <= high) {
        mid = (low + high) / 2;

        if (A[mid] == target) {
            position = mid;
            break;
        }
        else if (A[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
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

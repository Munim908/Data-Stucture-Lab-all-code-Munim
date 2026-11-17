#include <iostream>
using namespace std;

int main() {
    int A[100], noe;

    cout << "Enter number of elements: ";
    cin >> noe;

    if (noe <= 0 || noe > 100) {
        cout << "Invalid number of elements";
        return 0;
    }

    cout << "Enter array elements: ";
    for (int i = 0; i < noe; i++) {
        cin >> A[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < noe; i++) {
        cout << A[i] << " ";
    }

    return 0;
}

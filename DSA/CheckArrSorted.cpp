#include <iostream>
using namespace std;

bool Check(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;  // not sorted
        }
    }
    return true;  // sorted
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << (Check(arr, n) ? "Sorted" : "Not Sorted");
    return 0;
}

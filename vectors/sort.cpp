#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v;
    int input;

    cout << "Enter elements (Press Ctrl+D to stop in Linux/Mac, Ctrl+Z in Windows):\n";

    while (cin >> input) {
        v.push_back(input);
    }

    // print
    cout << "Vector elements:\n";
    for (int i : v) {
        cout << i << " ";
    }
    sort(v.begin(),v.end());
    cout << " After Sorting Vector elements:\n";
    for (int i : v) {
        cout << i << " ";
    }
    return 0;
}
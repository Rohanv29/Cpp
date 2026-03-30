#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int inputnums;

    cout << "enter integers" << endl;

    while (cin >> inputnums) {
        v.push_back(inputnums);
    }

    v.pop_back(); // removes last element
    v.erase(v.begin());

    cout << "vector elements" << endl;

    for (int i : v) {
        cout << i << " ";
    }

    cout << endl;
    cout << v.size();

    cout << "capacity is " << v.capacity();

    return 0;
}
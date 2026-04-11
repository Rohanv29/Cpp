#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n=5;
    

    vector<vector<int>> pascal(n);

    for(int i = 0; i < n; i++) {
        pascal[i].resize(i + 1);  // row size increases

        for(int j = 0; j <= i; j++) {
            if(j == 0 || j == i)
                pascal[i][j] = 1;
            else
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }

    // print triangle
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < pascal[i].size(); j++) {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
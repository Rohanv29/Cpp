#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {

    vector<vector<int>> mat(n, vector<int>(n));

    int left = 0, right = n - 1;
    int top = 0, bottom = n - 1;

    int num = 1;

    while (left <= right && top <= bottom) {

        // Left → Right
        for (int i = left; i <= right; i++) {
            mat[top][i] = num++;
        }
        top++;

        // Top → Bottom
        for (int i = top; i <= bottom; i++) {
            mat[i][right] = num++;
        }
        right--;

        // Right → Left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                mat[bottom][i] = num++;
            }
            bottom--;
        }

        // Bottom → Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                mat[i][left] = num++;
            }
            left++;
        }
    }

    return mat;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> result = generateMatrix(n);

    // Print matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
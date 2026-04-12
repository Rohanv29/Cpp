#include <iostream>
#include <vector>
using namespace std;

void spiral(vector<vector<int>> &mat) {

    int rows = mat.size();
    int cols = mat[0].size();

    int left = 0, right = cols - 1;
    int top = 0, bottom = rows - 1;

    while (left <= right && top <= bottom) {

        // Left → Right
        for (int i = left; i <= right; i++) {
            cout << mat[top][i] << " ";
        }
        top++;

        // Top → Bottom
        for (int i = top; i <= bottom; i++) {
            cout << mat[i][right] << " ";
        }
        right--;

        // Right → Left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << mat[bottom][i] << " ";
            }
            bottom--;
        }

        // Bottom → Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << mat[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> mat(rows, vector<int>(cols));

    // Input
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            cin >> mat[i][j];
        }
    }

    // Call
    spiral(mat);

    return 0;
}
#include <iostream>
using namespace std;
void multiply(int p, int q, int m, int n, int mat1[100][100], int mat2[100][100])
{
    int result[100][100] ={0};
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < q; k++)
            {
                result[i][j] = result[i][j] + (mat1[i][k] * mat2[k][j]);
            }
        }
    }
    // print multiplied matrix
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int p, q, m, n;
    cin >> p >> q >> m >> n;
    int  mat1[100][100], mat2[100][100];

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> mat1[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat2[i][j];
        }
    }
    if (m != q)
    {
        cout << "multiplication not possible" << endl;
    }
    else
    {
        multiply(p, q, m, n, mat1, mat2);
    }
    return 0;
}
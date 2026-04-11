#include<iostream>
using namespace std;
void transpose(int n,int m,int mat[100][100]){
    int transpose[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            transpose[j][i]=mat[i][j];
        }
    }
     //PRINT TRANSPOSE MATRIX 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<transpose[i][j]<<"  ";
        }
        cout<<endl;
    }

}
int main(){
    int n,m;
    cin>>n>>m;
    int mat[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    //-------> only valid for square matrix <----------
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         swap(mat[i][j],mat[j][i]);
    //     }
    // }
    transpose(n,m,mat);
    return 0;
}
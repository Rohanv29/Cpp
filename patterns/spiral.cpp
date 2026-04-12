#include<iostream>
using namespace std;

void spiral(int rows,int cols,int mat[100][100]){
    int left=0,right=cols-1,top=0,bottom=rows-1;

    while(left<=right && top<=bottom){

        // Left → Right
        for(int i=left;i<=right;i++){
            cout<<mat[top][i]<<" ";
        }
        top++;

        // Top → Bottom
        for(int i=top;i<=bottom;i++){
            cout<<mat[i][right]<<" ";
        }
        right--;

        // Right → Left
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<mat[bottom][i]<<" ";
            }
            bottom--;
        }

        // Bottom → Top
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<mat[i][left]<<" ";
            }
            left++;
        }
    }
}

int main(){
    int rows,cols;
    cin>>rows>>cols;

    int mat[100][100];

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>mat[i][j];
        }
    }

    spiral(rows,cols,mat);
    return 0;
}
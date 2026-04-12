#include<iostream>
#include<vector>
using namespace std;
//************method 1************* **/
int rectanglesum(vector<vector<int>>&mat,int l1,int l2,int r1,int r2){
    // for(int i=l1;i<=l2;i++){
    //     for(int j=r1;j<=r2;j++){
    //         sum=sum+mat[i][j];
    //     }
    // }
    //rowwise prefix sum
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            mat[i][j]+=mat[i][j-1];
        }
    }
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;     

    int sum = 0;

    //  Use prefix sum
    for(int i=r1;i<=r2;i++){
        if(c1 > 0)
            sum += mat[i][c2] - mat[i][c1-1];
        else
            sum += mat[i][c2];
    }
    return sum;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    int l1,l2,r1,r2;
    cin>>l1>>l2>>r1>>r2;
    cout<<"Matrix entered by user"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    // cout<<rectanglesum(mat,l1,l2,r1,r2);
    
    return 0;
}
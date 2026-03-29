#include<iostream>
using namespace std;
int main(){
    int arr[2][2]={{1,2},{3,4}},arr2[2][2]={{1,2},{3,4}},mul[2][2]={0};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                mul[i][j]+=arr[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<mul[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
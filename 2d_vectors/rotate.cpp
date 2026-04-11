#include<iostream>
using namespace std;
int main(){
    int n,m,arr[100][100];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int k=m-1,j=0;
        while(j<k){
            //swapp arr[i][j] and arr[i][k]
            swap(arr[i][j],arr[i][k]);
            j++;
            k--;
        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
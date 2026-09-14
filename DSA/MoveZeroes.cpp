#include<iostream>
using namespace std;
void moveZeroes(int n,int arr[]){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j++]=arr[i];
        }
    }
    while(j<n){
        arr[j++]=0;
    }

}
int main(){
    int n=10;
    int arr[n]={1,2,4,0,9,0,9,2,6,8};
    moveZeroes(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
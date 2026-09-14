#include<iostream>
using namespace std;
int RemoveDuplicate(int arr[],int n){
    int k=1;
    for(int i=1;i<n;i++){
        if(arr[i] !=arr[i-1]){
            arr[k]=arr[i];
            k++;
        }
    }
    return k;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<RemoveDuplicate(arr,n);
    return 0;
}
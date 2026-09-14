#include<iostream>
#include<climits>
using namespace std;

int Maxele(int n,int arr[]){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;

}
int Smax(int n,int arr[]){
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax< arr[i] && arr[i]<max){
            smax=arr[i];
        }
    }
    return smax;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Maxele(n,arr);
    cout<<Smax(n,arr);
}

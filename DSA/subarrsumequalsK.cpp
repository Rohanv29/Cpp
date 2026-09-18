#include<iostream>
#include<vector>
using namespace std;
int SubarrSum(vector<int>&arr,int n,int k){
    int c=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum == k){
                c++;
            }
        }
    }
    return c;
}
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<SubarrSum(arr,n,k);
    return 0;
}
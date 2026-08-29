#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majorityElement(vector<int>&arr,int n){
    sort(arr.begin(),arr.end());
    return arr[n/2];
}
int main(){
    int n;
    cin>>n;
    vector<int >arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<majorityElement(arr,n);
    return 0;
}
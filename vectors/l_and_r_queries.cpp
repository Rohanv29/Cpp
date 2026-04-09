#include<iostream>
#include<vector>
using namespace std;
// int query(int n,int *arr,int l,int r){
//     int sum=0;
//     for(int i=l;i<=r;i++){
//         sum=sum+arr[i];
//     }
//     return sum;
// }
// int main(){
//     int n,l,r;
//     cin>>n>>l>>r;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"result is : "<<query(n,arr,l,r);
//     return 0;
// }
// index-> 0,1,2,3,4,5,6
//vector-> 0 x1 x2
int main(){
    int n,l,r;
    cin>>n>>l>>r;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //prefix array
    int prefix[n];
    prefix[0]=v[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+v[i];
    }
    //answer query
    int res;
    if(l==0){
        res=prefix[r];
    }
    else{
        res=prefix[r]-prefix[l-1];
    }
    cout<<"result is : "<<res;
    return 0;
}
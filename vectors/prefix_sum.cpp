#include<iostream>
using namespace std;
//PREFIX SUM    
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum[n];
    sum[0]=arr[0];
    for(int i=1;i<=n;i++){
        sum[i]=sum[i-1]+arr[i];
        cout<<sum[i-1]<<" ";
    }
    
    return 0;
}

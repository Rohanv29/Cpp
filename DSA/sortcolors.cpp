#include<iostream>
using namespace std;
void Sortcol(int nums[],int n){
    int l=0,mid=0,r=n-1;
    while(mid<=r){
        if(nums[mid]==0){
            swap(nums[l],nums[mid]);
            l++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[r]);
            r--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<nums[i];
    }
}
int main(){
    int n=10;
    int arr[n]={1,2,0,0,2,1,1,2,0,1};
    Sortcol(arr,n);
    return 0;
}
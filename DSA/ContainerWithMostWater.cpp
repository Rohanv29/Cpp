#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxArea(vector<int>&height,int n){
    int armax=0;
    int i=0,j=n-1;
    while(i<j){
        int w= j-i;
        int ht=min(height[i],height[j]);
        int area=w*ht;
        armax=max(armax,area);
        if(height[i]<height[j]) i++;
        else j--;
    }
    return armax;
    
}
int main(){
    int n;
    cin>>n;
    vector<int >height(n);
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    cout<<maxArea(height,n);
    return 0;
}
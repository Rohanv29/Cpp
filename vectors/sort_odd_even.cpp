#include<iostream>
#include<vector>
using namespace std;
void sort_odd_even(vector<int>&v){
    int left=0,evn=0,n=v.size(),right=n-1;
    vector<int>temp(n);
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            temp[left++]=v[i];
        }
        else{
            temp[right--]=v[i];
        }
        
    }  
    v=temp;     
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sort_odd_even(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
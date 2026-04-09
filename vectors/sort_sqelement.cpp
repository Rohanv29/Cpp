#include<iostream>
#include<vector>
using namespace std;
void sort_squares(vector<int>&v){
    int left=0,evn=0,n=v.size(),pos=n-1,right=n-1;
    vector<int>result(n);
    while(left<=right){
        if(abs(v[left])>abs(v[right])){
            result[pos]=v[left]*v[left];
            left++;
        }
        else{
            result[pos]=v[right]*v[right];
            right--;
        }
        pos--;
    }
    v=result;
        
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
    sort_squares(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
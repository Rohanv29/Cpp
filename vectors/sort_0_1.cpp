#include<iostream>
#include<vector>
using namespace std;
void sort_0_and_1(vector<int>&v){
    int zeros=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            zeros++;
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<zeros){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }


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
    sort_0_and_1(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
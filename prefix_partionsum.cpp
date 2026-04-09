#include<iostream>
#include<vector>
using namespace std;
bool checkprefixsuffixsum(vector<int>&v){
    int total=0;
    for(int i=0;i<v.size();i++){
        total+=v[i];
    }
    int prefix_sum=0;
    for(int i=0;i<v.size();i++){
        prefix_sum+=v[i];
        int suffix_sum=total-prefix_sum;
        if(suffix_sum==prefix_sum){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<checkprefixsuffixsum(v)<<endl;

    return 0;
}
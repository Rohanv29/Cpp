#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector
int main(){
    int n;
    cin>>n;
    vector<vector<int> >intervals(n);
    for(int i=0;i<n;i++){
        cin>>intervals[i];
    }
    cout<<MergeIntervals(intervals,n);
    return 0;
}
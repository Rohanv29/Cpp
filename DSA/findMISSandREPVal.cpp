#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
vector<int> MissAndRepeat(vector<vector<int>>&grid,int n){
    int a,b;
    long long act_sum=0;
    unordered_set<int>s;
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int num=grid[i][j];
            act_sum+=num;
            if(s.find(num)!=s.end()){
                a=num;
            }
            s.insert(num);
        }
    }
    long long total=n*n;
    long long exp_sum=total*(total+1)/2;
    b=exp_sum-act_sum+a;
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>grid(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    vector<int> result = MissAndRepeat(grid, n);

    cout << result[0] << " " << result[1];
    return 0;
}
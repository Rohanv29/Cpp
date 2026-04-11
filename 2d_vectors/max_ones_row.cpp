#include<iostream>
#include<vector>
using namespace std;
int firstOne(vector<int>&V){
    int low = 0, high = V.size() - 1;
    int ans = -1;

    while(low <= high){
        int mid = (low + high) / 2;

        if(V[mid] == 1){
            ans = mid;
            high = mid - 1;  // go left
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int maximumOnesRow(vector<vector<int>>& V){
    int maxOnes = 0;
    int maxRow = -1;
    int m = V[0].size();

    for(int i = 0; i < V.size(); i++){
        int idx = firstOne(V[i]);  // 🔥 use binary search

        if(idx != -1){
            int ones = m - idx;

            if(ones > maxOnes){
                maxOnes = ones;
                maxRow = i;
            }
        }
    }
    return maxRow;
}
// int maximumOnesRow(vector<vector<int>>&V){
//     int maxOnes=0;
//     int maxonesrow=-1;
//     int columns=V[0].size();
//     for(int i=0;i<V.size();i++){
//         for(int j=0;j<V[i].size();j++){
//             if(V[i][j]==1){
//                 int numberOfOnes=columns-j;
//                 if(numberOfOnes>maxOnes){
//                     maxOnes=numberOfOnes;
//                     maxonesrow=i;
//                 }
//                 break;
//             }
//         }
//     }
//     return maxonesrow;

// }
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    int res=maximumOnesRow(vec);
    cout<<res<<endl;
    return 0;
}
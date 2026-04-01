#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int k = 2;
    int n = v.size();

    vector<int> temp(n);

    for(int i=0;i<n;i++){
        temp[(i+k)%n] = v[i];
        // temp[i] = v[(i+k)%n]; LEFT ROTATION
    }

    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     vector<int> v = {1,2,3,4,5};
//     int k = 2;
//     int n = v.size();

//     k = k % n;

//     reverse(v.begin(), v.end());
//     reverse(v.begin(), v.begin() + k);
//     reverse(v.begin() + k, v.end());

//     for(int x : v){
//         cout<<x<<" ";
//     }

//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"enter number for target sum : ";
    cin>>x;
    vector<int>sum(10);
    for(int i=0;i<10;i++){
        cin>>sum[i];
    }
    bool found=false;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            for(int k=j+1;k<10;k++){
                if(sum[i]+sum[j]+sum[k]==x){
                    cout << "triplets are " << sum[i] << "," << sum[j]<<"and"<<sum[k]
                     << " whose sum is " << x << endl;
                     found=true;
                }
            }
        }
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int input,even_sum=0,odd_sum=0,diff;
    cout<<"enter elemnts(press any key to stop)"<<endl;

    while(cin>>input){
        v.push_back(input);
    }
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            even_sum+=v[i];
        }
        else if(i%2!=0){
            odd_sum+=v[i];
        }
    }
    diff=even_sum-odd_sum;
    cout<<"difference is : "<<diff;
    return 0;
}
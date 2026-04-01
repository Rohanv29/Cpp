#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(10);

    for(int i=0;i<10;i++){
        cin>>v[i];
    }

    for(int i=0;i<10;i++){
        bool isUnique = true;

        for(int j=0;j<10;j++){
            if(i != j && v[i] == v[j]){
                isUnique = false;
                break;
            }
        }

        if(isUnique){
            cout<<"unique number is : "<<v[i]<<endl;
        }
    }

    return 0;
}
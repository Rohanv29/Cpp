#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x;
    cout<<"enter number for target"<<endl;
    cin>>x;

    vector<int> sum(5);

    // Correct input
    for(int i = 0; i < 5; i++){
        cin >> sum[i];
    }

    bool found = false;

    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(sum[i] + sum[j] == x){
                cout << "two numbers are " << sum[i] << " and " << sum[j]
                     << " whose sum is " << x << endl;
                found = true;
            }
        }
    }

    if(!found){
        cout << "No possible pair found" << endl;
    }

    return 0;
}
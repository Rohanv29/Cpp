#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);

    for(int i = 0; i < 6; i++){
        cin >> v[i];
    }

    int x;
    cout << "Enter x to find last occurrence: ";
    cin >> x;

    int occ = -1;   // important
    int count = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == x){
            occ = i;    // keeps updating → last occurrence
            count++;
        }
    }

    if(occ == -1){
        cout << "Element not found" << endl;
    } else {
        cout << "Last occurrence index: " << occ << endl;
        cout << "Total occurrences: " << count << endl;
    }

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
vector<int>v;
// v.push_back(10);
// v.push_back(20);  comes innside mainn func
int main(){
    v.push_back(10);
    v.push_back(20); 
// ****** ACCESSING ELEMENTS***********
    cout<<v[0]<<endl;//using index 
    cout << v.at(1)<<endl;  // safer (throws error if out of range)
    cout << v.front()<<endl; // first element
    cout << v.back()<<endl;  // last element
// ******** TRAVERSING VECTOR**********
    for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
}
    return 0;
}
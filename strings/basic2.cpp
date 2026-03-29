#include<iostream>
using namespace std;
int main(){
    string str ;
    cout<<"enter an character array:";
    // cin>>str;
    //cin.getline(str,len,delim?)
    getline(cin,str);
    cout<<"output is: "<<str<<endl;
    return 0;
}
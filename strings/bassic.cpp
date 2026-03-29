#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"enter an character array:";
    // cin>>str;
    //cin.getline(str,len,delim?)
    cin.getline(str,100,'$');
    cout<<"output is: "<<str<<endl;
    return 0;
}
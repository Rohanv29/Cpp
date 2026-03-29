#include<iostream>
#include<string>
using namespace std;
// void revstr(string &str){
//      int n=str.length();
//      for(int i=0;i<n/2;i++){
//         swap(str[i],str[n-1-i]);
//      }
// }
// int main(){
//     string str;
//     cout<<"enter a string : ";
//     getline(cin,str);
//     revstr(str);
//     cout<<"reverse string : "<<str;
//     return 0;
// }
int main(){
    string str="rohan verma";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}
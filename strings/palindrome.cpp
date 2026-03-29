#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// void checkPalindrome(string str){
//     int n = str.length();
//     bool isPalindrome = true;

//     for(int i = 0; i < n/2; i++){
//         if(str[i] != str[n-1-i]){
//             isPalindrome = false;
//             break;
//         }
//     }

//     if(isPalindrome){
//         cout<<"Given string is palindrome"<<endl;
//     }
//     else{
//         cout<<"Given string is not palindrome"<<endl;
//     }
// }
void checkpalindrome(string checkstr){
    string temp=checkstr;
    int n=checkstr.length();
    reverse(checkstr.begin(),checkstr.end());
    if(temp==checkstr){
        cout<<"Given string is palindrome"<<endl;
    }
    else{
        cout<<"Given string is not palindrome"<<endl;
    }

}

int main(){
    string str;
    cout<<"enter a string : ";
    getline(cin,str);

    checkPalindrome(str);

    return 0;
}
#include <iostream>
using namespace std;
bool Palindrome(string s){
        int j=s.length()-1;
        for(int i=0;i<s.length()/2;i++){
            if(s[i]!=s[j--]){
                return false;
            }
        }
        return true;
    }
int main(){
    string s="naman";
    cout<<Palindrome(s)<<endl;
    cout<<'a'+1<<endl;

    return 0;
}
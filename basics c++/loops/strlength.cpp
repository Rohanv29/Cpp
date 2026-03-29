#include<iostream>
using namespace std;

int findLength(string str){
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }

    return count;
}

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);

    int len = findLength(str);

    cout<<"Length of string = "<<len;

    return 0;
}
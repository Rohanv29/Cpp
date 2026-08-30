#include<iostream>
using namespace std;
// double mypow(int x,long long n){
//     long long N=n;
//     if(N<0){
//         x=1/x;
//         N=-N;
//     }
//     double ans=1;
//     while(N>0){
//         if(N%2==1){
//             ans=ans*x;
//         }
//         x=x*x;
//         N=N/2;
//     }

//     return ans;
// }
// int main(){
//     long long n;
//     int x;
//     cin>>n;
//     cin>>x;
//     cout<<mypow(x,n);
//     return 0;
// }
#include <iostream>
using namespace std;

double power(double x, long long n) {

    // Base case
    if(n == 0)
        return 1;

    // Calculate x^(n/2)
    double half = power(x, n / 2);

    // If n is even
    if(n % 2 == 0)
        return half * half;

    // If n is odd
    else
        return half * half * x;
}

double myPow(double x, int n) {

    long long N = n;

    // Handle negative exponent
    if(N < 0) {
        x = 1 / x;
        N = -N;
    }

    return power(x, N);
}

int main() {

    double x;
    int n;

    cin >> x >> n;

    cout << myPow(x, n);

     return 0;
}

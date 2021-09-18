/*
    Contest Name : Codeforces Round #641 (Div. 2)
    Problem Title : A - Orac and Factors
    Problem Url : https://codeforces.com/contest/1350/problem/A
    Verdict : Accepted
    Time : 31 ms
    Memory : 3900 KB
*/

#include<bits/stdc++.h>

using namespace std;

int isPrime(int n){
    int k = -1;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0){
            k = i;
            break;
        }
    }
    return k;
}

int main(){
    int T;
    cin >> T;
    
    while(T--){
        long long n, k;
        cin >> n >> k;

        int t = isPrime(n);

        if(t == -1) cout << n + n + 2 * (k - 1);
        else cout << n + t + 2 * (k - 1);
        cout << '\n';
    }
}
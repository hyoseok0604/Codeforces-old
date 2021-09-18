/*
    Contest Name : Codeforces Round #641 (Div. 2)
    Problem Title : A - Orac and Factors
    Problem Url : https://codeforces.com/contest/1350/problem/A
    Verdict : Wrong answer on pretest 1
    Time : 15 ms
    Memory : 3600 KB
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

        n = n + 2 * (k - 1);

        if(t == -1) cout << n + n;
        else cout << n + t;
        cout << '\n';
    }
}
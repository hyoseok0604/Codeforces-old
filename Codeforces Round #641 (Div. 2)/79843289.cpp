/*
    Contest Name : Codeforces Round #641 (Div. 2)
    Problem Title : A - Orac and Factors
    Problem Url : https://codeforces.com/contest/1350/problem/A
    Verdict : Wrong answer on pretest 2
    Time : 15 ms
    Memory : 3600 KB
*/

#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    bool isPrime = false;
    for(int i = 2 ; i < sqrt(n) ; i++){
        if(n % i == 0){
            isPrime = true;
            break;
        }
    }
    return !isPrime;
}

int main(){
    int T;
    cin >> T;
    
    while(T--){
        long long n, k;
        cin >> n >> k;

        if(isPrime(n)) cout << n + n + 2 * (k - 1);
        else cout << n + 2 * k;
        cout << '\n';
    }
}
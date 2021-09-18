/*
    Contest Name : Codeforces Round #641 (Div. 2)
    Problem Title : A - Orac and Factors
    Problem Url : https://codeforces.com/contest/1350/problem/A
    Verdict : Time limit exceeded on pretest 2
    Time : 2000 ms
    Memory : 3600 KB
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        while(k--){
            int div = 1;
            for(int i = 2 ; i <= sqrt(n) ; i++){
                if(n % i == 0){
                    div = i;
                    break;
                }
            }
            if(div == 1) div = n;
            n += div;
        }
        cout << n << '\n';
    }
}
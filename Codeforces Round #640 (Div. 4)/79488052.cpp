/*
    Contest Name : Codeforces Round #640 (Div. 4)
    Problem Title : C - K-th Not Divisible by n
    Problem Url : https://codeforces.com/contest/1352/problem/C
    Verdict : Accepted
    Time : 31 ms
    Memory : 3600 KB
*/

#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(k % (n - 1) == 0) cout << k + k / (n - 1) - 1 << '\n';
        else cout << k + k / (n - 1) << '\n';
    }
}
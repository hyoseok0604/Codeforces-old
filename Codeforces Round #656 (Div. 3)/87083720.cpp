/*
    Contest Name : Codeforces Round #656 (Div. 3)
    Problem Title : A - Three Pairwise Maximums
    Problem Url : https://codeforces.com/contest/1385/problem/A
    Verdict : Accepted
    Time : 46 ms
    Memory : 3600 KB
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int m = max(a, max(b, c));
        if(a == b && b == c){
            cout << "YES\n" << a << ' ' << a << ' ' << a << '\n';
        }else if(a == b && b == m){
            cout << "YES\n" << a << ' ' << c << ' ' << c << '\n';
        }else if(b == c && b == m){
            cout << "YES\n" << b << ' ' << a << ' ' << a << '\n';
        }else if(c == a && a == m){
            cout << "YES\n" << a << ' ' << b << ' ' << b << '\n';
        }else{
            cout << "NO\n";
        }
        
    }
}
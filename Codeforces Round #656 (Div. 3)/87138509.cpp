/*
    Contest Name : Codeforces Round #656 (Div. 3)
    Problem Title : D - a-Good String
    Problem Url : https://codeforces.com/contest/1385/problem/D
    Verdict : Accepted
    Time : 31 ms
    Memory : 4200 KB
*/

#include<bits/stdc++.h>

using namespace std;

int solve(char c, string &str, int s, int e){

    // cout << c << ' ' << s << ' ' << e << '\n';
    // cout << str << '\n';

    if(s == e - 1){
        if(str[s] == c) return 0;
        else return 1;
    }

    int mid = (s + e) / 2;


    int l = 0, r = 0;
    for(int i = s ; i < e ; i++){
        if(str[i] != c){
            if(i < mid) l++;
            else r++;
        }
    }

    // cout << l << ' ' << r << '\n';
    
    return min(l + solve(c + 1, str, mid, e), r + solve(c + 1, str, s, mid));
}

int main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        cout << solve('a', s, 0, n) << '\n';
    }
}
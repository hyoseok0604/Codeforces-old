/*
    Contest Name : Codeforces Round #705 (Div. 2)
    Problem Title : B - Planet Lapituletti
    Problem Url : https://codeforces.com/contest/1493/problem/B
    Verdict : Wrong answer on pretest 2
    Time : 0 ms
    Memory : 100 KB
*/

#include<bits/stdc++.h>

using namespace std;

#define lli long long
#define TC int TC;cin>>TC;while(TC--)
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0)
#define uMin(a, b) a = min(a, b)
#define uMax(a, b) a = max(a, b)
#define mset(a, arr) memset(arr, a, sizeof(arr))
#define piii pair<lli, pair<lli, lli>>
#define piiii pair<pair<lli, lli>, pair<lli, lli>>
#define ff first
#define ss second

#define rep(i, a, b) for(int i = (a) ; i < (b) ; i++)
#define rep1(i, a, b) for(int i = (a) ; i <= (b) ; i++)
#define rep2(i, a, b) for(int i = (a) ; i >= (b) ; i--)

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int change(int n){
    if(n == 0) return 0;
    if(n == 1 || n == 8) return n;
    if(n == 2) return 5;
    if(n == 5) return 2;
    return -1;
}

int mirror(int n){
    int ten = n / 10;
    int one = n % 10;
    return change(one) * 10 + change(ten);
}

int char2i(char c){
    return c - '0';
}

int main(){
    fastIO();

    TC{
        int h, m;
        string s;
        cin >> h >> m >> s;
        
        // 0, 1, 2, 5, 8
        vector<int> can;
        vector<int> reverse;
        int cans[5] = {0, 1, 2, 5, 8};
        rep(i, 0, 5){
            rep(j, 0, 5){
                can.push_back(cans[i] * 10 + cans[j]);
                reverse.push_back(mirror(cans[i] * 10 + cans[j]));
            }
        }

        int nowh = char2i(s[0]) * 10 + char2i(s[1]);
        int nowm = char2i(s[3]) * 10 + char2i(s[4]);

        int ansh = -1;
        int ansm = -1;

        rep(i, 0, can.size()){
            if(can[i] >= nowh && reverse[i] <= m - 1 && ansh == -1 && can[i] <= h - 1) ansh = can[i];
            if(can[i] >= nowm && reverse[i] <= h - 1&& ansm == -1 && can[i] <= m - 1) ansm = can[i];
        }

        if(ansh == -1) ansh = 0;
        if(ansm == -1) ansm = 0;

        if(ansh < 10) cout << "0";
        cout << ansh;
        cout << ":";
        if(ansm < 10) cout << "0";
        cout << ansm;
        cout << '\n';
    }
}
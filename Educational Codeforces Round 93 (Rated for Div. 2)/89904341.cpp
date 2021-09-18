/*
    Contest Name : Educational Codeforces Round 93 (Rated for Div. 2)
    Problem Title : B - Substring Removal Game
    Problem Url : https://codeforces.com/contest/1398/problem/B
    Verdict : Accepted
    Time : 31 ms
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

int main(){
    fastIO();

    TC{
        string s;
        cin >> s;

        vector<int> v;
        int cnt = 0;
        rep(i, 0, s.length()){
            if(s[i] == '1') cnt++;
            if(s[i] == '0'){
                if(cnt != 0){
                    v.push_back(cnt);
                    cnt = 0;
                }
            }
        }

        if(cnt != 0) v.push_back(cnt);

        sort(v.begin(), v.end(), greater<int>());

        int ans = 0;

        rep(i, 0, v.size()){
            if(i % 2 == 0) ans += v[i];
        }

        cout << ans << "\n";
    }
}
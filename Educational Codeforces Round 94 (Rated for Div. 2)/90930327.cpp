/*
    Contest Name : Educational Codeforces Round 94 (Rated for Div. 2)
    Problem Title : C - Binary String Reconstruction
    Problem Url : https://codeforces.com/contest/1400/problem/C
    Verdict : Wrong answer on test 2
    Time : 30 ms
    Memory : 0 KB
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
        int x;
        cin >> s >> x;

        bool arr[s.length()];
        mset(0, arr);

        int len = s.length();

        rep(i, 0, len){
            if(s[i] == '1'){
                if(i + x < len){
                    arr[i+x] = true;
                }
                if(i - x >= 0){
                    arr[i-x] = true;
                }
            }
        }

        bool flag = false;

        rep(i, 0, len){
            if(s[i] == '0'){
                if(i + x < len && arr[i+x]){
                    flag |= true;
                }
                if(i - x >= 0 && arr[i-x]){
                    flag |= true;
                }
            }
        }

        if(flag) cout << -1 << '\n';
        else{
            rep(i, 0, len){
                if(arr[i]) cout << 1;
                else cout << 0;
            }
            cout << '\n';
        }
    }
}
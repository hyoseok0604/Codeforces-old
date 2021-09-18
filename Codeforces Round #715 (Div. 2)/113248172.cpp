/*
    Contest Name : Codeforces Round #715 (Div. 2)
    Problem Title : D - Binary Literature
    Problem Url : https://codeforces.com/contest/1509/problem/D
    Verdict : Wrong answer on pretest 3
    Time : 31 ms
    Memory : 1200 KB
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

int main(){
    fastIO();

    TC{
        int n;
        cin >> n;

        string s[3];
        rep(i, 0, 3) cin >> s[i];

        int cnt[3][2];
        mset(0, cnt);
        rep(i, 0, 3){
            rep(j, 0, s[i].length()){
                cnt[i][(s[i][j] - '0') % 2]++;
            }
        }

        int x = -1, y = -1;
        int mn = 1e9;
        rep(i, 0, 3){
            rep(j, i + 1, 3){
                int a = abs(cnt[i][0] - cnt[j][0]) + abs(cnt[i][1] - cnt[j][1]);
                if(a < mn) x = i, y = j, mn = a;
            }
        }

        int c1 = 0;
        int c2 = 0;

        while(c1 < n * 2 && c2 < n * 2){
            if(s[x][c1] == s[y][c2]){
                cout << s[x][c1];
                c1++;
                c2++;
            }else{
                if(c1 < c2) cout << s[x][c1++];
                else cout << s[y][c2++];
            }
        }

        if(c1 == n * 2){
            rep(i, c2, n * 2){
                cout << s[y][i];
            }
        }else{
            rep(i, c1, n * 2){
                cout << s[x][i];
            }
        }

        cout << '\n';
    }
}
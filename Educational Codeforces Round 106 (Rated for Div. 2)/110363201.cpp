/*
    Contest Name : Educational Codeforces Round 106 (Rated for Div. 2)
    Problem Title : C - Minimum Grid Path
    Problem Url : https://codeforces.com/contest/1499/problem/C
    Verdict : Wrong answer on test 2
    Time : 15 ms
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

int main(){
    fastIO();
    
    TC{
        int n;
        cin >> n;

        vector<int> c1;
        vector<int> c2;
        rep(i, 0, n){
            int k;
            cin >> k;
            if(i % 2 == 0) c1.push_back(k);
            else c2.push_back(k);
        }

        int mna1[c1.size()];
        int mna2[c2.size()];

        int idxa1[c1.size()];
        int idxa2[c2.size()];

        int psum1[c1.size()+1];
        int psum2[c2.size()+1];
        mset(0, psum1);
        mset(0, psum2);
        
        int mn1, mn2;
        mn1 = mn2 = 1e9;
        int idx1, idx2;
        idx1 = idx2 = 0;
        rep(i, 0, c1.size()){
            if(c1[i] < mn1){
                mn1 = c1[i];
                idx1 = i;
            }

            psum1[i+1] = psum1[i] + c1[i];

            mna1[i] = mn1;
            idxa1[i] = idx1;
        }
        rep(i, 0, c2.size()){
            if(c2[i] < mn2){
                mn2 = c2[i];
                idx2 = i;
            }

            psum2[i+1] = psum2[i] + c2[i];

            mna2[i] = mn2;
            idxa2[i] = idx2;
        }

        // cout4(mn1, mn2, idx1, idx2);

        lli ans = 1e16;
        rep(i, 0, (n + 1) / 2){
            rep1(j, i-1, i+1){
                if(j < 0 || j >= (n / 2)) continue;

                // i + 1 번의 이동 보장
                // j + 1 번의 이동 보장

                lli tmp = 0;

                int x1 = idxa1[i];
                int y1 = idxa2[j];
                // cout2(x1, y1);

                tmp += psum1[x1];
                tmp += psum2[y1];

                tmp += c1[x1] * (n - i);
                tmp += c2[y1] * (n - j);

                tmp += psum1[i+1] - psum1[x1+1];
                tmp += psum2[j+1] - psum2[y1+1];

                ans = min(ans, tmp);
            }
        }

        cout << ans << '\n';
    }
}
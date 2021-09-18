/*
    Contest Name : Codeforces Round #684 (Div. 2)
    Problem Title : C1 - Binary Table (Easy Version)
    Problem Url : https://codeforces.com/contest/1440/problem/C1
    Verdict : Wrong answer on pretest 1
    Time : 15 ms
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

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int delta[4][2] = {{0, 0}, {1, 0}, {0, 1}, {1, 1}};

int main(){
    fastIO();
    
    TC{
        int n, m;
        cin >> n >> m;

        int a[n][m];
        rep(i, 0, n){
            string s;
            cin >> s;
            rep(j, 0, m){
                a[i][j] = s[j] - '0';
            }
        }

        int ans[n*m][6];
        mset(0, ans);
        int anscur = 0;

        rep(i, 0, n-1){
            rep(j, 0, m-1){
                queue<pair<int, int>> zero;
                queue<pair<int, int>> one;
                rep(k, 0, 4){
                    int ni = i + delta[k][0];
                    int nj = j + delta[k][1];

                    if(a[ni][nj] == 0) zero.push({ni, nj});
                    else one.push({ni, nj});
                }

                int x, y;
                x = y  = 0;
                while(one.size() > 0){
                    switch(one.size()){
                        case 1:
                            rep(k, 0, 2){
                                x = one.front().first;
                                y = one.front().second;
                                ans[anscur][k * 2] = x;
                                ans[anscur][k * 2 + 1] = y;
                                one.pop();
                                zero.push({x, y});
                            }
                            x = zero.front().first;
                            y = zero.front().second;
                            ans[anscur][4] = x;
                            ans[anscur][5] = y;
                            zero.pop();
                            one.push({x, y});
                            anscur++;
                            break;
                        case 2:
                            rep(k, 0, 2){
                                x = one.front().first;
                                y = one.front().second;
                                ans[anscur][k * 2] = x;
                                ans[anscur][k * 2 + 1] = y;
                                one.pop();
                                zero.push({x, y});
                            }
                            x = zero.front().first;
                            y = zero.front().second;
                            ans[anscur][4] = x;
                            ans[anscur][5] = y;
                            zero.pop();
                            one.push({x, y});
                            anscur++;
                            break;
                        case 3:
                            rep(k, 0, 3){
                                x = one.front().first;
                                y = one.front().second;
                                ans[anscur][k * 2] = x;
                                ans[anscur][k * 2 + 1] = y;
                                one.pop();
                                zero.push({x, y});
                            }
                            anscur++;
                            break;
                        case 4:
                            rep(k, 0, 3){
                                x = one.front().first;
                                y = one.front().second;
                                ans[anscur][k * 2] = x;
                                ans[anscur][k * 2 + 1] = y;
                                one.pop();
                                zero.push({x, y});
                            }
                            anscur++;
                            break;
                    }
                }

                
            }
        }
        cout << anscur << '\n';
        rep(i, 0, anscur){
            rep(j, 0, 6){
                cout << ans[i][j] + 1 << ' ';
            }
            cout << '\n';
        }
    }
}
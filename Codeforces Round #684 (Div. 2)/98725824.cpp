/*
    Contest Name : Codeforces Round #684 (Div. 2)
    Problem Title : C1 - Binary Table (Easy Version)
    Problem Url : https://codeforces.com/contest/1440/problem/C1
    Verdict : Accepted
    Time : 31 ms
    Memory : 700 KB
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

        // 작은걸 세로로 두고 해야함

        int ans[n*m*3][6];
        mset(0, ans);
        int count = 0;

        int x, y;
        x = y = 0;

        if(n <= m){
            for(int i = 0 ; i < n - 1 ; i += 2){
                for(int j = 0 ; j < m - 1 ; j++){
                    switch(a[i][j] + a[i+1][j]){
                        case 1:
                            if(a[i][j] == 1){
                                ans[count][0] = i;
                                ans[count][1] = j;
                                a[i][j] = 0;
                            }else{
                                ans[count][0] = i+1;
                                ans[count][1] = j;
                                a[i+1][j] = 0;
                            }
                            ans[count][2] = i;
                            ans[count][3] = j+1;
                            ans[count][4] = i+1;
                            ans[count][5] = j+1;
                            a[i][j+1] = (a[i][j+1] + 1) % 2;
                            a[i+1][j+1] = (a[i+1][j+1] + 1) % 2;
                            count++;
                            break;
                        case 2:
                            ans[count][0] = i;
                            ans[count][1] = j;
                            a[i][j] = 0;
                            ans[count][2] = i+1;
                            ans[count][3] = j;
                            a[i+1][j] = 0;
                            ans[count][4] = i+1;
                            ans[count][5] = j+1;
                            a[i+1][j+1] = (a[i+1][j+1] + 1) % 2;
                            count++;
                            break;
                    }
                }
            }
            if(n % 2 == 1){
                int i = n - 2;
                for(int j = 0 ; j < m - 1 ; j++){
                    switch(a[i][j] + a[i+1][j]){
                        case 1:
                            if(a[i][j] == 1){
                                ans[count][0] = i;
                                ans[count][1] = j;
                                a[i][j] = 0;
                            }else{
                                ans[count][0] = i+1;
                                ans[count][1] = j;
                                a[i+1][j] = 0;
                            }
                            ans[count][2] = i;
                            ans[count][3] = j+1;
                            ans[count][4] = i+1;
                            ans[count][5] = j+1;
                            a[i][j+1] = (a[i][j+1] + 1) % 2;
                            a[i+1][j+1] = (a[i+1][j+1] + 1) % 2;
                            count++;
                            break;
                        case 2:
                            ans[count][0] = i;
                            ans[count][1] = j;
                            a[i][j] = 0;
                            ans[count][2] = i+1;
                            ans[count][3] = j;
                            a[i+1][j] = 0;
                            ans[count][4] = i+1;
                            ans[count][5] = j+1;
                            a[i+1][j+1] = (a[i+1][j+1] + 1) % 2;
                            count++;
                            break;
                    }
                }
            }

            for(int i = 0 ; i < n - 1 ; i += 2){
                int j = m - 2;
                queue<pair<int, int>> one;
                queue<pair<int, int>> zero;

                rep(k, 0, 4){
                    int ni = i + delta[k][0];
                    int nj = j + delta[k][1];

                    if(a[ni][nj] == 0) zero.push({ni, nj});
                    else one.push({ni, nj});
                }

                while(!one.empty()){
                    switch(one.size()){
                        case 1:
                            rep(k, 0, 2){
                                x = zero.front().first;
                                y = zero.front().second;
                                ans[count][k * 2] = x;
                                ans[count][k * 2 + 1] = y;
                                zero.pop();
                                one.push({x, y});
                                a[x][y] = 1;
                            }
                            x = one.front().first;
                            y = one.front().second;
                            ans[count][4] = x;
                            ans[count][5] = y;
                            one.pop();
                            zero.push({x, y});
                            a[x][y] = 0;
                            count++;
                            break;
                        case 2:
                            rep(k, 0, 2){
                                x = zero.front().first;
                                y = zero.front().second;
                                ans[count][k * 2] = x;
                                ans[count][k * 2 + 1] = y;
                                zero.pop();
                                one.push({x, y});
                                a[x][y] = 1;
                            }
                            x = one.front().first;
                            y = one.front().second;
                            ans[count][4] = x;
                            ans[count][5] = y;
                            one.pop();
                            zero.push({x, y});
                            a[x][y] = 0;
                            count++;
                            break;
                        case 3:
                            rep(k, 0, 3){
                                x = one.front().first;
                                y = one.front().second;
                                ans[count][k * 2] = x;
                                ans[count][k * 2 + 1] = y;
                                one.pop();
                                zero.push({x, y});
                                a[x][y] = 0;
                            }
                            count++;
                            break;
                        case 4:
                            rep(k, 0, 3){
                                x = one.front().first;
                                y = one.front().second;
                                ans[count][k * 2] = x;
                                ans[count][k * 2 + 1] = y;
                                one.pop();
                                zero.push({x, y});
                                a[x][y] = 0;
                            }
                            count++;
                            break;
                    }
                }
            }

            if(n % 2 == 1){
                queue<pair<int, int>> one;
                queue<pair<int, int>> zero;

                int i = n - 2;
                int j = m - 2;

                rep(k, 0, 4){
                    int ni = i + delta[k][0];
                    int nj = j + delta[k][1];

                    if(a[ni][nj] == 0) zero.push({ni, nj});
                    else one.push({ni, nj});
                }

                while(!one.empty()){
                    switch(one.size()){
                        case 1:
                            rep(k, 0, 2){
                                x = zero.front().first;
                                y = zero.front().second;
                                ans[count][k * 2] = x;
                                ans[count][k * 2 + 1] = y;
                                zero.pop();
                                one.push({x, y});
                                a[x][y] = 1;
                            }
                            x = one.front().first;
                            y = one.front().second;
                            ans[count][4] = x;
                            ans[count][5] = y;
                            one.pop();
                            zero.push({x, y});
                            a[x][y] = 0;
                            count++;
                            break;
                        case 2:
                            rep(k, 0, 2){
                                x = zero.front().first;
                                y = zero.front().second;
                                ans[count][k * 2] = x;
                                ans[count][k * 2 + 1] = y;
                                zero.pop();
                                one.push({x, y});
                                a[x][y] = 1;
                            }
                            x = one.front().first;
                            y = one.front().second;
                            ans[count][4] = x;
                            ans[count][5] = y;
                            one.pop();
                            zero.push({x, y});
                            a[x][y] = 0;
                            count++;
                            break;
                        case 3:
                            rep(k, 0, 3){
                                x = one.front().first;
                                y = one.front().second;
                                ans[count][k * 2] = x;
                                ans[count][k * 2 + 1] = y;
                                one.pop();
                                zero.push({x, y});
                                a[x][y] = 0;
                            }
                            count++;
                            break;
                        case 4:
                            rep(k, 0, 3){
                                x = one.front().first;
                                y = one.front().second;
                                ans[count][k * 2] = x;
                                ans[count][k * 2 + 1] = y;
                                one.pop();
                                zero.push({x, y});
                                a[x][y] = 0;
                            }
                            count++;
                            break;
                    }
                }
            }
        }else{
            for(int j = 0 ; j < m - 1 ; j += 2){
                for(int i = 0 ; i < n - 1 ; i++){
                    switch(a[i][j] + a[i][j+1]){
                        case 1:
                            if(a[i][j] == 1){
                                ans[count][0] = i;
                                ans[count][1] = j;
                                a[i][j] = 0;
                            }else{
                                ans[count][0] = i;
                                ans[count][1] = j+1;
                                a[i][j+1] = 0;
                            }
                            ans[count][2] = i+1;
                            ans[count][3] = j;
                            ans[count][4] = i+1;
                            ans[count][5] = j+1;
                            a[i+1][j] = (a[i+1][j] + 1) % 2;
                            a[i+1][j+1] = (a[i+1][j+1] + 1) % 2;
                            count++;
                            break;
                        case 2:
                            ans[count][0] = i;
                            ans[count][1] = j;
                            a[i][j] = 0;
                            ans[count][2] = i;
                            ans[count][3] = j+1;
                            a[i][j+1] = 0;
                            ans[count][4] = i+1;
                            ans[count][5] = j+1;
                            a[i+1][j+1] = (a[i+1][j+1] + 1) % 2;
                            count++;
                            break;
                    }
                }
            }

            if(m % 2 == 1){
                int j = m - 2;
                for(int i = 0 ; i < n - 1 ; i++){
                    switch(a[i][j] + a[i+1][j]){
                        case 1:
                            if(a[i][j] == 1){
                                ans[count][0] = i;
                                ans[count][1] = j;
                                a[i][j] = 0;
                            }else{
                                ans[count][0] = i;
                                ans[count][1] = j+1;
                                a[i][j+1] = 0;
                            }
                            ans[count][2] = i+1;
                            ans[count][3] = j;
                            ans[count][4] = i+1;
                            ans[count][5] = j+1;
                            a[i+1][j] = (a[i+1][j] + 1) % 2;
                            a[i+1][j+1] = (a[i+1][j+1] + 1) % 2;
                            count++;
                            break;
                        case 2:
                            ans[count][0] = i;
                            ans[count][1] = j;
                            a[i][j] = 0;
                            ans[count][2] = i;
                            ans[count][3] = j+1;
                            a[i][j+1] = 0;
                            ans[count][4] = i+1;
                            ans[count][5] = j+1;
                            a[i+1][j+1] = (a[i+1][j+1] + 1) % 2;
                            count++;
                            break;
                    }
                }
            }

            for(int j = 0 ; j < m - 1 ; j += 2){
                int i = n - 2;
                queue<pair<int, int>> one;
                queue<pair<int, int>> zero;

                rep(k, 0, 4){
                    int ni = i + delta[k][0];
                    int nj = j + delta[k][1];

                    if(a[ni][nj] == 0) zero.push({ni, nj});
                    else one.push({ni, nj});
                }

                while(!one.empty()){
                    switch(one.size()){
                        case 1:
                            rep(k, 0, 2){
                                x = zero.front().first;
                                y = zero.front().second;
                                ans[count][k * 2] = x;
                                ans[count][k * 2 + 1] = y;
                                zero.pop();
                                one.push({x, y});
                                a[x][y] = 1;
                            }
                            x = one.front().first;
                            y = one.front().second;
                            ans[count][4] = x;
                            ans[count][5] = y;
                            one.pop();
                            zero.push({x, y});
                            a[x][y] = 0;
                            count++;
                            break;
                        case 2:
                            rep(k, 0, 2){
                                x = zero.front().first;
                                y = zero.front().second;
                                ans[count][k * 2] = x;
                                ans[count][k * 2 + 1] = y;
                                zero.pop();
                                one.push({x, y});
                                a[x][y] = 1;
                            }
                            x = one.front().first;
                            y = one.front().second;
                            ans[count][4] = x;
                            ans[count][5] = y;
                            one.pop();
                            zero.push({x, y});
                            a[x][y] = 0;
                            count++;
                            break;
                        case 3:
                            rep(k, 0, 3){
                                x = one.front().first;
                                y = one.front().second;
                                ans[count][k * 2] = x;
                                ans[count][k * 2 + 1] = y;
                                one.pop();
                                zero.push({x, y});
                                a[x][y] = 0;
                            }
                            count++;
                            break;
                        case 4:
                            rep(k, 0, 3){
                                x = one.front().first;
                                y = one.front().second;
                                ans[count][k * 2] = x;
                                ans[count][k * 2 + 1] = y;
                                one.pop();
                                zero.push({x, y});
                                a[x][y] = 0;
                            }
                            count++;
                            break;
                    }
                }
            }

            if(m % 2 == 1){
                int i = n - 2;
                int j = m - 2;
                queue<pair<int, int>> one;
                queue<pair<int, int>> zero;

                rep(k, 0, 4){
                    int ni = i + delta[k][0];
                    int nj = j + delta[k][1];

                    if(a[ni][nj] == 0) zero.push({ni, nj});
                    else one.push({ni, nj});
                }

                while(!one.empty()){
                    switch(one.size()){
                        case 1:
                            rep(k, 0, 2){
                                x = zero.front().first;
                                y = zero.front().second;
                                ans[count][k * 2] = x;
                                ans[count][k * 2 + 1] = y;
                                zero.pop();
                                one.push({x, y});
                                a[x][y] = 1;
                            }
                            x = one.front().first;
                            y = one.front().second;
                            ans[count][4] = x;
                            ans[count][5] = y;
                            one.pop();
                            zero.push({x, y});
                            a[x][y] = 0;
                            count++;
                            break;
                        case 2:
                            rep(k, 0, 2){
                                x = zero.front().first;
                                y = zero.front().second;
                                ans[count][k * 2] = x;
                                ans[count][k * 2 + 1] = y;
                                zero.pop();
                                one.push({x, y});
                                a[x][y] = 1;
                            }
                            x = one.front().first;
                            y = one.front().second;
                            ans[count][4] = x;
                            ans[count][5] = y;
                            one.pop();
                            zero.push({x, y});
                            a[x][y] = 0;
                            count++;
                            break;
                        case 3:
                            rep(k, 0, 3){
                                x = one.front().first;
                                y = one.front().second;
                                ans[count][k * 2] = x;
                                ans[count][k * 2 + 1] = y;
                                one.pop();
                                zero.push({x, y});
                                a[x][y] = 0;
                            }
                            count++;
                            break;
                        case 4:
                            rep(k, 0, 3){
                                x = one.front().first;
                                y = one.front().second;
                                ans[count][k * 2] = x;
                                ans[count][k * 2 + 1] = y;
                                one.pop();
                                zero.push({x, y});
                                a[x][y] = 0;
                            }
                            count++;
                            break;
                    }
                }
            }
        }

        cout << count << '\n';
        rep(i, 0, count){
            rep(j, 0, 6){
                cout << ans[i][j] + 1 << ' ';
            }
            cout << '\n';
        }
    }
}
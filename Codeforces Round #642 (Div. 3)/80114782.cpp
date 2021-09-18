/*
    Contest Name : Codeforces Round #642 (Div. 3)
    Problem Title : B - Two Arrays And Swaps
    Problem Url : https://codeforces.com/contest/1353/problem/B
    Verdict : Accepted
    Time : 31 ms
    Memory : 4000 KB
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        priority_queue<int> pq_a, pq_b;
        for(int i = 0 ; i < n ; i++){
            int t;
            cin >> t;
            pq_a.push(-t);
        }
        for(int i = 0 ; i < n ; i++){
            int t;
            cin >> t;
            pq_b.push(t);
        }

        while(k--){
            int a = pq_a.top();
            int b = pq_b.top();
            if(-a >= b){
                break;
            }
            pq_a.pop();
            pq_b.pop();
            pq_a.push(-b);
            pq_b.push(-a);
        }

        int ans = 0;

        while(!pq_a.empty()){
            ans += pq_a.top();
            pq_a.pop();
        }

        cout << -ans << '\n';
    }
}
/*
    Contest Name : Codeforces Round #642 (Div. 3)
    Problem Title : C - Board Moves
    Problem Url : https://codeforces.com/contest/1353/problem/C
    Verdict : Accepted
    Time : 218 ms
    Memory : 41500 KB
*/

t = int(input())

arr = [0]

for i in range(3, 500000, 2):
    arr.append(arr[i // 2 - 1] + (i // 2) * (i // 2) * 8)

for _ in range(0, t):
    n = int(input())
    print(arr[n // 2])

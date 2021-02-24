t = int(input())
for _ in range(t):
    n, k = [int(i) for i in input().split()]
    a = [int(i) for i in input().split()]
    for _ in range(n):
        r = input()
        ans = 0
        for i in range(k):
            if(r[i] == '1'):
                ans += a[i]

        print(ans)

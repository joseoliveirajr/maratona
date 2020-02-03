import sys

def ss(s):
    return sum(int(s[j]) for j in range(len(s)))

t = int(input())

for i in range(t):
    n = int(input())
    s = input()

    ans = ""

    for i in range(len(s)):
        if int(s[i]) % 2 == 1:
            ans += s[i]
        if len(ans) == 2:
            print(ans)
            break
    else:
        print(-1)

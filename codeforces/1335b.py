alph = "abcdefghijklmnopqrstuvwxyz"
t = int(input())
for i in range(t):
    n, a, b = input().split(' ')
    n = int(n)
    a = int(a)
    b = int(b)
    s = alph[0:b] * int(n / b)
    if n % b != 0:
        s += alph[0:n % b]
    print(s)

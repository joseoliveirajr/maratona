n = int(input())

e = []
d = []

ans = 0

m = {}
cs = set()

for i in range(n):
	l, c = input().split()
	cs.add(c)
	if not c in m:
		m[c] = {'e': 0, 'd': 0}
	if l == 'E':
		m[c]['e'] += 1
	else:
		m[c]['d'] += 1


for c in cs:
	ans += min(m[c]['e'], m[c]['d'])


print(ans)

def diff_string(s1, s2):
    count = 0
    for i in range(len(s1)):
        if s1[i] != s2[i]:
            count = count + 1
    return count
 
 
def generate_string(prefix, n):
    num_prefix = int(n / 3)
    s = prefix * num_prefix
    r = n % 3
    if (r > 0):
        s = s + s[0:r]
    return s
 
 
def generate_strings(n):
    prefixes = ["RGB", "RBG", "GRB", "GBR", "BRG", "BGR"]
    return [generate_string(prefixes[i], n) for i in range(len(prefixes))]
 
 
n = int(input())
s = input()
 
if len(s) == 1:
    print(0)
    print(s)
elif len(s) == 2:
    ls = ["RG", "RB", "GR", "GB", "BR", "BG"]
    ld = [diff_string(s, ls[i]) for i in range(len(ls))]
    m = min(ld)
    p = ld.index(m)
    print(m)
    print(ls[p])
else:
    ls = generate_strings(len(s))
    ld = [diff_string(s, ls[i]) for i in range(len(ls))]
    m = min(ld)
    p = ld.index(m)
    print(m)
    print(ls[p])
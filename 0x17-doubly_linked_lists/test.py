#!/usr/bin/python3
def is_palindromic(n):
    h = str(n)
    for i in range(len(h)):
        if h[i] != h[-i - 1]:
            return 0
    return (1)
r = 0
fi = 0
fj = 0
for i in range(100,1000):
    for j in range(100, 1000):
        m  = i * j
        if m > r and is_palindromic(m):
            r = m
            fi = i
            fj = j
print(fi, '*', fj, '=', r)

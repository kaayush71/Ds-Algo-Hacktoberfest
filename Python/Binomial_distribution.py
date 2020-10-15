def fact(n):
    if n == 1 or n == 0:
        return 1
    if n > 1:
        return fact(n - 1) * n

def bino(x, n, p):
    f = fact(n) / (fact(n - x) * fact(x))
    return (f * p**x * (1.0 - p)**(n-x))

vals = list(map(float, input().split()))
p = vals[0] / (vals[0] + vals[1])
n = 6
result = bino(3,n,p) + bino(4,n,p) + bino(5,n,p) + bino(6,n,p)
print(round(result, 3))
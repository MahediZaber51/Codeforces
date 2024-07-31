import math

n, m, a = map(int, input().split())
out = math.ceil(n / a) * math.ceil(m / a)
print(out)

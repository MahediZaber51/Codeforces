from collections import Counter

n = int(input())
arr = [input() for i in range(n)]
points = Counter()
results = []

for i in range(n):
  name, score = arr[i].split()
  points[name] += int(score)
  results.append((name, points[name]))

highest = max(points.values())
print([
    name for (name, score) in results
    if score >= highest and points[name] == highest
][0])

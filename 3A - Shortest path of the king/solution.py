source = list(input())
destination = list(input())
letters = {"a": 1, "b": 2, "c": 3, "d": 4, "e": 5, "f": 6, "g": 7, "h": 8}
steps = []
horizontal = letters[destination[0]] - letters[source[0]]
vertical = int(destination[1]) - int(source[1])

while horizontal != 0 or vertical != 0:
  if horizontal < 0:
    if vertical < 0:
      steps.append("LD")
      horizontal += 1
      vertical += 1
    elif vertical > 0:
      steps.append("LU")
      horizontal += 1
      vertical -= 1
    else:
      steps.append("L")
      horizontal += 1
  elif horizontal > 0:
    if vertical < 0:
      steps.append("RD")
      horizontal -= 1
      vertical += 1
    elif vertical > 0:
      steps.append("RU")
      horizontal -= 1
      vertical -= 1
    else:
      steps.append("R")
      horizontal -= 1
  else:
    if vertical < 0:
      steps.append("D")
      vertical += 1
    elif vertical > 0:
      steps.append("U")
      vertical -= 1

print(len(steps))
for i in steps:
  print(i)

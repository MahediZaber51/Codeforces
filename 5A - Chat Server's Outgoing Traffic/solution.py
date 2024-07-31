database = []
bytes = 0

while True:
  try:
    new = input()
    if new.startswith("+"):
      database.append(new.strip("+"))
    elif new.startswith("-"):
      database.remove(new.strip("-"))
    else:
      new = new.split(":")
      for _ in database:
        bytes += len(new[1].strip())
  except EOFError:
    print(bytes)
    break

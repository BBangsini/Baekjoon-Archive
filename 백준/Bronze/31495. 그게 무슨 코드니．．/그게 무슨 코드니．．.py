s = input()

if s[0] == '"' and s[len(s) - 1] == '"' and len(s) >= 3:
    print(s[1 : len(s) - 1])
else:
    print("CE")

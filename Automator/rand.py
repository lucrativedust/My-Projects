f = open("in2.txt", "r")
l = []
for x in f:
    s = ""
    for char in x:
        t = char
        if(char != ' '):
            if(ord(char) >= 97):
                t = chr(ord(char)-32)
        s += t
    l.append(s)
for elen in l:
    print(elen, end ="")



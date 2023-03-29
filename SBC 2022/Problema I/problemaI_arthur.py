x = input('')
c = 0
byte = []

for bit in x:
    if(bit == ' '):
        pass
    else:
        byte.append(bit)

for bit in byte:
    if(bit == '9'):
        c = 1
    else:
        pass

if(c == 1):
    print('F')
else:
    print('S')
## CAESAR CIPHER - A Simple Encrypting Technique

alpha = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
x = list(alpha)
print(x) ##Splitting Alphabets into single character
text = 'HELLOWORLD'
n = 4 #shift key
alphatext = list(text)
res=[]
result=[]
for i in range(len(text)):
    y = x.index(alphatext[i])
    formula = (y + n) % 26
    result.append(x[formula])
print(''.join(result))
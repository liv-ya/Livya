line=input("Enter the line of text:")
words={}
for i in line.split():
    words[i]=words.get(i,0)+1
print(words)

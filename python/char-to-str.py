characters=input("Enter the list of characters:")
characterslist=characters.split(",")
str=""
for i in characterslist:
    str=str+i
print("The string is",str)

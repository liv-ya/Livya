name=input("Enter the first names:")
namelist=name.split(',')
count=0
for i in namelist:
    if i[0]=='a' or i[0]=='A':
        count=count+1
print("The number of names that starts with a is",count)
        

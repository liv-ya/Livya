#remove a line from a file
inf=False
try:
    inf=open("input.txt","r+")
    inputfile=inf.readlines()
    print(inputfile)
    n=int(input("Enter the line number to be deleted:"))
    inputfile.pop(n-1)
    print("List after removing:",inputfile)
    inf.seek(0,0)
    inf.writelines(inf)
    inf.seek(0,0)
    print(inf.read())
    
except Exception as e:
    print(e)
finally:
    if inf:inf.close()
    

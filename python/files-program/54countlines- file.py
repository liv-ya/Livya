#count number of lines in a file
inf=False
try:
    inf=open("input.txt")
    inputfile=inf.readlines()
    print(inputfile)
    print("Number of lines in a file:",len(inputfile))
except Exception:
    print("No such file")
finally:
    if inf:inf.close()
    

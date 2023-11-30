#copy  content of one file to another file

inf=False
outf=False
try:
    inf=open("input.txt",'r')
    inputfile=inf.read()
    outf=open("output.txt",'w+')
    outf.write(inputfile)
    outf.seek(0,0)
    outputfile=outf.read()
    print(inputfile)
    print(outputfile)
except IOError as io:
    print(io)
finally:
    if inf:inf.close()
    if outf:outf.close()

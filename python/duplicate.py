s=['ab',15,'livya',562,'mace',15,'ab']
snew=[]
for i in s:
    if(i not in snew):
        snew.append(i)
print("After removing duplicate elements\n",snew)

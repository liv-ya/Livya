
def count_str(s):
    count=0
    for item in s:
        if (len(item)>2) and (item[0]==item[-1]):
            count+=1
    return count

s=input("Enter the string:").split()
c=count_str(s)
print(c)

#sum of elements in list in normal mehpd

def sum_list(l):
    '''sum of elements in list'''
    sum=0
    for i in l:
        sum=sum+i
    return sum
n=input("Enter the elements:\n")
n=list(map(int,n.split(',')))
print("Sum of elements:",sum_list(n))

#using recursion

def sum(n):
    if len(n)==1:
        return n[0]
    else:return n[0]+sum(n[1:])
print("sum of elements using recursion",sum(n))

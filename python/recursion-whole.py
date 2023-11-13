#sum of first N whole numbers
n=int(input("Enter number of whole numbers:"))
sum=0
for i in range(n):
    sum=sum+i
print('Sum of first',n,'whole numbers is',sum)


#recursion

def sum_whole(n):
    if n==0:return 0
    if n==1:return 1
    else:
        return n+sum_whole(n-1)

print('Using recursion',sum_whole(n-1))

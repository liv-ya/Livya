# sum of digits without recursion


def sum_digits(num):
    sum=0
    while(num>0):
        sum=sum+num%10
        num=num//10
    return sum

num=int(input("Enter number\n"))

print('Sum of digits :',sum_digits(num))

#Recursion

def sum_rec(n):
    if not n//10:return n
    else:
        return n%10+sum_rec(n//10)

print('Sum of digits using recursion:',sum_rec(num))
      

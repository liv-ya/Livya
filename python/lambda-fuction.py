large=lambda n1,n2:n1 if n1>n2 else n2

n1=int(input("Enter the first number:"))
n2=int(input("Enter the second number:"))
print("Largest number is",large(n1,n2))


n=int(input("Enter the number:"))
divisible=lambda n:not n%5
print(divisible(n))


s=input("Enter the string:").split()
list1=list(filter(lambda x:len(x)<5,s))
print(list1)

number=input("Enter numbers").split()
numberlist=map(int,number)
newlist=list(map(lambda x: x+x*0.10 if x>1000 else x+x*0.05,numberlist))
print(newlist)

number=input("Enter the numbers:")
numberlist=number.split(',')
even=[i for i in numberlist if int(i)%2==0]
print("List of even numbers are",even)

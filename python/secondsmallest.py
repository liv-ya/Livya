numbers=input("Enter the list of numbers:")
numberslist=numbers.split(",")
numberslist=[int(i) for i in numberslist]
n=sorted(numberslist)
print(n)
print("The second smallest number is",n[1])

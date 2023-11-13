list1=[1,-2,3,-4,-5,6]
positive=[i for i in list1 if i>0]
print("A list of positive numbers from",list1,"is",positive)

square=[i*i for i in list1]
print("Square of numbers in",list1,"is",square)

word='India'
wordlist=list(word)
vowels=[i for i in wordlist if i=='a' or i=='e' or i=='i'or i=='o' or i=='u'or i=='A' or i=='E' or i=='I' or i=='U']
print("List of vowels in",word,"is",vowels)

odd=[i for i in list1 if i%2!=0]
print("List of odd numbers from",list1,"is",odd)

year=int(input("Enter a year greater than 2023:"))
leap=[i for i in range(2023,year) if(i%400==0 or (i%100!=0 and i%4==0))]
print("List of leap years between 2023 and",year,"is",leap)


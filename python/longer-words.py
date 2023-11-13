words=input("Enter the list of words:")
wordslist=words.split(',')
number=int(input("\nEnter a number:"))
for i in wordslist:
    if(len(i)>number):
        print(i)

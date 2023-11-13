
def rev_name(name):
    for word in name[::-1]:
        print(word,end=' ')

name=input("Enter the fullname:").split()
rev_name(name)

# reverse of a string withput recursion

def reverse(s):
    return(s[::-1])

s=input("Enter the string:")
print("Reverse of a string",s," without recursion is ",reverse(s))


#using recursion

def reverse_rec(s):
    if len==1:return 1
    else:return s[-1]+reverse(s[:-1])

print("Reverse of a string",s,"using recursion is ",reverse_rec(s))

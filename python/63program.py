#to demonstrate asserterroe in python for negative input

try:
    n=int(input("Enter a number:"))
    assert n>0,"Negative input"
    print("\nNumber is",n)
except AssertionError as ae:
    print(ae)

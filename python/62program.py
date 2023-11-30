#accept an integer from user and raises valueerror with argument 'abnormal condition' if reading is not in 90-120
try:
    n=int(input("Enter a number:"))
    if(n<90 or n>120):
        raise ValueError
    else:
        print("\nNumber is valid")
except ValueError:
    print("Abnormal condition")
      

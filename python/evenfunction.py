def even_no(l):
    for i in l:
        if(i==237):
            break
        elif not i % 2:
            print(i)

l=[2,3,54,67,237,34]
l=map(int,l)
even_no(l)

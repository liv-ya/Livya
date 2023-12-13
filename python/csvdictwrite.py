import csv

try:
    #field names

    fields=['Id','Name','Age','Salary']

    #data rows of csv file

    rows=[{'Id':'1','Name':'Livya','Age':'23','Salary':'10000'},{'Id':'2','Name':'Ishel','Age':'21','Salary':'15000'},{'Id':'3','Name':'Milan','Age':'24','Salary':'18000'}]

    #writing into a csv file

    f=open('details1.csv','w',newline='')
    w=csv.DictWriter(f,fieldnames=fields) #creating a csv writer object
    w.writeheader() #writing fields
    w.writerows(rows)
    print("Successfully Inserted")
    
except Exception as ae:
    print(ae)

finally:
    f.close()

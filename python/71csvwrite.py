import csv

try:
    #field names

    fields=['Id','Name','Age','Salary']

    #data rows of csv file

    rows=[['1','Livya','21','100000'],['2','Ishel','23','850000'],['3','Milan','21','150000']]

    #writing into a csv file

    f=open('details.csv','w',newline='')
    w=csv.writer(f) #creating a csv writer object
    w.writerow(fields) #writing fields
    w.writerows(rows)
    print("Successfully Inserted")
    
except exception as ae:
    print(ae)

finally:
    f.close()

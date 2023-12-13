import csv

try:
        f=open('details1.csv','r')
        read=csv.DictReader(f)
        for lines in read:
                print(lines['Id'],'\t',lines['Name'],'\t',lines['Age'],'\t',lines['Salary'])

except Exception as ae:
        print(ae)

finally:
        f.close()
  

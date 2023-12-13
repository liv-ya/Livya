import csv
try:
        f=open('details.csv','r')
        read=csv.reader(f)
        for lines in read:
                print(lines[0],'\t',lines[1],'\t',lines[2])

except Exception as ae:
        print(ae)

finally:
        f.close()
  

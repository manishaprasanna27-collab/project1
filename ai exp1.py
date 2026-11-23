name=input("Enter student name:")
n=int(input("Enter number of subjects:"))
total=0
for i in range(1,n+1):
    mark=float(input("Enter mark for subject:"))
    total+=mark
percentage=total/n
if percentage>=90:
    grade="A+"
    performance="outstanding"
elif percentage>=80:
    grade="A"
    performance="excellent"
elif percentage>=70:
    grade="B"
    performance="very good"
elif percentage>=60:
    grade="c"
    performance="good"
elif percentage>=50:
    grade="d"
    performance="average"
else:
    grade="f"
    performance="needs improvement"
print("\n--academic performance--")
print("student name :",name)
print("total marks:",total)
print("percentage:",round(percentage,2),"%")
print("grade",grade)
print("performance",performance)
    
        

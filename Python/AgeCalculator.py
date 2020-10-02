from datetime import *
'''to find age of a person'''
try:
	while(1):
		day=int(input("Enter your birth date as number: ")) 
		month=int(input("Enter your birth month as number (Eg: 1-for Jan 2-for feb): "))
		year=int(input("Enter your birth year i.e a four digit year number,Eg-2004,2018: "))
		dob=date(year,month,day)
		print("your dob in year-month-day format =",dob)
		today=datetime.now().date()
		age=(today-dob)/timedelta(days=365.24)
		if age<0 :
			print("Please enter the correct DOB as your DOB can't be ahead of current date..!!!")
		else:
			print("Your age is",round(age,2),"years..!!!")
			break
except ValueError as e:
	print("Dob issue ",e)

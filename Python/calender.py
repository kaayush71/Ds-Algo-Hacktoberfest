from tkinter import *
import calendar

root = Tk()
root.title("GUI Calender")
print("Enter the year you want the Calender for: ")
yr = int(input())
cal = calendar.calendar(yr)
calyear = Label(root, text=cal, font=("Helvetica", 16))
calyear.pack()
root.mainloop()
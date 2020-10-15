#To wish a person good morning, Good afternoon or good evening

from datetime import *

dt= datetime.now()
hour=dt.hour
msg=""
if(hour>6 and hour<12):
	msg="Good Morning"
elif(hour>=12 and hour<6):
	msg="Good Afternoon"
else:
	msg="Good Evening"

print(msg," ",dt)

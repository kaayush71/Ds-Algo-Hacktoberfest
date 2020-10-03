print("Welcome to the reverse Name Code")
print("Enter your name as we will reverse it.")
print("Choose option 1 or 2")
choice=input("Choose your technique")
first = input("Enter first name:")
last = input("Enter last name:")

def reverseWord(first,last):
    print("The reversed message is " + first[::-1]+" " +last[::-1])

def reverseEverything():
    message=first+" "+ last
    translated=""

    i=len(message)-1
    #index starts from 0

    while i>=0:
        translated=translated+message[i]
        i=i-1
        
    print(translated)

if choice==1:
    reverseWord()
if choice==2:
    reverseEverything()
else:
    print("Option not available")

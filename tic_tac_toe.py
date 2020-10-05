print(" _________   _____   ______        _________  ____      ______        ___________   ________     _________  ")
print("     |         |    |                  |     /    \    |                  |        |        |   |           ")
print("     |         |    |                  |    /______\   |                  |        |        |   |---------  ")
print("     |       __|__  |______            |   /        \  |______            |        |________|   |_________  ")
print("\n\n")





print("This is a simple project [tic tac toe game] developed by Mr Ayush ")



lis=[]

for i in range(1,4):
    lis.append(['*','*','*'])

def print_pattern(lis):
    print("  [1] [2] [3]")
    print("[1] %c |%c |%c"%(lis[0][0],lis[0][1],lis[0][2]))
    print("    __|__|__")
    print("[2] %c |%c |%c"%(lis[1][0],lis[1][1],lis[1][2]))
    print("    __|__|__")
    print("[3] %c |%c |%c"%(lis[2][0],lis[2][1],lis[2][2]))

print_pattern(lis)

print("\n\nTIC TAC TOE BOARD")
print("\nHERE * REPRESNT THE POSITION WHERE CHARACTER WILL BE PLOTTED\n\n")

name_first,name_second=input("Enter the name of FIRST PLAYER (-_-):="),input("Enter the name of SECOND PLAYER (-_-):=")

ch1,ch2=input("Enter the first character (^_^):= "),input("Enter the second chararcter (^_^):= ")
entry=int(input("Enter 1 if the FIRST turn is given to FIRST PLAYER ELSE the turn will be given to SECOND PLAYER:="))
print("\n\n\n")

print("Let's play!!!!!!!!!!")
def check_the_game_status(lis,x,y):
    if lis[x][0]==lis[x][1]==lis[x][2]: #for checking horizontal line
        return True
    
    elif lis[0][y]==lis[1][y]==lis[2][y]: #for checking vertical line
        return True

    elif x==y: # for checking diagonal line
        m=x
        n=y
        x=0
        y=0
        if lis[x][y]==lis[x+1][y+1]==lis[x+2][y+2]:
            return True
        elif m==1 and n==1:
            x=0
            y=2
            if lis[x][y]==lis[x+1][y-1]==lis[x+2][y-2]:
                return True
            else:
                return False


        else:
            return False
    elif (x==0 and y==2) or (x==2 and y==0):
        x=0
        y=2
        if lis[x][y]==lis[x+1][y-1]==lis[x+2][y-2]:
            return True
        else:
            return False

lis=[]
for x in range(3):
    lis.append([' ',' ',' '])

DATABASE=[] # to store the moves value(x,y) ,,, if someone enter the value which is already filled then it can be checked from here

print("PLEASE INPUT WHEN VALUE OF ROW AND COLUMN NUMBER WHEN ASKED AND INPUT IT WITH SEPARATED BY SINGLE SPACE (*_*)")
print("\n\n")
for m in range(9):
    print("Enter the value of ROW and COLUMN number:=",end="")
    x,y=list(map(eval,input().split(" ")))
    while x>3 or y>3:
        print("YOU HAVE ENTERED INVALID ROW-COLUMN VALUE,,PLEASE ENTER AGAIN:=")
        x,y=list(map(eval,input().split(" ")))
    x-=1
    y-=1

    while [x,y] in DATABASE:
        print("!!!YOU HAVE ENTERED A VALUE ON BOARD WHICH IS ALREADY FILLED")
        print("!!!AGAIN ENTER VALUES OF ROW AND COLUMN NUMBER:=")
        x,y=list(map(eval,input().split(" ")))

    DATABASE.append([x,y])

    print("")

    if entry==1:
        lis[x][y]=ch1
        current=name_first
        entry=0
    else:
        lis[x][y]=ch2
        current=name_second
        entry=1

    print_pattern(lis)

    if check_the_game_status(lis,x,y):
        print(current,"player WINS!!! (0_0) (0_0) (0_0),HOPE YOU ENJOYED(^_^)")
        break
else:
    print("Game TIED (0_0)!!!!!!!!!!")

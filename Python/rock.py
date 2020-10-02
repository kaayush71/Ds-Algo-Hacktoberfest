print("Rock Paper Scissor game\n")
while(1):
    print("Choose one from rock/paper/scissor" )
    a=input("Player-1 ")
    b=input("player-2 ")
    if a== "rock" and b=="scissor":
        print("player 1 win")
        break
    elif a=="rock" and b=="paper":
        print("player 2 win")
        break
    elif a== "scissor" and b=="paper":
        print("player 1 win")
        break
    elif a=="scissor" and b=="rock":
        print("player 2 win")
        break
    elif a== "paper" and b=="scissor":
        print("player 2 win")
        break
    elif a=="paper" and b=="rock":
        print("player 1 win")
        break
    elif a==b:
        print("its a tie")
        break
    else:
        print("Wrong input..!!!")

 

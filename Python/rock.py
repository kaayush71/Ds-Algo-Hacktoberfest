print("Rock Paper Scissor game\n")
a=input("Player-1 ")
b=input("player-2 ")
if a== "rock" and b=="scissor":
    print("player 1 win")
elif a=="rock" and b=="paper":
    print("player 2 win")
elif a== "scissor" and b=="paper":
    print("player 1 win")
elif a=="scissor" and b=="rock":
    print("player 2 win")
elif a== "paper" and b=="scissor":
    print("player 2 win")
elif a=="paper" and b=="rock":
    print("player 1 win")
elif a==b:
    print("its a tie")

 
import random as r

Cards = [""] * 52
number = 1
count = 0
cnt = 1
rank = 0


def numberInit():
    # Initializing the array with only the card number
    global rank, count
    for i in range(52):
        if count == 4:
            rank = rank + 1
            count = 0
        if rank <= 9:
            Cards[i] = "0" + str(rank)
        else:
            Cards[i] = str(rank)
        count = count + 1


def suiteInit():
    # Adding the suite of the card to the array
    global cnt
    for s in range(52):
        if cnt == 1:
            Cards[s] = Cards[s] + " - S"
        if cnt == 2:
            Cards[s] = Cards[s] + " - H"
        if cnt == 3:
            Cards[s] = Cards[s] + " - C"
        if cnt == 4:
            Cards[s] = Cards[s] + " - D"
            cnt = 1
        cnt = cnt + 1


def shuffling():
    # Shuffling and the printing the deck
    r.shuffle(Cards)
    for v in range(52):
        print(Cards[v])


numberInit()
suiteInit()
shuffling()

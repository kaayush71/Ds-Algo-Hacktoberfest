import sys

def get_change(m):
    #write your code here
    coins = [1, 3, 4]
    cash = [0] * (m +1)
    if m <= 1:
        return m
    cash[0] = 0
    cash[1] = 1
    #cash[3] = 1
    #cash[4] = 1
    coinreplacments = []
    for i in range(2, m + 1):
        for y in coins:
            if i == y:
                #cash[i] = 1
                coinreplacments.append(1)
            elif i > y:

                coinreplacments.append(cash[i - y] + cash[y])
            else:
                pass

        cash[i] = min(coinreplacments)
        coinreplacments.clear()

    return cash[m]

if __name__ == '__main__':
    m = int(sys.stdin.read())
    print(get_change(m))

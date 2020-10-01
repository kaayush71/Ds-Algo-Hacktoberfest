n,W = map(int, input().split(" "))
maxvalue = 0.000
nval = 0.000
value = list()
weight = list()
ratio = list()
for num in range(n):
    v,w = map(float, input().split(" "))
    value.append(v)
    weight.append(w)
    ratio.append(float(v/w))
    #ratio.sort(reverse = True)
while W>0:
    try:
        num = ratio.index(max(ratio))
    except:
        break
    if W == weight[num]:
        maxvalue+=value[num]
        break
    elif W>weight[num]:
        maxvalue+=value[num]
        W-=weight[num]
        ratio.remove(max(ratio))
    elif W <weight[num]:
        nval = float((value[num]/weight[num])*W)
        maxvalue+=nval
        break
print("{:.4f}".format(maxvalue))

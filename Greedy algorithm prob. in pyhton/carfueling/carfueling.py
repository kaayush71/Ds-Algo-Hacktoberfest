l=int(input())
m=int(input())
n=int(input())
s=list(map(int, input().split(" ")))
s.insert(0,0)
s.append(l)
currentref=0
numref=0
while currentref<=n: 
    lastref = currentref
    while(currentref<=n) and (s[currentref+1]-s[lastref]<=m):
        currentref+=1
    if currentref == lastref:
        numref = -1
        break
    if currentref<=n:
        numref+=1
print(numref)

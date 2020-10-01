n = int(input())
count = 0
while n>0:
    if n >= 10:
        count+=1
        n = n-10
    elif n>=5:
        count+=1
        n = n-5
    elif n>=1:
        count+=1
        n=n-1
print(count)
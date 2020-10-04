str=input("Enter string:")
str_list=list(str)
rev_list=[]
rev_str=""
length=len(str_list)
for i in range(-1,-(length+1),-1):
    rev_list.append(str_list[i])
rev=rev_str.join(rev_list)
print(rev)
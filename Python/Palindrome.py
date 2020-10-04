#to check whether a word is a palindrome

s1=input("enter the word :").lower()
r1=s1[::-1]

if s1 == r1:
	print("Pallindrome")
else:
	print("Not pallindrome")

print("Character at even index:")	
for i in range(0,len(s1),2):
    print(s1[i])

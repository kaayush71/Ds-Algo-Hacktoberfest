n=int(input("Enter the lower range:"))
m=int(input("Enter the upper range:"))
for num in range(n,m+1):
    if(num>1):
        for i in range(2,num):
            if(num%i==0):
                break
        else:
            print(num) 
            
celsius = int(input("Enter temp."))

fahrenheit = (celsius * 1.8) + 32
print('%0.1f degree Celsius is equal to %0.1f degree Fahrenheit' %(celsius,fahrenheit))




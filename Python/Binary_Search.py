#Contributed by @Hinal-Srivastava
def binary_search(list,item):
    first = 0
    last = len(list)-1
    flag = False
    while( first<=last and not flag):
        mid = (first + last)//2
        if list[mid] == item :
            flag = True
            print("Element found at ", mid," after sorting the list")
        else:
            if (item < list[mid]):
                last = mid - 1
            else:
                first = mid + 1
    if(flag == False):
        print("Element not part of given list")            	
            
#Driver Program
ele_lst = [] 
n = int(input("Enter number of elements : ")) #Length of list
print("Enter Elements \n")

for i in range(n):
    element = int(input("\t"))
    ele_lst.append(element)

ele_lst.sort()
item_=int(input("Enter search element : "))

print(binary_search(ele_lst, item_))
    
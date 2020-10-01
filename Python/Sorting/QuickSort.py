def partition(arr,beg,end):
    i = beg-1
    pivot = arr[end]
    for j in range(beg,end):
        if arr[j]>pivot:
            i+=1
            arr[i],arr[j]=arr[j],arr[i]
    arr[i+1],arr[end]=arr[end],arr[i+1]
    return i+1

def quicksort(arr,beg,end):
    if len(arr)==1:
        return arr
    if beg<end:
        p = partition(arr,beg,end)
        quicksort(arr,beg,p-1)
        quicksort(arr,p+1,end)


myList = [54,26,93,17,77,31,44,55,20]
n=len(myList)
quicksort(myList,0,n-1)
print(myList)
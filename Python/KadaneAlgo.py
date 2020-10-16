def Kadane(arr,n): 

   current_maximum = arr[0]   
   maximum_so_far =arr[0]  
      
   for i in range(1,n): 
      current_maximum = max(arr[i], current_maximum + arr[i]) 
      maximum_so_far = max(maximum_so_far,current_maximum) 
          
   return maximum_so_far 
  
arr = [-2, 3, 1, -2, -1, 4, 3] 
print(Kadane(arr,len(arr)))
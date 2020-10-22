## Process the data to divide knapsack dimension/capacity and the available items

def f_knap_preparation(x):
    knap = {"items":x[0], "weights":x[1]}
    elements = x[2:]
    count = len(elements)/2
    entries = {"items":list(), "weights" : list() }
    for i in range( len(elements)):
        if (i % 2 == 0):
            entries['items'].append(elements[i])
        else:
            entries['weights'].append(elements[i])
            
    values = [x/y for x,y in zip(entries['items'],entries['weights'])]
    
    return(knap, entries, values, count)
        
## Main function to use the processed data from 'f_knap_preparation()' to optimize the item inclusion in the knapsack
      
def f_knap_main(x1):
    if(len(x1) %2 != 0):
        print('There must be some number missing in your input. Try again !!')
    else:
        knap, entries, values, count = f_knap_preparation(x1)
        capacity = knap['weights']
        items = knap['items']
        result ={'items':list(), 'values':list()}
        while capacity and items and count != 0:
            
            indexer = values.index(max(values))
            maxvalue = entries['items'][indexer]
            maxweight = entries['weights'][indexer]
            
            if(maxweight <= capacity):
                capacity = capacity - maxweight
                result['items'].append(indexer + 1)
                result['values'].append(maxvalue)
            else:
                result['values'].append((capacity/maxweight) * maxvalue)
                result['items'].append(indexer + 1)
                capacity = capacity - (capacity * (capacity/maxweight))
            count = count - 1
            entries['items'].remove(entries['items'][indexer])
            entries['weights'].remove(entries['weights'][indexer])
            values.remove(values[indexer])
        total = sum(result['values'])
        print('Total value obtained from the items is ' +  str(total) + " from items " + str(result['items']) + " with following values " + str(result['values']))

        return(result)         

## This code initiates the script and prompts for the user-input.

numbers = list(raw_input('Enter the values and weights after knapsack attributes placing spaces between numbers : ').split(' '))
user_num = [int(x) for x in numbers]
f_knap_main(user_num)

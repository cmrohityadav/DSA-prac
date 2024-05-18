Multiset

it can store duplicate values
ordered asc or desc 
value will be identified by itself
value cannot be modified in Multiset


Member function of Multiset

1. Insert 
        insert():  O(logN)

2. deletion
    erase (value)     O(logN)
    erase (position) 

    erase(start_itr,end_itr)  O(N)

3. find()

lowerbound of the element searched if found else end iterator
O(logN)


4. count()

    no of occurrence  
    O(k+logN)

    k is the number of occurrence

5. lower_bound()

itarator poiting to first occurrence of value if present else position the next greater value
O(logN)


6. upper_bound()
 
 position of the next greater value
O(logN)


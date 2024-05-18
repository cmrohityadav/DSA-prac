SET is stl container.
It  is used to store unique value;
Values are store in ordered(increasing or decreasing) state
No indexing , element are identified by their own value
once value inserted in a set , it cannot modified


Advanatage of set
unique
ordered
dynamic size , no overflowing error
Faster insertion deletion search O(logN)


Disadvantage
cannot access element using index
more memory than array
not suitable for large datasets





declaring 
set<data type>set_name;



inserting element into a set
set_name.insert(value);

set1.insert(4);
set2.insert(3);
this return an iterator to the inserted value
Iterate through stl container



member function of a set conatainer
size()
max_size(): max no. of element set can hold
empty(): return TRUE if empty else false
clear(): removes all the element from set
find(): return position of element if present else return end itarator
count(): return no of occurrence of the element 
lower_bound(): return  element if present , else return just greater value
upper_bound(): return the next greater value







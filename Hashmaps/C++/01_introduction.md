# Map
1. STL container which store key-value pair
eg.
    rollNo  StudentName

2. The elements are stored in ascending/descending order

3. Map cannot have duplicate keys

4. Implemented through Binary Search Tree (BST)

5.  header: #include<map>

    declare:

    ### ascending:
    ```C++
    map<key-data-type,value-data-type>mapName;
    ```
    ### descending
    ``` C++
    map<dataType1,dataType2,greater<dataType1>>mapName;
    
    ```

eg. 
```C++
    map<string,int>dir={{"rohit",457859},{"rahul",974784}};

    insertion:  // TC: log(N)

    dir.insert({"abc",789658});
    dir.insert(make_pair(key,value));
    dir[key]=value;
```
eg. 
```C++
dir["xyz"]=7852;
```

printing:
```C++
    for(auto element:map){
        key=element.first;
        value=element.second;
    }

```



## Member Function

1. erase(); 
 TC: O(log(n))

dir.erase(itr) or dir.erase(key)

dir.erase(start-itr,end-itr)  //excluding end-itr   // TC: O(log n)






2. swap()

m1 m2 are  same type of map

m1.swap(m2)

swap(m1,m2)


3. clear()
m.clear()





4. empty()

m.empty();

return 1 if map is empty




5. size()

m.size();








6.max_size()




7.find()

return itr to element if present ,else it return map.end() itr

TC:O(logn)





8.count();
 no. of occurrences of key
 
 m.count(key):1






9.upper_bound();

return an itr to next greater element

eg. rollNum[1]=10;
    rollNum[2]=20;
    rollNum[3]=100;
    rollNum[1]=1200;

rollNum.upper_bound(2);=> it will return rollNum[3] itr









10. lower_bound();


return itr to element if present else itr to next greater element

eg. rollNum[1]=10;
    rollNum[2]=20;
    rollNum[5]=100;
    rollNum[1]=1200;

rollNum.upper_bound(3);=> it will return rollNum[5] itr 






11.begin() and end()







12.rbegin() 

itr to first element in reverse order



and rend() 
itr to position after last element in reverse order





  eg.               m.rend()=> 
                             [[k,v]  <= m.begin()
                             [k,v]
                             [k,v]
                             [k,v] ]   <= m.rbegin()
                                     <= m.end()                





# Data Structures and Algorithms
**Constsitance | Practice | Implement | Compete**
# contents
- [Patterns](#patterns)
- [Data Structure](#data-structures)
- [Algo](#algorithms)
- [Time Complexity](#time-complexity)
- [Space Complexity](#space-complexity)
- [Array](#array)
- [Linked List](#linked-list)
- [Stack](#stack)
- []()
- []()


## Data Structures 


- Data Structures are used to `store and organize data` in a way that allow for `efficient access and manipulation` of the data

## Algorithms
- Algorithms are the `procedures and techniques` used to manipulate and proccess the data in the Data Structure

## Time Complexity
- Time Complexity in computer science describe how the execution time of an algorithm grows as the input size increases.
- It essentailly quantifies the number of operations an algorithm performs as function of the input data size
- Amount of time Taken as the function of input size
- Amount of time Taken => operation (a+b)

 1. Time Complexity ye batata hai ki jab input size badhta hai,
to algorithm ka time (ya operations) kis rate se badhta hai.
2. Ye seconds mein nahi, operations ke pattern mein measure hota hai.
3. Kyunki computer ka speed alag ho sakta hai,
lekin algorithm ka “growth pattern” universal hota hai 
4. Hum yeh nahi dekhte ki code ko kitne seconds lage,
hum yeh dekhte hain ki `kitne steps (operations)` lage input ke hisaab se.

```cpp
int sum = a + b;

// Yahaan bas 1 operation hai (addition).
// Chahe number kitna bhi bada ho -> 1 hi step lagega
```

```cpp
for (int i = 0; i < n; i++)
   sum += arr[i];

// Yahaan har element ke liye ek addition ho raha hai.
// n elements → n operations
```
### Time Complexity Notations
#### Big O (O) **“Upper Bound” (Worst Case)**
---
1. Ye batata hai ki maximum time kitna lag sakta hai.
Matlab — “sabse worst situation mein bhi algorithm isse zyada slow nahi hoga.”
```bash
Maan lijiye appke paas 100 files hain aur app ek-ek file check kar rahe ho (Linear Search).
Agar “Rohit” last file mein ho, to appko 100 steps lag gaye.

To hum bolte hain:

Time Complexity = O(n)

Yani agar input 1000 hua, to maximum 1000 steps lagenge —
usse zyada kabhi nahi.
```
2. Big O = “Kitna worst ho sakta hai?”



####  Big Ω (Omega) **“Lower Bound” (Best Case)**
---
1. Ye batata hai ki minimum time kitna lagega.
Matlab — “best situation mein algorithm itne operations se kam nahi karega.”
2. Big Ω = “Kitna fast ho sakta hai?”
“Best situation mein itna hi kam time lagega.”


####  Big Θ (Theta) **“Tight Bound” (Average Case / Exact Growth)**
---
1. Ye dono (upper aur lower) ko combine karta hai.
Jab best aur worst dono almost same rate se badhte hain, tab use hota hai.

### Set of Rules for Finding Time Complexity

1. Rule 1: Constant operations → O(1)
- Agar code me fixed number of steps hain (input size par depend nahi karta), to uski time complexity O(1) hoti hai.
```cpp
int sum = a + b;  
int x = 10;
```
- 2 operations — fixed count, input badhe to bhi steps same.
✅ Time Complexity = O(1)

2. Rule 2: Loops → Depend on Iterations
- Agar koi loop input ke size n tak chal raha hai,
to time complexity uske iterations ke barabar hoti hai.
```cpp
for (int i = 0; i < n; i++)
    cout << i;
```
- 👉 Loop n times chalega.
- ✅ Time Complexity = O(n)
3. Rule 3: Nested Loops → Multiply
- Agar ek loop ke andar doosra loop hai,
to total operations = outer × inner loops.
```cpp
for (int i = 0; i < n; i++)
   for (int j = 0; j < n; j++)
       cout << i << j;
```
- Outer loop n times, inner loop n times → total n × n = n²

- ✅ Time Complexity = O(n²)

4. Rule 4: Sequential Statements → Add (but take dominant term)
- Total = O(n) + O(n²) → O(n²) (dominant term only)

5. Rule 5: Loops with division or reduction → O(log n)
- Agar loop har baar input ko half (ya divide by any constant) karta hai,
to iterations ≈ log₂(n) times hoti hain.
```cpp
for (int i = n; i > 0; i = i / 2)
    cout << i;
```
- 👉 i half hota ja raha hai — runs ≈ log₂(n) times.
- ✅ Time Complexity = O(log n)

6. Rule 6: Nested log loops → Multiply logs
- Agar ek loop log(n) times chalta hai aur uske andar aur loop hai log(m) times,
to total time = O(log n × log m)
- ✅ Time Complexity = O(log n × log m)

7. Rule 8: Ignore Constants and Low-Order Terms
- Time complexity sirf growth pattern dikhati hai —
isliye constant multipliers aur small terms ignore karte hain.
- O(2n) → O(n)
- O(n + 100) → O(n)
- O(n² + n) → O(n²)
- ✅ Rule: “Ignore constants, keep highest order term.”

8. Rule 7: Function Calls (Recursion) → Add or Multiply accordingly

## Space Complexity
- Space complexity refers to the amount of memory an algorithm uses as function of the input size.
- It's a measure of how much memory an algorithm requires to execute and solve a problem.

## Array
- Fixed-size collection of element of same type
- Stored int contiguous memory
- Indexing 0 based in C++

```cpp
int name[4];
```
```go
var name  [4]int
```

## Linked List
- A Linked List is a data structure made of nodes
- Har node ke paas do cheezein hoti hain
1. `DATA`
2. `next` pointer/address : jisme next node ka address hota hai

- **Box ko pata hota hai ---> next wala box kaha hai**
- [ `data` | `address` ]
- [ ] ko NODE kahte hai
- starting node is `HEAD` , its store address of starting node
- `NULL` ka matlab → list ka end.
-   100x      200x        300x
-  [1|200x]   [2|300x]    [3|NULL]

-  head=100x
### traversal / Reading
```cpp
while(t!=NULL){
    cout<<t->data;
    t=t->next;
}

```
### Insertation
```bash
   100x        200x         300x
 [1 | 200x] → [2 | 300x] →  [3 | NULL]

 head = 100x

```
- Insertion ke general steps:
1. Ek new node create karo
2. Uska data set karo
3. Uska next pointer sahi jagah point karwao
4. Purane nodes ke pointers ko update karo
- left to right and bottom to top
- create new `Node`
- set it proper address and all think 
```[A] → [B] → [C]```
- Tum insert kar rahe ho X (B ke baad):
- Pehle NEW pointer set karo (left to right)
- X->next = C
- Phir purane pointer ko update karo (bottom to up)
- B->next = X

#### Insert at Beginning (Head me insert karna)
```bash
newNode->next = head
head = newNode
```
#### Insert in Middle (kisi position par)
- Steps
1. jis `node ke baad insert` karna hai, uska `pointer p `rakho
2. new node ka next = p->next
3. p->next = new node
```bash
newNode->next = p->next;
p->next = newNode;
```
#### Insert at End
Traversal required:
```bash
while(t->next != NULL)
     t = t->next;

t->next = newNode;
newNode->next = NULL;
```
-   100x      200x        300x
-  [1|200x]   [2|300x]    [3|NULL]
- head=100x


### Delete
#### Delete at Beginning
```bash
head → [A] → [B] → [C]
delete A
```
Steps: 
1. d = head (delete node)
2. head = head->next
3. delete d
```cpp
Node* d = head;      // node to delete
head = head->next;   // shift head
delete d;
```

#### Delete in Middle
```bash
[A] → [B] → [C] → [D]
delete C
```
Steps: 
1. p = previous node jaaha se jisko delete krna hai
2. d = delete node,jis node ko delete karna hai
3. p->next = d->next
4. delete d
```cpp
Node* d = head;    // delete node
Node* p = NULL;    // previous node

while(d != NULL && d->data != value){
    p = d;
    d = d->next;
}

if(d != NULL){
    p->next = d->next;
    delete d;
}
```
#### Delete at End
```bash
[A] → [B] → [C]
delete C
```
Steps:
1. Last node (d) tak jao
2. p = previous node
3. p->next = NULL
4. Delete d
```cpp
Node* d = head;   // delete node (last node)
Node* p = NULL;   // previous node

while(d->next != NULL){   // until last node
    p = d; 
    d = d->next;
}

p->next = NULL;   // remove last
delete d;         // delete last node
```

### UPDATE
```bash
[1] → [5] → [9]
oldValue = 5
newValue = 50
# Hume 5 ko 50 se replace karna hai.
```
Steps
1. Ek pointer t banao jo head se start karega
2. List ko left to right traverse karo
3. Jahan tumhe oldValue mil jaye → wahi ruk jao
4. t->data = newValue kar do
5. Kaam complete, loop break
```cpp
Node* t = head;    // traversal pointer

while(t != NULL){
    if(t->data == oldValue){   // jis data ko change karna hai
        t->data = newValue;    // new value assign karo
        break;                 // mil gaya → loop se bahar
    }
    t = t->next;               // next node par jao
}
```

### Singly Linked List




## Stack
- Stack ek aisa dabba samjho jisme cheezein upar se daali jaati hain aur upar se hi nikali jaati hain
- Jo cheez sabse last mein daali, wahi sabse pehle niklegi
- Major methods
1. push()
2. pop()
3. top()
4. size()
5. empty()
- It can be implemented in different ways
1. **Array Implementation [using Vector]**
```cpp
#include<iostream>
#include<vector>
class Stack{
private:
std::vector<int>dynamicArray;
public:
void push(int val){
    dynamicArray.push_back(val);
}

void pop(){
    if(dynamicArray.size()==0){
        std::cout<<"Stack is Empty!!..nothing to pop out"<<std::endl;
        return;
    }
    dynamicArray.pop_back();
}

int top(){
    if(dynamicArray.size()==0){
        std::cout<<"Stack is Empty!!"<<std::endl;
        return -1;
    }
    int topElement=dynamicArray[dynamicArray.size()-1];
    return topElement;
}

bool empty(){
    if(dynamicArray.size()==0){
        return true;
    }
    return false;
}

};
int main(){

    Stack myStack;

    myStack.push(10);
    std::cout << myStack.top() << std::endl;

    myStack.push(20);
    std::cout << myStack.top() << std::endl;

    myStack.pop();
    std::cout << myStack.top() << std::endl;

    myStack.pop();
    std::cout << myStack.top() << std::endl;
   
    if(myStack.empty()){
        std::cout<<"Now stack is empty"<<std::endl;
    }else{
        std::cout<<"Now stack is not empty"<<std::endl;
    }
}
```


2. **Linked List Implementation**
```cpp
#include<iostream>
#include<list>

class Stack{
    std::list<int>ll;

public:

void push(int val){
    ll.push_front(val);
}

void pop(){
    ll.pop_front();
}

int top(){
  return  ll.front();
}
bool empty(){
    return ll.size()==0;
}

};
int main(){
    Stack stk ;
    stk.push(10);
    stk.push(20);
    while(!stk.empty()){
        std::cout<<stk.top()<<std::endl;
        stk.pop();
    }
}
```


# Patterns
- [Two Pointers](#two-pointers)
- [Sliding Windows](#sliding-windows)
- [Fast & Slow pointers](#fast--slow-pointers)
- [kadane's Algorithms](#kadane-algorithm)
- [Prefix Sum](#prefix-sum)
- [Merge Intervals](#merge-intervals)
- [Stack](#stack-pattern)
- [Hashmaps](#hashmaps-pattern)
- [In-place Reversal of a LinkedList](#in-place-reversal-of-a-linkedlist)
- [Binary Search Algorithm Pattern](#Binary-Search-Algorithm-Pattern)
## Two Pointers
- Question `Array` ya `LinkList`  hi hog 80% case me
- Tree,Graph,Stack,DP,Queue isme `90%` case me Two `Pointers nhi lagta`
- `Sorted` ho ya `Sort kr skte` hai fir aasaan hoga to Two Pointers ka soch sakte hai
- Question me agar `Merge` /`Remove Duplicate` /`Re-arrage`/`Subarray` or inke sath  `in place` ho to indication hai(In place means No extra space)
- `LinkList` Question me `Detect Cycle` ya  `Cycle  lagane se` Question Bann jayega 
- Question me find more than one thing like  `Pairs`/`Triplets`/`Quadruple` ho to Two Pointers k bare me soch skte hai
- Agar Question me `Do not use Extra Space` krke agar 2 se jyda chiz find krni hai to Two Pointer Use kr skte hai
- `In-order` ka meaning sorted order / increasing order hota hai,`

### Example
- **Two sum**
```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        short left=0;
        short right=numbers.size()-1;

        while(left<right){
            int sum=numbers[left]+numbers[right];
            if(sum==target) return {left+1,right+1};
            else if(sum>target){
                right--;
            }else{
                left++;
            }
        }

        return {-1,-1};
    }
};
```
### Example
- Unique Two Sum Pairs (**No duplicates**)
- [1,1,1,2,2,3,3,3]
- Find all Unique pairs
```cpp
vector<vector<int>> twoSumUnique(vector<int>& a, int target) {
    vector<vector<int>> result;
    int left = 0;
    int right = a.size() - 1;

    while(left<right){
        int sum = a[left] + a[right];
        if(sum==target)
        {
            // store unique pair
            result.push_back({a[left], a[right]});
            left++;
            right--;

            // skip duplicates on left
            while(a[left]==a[left-1]){
                left++;
            }

            // skip duplicates on right
            while(a[right]==a[right+1]){
                right--;
            }
        }else if(sum<target){
            left++;
        }else{//sum>target
            right--;
        }
    }
    return result;
}
```

### Example
- **Triplet Unique Sum**
- [-1,0,1,2,-1,4]
- for each i 2-sum with sum=-a[i];
- sort [-1,-1,0,1,2,4]
```cpp
vector<vector<int>> threeSumUnique(vector<int>& a) {
vector<vector<int>> result;
sort(a.begin(), a.end());
int n = a.size();

for(int i=0;i<n-2;i++){
    // skip duplicate first numbers
    if(i>0 && a[i]==a[i-1]){
        continue;
    }

    int left=i+1;
    int right=n-1;

    int targetSum=-(a[i]);

    while(left<right){
        int twoSum=a[left]+a[right];

        if(twoSum==targetSum){
            result.push_back({a[i], a[left], a[right]});
            left++;
            right--;

            while(left < right && a[left]==a[left-1]){
                left++;
            }

            while(left < right && a[right]==a[right+1]){
                right--;
            }
        }else if(twoSum>targetSum){
            right--;
        }else{
            left++;
        }
    }
}

return result;

}
```
### Example 
- **3Sum Closest**
- Input: nums = [-1,2,1,-4], target = 1
- Output: 2
- Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
```cpp
int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxDiff=INT_MAX;
        int result=0;

        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;

            while(left<right){
                int total=nums[i]+nums[left]+nums[right];
                int tempDiff=abs(target-total);

                if(tempDiff<maxDiff){
                    maxDiff=tempDiff;
                    result=total;
                }

                if(total==target){
                    return result;
                }else if(total>target){
                    right--;
                }else{
                    left++;
                }

            }
        }
        return result;
    }
```
### Example
- **Triplets with Smaller Sum**
- {-2, 0, 1, 3}
- triplets with sum less than 2 (-2, 0, 1) and (-2, 0, 3)
-  {5, 1, 3, 4, 7}
- triplets with sum less than 12 (1, 3, 4), (1, 3, 5), (1, 3, 7) and (1, 4, 5).
```cpp
long long countTriplets(int n, long long sum, long long arr[]) {
        // Your code goes here
        sort(arr,arr+n);
        long long count=0;
        
        for(int i=0;i<n-2;i++){
            long long left=i+1;
            long long right=n-1;
            
            
            
            while(left<right){
                
                long long mysum=arr[i]+arr[right]+arr[left];
                
                if(mysum>=sum){
                    right--;
                }else{
                    count=count+(right-left);
                    left++;
                }
            }
        }
        
        return count;
    }
```

### Example
- **Remove Duplicates from Sorted Array**
- input: nums = [0,0,1,1,1,2,2,3,3,4]
- output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
```cpp
int removeDuplicates(vector<int>& nums) {
       int len = nums.size();
        if (len == 0) return 0;

        int officer = 0;  
        int cmo = 1;      
        int uniqueItem = 1; 

        while (cmo < len) {
            if (nums[cmo] == nums[cmo - 1]) {
                cmo++;
                continue;
            }

            officer++;
            nums[officer] = nums[cmo];
            cmo++;
            uniqueItem++;
        }

        return uniqueItem;
    }
```

### Example
- **Squares of a Sorted Array**
- Input: nums = [-4,-1,0,3,10]
- Output: [0,1,9,16,100]
- Explanation: After squaring, the array becomes [16,1,0,9,100].
- After sorting, it becomes [0,1,9,16,100].
```cpp
vector<int> sortedSquares(vector<int>& nums) {
        int sizeNums=nums.size();
        vector<int>pos;
        vector<int>neg;

        for(int i=0;i<nums.size();i++){
            int sqr=nums[i]*nums[i];
            if(nums[i]>=0){
                pos.push_back(sqr);
            }else{
                neg.push_back(sqr);
            }
        }

        reverse(neg.begin(),neg.end());

        if(pos.size()==0){
            return  neg;
        }

        if(neg.size()==0){
            return pos;
        }

        short posLen=0;
        short negLen=0;
        vector<int> ans;
        while(posLen<pos.size() && negLen<neg.size()){
            if(pos[posLen]<neg[negLen]){
               ans.push_back(pos[posLen++]);
            }else{
                ans.push_back(neg[negLen++]);
            }
        }

        while(negLen<neg.size()){
            ans.push_back(neg[negLen++]);
        }

        while(posLen<pos.size()){
            ans.push_back(pos[posLen++]);
        }

        return ans;
    }
```

### Example
- **Dutch National Flag Algorithm**
- Used to sort an array of 0s, 1s, and 2s in one pass, O(n) time, O(1) space
- |--- 0 zone ---|--- 1 zone ---|--- 2 zone ---|
- Rules While Iterating (mid pointer inspector hota hai)
```bash
low = 0  
mid = 0  
high = last index  
```
1. mid ko agar 2 mile

    - 2 ko last me jaana chahiye → high zone

    - Isliye swap(mid, high)

    - high-- (taaki next 2 last me ja sake)

    - mid++ nahi karte → kyunki mid pe naya element aaya, usko check karna hai

2. mid ko agar 1 mile

    - 1 already middle zone ka element hai

    - Simply mid++
3. mid ko agar 0 mile
    - 0 ko front zone me rakhna hota hai
    - Kyu 2 ko hum already , high zone me daal diye, 1 mila to wo uske hi  zone me hai
    - Isliye swap(mid, low)
    - low++ (0 zone expand),ki dusre zero rakh paye
    - mid++ (kyunki ab mid pe new element nahi aaya, swap low-mid kiya)

```cpp
void sortColors(vector<int>& nums) {
        short low=0;
        short mid=0;
        short high=nums.size()-1;

        while(mid<=high){

            if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }else if(nums[mid]==1){
                mid++;
            }else if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
        }
    }

```

## Sliding Windows
- `Sliding` : expand and shrink
- Sliding `low` and `high`
- `high++` = `Expand`
- `low++` = `Shrink`
- Sliding windows are two type: `Fixed` and `dynamics`
- agar `size/length` diya hai Question me(sub array /substring)ka to  `Fixed Window`
### Flowchart hint for sliding windows
- `Array` / `String` ke Question me lagega
- `LinkedList` me `nhi` lagega
- `Sub array` / `SubString `/`window` Question Me hoga ya samjha me aa rh hoga
- Question me ,`Are we finding`: `max.`/`min.`/`longest`/`shortest`/`Sum`/`count`/`average`/`at most k.`/`at least k.`/`exactly k.`
### Steps for solve the problem
1. Identify the Pattern , is sliding window Question?
2. Fixed/Variable?
3. Data/information of window: meaningfull data
4. New window of Information find out kr lo, repeat krte raho end tak
### Notes
- `max window` Question k case me hamesha `sum(any problem)<=K`
- `min window` Question ke case me `Sum(any problem) >=K`

### Example
- **Given an array, max sum of any subarray of size k**
- Input: arr[] = [100, 200, 300, 400], k = 2
- Output: 700
- Explanation: arr2 + arr3 = 700, which is maximum.
```cpp
int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int maxSum=0;
        int tempSum=0;
        int low=0;
        int high=k-1;
        int end=arr.size();
        
        
        //first Time summing
        for(int i=low;i<=high;i++){
            tempSum+=arr[i];
        }
        
        
        while(high<end){
            if(tempSum>maxSum){
                maxSum=tempSum;
            }jj
            
            //sliding window
            low++;
            high++;
            
            //checking high could be cross array size
            if(high==end){
                break;
            }
            
            //summing next new window
            tempSum=tempSum-arr[low-1];
            tempSum=tempSum+arr[high];
            
        }
        
        return maxSum;
    }
```
### Template for most variable Slide window
```bash
high=0;low=0;
for(high=0;high<n;high++){
    [information: high ko include]

    [
    jab tak information
    galat hai , us low ko aage badate raho (low++) is ummed me ki information sahi ho jaye
    low ko shrink
    result/information-> low hatao
    ]

    # information jab sahi ho gya to result me likh lo
    [len=high-low+1]
    result=max(res,len)
}

```
### Example
- **Mininum Size Subarray Sum.**
- min. length of subarray whose sum>=target
- Input: target = 7, nums = [2,3,1,2,4,3]
- Output: 2
- Explanation: The subarray [4,3] has the minimal length under the problem constraint.
- Dynamic Window k case me hamesha `low=0,high=0`
```cpp
int minSubArrayLen(int target, vector<int>& nums) {
        
        int low=0,high=0;
        int minLen=INT_MAX;
        int sum=0;
        int end =nums.size();


        while(high<end){
            sum=sum+nums[high];

            while(sum>=target){
                int len=high-low+1;
                minLen=min(minLen,len);

                sum=sum-nums[low];
                low++;
            }
            high++;
        }

         return (minLen == INT_MAX) ? 0 : minLen;
    }
```

### Example
- **Longest Substring with K Uniques**
- Input: s = "aabacbebebe", k = 3
- Output: 7
- Explanation: The longest substring with exactly 3 distinct characters is "cbebebe", which includes 'c', 'b', and 'e'.
```cpp
int longestKSubstr(string &s, int k) {
        // code here
        int low=0,high=0;
        int res=INT_MIN;
        int n=s.size();
        unordered_map<char,int> f;
        
        for(high=0;high<n;high++)
        {
            f[s[high]]++;
            int siz=f.size();
            while(f.size()>k) // shrink
            {
                f[s[low]]--;
                low++;
                if(f[s[low-1]] == 0)
                f.erase(s[low-1]);
            }
            
            // now it can be less or equal
            if(f.size()==k)
            {
                int len=high-low+1;
                res=max(res,len);
            }
        }
        
        if(res==INT_MIN)
        return -1;
        return res;

    }
```

### Example
- **Fruit into Baskets**
- In the basket, at most 2  distinct types of fruit
- find max. no. of fruits, kitna collect kr skte ho
- Input: fruits = [0,1,2,2]
- Output: 3
- Explanation: We can pick from trees [1,2,2].
- If we had started at the first tree, we would only pick from trees [0,1]
- Same Question , finf longest sbarray which has atmost 2 distinct numbers

```cpp
int totalFruit(vector<int>& fruits) {
        int result=INT_MIN;
        int high=0;
        int low=0;

        int end=fruits.size();

        unordered_map<int,int>freq;

        for(high=0;high<end;high++){
            freq[fruits[high]]++;

            while(freq.size()>2){
                freq[fruits[low]]--;
                low++;
                if(freq[fruits[low-1]]==0){
                    freq.erase(fruits[low-1]);
                }
            }

            if(freq.size()<=2){
                int len=high-low+1;
                result=max(len,result);
            }
        }

        return result;
    }
```

### Example
- **Longest Substring without duplicate characters**
- Given a string s, find the length of the longest substring without duplicate characters
- Input: s = "abcabcbb"
- Output: 3
- Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
```cpp
int lengthOfLongestSubstring(string s) {
        int low=0,high=0;
        int end=s.size();
        if(end==0) return end;
        int result=INT_MIN;

        unordered_map<char,int>freq;

        for(high=0;high<end;high++){
            freq[s[high]]++;
            
            int window=high-low+1;

            while(window>freq.size()){
                freq[s[low]]--;

                if(freq[s[low]]==0){
                    freq.erase(s[low]);
                }

                low++;
                window=high-low+1;
            }

            if(window==freq.size()){
             result=max(window,result);
            }
        }
        return result;
    }
```

### Example
- **Longest Repeating Character Replacement**
- You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.

- Return the length of the longest substring containing the same letter you can get after performing the above operations.
- Input: s = "AABABBA", k = 1
- Output: 4
- Explanation: Replace the one 'A' in the middle with 'B' and form "AABBBBA".
- The substring "BBBB" has the longest repeating letters, which is 4.
There may exists other ways to achieve this answer too.
```cpp
int findMax(vector<int> &num){
        int maxi=INT_MIN;
        for(auto el:num){
            if(el>maxi){
                maxi=el;
            }
        }
        return maxi;
    }
    int characterReplacement(string s, int k) {
        int high=0;
        int low=0;
        int end=s.size();
        int result=INT_MIN;

        vector<int>freq(256,0);

        for(high=0;high<end;high++){
            freq[s[high]]++;

            int window=high-low+1;
            int maxCount=findMax(freq);
            int needChanges=window-maxCount;


            while(needChanges>k){
                freq[s[low]]--;
                low++;
                window=high-low+1;
                maxCount=findMax(freq);
                needChanges=window-maxCount;
            }

            window=high-low+1;
            result=max(window,result);
            
        }

        return result;
    }
```

### Template for `min Window` Problem anyThing>=K
```cpp
for(high=0;high<n;high++){

    //information ko include kro
    sum+=a[high];

    while(information jab tak> sahi hai){
        // sahi information ko result me store kro
        int len=high-low+1;
        result=min(result-len);

        sum-=a[low];
        low++;
    }

    //information galat ho ho chuka hai yaha

}

return result
```

|max window | min window|
|-----------|-----------|
|sum<=k | sum>=k|
| high =0 -> n | high=0 ->n|
| high ko include | high ko include |
| Shrink low, jab galat ho | shrink low,Jab `sahi` ho, aur result yehi par likhna hau(while loop me hi)|
| Result after galat loop | kr chuke hai upar while loop me|

### Example
- **Minimum window Substring**
- Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".
- Input: s = "ADOBECODEBANC", t = "ABC"
- Output: "BANC"
- Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t
```cpp
bool validFreq(vector<int> &t, vector<int> &s){
        for(int i=0;i<256;i++){
            if(t[i]>s[i]){
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        int tSize=t.size();
        int sSize=s.size();
        if(tSize>sSize){
            return "";
        }
        vector<int>freqTest(256,0);
        vector<int>freqString(256,0);

        for(int i=0;i<tSize;i++){
            freqTest[t[i]]++;
        }

        int high=0,low=0;
        int resultLen=INT_MAX;
        int startPos=-1;

        for(high=0;high<sSize;high++){
            freqString[s[high]]++;

            while(validFreq(freqTest,freqString)){
                int len=high-low+1;

                if(len<resultLen){
                    resultLen=len;
                    startPos=low;
                }

                freqString[s[low]]--;
                low++;
            }
        }

        if(resultLen==INT_MAX) return "";
        else return s.substr(startPos,resultLen);
    }

```

## Fast & Slow Pointers
- Agar Question me ho `Cycle` / `Loop` / `Repeatative Behaviour `/`starting point of cycle`/`middle of linked List` Pata krna hai, hai ki nhi
- Mostly Linked List/Array/String/Number  k Question me lagta h

- **Slow**: Slow doudta ho
- **Fast**: tezi se daudta 

### Template for Fast & Slow Pointers
```bash
slow=head;
fast=head;

while(fast!=NULL and fast->next != NULL){
    //dauda lijiye
    slow=slow->next;

    //dauda lijiye 2 times
    fast=fast->next->next;

    if(slow==fast){
        return true;
    }
}

return false;
```

### Example
- **Linked List Cycle**
- Given head, the head of a linked list, determine if the linked list has a cycle in it
- 
```cpp
bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL and fast->next !=NULL){

            slow=slow->next;
            fast=fast->next->next;

            if(slow == fast){
                return true;
            }
        }
        return false;
    }
```
### Example
- **Linked List Cycle**
- Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null
![detect start point LL](/media/detectStartLL.png)

```bash
slow=L1+L2; //distance in t time
fast=L1+nC+L2;//distance in t time


let t=10;
L1+nC+L2=2(L1+L2);
L1+nC+L2=2L1+2L2;
nC=L1+L2;

L1=nC-L2
# C= no of nodes in cycle
# n=no. of times fast rann in cycle
# L1= no. of nodes b/w head and starting
# L2= no. of nodes b/w start point and meeting point

```

```cpp
ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(fast==slow){
                slow=head;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }
        }
        return NULL;  
    }
```

### Example
- **Middle of the Linked List**
- Given the head of a singly linked list, return the middle node of the linked list.

- If there are two middle nodes, return the second middle node

```cpp
ListNode* middleNode(ListNode* head) {
        
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        return slow;
    }
```

### Example
- **Find the Duplicate Number**
- Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
- There is only one repeated number in nums, return this repeated number
```cpp
int findDuplicate(vector<int>& nums) {
        int slow=0;
        int fast=0;

        while(true){
            slow=nums[slow];

            fast=nums[fast];
            fast=nums[fast];

            if(slow==fast){
                slow=0;
                 while(slow!=fast){
                    slow=nums[slow];
                    fast=nums[fast];
                }

                return slow;
            }
        }
        return slow;
    }
```

### Example
- **Happy Number**

```cpp
int SumOfSquareOfDigits(int n){
        int sum=0;
        while(n>0){
            int lastDigit=n%10;
            n=n/10;
            sum=sum+lastDigit*lastDigit;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow=n;
        int fast=n;

        while(fast!=1){
            slow=SumOfSquareOfDigits(slow);

            fast=SumOfSquareOfDigits(fast);
            fast=SumOfSquareOfDigits(fast);

            if(slow==fast && slow!=1){
                return false;
            }
        }
        return true;
    }
```

## Kadane algorithm
- Agar Question me Subarray Contigoues ka `Sum`/`Product`/`Frequency` (Best : min./max.)
- Where sliding window fail(negative element), it allow negative, positive,zero

### Template
- best ending -> define/clear
- Index by index aage jana hai
- i --->best ending at i
- It having 2 option
1. Pahale wale k sath mil jao
2. Apneapp ko rakho 
- yeh dono me ek **BEST ENDING** bann jata hai
- Fir result k sath Update kr de
- Example
![Kadane Explaination](/media/kadane_explaination.png)
![Max Sum Subarray](/media/Kadane_max_sum_subarray.png)

### Example 
- **Maximum Subarray**
- Given an integer array nums, find the subarray with the largest sum, and return its sum
- Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
- Output: 6
- Explanation: The subarray [4,-1,2,1] has the largest sum 6
```cpp
int maxSubArray(vector<int>& nums) {
        int result=nums[0];
        int bestEnding=nums[0];

        for(int i=1;i<nums.size();i++){
            int currentBestEndingSum=bestEnding+nums[i];
            int currentValue=nums[i];

            bestEnding=max(currentValue,currentBestEndingSum);

            result=max(result,bestEnding);
        }
        return result;
    }
```

### Example
- **Smallest sum contiguous subarray**
- Given an array arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the minimum sum and return its sum
- Input: 
arr[] = {3,-4, 2,-3,-1, 7,-5}
- Output: -6
- Explanation: sub-array which has smallest 
sum among all the sub-array is {-4,2,-3,-1} = -6

```cpp
int smallestSumSubarray(vector<int>& a) {
        // Code here
        int result=a[0];
        int minBestEndingSum=a[0];
        
        for(int i=1;i<a.size();i++){
            
            int currentBestEndingSum=minBestEndingSum+a[i];
            
            int currentValue=a[i];
            
            minBestEndingSum=min(currentValue,currentBestEndingSum);
            
            result=min(result,minBestEndingSum);
        }
        
        return result;
    }
```

### Example 
- 


## Prefix Sum
- Prefix Sum=Pahle Sum
- Question Hmesha Array/Subarray ka hoga
- ![Prefix Sum ](/media/pattern_prefix_sum.png)

- Array/Sub Array , 2 types
1. Sum of left/right pivot/equilibrium
2. Sum of Subarrays --> Negative  number
- Hum sliding window Tab use krte hai Jab element sirf positive ho 
- Kyu ki jab negative number hoga high++ par jaruri nhi hai result increase ho agar -ve num. hai to decrease bhi ho skta hai , same jab low o shrink krta hai to
- Iske 3 types hai 
1. 
```bash
sum(i....j)==k
sum(i...j)%k=0 

USE Hashmaps
```
2.  
```bash
Shortest Window with Sum>=K 

USE  Deque
```
3. 
```bash
Range Sum

USE Merge sort on prefix array
```


### Prefix and Suffix Sum
- Prefix
```cpp
prefix[0]=0;
prefix[1]=arr[0];
prefix[2]=arr[0]+arr[1];
prefix[3]=arr[0]+arr[1]+arr[2];
prefix[4]=arr[0]+arr[1]+arr[2]+arr[3];

// Pattern
prefix[0]=0;
prefix[1]=prefix[0];
prefix[2]=prefix[1]+arr[1];
prefix[3]=prefix[2]+arr[2];

//General
prefix[i]=Prefix[i-1]+arr[i-1];
```
- Suffix
```cpp
arr[]={0,1,2,3,4};

suffix[4]=0;
suffix[3]=arr[4];
suffix[2]=arr[4]+arr[3];
suffix[1]=arr[4]+arr[3]+arr[2];
suffix[0]=arr[4]+arr[3]+arr[2]+arr[1];

// Pattern
suffix[4]=0;
suffix[3]=arr[4];
suffix[2]=suffix[3]+arr[3];
suffix[1]=suffix[2]+arr[2];
suffix[0]=suffix[1]+arr[1];

//General
Suffix[i]=Suffix[i+1]+a[i+1];
```
- Prefix[i]=Prefix[i-1]+a[i-1]; // (0,i-1) tak sum
- Suffix[i]=Suffix[i+1]+a[i+1]; //( i+1, n-1 ) ka Sum

### Tempalate
```bash
[Prefix Data Structure]

[Loop over Array]

[Update Prefix]

[Check Condition]
```

### Example
- **Find Pivot Index**
- The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right
```cpp
int pivotIndex(vector<int>& nums) {
        int prefix=0;
        int sum=0;

        for(auto i:nums){
            sum+=i;
        }
        
        if (sum - nums[0] == 0) {
            return 0;
        }
        for(int i=1;i<nums.size();i++){
            prefix +=nums[i-1];
            int suffix=sum-nums[i]-prefix;

            if(suffix==prefix){
                return i;
            }
        }
        return -1;
    }
```
### Template
- Question me `no. of subarray`/ `length of longest subarray`/`length of any subarray` with some condition (`Sum==k` , `sum%k==0`  etc)
![alt text](/media/prefix_sum.png)
![alt text](/media/prefix_sum_2.png)

### Example 
- **Subarray Sum Equals K**
- O(n^2) solution
```go
func subarraySum(nums []int, k int) int {
    count:=0;
    for i:=0;i<len(nums);i++ {
        sum:=0;
        for j:=i;j<len(nums);j++{
            sum+=nums[j];
            if sum==k{
                count++;
            }
        }
    }
    return count;
}
```
- using Preffix Patterns
-  O(n) solution
```bash
nums[0]+nums[1]+nums[2]+nums[3]+nums[4]+nums[5]=sum
let nums[0]+nums[1]=sum-k
so
sum-k+x=sum
x=sum-sum+k
x=k
```
```cpp
int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int countResult=0;
        unordered_map<int,int>freq;
        freq[0]=1;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];

            int sumMinusK=sum-k;

            int tempCount=freq[sumMinusK];
            countResult+=tempCount;

            freq[sum]++;
        }
        return countResult;
    }
```
### Example
- **Subarray Sums Divisible by K**
- Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.

```cpp
int subarraysDivByK(vector<int>& a, int k) {
       int n=a.size();
       int count=0;
       int sum=0;

       unordered_map<int,int>freq;
       freq[0]=1;

       for(int i=0;i<n;i++){
        sum+=a[i];
        int remainder=sum%k;

        if(remainder<0){
            remainder=remainder+k;
        }

        int tempCount=freq[remainder];
        count+=tempCount;

        freq[remainder]++;
        }
        return count;
    }
```

### Example 
- **Contiguous Array**
- Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1
- Input: nums = [0,1,1,1,1,1,0,0,0]
- Output: 6
- Explanation: [1,1,1,0,0,0] is the longest contiguous subarray with equal number of 0 and 1.

- Brute Force
```go
func findMaxLength(nums []int) int {
    maxLen:=0;
    n:=len(nums);

    for i:=0;i<n;i++{
        countZero:=0;
        countOne:=0;
        for j:=i;j<n;j++{
            if nums[j]==0{
                countZero++;
            }else{
                countOne++;
            }

            if(countZero==countOne){
                len:=j-i+1;
                if len> maxLen{
                    maxLen=len;
                }
            }
        }
        
    }
    return maxLen;
}
```
- O(n)

```cpp
int findMaxLength(vector<int>& nums) {
       int maxLen=0;
       int zero=0;
       int one=0;

       unordered_map<int,int>prevIndex;

       for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }else{
                one++;
            }
            int diff=zero-one;
            if(diff==0){
                maxLen=max(maxLen,i+1);
                continue;
            }

            if(prevIndex.find(diff)==prevIndex.end()){
                prevIndex[diff]=i;
            }else{
                int idx=prevIndex[diff];
                int len=i-idx;
                maxLen=max(maxLen,len);
            }
       }
       return maxLen;
    }
```

| Prefix Sum |Kadanes|
|------------|----------|
|subarray |Subarray|
|condition: sum<k or sum>k| sum: max,min|
|shortest/longest/count| also product max/min |

- Prefix Sum and Sliding window same type of Question Solve krte hai
- But Negative element hoye to NO Sliding window



## Merge Intervals
- Range ([start,end])/Interval
- Keywords in Questions: Overlap,conflict,merge,free time, simultaneous usage,room,load,cpu,meetings

```bash
(start,end)
[1,4],[2.5],[3,4],[2,6],[5,8]
start se sort kr lena hai

(start1, end1) (start2,end2)

merge hoga ya nhi?: end1>=start2
start1<end1
start2<end2

start1<start2<end2

merge: (start1,max(end1,end2))

```

### Example
-  Merge Interval
- Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input
- Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
- Output: [[1,6],[8,10],[15,18]]
- Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6]

```cpp
vector<vector<int>> merge(vector<vector<int>>& a) {
        vector<vector<int>> res;

        int n=a.size();
        sort(a.begin(),a.end());

        int start1=a[0][0];
        int end1=a[0][1];
     
        for(int i=1;i<n;i++)
        {
            int start2=a[i][0];
            int end2=a[i][1];

            if(end1>=start2) //merge krna hai
            {
                start1=start1;
                end1=max(end1,end2);
                continue;
            }
            res.push_back({start1,end1});
            start1=start2;
            end1=end2;
        }
        res.push_back({start1,end1});
        return res;
    }
```
### Example
- **Insert Interval**
- ou are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.

Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).

Return intervals after the insertion.

Note that you don't need to modify intervals in-place. You can make a new array and return it.
- Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
- Output: [[1,5],[6,9]]

```cpp
vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
       vector<vector<int>> tempIntervals;
       vector<vector<int>> result;
       if(intervals.size()<1){
        result.push_back(newInterval);
        return result;
       }
       bool isInserted=false;
       for(int i=0;i<intervals.size();i++){
                if(intervals[i][0]>newInterval[0] and isInserted==false){
                    tempIntervals.push_back(newInterval);
                    isInserted=true;   
                }
                tempIntervals.push_back(intervals[i]);
       }

       if (isInserted==false) {
            tempIntervals.push_back(newInterval);
        }

       int start1=tempIntervals[0][0];
       int end1=tempIntervals[0][1];

       for(int i=1;i<tempIntervals.size();i++){
        int start2=tempIntervals[i][0];
        int end2=tempIntervals[i][1];

        if(end1>=start2){
            end1=max(end1,end2);
            continue;
        }
        result.push_back({start1,end1});
        start1=start2;
        end1=end2;
       }
       result.push_back({start1,end1});
        return result;
    }
```


## Stack Pattern
- Dher
- Ek Box jisme kitab rakh(any data) skte hai, sirf upar se opening hai
- **LIFO** (Last In First Out)
- **FILO** (First In Last Out)
- main operation [push(),pop(),top(),size(),empty()]
- **Type of Stock**
1. Simple
2. Monotonic (increasing/decreasing)
3. Greedy Stack
### Pattern to identify in Question
- Kuchh items(`array/string`) diye ho 
- left to right dekhna hai
- `most recent element` 
- `Matching/Cancelling/Cleaning`
- Reverse
### Universal Template 
- Items hai
- decide???: when to pop and what to pop??
- when to push
- result ko store kr lena hoga


### Example
- Remove All Adjacent Duplicates in string

```cpp
string removeDuplicates(string s) {
        int n=s.size();
        stack<int>stk;
        int i;
        string res;

        for(i=0;i<n;i++){
            if(stk.empty()){
                stk.push(s[i]);
                continue;
            }

            if(stk.top()==s[i]){
                stk.pop();
                continue;
            }
            stk.push(s[i]);
        }

        while(!stk.empty()){
            res.push_back(stk.top());
            stk.pop();
        }

        reverse(res.begin(),res.end());
        return res;
    }
```
### Example
- **Valid Parenthesis**
- Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
```cpp
bool isValid(string s) {
        stack<char>stk;
        for(int i=0;i<s.size();i++){
            if(s[i]=='[' || s[i]=='(' || s[i]=='{'){
                stk.push(s[i]);
                continue;
            }
            if(s[i]==']' || s[i]==')' || s[i]=='}'){
                if (stk.empty()) return false;
                char top=stk.top();
                if((top=='[' && s[i]==']')||(top=='(' && s[i]==')')|| (top=='{' && s[i]=='}')){
                    stk.pop();
                    continue;
                }else{
                    return false;
                }
            }
        }
        if(stk.empty()){
            return true;
        }else{
            return false;
        }
        
    }

```

### Example
- **Previous Greater Element**
```cpp
vector<int> preGreaterEle(vector<int>& nums) {
        
        int n=nums.size();
        stack<int>stk;
        vector<int>res(n);
        res[0]=-1;
        stk.push(nums[0]);

        for(int i=1;i<n;i++){

            while(!stk.empty() && stk.top()<=nums[i]){
                stk.pop();
            }
            if(stk.empty()){
                res[i]=-1;
            }else{
                res[i]=stk.top();
            }
            stk.push(nums[i]);
        }
        return res;
    }
```

### Example 
- **Next Greater Element Type**
- **Daily Temperatures**
- Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead
- Input: temperatures = [73,74,75,71,69,72,76,73]
- Output: [1,1,4,2,1,1,0,0]
```cpp
vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size=temperatures.size();
        stack<int>stk;
        vector<int>res(size);
        res[size-1]=0;
        stk.push(size-1);

        for(int i=size-2;i>=0;i--){
            while(!stk.empty() && temperatures[stk.top()]<=temperatures[i]){
                stk.pop();
            }
            if(stk.empty()){
                res[i]=0;
            }else{
                res[i]=stk.top()-i;
            }
            stk.push(i);
        }
        return res;
    }
```

### Example
- **Next Greater Element**
- Given a circular integer array nums (i.e., the next element of nums[nums.length - 1] is nums[0]), return the next greater number for every element in nums.

- The next greater number of a number x is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, return -1 for this number.


```cpp
vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>stk;
        
        int n=nums.size();
        vector<int>res(n);
        for(int i=n-2;i>=0;i--){
            stk.push(nums[i]);
        }
        
        for(int i=n-1;i>=0;i--){
            while(!stk.empty() && stk.top()<=nums[i]){
                stk.pop();
            }

            if(stk.empty()){
                res[i]=-1;
            }else{
                res[i]=stk.top();
            }

            stk.push(nums[i]);
        }
        return res;
    }

```
### Example
- **Remove All Adjacent Duplicates in String II**
- You are given a string s and an integer k, a k duplicate removal consists of choosing k adjacent and equal letters from s and removing them, causing the left and the right side of the deleted substring to concatenate together.
- We repeatedly make k duplicate removals on s until we no longer can.

- Return the final string after all such duplicate removals have been made. It is guaranteed that the answer is unique.
- Input: s = "deeedbbcccbdaa", k = 3
- Output: "aa"
- Explanation: 
First delete "eee" and "ccc", get "ddbbbdaa"
Then delete "bbb", get "dddaa"
Finally delete "ddd", get "aa"

```cpp
string removeDuplicates(string s, int k) {
        int n=s.size();
        stack<pair<char,int>>stk;

        for(int i=0;i<n;i++){
            char c=s[i];
            if(stk.empty()){
                stk.push({c,1});
                continue;
            }

            if(stk.top().first!=c){
                stk.push({c,1});
                continue;
            }
            if(stk.top().second<(k-1)){
                pair<char,int>temp=stk.top();
                stk.pop();
                stk.push({temp.first,temp.second+1});
                continue;
            }
            stk.pop();
        }
        string res="";
        while(!stk.empty()){
            pair<char,int>p=stk.top();
            stk.pop();
            while(p.second--){
                res.push_back(p.first);
            }

        }
        reverse(res.begin(),res.end());
        return res;
    }
```

## Hashmaps Pattern
- A HashMap (also called a hash table or dictionary) is a data structure that stores `key–value pairs` and allows very fast lookup
- **Key** → used to find the value,or identifier
- **Value** → the data stored

### Hashmap kab use krna hai?
- Old data yaad rakhna hai kisi question me

### Example
- **First Unique Character in a String**
- Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1
```cpp
int firstUniqChar(string s) {
        unordered_map<char,int>freq;

        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }

        for(int i=0;i<s.size();i++){
            if(freq[s[i]]==1){
               return i; 
            }
        }

        return -1;
    }
```

### Example 
- **Ransom Note**
- Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

- Each letter in magazine can only be used once in ransomNote.

```cpp
bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char,int>needFreq;
       unordered_map<char,int>haveFreq;

       for(int i=0;i<ransomNote.size();i++){
            needFreq[ransomNote[i]]++;
       } 
       for(int i=0;i<magazine.size();i++){
         haveFreq[magazine[i]]++;
       } 

       for(auto itr:needFreq){
            char needKey=itr.first;
            int needValue=itr.second;

            int haveValue=haveFreq[needKey];

            if(needValue>haveValue){
                return false;
            }

       }
       return true;
    }
```

### Example
- **Maximum Number of Balloons**
- Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible
- You can use each character in text at most once. Return the maximum number of instances that can be formed.

```cpp
int maxNumberOfBalloons(string text) {
        unordered_map<char,int>needFreq;
        unordered_map<char,int>haveFreq;
        int result=INT_MAX;
        needFreq['b']=1;
        needFreq['a']=1;
        needFreq['l']=2;
        needFreq['o']=2;
        needFreq['n']=1;
        for(int i=0;i<text.size();i++){
            haveFreq[text[i]]++;
        }

        for(auto itr:needFreq){
            char needKey=itr.first;
            int needValue=itr.second;
            int haveValue= haveFreq[needKey];
            int times=haveValue/needValue;
            result=min(result,times);
        }

        return result;
    }
```
### Example 
- **Longest Palindrome**
- Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.
- Letters are case sensitive, for example, "Aa" is not considered a palindrome.

```cpp
int longestPalindrome(string s) {
       unordered_map<char,int>freq;
       for(int i=0;i<s.size();i++){
            freq[s[i]]++;
       }
        int result=0;
        bool isOdd=false;
       for(auto itr:freq){
            if(itr.second%2==0){
                result+=itr.second;
            }else{
                isOdd=true;
            }
       }

       if(isOdd==false){
            return result;
       }

       for(auto itr:freq){
           
            if(itr.second%2==1){
                int value=itr.second;
                result+=value-1;
            }
       }

       return result+1;
    }
```

## In-place Reversal of a LinkedList

### Example
- **Reverse Linked List**
- Given the head of a singly linked list, reverse the list, and return the reversed list
```cpp
ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr!=NULL){
            ListNode* next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
```

### Example
- **Reverse Linked List II**
- Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list
- Input: head = [1,2,3,4,5], left = 2, right = 4
- Output: [1,4,3,2,5]
```cpp
ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL){
            return head;
        }
        if(left==right){
            return head;
        }

        ListNode* temp=head;
        ListNode* before=NULL;
        int pos=1;

        while (pos < left) {
            before = temp;
            temp = temp->next;
            pos++;
        }

        ListNode* curr=temp;
        ListNode* prev=NULL;
        int times=right-left+1;

        while(times--){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        temp->next=curr;
        if(before){
            before->next=prev;
            return head;
        }
        return prev;
    }
```



## Binary Search Algorithm Pattern
- Guess/Trial/error/Tukka
- Jo bhi question me find out krna hoga usko guess krege jaise index/number/regulator/no. of cows/ speed/no. of days/no. of people etc
- [less, less, less, less, normal normal,equal,equal, high,high]
- [chadai,chadai,chadai,chadai,dhalan,dhalan,dhalan]
### Temaplate
1. Single chiz [index, optimization,
]
2. Guess --> kr skte hai
3. Guess ----->> Answer [monotonic hona chahiye]

### Example
- Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1
```cpp
int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;

        while(low<=high){
            int guessIndex=(low+high)/2;

            if(nums[guessIndex]==target){
                return guessIndex;
            }
            if(nums[guessIndex]<target){
                low=guessIndex+1;
            }else{
                high=guessIndex-1;
            }
        }
        return -1;
    }
```

### Example
- **Ceil in a Sorted Array**
- Given a sorted array arr[] and an integer x, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x. This element is called the ceil of x. If such an element does not exist, return -1
```cpp
int findCeil(vector<int>& arr, int x) {
        int low=0;
        int high=arr.size()-1;
        int resultIndex=-1;
        
        while(low<=high){
            int guessIndex=(low+high)/2;
            
            if(arr[guessIndex]<x){
                low=guessIndex+1;
            }else{
                resultIndex=guessIndex;
                high=guessIndex-1;
            }
        }
        return resultIndex;
    }
```

### Example
- **Find First and Last Position of Element in Sorted Array**
- Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value
- If target is not found in the array, return [-1, -1].
- You must write an algorithm with O(log n) runtime complexity.
```cpp
vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high =nums.size()-1;
        int first=-1;
        int last=-1;
        while(low<=high){
            int guessIndex=(low+high)/2;

            if(nums[guessIndex]<target){
                low=guessIndex+1;
            }else if(nums[guessIndex]>target){
                high=guessIndex-1;
            }else{//equal
                first=guessIndex;
                high=guessIndex-1;
            } 
        }


        low=0;
        high =nums.size()-1;
        while(low<=high){
            int guessIndex=(low+high)/2;

            if(nums[guessIndex]<target){
                low=guessIndex+1;
            }else if(nums[guessIndex]>target){
                high=guessIndex-1;
            }else{//equal
                last=guessIndex;
                low=guessIndex+1;
            } 
        }

        return {first,last};
    }

```

### Example
- **Peak Index in a Mountain Array**
- You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
- Return the index of the peak element.
- Your task is to solve it in O(log(n)) time complexity.
```cpp
int peakIndexInMountainArray(vector<int>& arr) {
        int peakIndex=-1;
        int low=0;
        int high=arr.size()-1;

        while(low<=high){
            int guessIndex=(low+high)/2;

            if(arr[guessIndex]<arr[guessIndex+1]){
                //chadan
                low=guessIndex+1;
            }else{
                peakIndex=guessIndex;
                high=guessIndex-1;
            }
        }
        return peakIndex;
    }
```

### Example
- **Find Minimum in Rotated Sorted Array**
```cpp
int findMin(vector<int>& nums) {
        int low=0;
        int minIndex=INT_MAX;
        int high=nums.size()-1;
        int size=high;

        while(low<=high){
            int guessIndex=(low+high)/2;

            if(nums[guessIndex]>nums[size]){
                low=guessIndex+1;
            }else{
                minIndex=guessIndex;
                high=guessIndex-1;
            }
        }
        return nums[minIndex];
    }
```

 

































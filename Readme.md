# Data Structures and Algorithms
**Constsitance | Practice | Implement | Compete**
# contents
- [Patterns](#patterns)
- [Data Structure](#data-structures)
- [Algo](#algorithms)
- [Time Complexity](#time-complexity)
- [Space Complexity](#space-complexity)
- [Array](#array)
- [Linked List](#linked-listd)
- []()
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








# Patterns
- [Two Pointers](#two-pointers)
- [Sliding Windows](#sliding-windows)
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
- `Sub array` / `SubString ` Question Me hoga ya samjha me aa rh hoga
- Question me ,`Are we finding`: `max.`/`min.`/`longest`/`shortest`/`Sum`/`count`/`average`/`at most k.`/`at least k.`/`exactly k.`
### Steps for solve the problem
1. Identify the Pattern , is sliding window Question?
2. Fixed/Variable?
3. Data/information of window: meaningfull data
4. New window of Information find out kr lo, repeat krte raho end tak

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
            }
            
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
    galat hai , us low ko aage badate raho (low++)
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
- Fruit into Baskets
- In the basket, at most 2  distinct types of fruit
- find max. no. of fruits, kitna collect kr skte ho
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




















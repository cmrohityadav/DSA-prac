# Data Structures and Algorithms
**Constsitance | Practice | Implement | Compete**
# contents
- [Patterns](#patterns)
- [Data Structure](#data-structures)
- [Algo](#algorithms)
- [Time Complexity](#time-complexity)
- [Space Complexity](#space-complexity)
- [Array](#array)
- []()
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








# Patterns
- [Two Pointers](#two-pointers)

## Two Pointers
- Question `Array` ya `LinkList`  hi hog 80% case me
- Tree,Graph,Stack,DP,Queue isme `99%` case me Two `Pointers nhi lagta`
- `Sorted` ho ya `Sort kr skte` hai fir aasaan hoga to Two Pointers ka soch sakte hai
- Question me agar `Merge` /`Remove Duplicate` /`Re-arrage`
- `LinkList` Question me `Detect Cycle` ya  `Cycle  lagane se` Question Bann jayega 
- Question me `Pairs`/`Triplets`/`Quadruple` ho to Two Pointers k bare me soch skte hai
- Agar Question me `Do not use Extra Space` krke agar 2 se jyda chiz find krni hai to Two Pointer Use kr skte hai
- `In-Order` means `No Space`









# Recursion
1. In recursion , we try to solve a bigger problem by finding out solution to smaller sub problem.
2. We represent these problems in the form of the function and this function call him self to slove smaller subproblem.
3. We usse principal of mathematical induction.
    i. base case
    ii. Assumption
    iii. Selfwork
4. space get introduce due to call stack
5. working of recursion function
syntax: 
    methodName(N parameters)
    {
        if(haltCondition){
            resturn result;
        }
        return methodName(N parameter)
    }

6. Compiler notes the line number when it call other function in CALL STACK
- jis function se call hua hota hai jo function
- excute hone k baad call wale function k pass return chale jata hai


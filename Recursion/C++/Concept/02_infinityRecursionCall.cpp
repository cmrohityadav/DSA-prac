#include<iostream>
using namespace std;
/*here we does not have break condition
 So it will run infinity
*/
void dayRemainHBD(int day){
    cout<<day<<" is remain for Birthday"<<endl;
    dayRemainHBD(day-1);
}
int main()
{
    dayRemainHBD(5);
    return 0;
}

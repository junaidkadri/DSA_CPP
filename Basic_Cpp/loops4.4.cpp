#include <iostream>
// binary  to decimal  code  
using namespace std;
int main()
{

    int num = 110, ans = 0;
    int mul = 1;
    int rem;
    while (num > 0)
    {
        rem = num % 10;  //num&1
        num /= 10;  // num>>1
        ans += rem * mul;
        mul *= 2;
    }
    cout << ans << endl;

    return 0;
}
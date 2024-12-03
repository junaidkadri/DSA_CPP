#include <iostream>
// decimal to binary code 
using namespace std;
int main()
{

    int num = 131, ans = 0;
    int mul = 1;
    int rem;
    while (num > 0)
    {
        rem = num % 2;  //num&1
        num /= 2;  // num>>1
        ans += rem * mul;
        mul *= 10;
    }
    cout << ans << endl;

    return 0;
}
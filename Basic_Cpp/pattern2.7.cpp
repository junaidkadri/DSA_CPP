#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int n;
    cout << "enter the value of n  \n";
    cin >> n;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            cout << setw(2) << count << "  ";
            count += 1;
        }
        cout << endl;
    }

    return 0;
}

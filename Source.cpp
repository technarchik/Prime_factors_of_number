#include <iostream>
using namespace std;
void rec(int a, int b)
{
    if (a == 1)
        return;
    for (;; b++)
        if (a % b == 0)
        {
            cout << b << endl;
            rec(a / b, b);
            return;
        }
}
int main()
{
    int a;
    cout << "N = ";
    cin >> a;
    if (a == 0)
        cout << "You can't enter '0'\n";
    else
    rec(a, 2);
    system("pause");
    return 0;
}

#include <iostream>

using namespace std;

int Sum(int mas[], const int n);
int main()
{
    const int k = 4;
    int b[k] = { 3, 4, 5, 6 };
    int a[k] = { 3 * 3,4 * 4,5 * 5,6 * 6 };
    cout << "S2 = " << Sum(b, k) << endl;
    cout << "S = " << Sum(a, k) << endl;

    return 0;
}

int Sum(int mas[], const int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s += mas[i];
    return s;
}

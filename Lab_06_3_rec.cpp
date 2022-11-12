#include <iostream>

using namespace std;

int Sum(int mas[], const int i);
int main()
{
    const int k = 4;
    int a[k] = { 3, 4, 5, 6 };
    int b[k] = { 3 * 3,4 * 4,5 * 5,6 * 6 };
    cout << "S = " << Sum(a, k - 1) << endl;
    cout << "S1 = " << Sum(b, k - 1) << endl;
        
    return 0;
}

int Sum(int mas[], const int i)
{
    if (i < 0)
        return 0;
    else
        return mas[i] + Sum(mas, i - 1);
}

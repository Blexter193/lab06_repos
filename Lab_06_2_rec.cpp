#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(a, size, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
    cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}
int Max(int* a, const int size, int max, int i)
{
    if (a[i] > max )
        max = a[i];
    if (i < size - 1)
        return Max(a, size, max, i + 1);
    else
        return max;
}
    
int Min(int* a, const int size, int min, int i)
{
    if (a[i] < min)
        min = a[i];
    if (i < size - 1)
        return Min(a, size, min, i + 1);
    else
        return min;
}

int IFirst(int* a, const int size, int& max, int i)
{
    if (max < a[i])
    {
        max = a[i];
        return i;
    }

    if (i < size - 1)
        return IFirst(a, size, max, i + 1);
    else
        return -1;
}

int main()
{
    srand((unsigned)time(NULL));
        
    double min;
    double max;
        
    cout << "min = "; cin >> min;
    cout << "max = "; cin >> max;
        
    cout << "Value of min before: " << min << endl;
    cout << "Value of max before: " << max << endl;
    swap(min, max);
    cout << "Value of min now: " << min << endl;
    cout << "Value of max now: " << max << endl;
        
    return 0;

}

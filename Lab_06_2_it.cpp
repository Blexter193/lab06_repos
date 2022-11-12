#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
    cout << endl;
}

int Max(int* arr, int size) {
    int max = arr[size];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}
int Min(int* arr, int size) {
    int min =  arr[0];
        for (int i = 0; i < size; i++)
        {
            if (min>arr[i]) {
                min = arr[i];
            }

        }
        
        return min;
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

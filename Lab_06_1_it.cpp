#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;

int Mas( int arr[], int n)
{
    srand((unsigned)time(NULL));
    int min = -20;
    int max = 50;
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        arr[i] = min + rand() % (max - min + 1);
        cout << arr[i] << " , ";
    }
    cout << "]" << endl;
    return 0;
}

int Check(int arr[] , int n  ) {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] > 0) && !(i % 5 == 0))
        {
            sum += arr[i];
        }
    }
        cout << "Sum = " << sum;
    return 0;
}

int Change_num(int arr[], int n)
{
    
    for  (int i = 0; i < n; i++)
    {
        if ((arr[i] > 0) && !(i % 5 == 0))
        {
            arr[i] = 0;
        }
    }
    cout << endl;
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << "]" << endl;
    return 0;
}


int main() {

    srand((unsigned)time(NULL));
    const int SIZE = 20;
    int arr[SIZE];
    Mas(arr ,SIZE);
    Check(arr, SIZE);
    Change_num(arr, SIZE);
}

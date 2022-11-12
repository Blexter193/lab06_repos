#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;

int Mas(int* arr, const int n, const int min, const int max, int i)
{


  arr[i] = min + rand() % (max - min + 1);
  if (i < n - 1)
  {
    return Mas(arr, n, min, max, i + 1);
  }
    return 0;
}

int Print(int* arr, const int n, int i)
{

  cout << setw(4) << arr[i];
  if (i < n - 1)
    return Print(arr, n, i + 1);
  else
    cout << endl;
    return 0;
}

int Summa(int* arr, const int n, int i)
{
  if (i < n)
  {
    if ((arr[i] > 0) && !(i % 5 == 0))
      return arr[i] + Summa(arr, n, i + 1);
    else
      return Summa(arr, n, i + 1);
  }
  else
    return 0;
}

int Change_num(int arr[], const int n) {

  for (int i = 0; i < n; i++)
  {
    if ((arr[i] > 0) && !(i % 5 == 0))
    {
      arr[i] = 0;
    }
  }
  cout << endl;
  cout << "[";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " , ";
  }
  cout << "]" << endl;
  return 0;
}

int main() {

  srand((unsigned)time(NULL));
  const int SIZE = 20;
  int arr[SIZE];
  int min = -20;
  int max = 50;
  Mas(arr, SIZE, min, max, 0);
  Print(arr, SIZE, 0);
  cout << "summa = " << Summa(arr, SIZE, 0);
  Change_num(arr, SIZE);
}

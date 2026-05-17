<<<<<<< HEAD
#include <iostream>
using namespace std;

int LinearSearch(int arr[], int sz, int target)
{
  for (int i = 0; i < sz; i++)
  {
    if (arr[i] == target)
    {
      return i;
    }
  }
  return -1; // NOT Found
}

int main()
{
  int arr[] = {4, 2, 7, 8, 1, 2, 5};
  int sz = 7;
  int target = 80;

  cout << LinearSearch(arr, sz, target) << endl;
  return 0;
=======
#include <iostream>
using namespace std;

int LinearSearch(int arr[], int sz, int target)
{
  for (int i = 0; i < sz; i++)
  {
    if (arr[i] == target)
    {
      return i;
    }
  }
  return -1; // NOT Found
}

int main()
{
  int arr[] = {4, 2, 7, 8, 1, 2, 5};
  int sz = 7;
  int target = 80;

  cout << LinearSearch(arr, sz, target) << endl;
  return 0;
>>>>>>> d03cd9b0cf447c190690719d2d136bc996dafc0f
}
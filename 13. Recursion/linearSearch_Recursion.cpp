#include <iostream>
using namespace std;

bool linearSearch(int *arr, int size, int key) // isPresent
{
    { // To See the flow
      //  cout << endl;
      //  cout << "Size of Array: " << size << "    ";
      //  for (int i = 0; i < size; i++)
      //  {
      //      cout << arr[i] << " ";
      //  }
    }
    if (size == 0)
    {
        return 0;
    }
    if (arr[0] == key)
    {
        return 1;
    }
    else
    {
        return linearSearch(arr + 1, size - 1, key);
    }
}

int main()
{
    int size, key;
    cin >> size >> key;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "isPresent: " << linearSearch(arr, size, key);
    delete[] arr;
}
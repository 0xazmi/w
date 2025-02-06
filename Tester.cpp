#include <iostream>
using namespace std;

int main() {
  int arr[] = {12, 34, 54, 2, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  int gap = n / 2;

  while (gap > 0) {
    for (int i = gap; i < n; i++) {
      int temp = arr[i];

      int j = i;
      while (j >= gap && arr[j - gap] > temp) {
        arr[j] = arr[j - gap];
        j -= gap;
      }

      arr[j] = temp;
    }

    gap /= 2;
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}

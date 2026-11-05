#include <iostream>
#include <iomanip>
#include <algorithm>

int main() {
   int n, sum = 0;
   std::cin >> n;
   int arr[1000];
   for(int i = 0; i < n; i++) {
       std::cin >> arr[i];
   }
   std::sort(arr, arr + n);
   for(int i = 1; i < n - 1; i++) {
       sum += arr[i];
   }
   std::cout << std::fixed << std::setprecision(2) << (double)sum / (n - 2);
   return 0;
}

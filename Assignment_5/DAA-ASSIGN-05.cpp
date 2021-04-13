#include <bits/stdc++.h>
using namespace std;
double find_average(double arr[], int left, int right)
{
if (left > right)
return 0;
if (left == right)
return arr[left];
int mid = (left + right) / 2;
double lavg = find_average(arr, left, mid);
double ravg = find_average(arr, mid + 1, right);
return (lavg * (mid - left + 1) + ravg * (right - mid)) / (right - left
+ 1);
}
int main()
{
srand(time(0));
int n;
cout << "Enter the number of elements in the array:" << endl;
cin >> n;
cout << "Below is the randomly generated array of length " << n << ":"
<< endl;
double arr[n];
for (int i = 0; i < n; i++)
{
arr[i] = rand() % 10;
}
for (int i = 0; i < n; i++)
{
cout << arr[i] << " ";
}
cout << endl;
cout << "The Average of the elements present in the array is: " <<
find_average(arr, 0, n - 1);
}

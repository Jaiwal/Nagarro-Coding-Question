#include <bits/stdc++.h>
using namespace std;

// Reverse subarray a[0..k-1]
void reverse(int a[], int n, int k)
{
    if (k > n)
    {
        cout << "Invalid k";
        return;
    }

    // One by one reverse first and last elements of a[0..k-1]
    for (int i = 0; i < k/2; i++)
        swap(a[i], a[k-i-1]);
}

// Driver program
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(int), k = 4;

    reverse(a, n, k);

    for (int i = 0; i < n; ++i)
        cout<< a[i]);

    return 0;
}

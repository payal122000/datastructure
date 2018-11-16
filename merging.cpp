
#include <iostream>
using namespace std;

// Function to merge array in sorted order
void Merge(int a[], int b[], int res[], 
                                int n, int m)
{
    // Concatenate two arrays
    int i = 0, j = 0, k = 0;
    while (i < n) {
        res[k] = a[i];
        i += 1;
        k += 1;
    }
    while (j < m) {
        res[k] = b[j];
        j += 1;
        k += 1;
    }

}
 
int main()
{
    int a[] = { 10, 5, 15 };
    int b[] = { 20, 3, 2, 12 };
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
 
    // Final merge list
    int res[n + m];
    
 Merge(a, b, res, n, m);
    cout<< "merged list :";
    for (int i = 0; i < n + m; i++)
        cout <<" " << res[i];
    
 
    return 0;
}

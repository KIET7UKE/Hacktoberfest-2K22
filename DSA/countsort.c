// Counting Sort in C program
#include <stdio.h> 
#include <string.h> 
#define RANGE 255 
// The function to sort the given string arr[] in alphabetical order.
void countSort(char arr[]) 
{ 
// It is the output character array to store sorted arr.
char output[strlen(arr)]; 
// It is the count array to store count of individual characters.
int count[RANGE + 1], i; 
memset(count, 0, sizeof(count)); 
// Store count of each character.
for(i = 0; arr[i]; ++i) 
++count[arr[i]]; 
 
// Position of this character in the output array.
for (i = 1; i <= RANGE; ++i) 
count[i] += count[i-1]; 
 
// Build the output character array.
for (i = 0; arr[i]; ++i) 
{ 
output[count[arr[i]]-1] = arr[i]; 
--count[arr[i]]; 
} 
/* 
For Stable algorithm 
for (i = sizeof(arr)-1; i>=0; --i) 
{ 
output[count[arr[i]]-1] = arr[i]; 
--count[arr[i]]; 
} 
For Logic: See implementation
*/
for (i = 0; arr[i]; ++i) 
arr[i] = output[i]; 
} 
// Driver program to test the above function.
int main() 
{ 
char arr[] = "techgeekbuzz";//"applepp"; 
countSort(arr); 
printf("The sorted character array is %sn.", arr); 
return 0; 
}
Output:

The sorted character array is techgeekbuzz.

Example of Counting Sort in C++ Programming
#include<bits/stdc++.h>
using namespace std;

void countsort(int arr[], int n, int k)

{
    int output[n];
    int count[k];

    memset(count, 0, sizeof(count));

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int commulative = 0;

    for (int i = 0; i < k; i++)
    {
        int oldCount = count[i];
        count[i] = commulative;
        commulative += oldCount;
    }

    for (int i = 0; i < n; i++)
    {
        output[count[arr[i]]] = arr[i];
        count[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int main()
{
    int arr[] = { 1, 5, 4, 3, 2 };

    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 6;

    countsort(arr, n, k);

    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
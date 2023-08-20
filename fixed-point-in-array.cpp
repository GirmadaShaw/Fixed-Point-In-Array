/*
Given an array of n distinct integers sorted in ascending order, write a function that returns
a Fixed Point in the array, if there is any Fixed Point present in array, else returns -1.
Fixed Point in an array is an index i such that arr[i] is equal to i. Note that integers in array can be negative.
Input: arr[] = {-10, -5, 0, 3, 7}
Output: 3  // arr[3] == 3
Input: arr[] = {0, 2, 5, 8, 17}
Output: 0  // arr[0] == 0
Input: arr[] = {-10, -5, 3, 4, 7, 9}
Output: -1  // No Fixed Point
*/

#include <iostream>

int main()
{
    int arr[] = {-10, -5, 0, 3, 7};
    // int arr[] = {0, 2, 5, 8, 17} ;
    // int arr[] = {-10, -5, 3, 4, 7, 9} ;

    int size = sizeof(arr) / sizeof(int), flag = 0;

// Solution 2
//TIme Complexity: O(n) , Space Complexity: O(1)
    for (int i = 0; i < size; i++)
    {
        if (i == arr[i])
        {
            flag = 1;
            std ::cout << "Value == Index at: " << i;
            break;
        }
    }
    if (flag == 0)
        std ::cout << "Not present";

    std ::cout << "\n";

// Solution 2
//TIme Complexity: O(logn) , Space Complexity: O(1)
    flag = 0;
    int start = 0, end = size - 1, mid = start + ((end - start) / 2);
    while (start <= end)
    {
        if (mid == arr[mid])
        {
            flag = 1;
            std ::cout << "Value == Index at: " << mid;
            break;
        }

        else if (mid < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
        mid = start + ((end - start) / 2);
    }
}
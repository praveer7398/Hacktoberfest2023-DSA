/***
6. Remove duplicate elements from sorted Array 
Given a sorted array A of size N, delete all the duplicates elements from A.
Note: Don't use set or HashMap to solve the problem.


Example 1:

Input:
N = 5
Array = {2, 2, 2, 2, 2}
Output: 2
Explanation: After removing all the duplicates 
only one instance of 2 will remain.
Example 2:

Input:
N = 3
Array = {1, 2, 2}
Output: 1 2 

Your Task:  
You dont need to read input or print anything. Complete the function remove_duplicate() which takes the array A[] and its size N as input parameters and modifies it in place to delete all the duplicates. The function must return an integer X denoting the new modified size of the array. 
Note: The generated output will print all the elements of the modified array from index 0 to X-1.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 104
1 ≤ A[i] ≤ 106
**/
// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
       if(n == 0) return 0;
        int i = 0;
       for (int j = 1; j < n; j++) 
       {
          if (a[j] != a[i]) 
          {
              i++;
              a[i] = a[j];
          }
       }
       return i+1;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}  // } Driver Code Ends
/* Same can be done by java

class Main {
   
    // Function to remove duplicate elements This function
    // returns new size of modified array.
    static int removeDuplicates(int arr[], int n)
    {
        // Return, if array is empty or 
        // contains a single element
        if (n == 0 || n == 1)
            return n;
 
        int[] temp = new int[n];
 
        // Start traversing elements
        int j = 0;
        for (int i = 0; i < n - 1; i++)
             
            // If current element is not equal to next
            // element then store that current element
            if (arr[i] != arr[i + 1])
                temp[j++] = arr[i];
 
        // Store the last element as whether it is unique or
        // repeated, it hasn't stored previously
        temp[j++] = arr[n - 1];
 
        // Modify original array
        for (int i = 0; i < j; i++)
            arr[i] = temp[i];
 
        return j;
    }
 
    // Driver code
    public static void main(String[] args)
    {
        int arr[] = { 1, 2, 2, 3, 4, 4, 4, 5, 5 };
        int n = arr.length;
 
        // removeDuplicates() returns new size of array
        n = removeDuplicates(arr, n);
 
        // Print updated array
        for (int i = 0; i < n; i++)
            System.out.print(arr[i] + " ");
    }
}*/
// Consider an -element array, , where each index  in the array contains a reference to an array of  integers (where the value of  varies from array to array). See the Explanation section below for a diagram.

// Given , you must answer  queries. Each query is in the format i j, where  denotes an index in array  and  denotes an index in the array located at . For each query, find and print the value of element  in the array at location  on a new line.

// Click here to know more about how to create variable sized arrays in C++.

// Input Format

// The first line contains two space-separated integers denoting the respective values of  (the number of variable-length arrays) and  (the number of queries).
// Each line  of the  subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the -element array located at .
// Each of the  subsequent lines contains two space-separated integers describing the respective values of  (an index in array ) and  (an index in the array referenced by ) for a query.

// Constraints

// All indices in this challenge are zero-based.
// All the given numbers are non negative and are not greater than 
// Output Format

// For each pair of  and  values (i.e., for each query), print a single integer that denotes the element located at index  of the array referenced by . There should be a total of  lines of output.

// Sample Input

// 2 2
// 3 1 5 4
// 5 1 2 8 9 3
// 0 1
// 1 3
// Sample Output

// 5
// 9

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;                        //taking n-->no of index in main arr, q-->no of queries to be asked.
    vector<vector<int>> arr;          //taking array of int array named as this. also giving name as arr of main array.
    for(int i=0;i<n;i++){             //creating a loop to insert no of size of main array taking loop upto n no of times
        int sa;                       //taking sa as size of array
        cin>>sa;                      //asking for input
        vector<int> k;                //again creating vector for array which is inside of the main array named as k.
        for(int j=0;j<sa;j++){        //j times loop will go uptill the size of inner most array 
            int e;                    // e variable is taken to give input for the int elements i.e. 1 5 4 and 1 2 8 9 3
            cin>>e;                   // taking them input
            k.push_back(e);           //pushing the inputs in k named array back to back
        }
        arr.push_back(k);             // again inserting the complete k filled array in main array named as arr.
    }     
    int r,s;                          // taking r,s two values for output purpose
    for(int p=1;p<=q;p++){            // loop moves uptill the number of queries asked for here 2
        cin>>r>>s;                    // taking input
        cout<<arr[r][s]<<endl;        // r-->which index of main array i.e. arr    s-->which index number want of inner array i.e. k
    }
    return 0;
}


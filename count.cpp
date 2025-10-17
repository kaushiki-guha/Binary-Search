#include <bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> &v, int n, int target)
{
    int low = 0, high = n-1;
    int first =-1;
     
    while (low<=high)
    {
        int mid = (low + high)/2;
        if (v[mid] == target)
        {
            first= mid;
            high = mid -1;
        }
        else if (v[mid]< target)
        {
            low = mid +1;
        }
        else
        {
            high = mid -1;
        }
    } 
    return first;
}

int lastOccurence(vector<int> &v, int n, int target)
{
    int low = 0, high = n-1;
    int last =-1;
     
    while (low<=high)
    {
        int mid = (low + high)/2;
        if (v[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (v[mid]< target)
        {
            low = mid +1;
        }
        else
        {
            high = mid -1;
        }
    } 
    return last;
}

pair<int, int> firstAndLastPosition(vector<int> &v, int n, int target)
{
    int first = firstOccurence (v, n, target);

    if ( first == -1) return {-1, -1};
    int last= lastOccurence (v, n, target);
    return {first, last};

}

int main()
{
    vector<int> arr = { 1, 1, 2, 3, 3, 3, 4, 4, 4, 5};
    int k = 1;
    pair<int, int> ans = firstAndLastPosition(arr, 10, k);
    int count= ans.second - ans.first + 1;
    cout<<"Count of Occurences: "<< count << endl;
}
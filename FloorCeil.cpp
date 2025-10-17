#include <bits/stdc++.h>
using namespace std;

pair<int,int> floorCeilIndices(vector<int>& arr, int n, int x)
{
    int floorIdx = -1, ceilIdx = -1;
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
        {
            floorIdx = ceilIdx = mid;
            break;
        }
        else if (arr[mid] < x)
        {
            floorIdx = mid;
            low = mid + 1;
        }
        else
        {
            ceilIdx = mid;
            high = mid - 1;
        }
    }

    return {floorIdx, ceilIdx};
}

int main()
{
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int n = arr.size(), x = 5;

    pair<int,int> ind = floorCeilIndices(arr, n, x);

    cout << "Floor: ";
    if (ind.first != -1)
        cout << arr[ind.first];
    else
        cout << "None";

    cout << "\nCeil: ";
    if (ind.second != -1)
        cout << arr[ind.second];
    else
        cout << "None";

    cout << "\n";
    return 0;
}

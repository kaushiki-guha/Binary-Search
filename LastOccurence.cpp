#include<bits/stdc++.h>
using namespace std;

int LastOccurence(int n, int key,vector<int>& v)
{
    int res = -1;
    for(int i=n-1; i>=0; i--)
    {
        if(v[i]==key)
        {
            res = i;
            break;
        }
    }
    return res;
}
int main()
{
    int n=8;
    int key = 34;
    vector<int> v= {23, 12, 34, 34, 56,12, 34,21};
    
    cout<<LastOccurence(n, key, v)<<endl;
    return 0;
}
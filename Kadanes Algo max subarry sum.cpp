#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    int maxSum = INT_MIN; //INT_MIN specifies that an integer variable cannot store any value below this limit.
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i]; // Here I am adding the value of array with sum.
        maxSum= max(sum, maxSum);  // Here every time I compared my current sum with maxSum, if current sum is greater than maxSum then I put the value of sum into the maxSum.

        if(sum<0) // Here I am checking is there any value of sum which is less than 0, that means negative value. If found than we make the sum is 0. Because we try to find max sub array sum, where negative value can not give max sum.
        {
            sum=0;
        }
    }
    cout<<maxSum;
    return 0;
}

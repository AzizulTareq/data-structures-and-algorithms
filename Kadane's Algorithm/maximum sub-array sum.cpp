int maximumSumSubArray(int a[],int n)
{
    int current_max = 0;
    int maximum_sum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        current_max = max(a[i],current_max+a[i]);
        if(current_max>maximum_sum)
            maximum_sum = current_max;
    }
    return maximum_sum;
}

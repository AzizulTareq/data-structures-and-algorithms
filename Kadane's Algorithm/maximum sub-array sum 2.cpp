void maximumSumSubarray(int a[],int n)
{
    int current_max = 0;
    int maximum_sum = INT_MIN;
    int startIndex = 0, endIndex = 0, tempIndex = 0;
    for(int i=0;i<n;i++)
    {
        current_max = max(a[i],current_max+a[i]);
        if(a[i]>=current_max)
            tempIndex = i;
        if(current_max>maximum_sum)
        {
            maximum_sum = current_max;
            startIndex = tempIndex;
            endIndex = i;
        }
    }
    cout<<startIndex<< " "<<endIndex<<endl;
}

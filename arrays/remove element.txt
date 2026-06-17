int removeElement(int* nums, int numsSize, int val)
{
    int i;
    int k=0;
    int res[1000];
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]!=val)
        {
            res[k]=nums[i];
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        nums[i]=res[i];
    }
    return k;
    
}
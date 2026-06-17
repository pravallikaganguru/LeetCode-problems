int removeDuplicates(int* nums, int numsSize)
{
    if(numsSize == 0)
        return 0;

    int res[1000];
    int i, j = 1;

    res[0] = nums[0];

    for(i = 1; i < numsSize; i++)
    {
        if(nums[i] != res[j-1])
        {
            res[j++] = nums[i];
        }
    }

    for(i = 0; i < j; i++)
    {
        nums[i] = res[i];
    }

    return j;
}
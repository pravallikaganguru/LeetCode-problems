bool isSubsequence(char* s, char* t) 
{
    int m=strlen(s);
    int n=strlen(t);
    int i=0,j=0;
    bool res;
    while(i<n &&j<m)
    {
        if(s[j]==t[i])
        {
            j++;

        }
        i++;

    }
    if(j==m)
    {
        res=true;
    }
    else
    {
        res=false;
    }
    return res;
    
}
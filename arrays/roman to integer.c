int value(char s)
{
    int x;
    switch(s)
    {
        case 'I':
            x=1;
            break;
        case 'V':
            x= 5;
            break;
        case 'X':
            x= 10;
            break;
        case 'L':
            x= 50;
            break;
        case 'C':
            x= 100;
            break;
        case 'D':
            x= 500;
            break;
        case 'M':
            x= 1000;
            break;
        
    }
    return x;
}
int romanToInt(char* s) 
{
    int i,j;
    int res=value(s[0]);
    for(i=1;s[i]!='\0';i++)
    {
        if(value(s[i])>value(s[i-1]))
        {
            res=res+value(s[i])-(2*value(s[i-1]));
        }
        else
        {
            res=res+value(s[i]);
        }
        
    }
    return res;
    
}
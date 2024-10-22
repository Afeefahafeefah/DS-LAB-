int firstUniqChar(char* s) 
{
    int k = strlen(s);
    int a[27] = {0}; 
    for (int i = 0; i < k; i++) 
    {
        a[s[i] - 'a']++; 
    }
    for (int j = 0; j < k; j++) 
    {
        if (a[s[j] - 'a'] == 1) 
        {
            return j; 
        }
    }
    return -1;
}

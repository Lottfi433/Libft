int ft_atoi(char *str)
{
    int i;
    int s;
    int r;
    
    s = 1;
    r = 0;
    i = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            s = s * - 1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        r = r * 10 + (str[i] - '0');
        i++;
    }
    return (r * s);
}
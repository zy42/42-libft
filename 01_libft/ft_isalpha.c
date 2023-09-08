static	int islower(int c)
{
	return (c>= 97 && c <= 122);
}

static	int isupper(int c)
{
        return (c>= 65 && c <= 90);
}

int	ft_isalpha(int c)
{
	return (islower(c) || isupper(c));
}

int	detect_charset(char *str, char *charset, int i)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (str[i] == charset[j])
		{
			return (1);
		}
		j++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (detect_charset(str, charset, i) == 1)
		{
			len++;
			while (str[i] && detect_charset(str, charset, i) == 1)
				i++;
		}
		i++;
	}
	return (len);
}

char	*ft_strncpy(char *src, unsigned int debut, unsigned int fin)
{
	unsigned int	i;
	char	*dest;

	i = 0;
	dest = malloc((fin - debut + 1) * sizeof(char *));
	while (debut != fin && src[i] != '\0')
	{
		dest[i++] = src[debut++];
	}
	while (debut < fin)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**lst;
	int		debut;
	int		i;
	int		a;

	i = 0;
	a = 0;
	debut = 0;
	lst = malloc(count_words(str, charset) * sizeof(char *));
	while (str[i])
	{
		if (detect_charset(str, charset, i) == 1)
		{
			lst[a] = ft_strncpy(str, debut, i);
			debut = i + 1;
			a++;
			while (str[i] && detect_charset(str, charset, i) == 1)
				i++;
		}
		i++;
	}
	lst[a] = ft_strncpy(str, debut, i);
	lst[a + 1] = NULL;
	return (lst);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	char	**lst;
	int	i = 0;
	(void)argc;

	lst = ft_split(argv[1], argv[2]);
	while (lst[i] != NULL)
		printf("%s\n", lst[i++]);
}

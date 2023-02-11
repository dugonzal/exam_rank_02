#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	if (!s1 || !s2)
		return (NULL);
	while (*s1)
	{
		while (*s2)
		{
			if (*s1 == *s2)
				return ((char *)s1);
			s2++;
		}
		s1++;
	}
	return (0);
}

int	main(void)
{
	printf ("%s", ft_strpbrk("hol", "holas"));
}

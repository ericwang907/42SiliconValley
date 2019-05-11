#include <stdio.h>
#include "libft.h"

int main() 
{
	char* test_str = "*hello*eric";
	char delim = '*';
	char **ret = ft_strsplit(test_str, delim);

	int i=0;
	for(i = 0; i < 2; ++i)
	{
		printf("%s", ret[i]);
	}
	return 0;	
}

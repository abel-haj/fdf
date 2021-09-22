#include "fdf.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd != -1)
		{
			while (get_next_line(fd, &line) > 0)
			{
				printf("%s\n", line);
				free(line);
			}
			printf("%s", line);
			free(line);
		}
		else
		{
			printf("Error:\n");
		}
	}
	else
	{
		printf("Error:\n");
	}
	return (0);
}

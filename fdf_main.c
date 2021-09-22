#include "fdf.h"
#include <stdio.h>

typedef struct s_fdf_data
{
	int	width;
	int	height;
	int	**map;
} t_fdf_data;

int	get_map_width(char *line)
{
	
}

int	main(int argc, char **argv)
{
	int		i;
	int		fd;
	char	*line;
	char	*tmp;
	t_fdf_data t_data;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd != -1 || ft_strcmp(ft_strchr(argv[1], '.'), ".fdf"))
		{
			free(line);

			t_data.width = get_map_width(line);

			while (get_next_line(fd, &line) > 0)
			{
				free(line);
				t_data.height++;
			}
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

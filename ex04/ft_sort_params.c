/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staminh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 16:09:45 by staminh           #+#    #+#             */
/*   Updated: 2018/09/20 11:52:55 by staminh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *argv)
{
	int j;

	j = 0;
	while (argv[j] != '\0')
	{
		ft_putchar(argv[j]);
		j++;
	}
	ft_putchar('\n');
}

void	ft_swap(char **s1, char **s)
{
	char *svg;

	svg = *s1;
	*s1 = *s;
	*s = svg;
}

int		ft_strcmp(char *s1, char *s)
{
	int i;

	i = 1;
	while (s1[i] == s[i] && s1[i] != '\0')
		i = i + 1;
	return (s1[i] - s[i]);
}

int		main(int argc, char **argv)
{
	int i;
	int swap;

	swap = 1;
	while (swap == 1)
	{
		i = 2;
		swap = 0;
		while (argc > i)
		{
			if (ft_strcmp(argv[i], argv[i - 1]) < 0)
			{
				ft_swap(&argv[i], &argv[i - 1]);
				i = 1;
				swap = 1;
			}
			i = i + 1;
		}
	}
	i = 1;
	while (argc > i)
		ft_putstr(argv[i++]);
	return (0);
}

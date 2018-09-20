/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staminh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 14:05:02 by staminh           #+#    #+#             */
/*   Updated: 2018/09/19 17:08:40 by staminh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_rev_params(char *argv)
{
	int i;

	i = 0;
	while (argv[i] != '\0')
	{
		ft_putchar(argv[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;

	if (argc > 1)
	{
		while (argc > 1)
		{
			ft_rev_params(argv[argc - 1]);
			argc = argc - 1;
		}
	}
	return (0);
}

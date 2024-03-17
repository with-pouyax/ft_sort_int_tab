void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	stored;

	stored = 0;
	while (!stored)
	{
		i = 0;
		stored = 1;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				stored = 0;
			}
			i++;
		}
	}
}

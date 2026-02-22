#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int a = 0;
    int b = size -1;

    while(a < size / 2)
    {
        int tmp;

        tmp = tab[a];
        tab[a] = tab[b];
        tab[b] = tmp;
        a++;
        b--;
    }
}
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int a = 0;
    int b;

    while(a < size)
    {
        b = a + 1;
        while(b < size)
        {
            if(tab[a] > tab[b])
            {
                int tmp;

                tmp = tab[a];
                tab[a] = tab[b];
                tab[b] = tmp;
            }
            b++;
        }
        a++;
    }
}
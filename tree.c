/*
** EPITECH PROJECT, 2019
** tree.c
** File description:
** arbe ascii
*/

void my_putchar(char c);

void printbase()
{
    my_putchar(' ');
    my_putchar(' ');
    my_putchar(' ');
    my_putchar('|');
    my_putchar('\n');
}

void tree(int size)
{
    int ligne;
    ligne = 3 + size;
    int etoile = 1;
    int space = 3;

    if (size <= 0)
        return (0);
  
    for(int i = 0; i <= ligne-1; i++) {
        for (int sp = 0; sp <= space-1; sp++)
            my_putchar(' ');
        for (int j=0; j<= etoile-1; j++) 
            my_putchar('*');
     
        my_putchar('\n');
        etoile = etoile + 2;
        space = space - 1;
    }
    printbase();
}

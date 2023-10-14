#include <unistd.h>

void ft_putchar(char a){
    write(1,&a,1);
}

void head(int x,int j){

    ft_putchar('/');
    while (j < x - 1)
    {
        ft_putchar('*');
        j++;
    }
    if (x >= 2)
    {
        ft_putchar('\\');
    }
    ft_putchar('\n');
}

void body(int x,int j){

    ft_putchar('*');
    while (j < x - 1)
    {
        ft_putchar(' ');
        j++;
    }
    if (x >= 2)
    {
        ft_putchar('*');
    }
    ft_putchar('\n');
}

void bottom(int x,int j){

    ft_putchar('\\');
    while (j < x - 1)
    {
        ft_putchar('*');
        j++;
    }
    if (x >= 2)
    {
        ft_putchar('/');
    }
    ft_putchar('\n');
}

void rush(int x, int y){
    int i;
    int j;

    i = 1;
    if (x >= 1 && y >= 1){
        j = 1;
        while (i <= y)
        {
            if (i == 1)
            {
                head(x,j);
            }else if (i == y){
                bottom(x,j);
            }else{
                body(x,j);
            }
            i++;
        }
    }
}

int main(){
    rush(5,4);
}
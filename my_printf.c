/*
** EPITECH PROJECT, 2017
** printf 
** File description:
** Prog that print something
*/

#include <stdarg.h>


void	my_printf(char *tab, ...)
{
	va_list va;
	va_start (va, tab);

	int i;
	int inte = va_arg(va, int);
	char *chara = va_arg(va, char *);
	char chara2 = va_arg(va, char);
	char voidi = va_arg(va, void *)
	
	while (str[i] == '%') {
		if (str[i] == 'd') {
			my_putnbr(inte);
		}
		else if (str[i] == 's') {
			my_putstr(chara);
		}
		else if (str[i] == 'c') {
			my_putchar(chara2);
		}
		else if (str[i] == 'p') {
			my_puchar(voidi + 48);
		}
	}
	i++;
	return (0);
	va_end(va);
}


int main(char *tab, ...)
{
	my_printf(char *tab, ...);
	return(0);
}
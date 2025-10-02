#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ptr = 42;

	ft_printf("Caracter: %c\n", 'A');
	ft_printf("Cadena: %s\n", "Hola");
	ft_printf("Puntero: %p\n", &ptr);
	ft_printf("Entero: %d\n", 42);
	ft_printf("Entero sin signo: %u\n", 42);
	ft_printf("Hex min: %x\n", 255);
	ft_printf("Hex may: %X\n", 255);
	printf("Puntero correcto: %p\n", &ptr);
	printf("Hexadecimal correcto: %x\n", 255);

}

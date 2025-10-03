#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ptr = 42;

	ft_printf("Caracter: %c hola sigo escribiendo\n", 0);
	// ft_printf("Cadena: %s\n", "Hola");
	// ft_printf("Puntero: %p\n", &ptr);
	// ft_printf("Entero: %d\n", 42);
	ft_printf("Entero sin signo: %u\n", __UINT64_MAX__);
	ft_printf("Entero sin signo: %u\n", -0);
	// ft_printf("Hex min: %x\n", 255);
	// ft_printf("Hex may: %X\n", 255);
	// printf("Puntero correcto: %p\n", &ptr);
	// printf("Hexadecimal correcto: %x\n", 255);
	ft_printf("El puntero a NULL es: %p\n", NULL);
	ft_printf("Puntero bueno: %p", &ptr);
}

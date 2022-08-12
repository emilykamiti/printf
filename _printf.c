#include "main.h"
/**
 * _printf -prints something
 * format: string
 *
 * Return : number of checkers printed
 */
int _printf(const char *format, ...);
{
	int i=0
	int printed=0

	while(format [i]
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					printed += print_char(args);
					i += 2;
					break;
			}
		}
		if (format [i])
		{
			_putchar(format[i]);
			printed++;
		}
		
		i++;
	}
	va_end(args);
	return (printed);
}

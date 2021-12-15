
#include "../headers/ft_printf.h"
#include <stdio.h>

int	main(void)
{
//	char c = 'a';
//	const char *ptr = "void";
//	void *pt = (void *) ptr;
	//int d = -2147483650;
//	int p = printf("printf address = %p d = %d x = %X %%\n", pt, -0727777, -123456789);
//	int f = ft_printf("printf address = %p d = %d x = %X %%\n", pt, -0727777, -123456789);
	//int p = printf("p = %p\n", ptr);
	//int f = ft_printf("p = %p\n", ptr);
//	printf("p = %d / f = %d\n", p, f);
	//char *str = (char *) 1;
	//ft_printf("%s", str);
//	int r = printf("printf d = %d printf\n", 0);
//	int r1 = ft_printf("printf d = %d printf\n", 0);
//	printf("ret printf = %d\n", r);
//	printf("ret ft_printf = %d\n", r1);
//	int r = printf("% #x\n", 12);
//	eprintf("ret = %d\n", r);


/*****************************************************************************\
 * flag space
 * ***************************************************************************/
	int r = printf("normal man %d\n", 123);
	int r1 = ft_printf("normal moi %d\n", 123);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %d\n", -123);
	r1 = ft_printf("moi %d\n", -123);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %d\n", 0);
	r1 = ft_printf("moi %d\n", 0);
	printf("%d\n", r);
	printf("%d\n", r1);

	r = printf("sign man %+d\n", 123);
	r1 = ft_printf("sign moi %+d\n", 123);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %+d\n", -123);
	r1 = ft_printf("moi %+d\n", -123);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %+d\n", 0);
	r1 = ft_printf("moi %+d\n", 0);
	printf("%d\n", r);
	printf("%d\n", r1);

	r = printf("dot man %.9d\n", 123);
	r1 = ft_printf("dot moi %.9d\n", 123);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %.1d\n", 123);
	r1 = ft_printf("moi %.1d\n", 123);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %.d\n", 123);
	r1 = ft_printf("moi %.d\n", 123);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %.3d\n", 1234567);
	r1 = ft_printf("moi %.3d\n", 1234567);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %.9d\n", 0);
	r1 = ft_printf("moi %.9d\n", 0);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %.d\n", 0);
	r1 = ft_printf("moi %.d\n", 0);
	printf("%d\n", r);
	printf("%d\n", r1);

	r = printf("minus man %-9d\n", 123);
	r1 = ft_printf("minus moi %-9d\n", 123);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %-d\n", 123);
	r1 = ft_printf("moi %-d\n", 123);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %-1d\n", 123);
	r1 = ft_printf("moi %-1d\n", 123);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %-3d\n", 0);
	r1 = ft_printf("moi %-3d\n", 0);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %-10d\n", -16789);
	r1 = ft_printf("moi %-10d\n", -16789);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %-d\n", 90);
	r1 = ft_printf("moi %-d\n", 90);
	printf("%d\n", r);
	printf("%d\n", r1);

	r = printf("zero man %09d\n", 123);
	r1 = ft_printf("zero moi %09d\n", 123);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %0d\n", 123);
	r1 = ft_printf("moi %0d\n", 123);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %023d\n", 123);
	r1 = ft_printf("moi %023d\n", 123);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %065d\n", 0);
	r1 = ft_printf("moi %065d\n", 0);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %010d\n", -16789);
	r1 = ft_printf("moi %010d\n", -16789);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %00d\n", 90);
	r1 = ft_printf("moi %00d\n", 90);
	printf("%d\n", r);
	printf("%d\n", r1);

	r = printf("digit man %9d\n", 123);
	r1 = ft_printf("digit moi %9d\n", 123);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %d\n", 123);
	r1 = ft_printf("moi %d\n", 123);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %23d\n", 123);
	r1 = ft_printf("moi %23d\n", 123);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %65d\n", 0);
	r1 = ft_printf("moi %65d\n", 0);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %10d\n", -16789);
	r1 = ft_printf("moi %10d\n", -16789);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %1d\n", 90);
	r1 = ft_printf("moi %1d\n", 90);
	printf("%d\n", r);
	printf("%d\n", r1);

	r = printf("digit man %9X\n", 127);
	r1 = ft_printf("digit moi %9X\n", 127);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %13X\n", 123);
	r1 = ft_printf("moi %13X\n", 123);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %X\n", 123);
	r1 = ft_printf("moi %X\n", 123);
	printf("%d\n", r);
	printf("%d\n", r1);
	
	r = printf("minus man %-12x\n", 7);
	r1 = ft_printf("minus moi %-12x\n", 7);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %-x\n", 16789);
	r1 = ft_printf("moi %-x\n", 16789);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %1d\n", 90);
	r1 = ft_printf("moi %1d\n", 90);
	printf("%d\n", r);
	printf("%d\n", r1);


	r = printf("minus man %-12s\n", "hello");
	r1 = ft_printf("minus moi %-12s\n", "hello");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %-s\n", "hello");
	r1 = ft_printf("moi %-s\n", "hello");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %-s\n", "");
	r1 = ft_printf("moi %-s\n", "");
	printf("%d\n", r);
	printf("%d\n", r1);

	r = printf("minus man %-12c\n", 'a');
	r1 = ft_printf("minus moi %-12c\n", 'a');
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %-c\n", 'a');
	r1 = ft_printf("moi %-c\n", 'a');
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %-1c\n", 'a');
	r1 = ft_printf("moi %-1c\n", 'a');
	printf("%d\n", r);
	printf("%d\n", r1);

	r = printf("minus man %-32p\n", "a");
	r1 = ft_printf("minus moi %-32p\n", "a");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %-p\n", "a");
	r1 = ft_printf("moi %-p\n", "a");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %-7p\n", "a");
	r1 = ft_printf("moi %-7p\n", "a");
	printf("%d\n", r);
	printf("%d\n", r1);

	//r = printf("dot man %.32p\n", "a");
	//r1 = ft_printf("dot moi %.32p\n", "a");
	//printf("%d\n", r);
	//printf("%d\n", r1);
	r = printf("man %-p\n", "a");
	r1 = ft_printf("moi %-p\n", "a");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %-7p\n", "a");
	r1 = ft_printf("moi %-7p\n", "a");
	printf("%d\n", r);
	printf("%d\n", r1);

	r = printf("dot man %.0s\n", "hello");
	r1 = ft_printf("dot moi %.0s\n", "hello");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %.30s\n", "hello");
	r1 = ft_printf("moi %.30s\n", "hello");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %.2s\n", "");
	r1 = ft_printf("moi %.2s\n", "");
	printf("%d\n", r);
	printf("%d\n", r1);

	r = printf("minus man %-3s\n", "hello");
	r1 = ft_printf("minus moi %-3s\n", "hello");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %-30s\n", "hello");
	r1 = ft_printf("moi %-30s\n", "hello");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %.2s\n", "");
	r1 = ft_printf("moi %.2s\n", "");
	printf("%d\n", r);
	printf("%d\n", r1);
	/*printf(":%s:\n", "Hello, world!");
	printf(":%15s:\n", "Hello, world!");
	printf(":%.10s:\n", "Hello, world!");
	printf(":%-10s:\n", "Hello, world!");
	printf(":%-15s:\n", "Hello, world!");
	printf(":%.15s:\n", "Hello, world!");
	printf(":%15.10s:\n", "Hello, world!");
	printf(":%-15.10s:\n", "Hello, world!");*/
	return (0);
}

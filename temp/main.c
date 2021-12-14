
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
	int r = printf("man %d\n", 123);
	int r1 = ft_printf("moi %d\n", 123);
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

	r = printf("man %+d\n", 123);
	r1 = ft_printf("moi %+d\n", 123);
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

	r = printf("man %.9d\n", 123);
	r1 = ft_printf("moi %.9d\n", 123);
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

	r = printf("man %-9d\n", 123);
	r1 = ft_printf("moi %-9d\n", 123);
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

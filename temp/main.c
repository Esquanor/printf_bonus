
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
/*	int r = printf("normal man %d\n", 123);
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

	r = printf(":%s:\n", "Hello, world!");
	r1 = ft_printf(":%s:\n", "Hello, world!");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf(":%15s:\n", "Hello, world!");
	r1 = ft_printf(":%15s:\n", "Hello, world!");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf(":%.10s:\n", "Hello, world!");
	r1 = ft_printf(":%.10s:\n", "Hello, world!");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf(":%-10s:\n", "Hello, world!");
	r1 = ft_printf(":%-10s:\n", "Hello, world!");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf(":%-15s:\n", "Hello, world!");
	r1 = printf(":%-15s:\n", "Hello, world!");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf(":%.15s:\n", "Hello, world!");
	r1 = ft_printf(":%.15s:\n", "Hello, world!");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf(":%15.10s:\n", "Hello, world!");
	r1 = ft_printf(":%15.10s:\n", "Hello, world!");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf(":%-15.10s:\n", "Hello, world!");
	r1 = printf(":%-15.10s:\n", "Hello, world!");
	printf("%d\n", r);
	printf("%d\n", r1);

	
	r = printf("mix man %0-3.12s\n", "hello");
	r1 = ft_printf("mix moi %0-3.12s\n", "hello");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %.30p\n", "hello");
	r1 = ft_printf("moi %.30p\n", "hello");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %mn %%\n", 127);
	r1 = ft_printf("moi %mn %%\n", 127);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %", 127);
	r1 = ft_printf("moi %", 127);
	printf("%d\n", r);
	printf("%d\n", r1);

	r = printf("percent man %.10%\n");
	r1 = ft_printf("percent moi %.10%\n");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %.10-30%\n");
	r1 = ft_printf("moi %.10-30%\n");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %mn %%\n", 127);
	r1 = ft_printf("moi %mn %%\n", 127);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %-80..-5.10d\n", 127);
	r1 = ft_printf("moi %-80..-5.10d\n", 127);
	printf("%d\n", r);
	printf("%d\n", r1);

//|%-10.10k|

	r = printf("unknown man %.10k\n");
	r1 = ft_printf("unknown moi %.10k\n");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %.10-30%\n");
	r1 = ft_printf("moi %.10-30%\n");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %mn %%\n", 127);
	r1 = ft_printf("moi %mn %%\n", 127);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %-15.10d\n", 127);
	r1 = ft_printf("moi %-15.10d\n", 127);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %.10d\n", 127);
	r1 = ft_printf("moi %.10d\n", 127);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %010.d\n", 127);
	r1 = ft_printf("moi %010.d\n", 127);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %020...5p\n", "hel");
	r1 = ft_printf("man %020...5p\n", "hel");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %020...5u\n", 127);
	r1 = ft_printf("man %020...5u\n", 127);
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %020...5k\n");
	r1 = ft_printf("man %020...5k\n");
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %020...5c\n", 'a');
	r1 = ft_printf("man %020...5c\n", 'a');
	printf("%d\n", r);
	printf("%d\n", r1);
	r = printf("man %20.s\n", NULL);
	r1 = ft_printf("man %20.s\n", NULL);
	printf("%d\n", r);
	printf("%d\n", r1);
	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 17 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%20.10s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.10s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%20.1s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.1s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%20.s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%20.30s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.30s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("|%20.3s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.3s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("|%20.4s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.4s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 7\n");
		i = printf("|%20.5s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.5s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 8\n");
		i = printf("|%20.6s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.6s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 9\n");
		i = printf("|%s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 10\n");
		i = printf("|%20.s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 11\n");
		i = printf("|%20.1s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.1s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 12\n");
		i = printf("|%20.5s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.5s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 12\n");
		i = printf("|%15.10s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%15.10s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

*/
/*int i;
		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%10.50.**--*dcsdp%%%@@@%**Xpcd%%d|\n", -25, -15, -5, -33, 4, 6, -4897987565423, 123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%10.50.**--*dcsdp%%%@@@%**Xpcd%%d|\n", -25, -15, -5, -33, 4, 6, -4897987565423, 123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%%%20.1s %0.-10d|\n", "uneLongueChaineDeChar", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%%%20.1s %0.-10d|\n", "uneLongueChaineDeChar", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%*.*p%%|\n", -20, 15, -12345);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%*.*p%%|\n", -20, 15, -12345);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);*/
		char *ptr = "";

		int r = printf("@man: %p\n", NULL); 
		int r1 = ft_printf("@moi: %p\n", NULL); 
		printf("%d\n", r);
		printf("%d\n", r1);
		r = printf("@man: %p\n", ptr); 
		r1 = ft_printf("@moi: %p\n", ptr); 
		printf("%d\n", r);
		printf("%d\n", r1);

		r = printf("@man: %5p\n", NULL); 
		r1 = ft_printf("@moi: %5p\n", NULL); 
		printf("%d\n", r);
		printf("%d\n", r1);

		r = printf("@man: %9p\n", ptr); 
		r1 = ft_printf("@moi: %9p\n", ptr); 
		printf("%d\n", r);
		printf("%d\n", r1);

		r = printf("@man: %.5p\n", NULL); 
		r1 = ft_printf("@moi: %.5p\n", NULL); 
		printf("%d\n", r);
		printf("%d\n", r1);

		r = printf("@man: %.1p\n", ptr); 
		r1 = ft_printf("@moi: %.1p\n", ptr); 
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man: %10.5p\n", NULL); 
		r1 = ft_printf("@moi: %10.5p\n", NULL); 
		printf("%d\n", r);
		printf("%d\n", r1);

		r = printf("@man: %33.30p\n", ptr); 
		r1 = ft_printf("@moi: %33.30p\n", ptr); 
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man: %01p\n", ptr); 
		r1 = ft_printf("@moi: %01p\n", ptr); 
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man: %010.5p\n", NULL); 
		r1 = ft_printf("@moi: %010.5p\n", NULL); 
		printf("%d\n", r);
		printf("%d\n", r1);

		r = printf("@man: %033.30p\n", ptr); 
		r1 = ft_printf("@moi: %033.30p\n", ptr); 
		printf("%d\n", r);
		printf("%d\n", r1);

		
		r = printf("@man: %-32.30p\n", ptr); 
		r1 = ft_printf("@moi: %-32.30p\n", ptr); 
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man: %-01p\n", ptr); 
		r1 = ft_printf("@moi: %-01p\n", ptr); 
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man: %010.5p\n", NULL); 
		r1 = ft_printf("@moi: %010.5p\n", NULL); 
		printf("%d\n", r);
		printf("%d\n", r1);

		r = printf("@man: %033.30p\n", ptr); 
		r1 = ft_printf("@moi: %033.30p\n", ptr); 
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man: %010.p\n", NULL); 
		r1 = ft_printf("@moi: %010.p\n", NULL); 
		printf("%d\n", r);
		printf("%d\n", r1);

		r = printf("@man: %033.p\n", ptr); 
		r1 = ft_printf("@moi: %033.p\n", ptr); 
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man: %33.xp\n", 0); 
		r1 = ft_printf("@moi: %33.xp\n", 0); 
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man: %#33xp\n", 12); 
		r1 = ft_printf("@moi: %#33xp\n", 12); 
		printf("%d\n", r);
		printf("%d\n", r1);

		r = printf("@man: %#33.9xp\n", 12); 
		r1 = ft_printf("@moi: %#33.9xp\n", 12); 
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man: %0#39xp\n", 12); 
		r1 = ft_printf("@moi: %0#39xp\n", 12); 
		printf("%d\n", r);
		printf("%d\n", r1);	
		
		r = printf("@man: %#33up\n", 12); 
		r1 = ft_printf("@moi: %#33up\n", 12); 
		printf("%d\n", r);
		printf("%d\n", r1);

		r = printf("@man: %#33.9up\n", 12); 
		r1 = ft_printf("@moi: %#33.9up\n", 12); 
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man: %0#39up\n", 12); 
		r1 = ft_printf("@moi: %0#39up\n", 12); 
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man: %#33.up\n", 12); 
		r1 = ft_printf("@moi: %#33.up\n", 12); 
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man: %0#+39up\n", 12); 
		r1 = ft_printf("@moi: %0#+39up\n", 12); 
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man: %5.0u\n", 0); 
		r1 = ft_printf("@moi: %5.0u\n", 0); 
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man: %05.15u\n", 15); 
		r1 = ft_printf("@moi: %05.15u\n", 15); 
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%5.012c\n", '@');
		r1 = ft_printf("@moi:%5.012c\n", '@');
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%5.c\n", 0);
		r1 = ft_printf("@moi:%5.c\n", 0);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%5.10d\n", 123456);
		r1 = ft_printf("@moi:%5.10d\n", 123456);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%5.d\n", 0);
		r1 = ft_printf("@moi:%5.d\n", 0);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%05.12u\n", 0);
		r1 = ft_printf("@moi:%05.12u\n", 0);
		printf("%d\n", r);
		printf("%d\n", r1);	
		r = printf("@man:%05.12u\n", 123);
		r1 = ft_printf("@moi:%05.12u\n", 123);
		printf("%d\n", r);
		printf("%d\n", r1);	
		r = printf("@man:%05.12u\n", -123);
		r1 = ft_printf("@moi:%05.12u\n", -123);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%5.10u\n", 123456);
		r1 = ft_printf("@moi:%5.10u\n", 123456);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%0-12.u\n", 0);
		r1 = ft_printf("@moi:%0-12.u\n", 0);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%+05.12i\n", 0);
		r1 = ft_printf("@moi:%+05.12i\n", 0);
		printf("%d\n", r);
		printf("%d\n", r1);	
		r = printf("@man:%+05.12i\n", 123);
		r1 = ft_printf("@moi:%+05.12i\n", 123);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%+05.12d\n", 0);
		r1 = ft_printf("@moi:%+05.12d\n", 0);
		printf("%d\n", r);
		printf("%d\n", r1);	
		r = printf("@man:%+05.12d\n", 123);
		r1 = ft_printf("@moi:%+05.12d\n", 123);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%05.12d\n", -123);
		r1 = ft_printf("@moi:%05.12d\n", -123);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:% .d\n", 1);
		r1 = ft_printf("@moi:% .d\n", 1);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:% 12.i\n", -12);
		r1 = ft_printf("@moi:% 12.i\n", -12);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:% 5.d\n", 0);
		r1 = ft_printf("@moi:% 5.d\n", 0);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%0 +.10d\n", 1);
		r1 = ft_printf("@moi:%0 +.10d\n", 1);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%0 +.10d\n", -1);
		r1 = ft_printf("@moi:%0 +.10d\n", -1);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%0 +.10d\n", 0);
		r1 = ft_printf("@moi:%0 +.10d\n", 0);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%12.4u\n", 3);
		r1 = ft_printf("@moi:%12.4u\n", 3);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%0+5 .5u\n", 12);
		r1 = ft_printf("@moi:%0+5 .5u\n", 12);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%+u\n", 0);
		r1 = ft_printf("@moi:%+u\n", 0);
		printf("%d\n", r);
		printf("%d\n", r1);	
		r = printf("@man:%+u\n", -12);
		r1 = ft_printf("@moi:%+u\n", -12);
		printf("%d\n", r);
		printf("%d\n", r1);	
		r = printf("@man:%+u\n", 12);
		r1 = ft_printf("@moi:%+u\n", 12);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%+9u\n", 0);
		r1 = ft_printf("@moi:%+9u\n", 0);
		printf("%d\n", r);
		printf("%d\n", r1);	
		r = printf("@man:%+9u\n", -12);
		r1 = ft_printf("@moi:%+9u\n", -12);
		printf("%d\n", r);
		printf("%d\n", r1);	
		r = printf("@man:%+9u\n", 12);
		r1 = ft_printf("@moi:%+9u\n", 12);
		printf("%d\n", r);
		printf("%d\n", r1);	

		r = printf("@man:%#X\n", 123456);
		r1 = ft_printf("@moi:%#X\n", 123456);
		printf("%d\n", r);
		printf("%d\n", r1);	
		r = printf("@man:%#X\n", -12);
		r1 = ft_printf("@moi:%#X\n", -12);
		printf("%d\n", r);
		printf("%d\n", r1);	
		r = printf("@man:%#X\n", 101);
		r1 = ft_printf("@moi:%#X\n", 101);
		printf("%d\n", r);
		printf("%d\n", r1);

		r = printf("@man:%#X\n", -1);
		r1 = ft_printf("@moi:%#X\n", -1);
		printf("%d\n", r);
		printf("%d\n", r1);		

		return (0);
}

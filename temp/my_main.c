#include <stdio.h>
#include "../headers/ft_printf_bonus.h"

int main()
{
	int i;
	char *s = "hello world";
	/*
	 *	Format: %s
	 */
	printf("\033[1;31m");
	printf("=============================================================================\n");
    printf("=============================================================================\n");
	printf("=============================================================== mabois ======\n");
	printf("******************** PART 1 (s) :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("%s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("%s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("%#s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%#s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("%#s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%#s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("% s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("% s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("% s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("% s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%+s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%+s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%+s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("% s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%.s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%.s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%.5s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.5s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%.5s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.5s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%.11s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.11s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%.11s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.11s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%.15s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.15s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%.15s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.15s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%-s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%-s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%-s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%-s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%-5s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%-5s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%-5s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%-5s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%-11s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%-11s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%-11s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%-11s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%-15s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%-15s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%-15s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%-15s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%0s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%0s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%0s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%0s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%05s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%05s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%011s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%011s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%011s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%011s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%015s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%015s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%015s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%015s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%5s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%5s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%5s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%5s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%11s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%11s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%11s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%11s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%15s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%15s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%15s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%15s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%+03# -5.5s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%+03# -5.5s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%+03# -5.5s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%+03# -5.5s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%.15-15s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.15-15s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%.15-15s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.15-15s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%.11.2s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.11.2s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%.11.2s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.11.2s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%00     +++  .36 -5s\n", s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%00     +++  .36 -5s\n", s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%00     +++  .36 -5s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%00     +++  .36 -5s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%00     +++  .36 -5s, %-25s\n", s, s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%00     +++  .36 -5s, %-25s\n", s, s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%00     +++  .36 -5s, %-25s\n", NULL, s);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%00     +++  .36 -5s, %-25s\n", NULL, s);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);
	return (0);
}

/*
** EPITECH PROJECT, 2017
** criterion
** File description:
** criterion tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
void redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(my_printf, string, .init = redirect_all_std)
{
	my_printf("hello world");
	cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, string, .init = redirect_all_std)
{
	my_printf("hello world");
	cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, string, .init = redirect_all_std)
{
	my_printf("hello world");
	cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, integer, .init = redirect_all_std)
{
	my_printf("hello world");
	cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, integer, .init = redirect_all_std)
{
	my_printf("hello world");
	cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, integer, .init = redirect_all_std)
{
	my_printf("hello world");
	cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, adress, .init = redirect_all_std)
{
	my_printf("hello world");
	cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, adress, .init = redirect_all_std)
{
	my_printf("hello world");
	cr_assert_stdout_eq_str("hello world");
}

/**
 * @file test_checksums.c
 *
 * @brief This is the test suite to check if the CRC returned by
 * the calculation functions is correct.
 *
 * @copyright ©2018-2021 - 2020 by Dirk Gottschalk
 * @author Dirk Gottschalk <dirk.gottschalk1980@googlemail.com>
 */


#include <check.h>
#include <stdlib.h>
#include <limits.h>

/* Global variables  if needed*/
/* ... */


START_TEST (test)
{

	/* Test code */
	uint16_t result; /* = test_func(params...); */

	uint16_t ref = 0x0000;

	ck_assert_uint_eq(result, result);
}END_TEST

/* Create the test suite. */
Suite *test_suite (void)
{
	Suite *s;
	TCase *tc_test;

	s = suite_create ("Checksums");

	/* Core test case */
	tc_test = tcase_create ("Teltonika packet checksum");

	tcase_add_test(tc_test, test);
	suite_add_tcase (s, tc_test);

	return s;
}

/* Run the test suite when 'make check' is invoked. */
int main (void)
{
	int number_failed;
	Suite *s;
	SRunner *sr;

	s = test_suite ();
	sr = srunner_create (s);

	srunner_run_all (sr, CK_NORMAL);
	number_failed = srunner_ntests_failed (sr);
	srunner_free (sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

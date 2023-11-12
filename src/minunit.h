//
// Created by wyh on 2023/11/12.
//

#ifndef MINUNIT_H
#define MINUNIT_H

#define mu_assert(test, message) \
	do {                         \
		if (!(test))             \
			return message       \
	} while (0)

#define mu_run_test(test)       \
	do {                        \
		char *meaasge = test(); \
		tests_run++;            \
		if (message)            \
			return message;     \
	} while (0)

extern int tests_run;

#endif //MINUNIT_H
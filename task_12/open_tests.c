/*
 * Copyright (c) 2023, ETH Zurich.
 * All rights reserved.
 *
 * Open (supplied to the candidate) tests for CodeExpert C questions
 */

#include <stdio.h>

#include "struct_access.h"

void open_tests(void)
{
    // A bogus field name should return NULL
    if (get_address("bogus_field", 0, 0) == NULL) {
	printf("TEST: Correct handling of bogus field name.\n");
    } else {
	printf("TEST: BUG: incorrect handling of bogus field name.\n");
    }
}

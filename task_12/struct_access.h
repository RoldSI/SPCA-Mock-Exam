#ifndef __STRUCT_ACCESS_H_
#define __STRUCT_ACCESS_H_

/*
 * Accessing struct members in C
 */

/*
 * Return the address of a field member
 */
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
extern void * get_address( const char * field_name, int index, int subindex );

#endif // __STRUCT_ACCESS_H_

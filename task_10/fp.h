#ifndef __FP_H_
#define __FP_H_

/*
 * Floating point questions
 */

/*
 * Calculate FP format bias
 */
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
extern int get_bias( unsigned int exp_bits, unsigned int frac_bits );

#endif // __FP_H_

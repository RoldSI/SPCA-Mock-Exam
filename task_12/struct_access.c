#include <string.h>

/*
 * Array sizes
 */
#define ARRAY_SIZE 10
#define STRING_LEN 15
#define NUM_FLOATS 7

/* 
 * The struct: each element of the array is one of these
 */
struct s {
    short s_int;
    char  str1[ STRING_LEN ];
    char *str2;
    float f[ NUM_FLOATS ];
} s_array[ ARRAY_SIZE ];

/*
 * This function takes three arguments:
 * 
 * - `field_name`: a string corresponding to the name of one of the
 *   field in a `struct s`
 * - `index`: an index into the array `s_array`.
 * - `subindex`: an additional index.
 *
 * The function returns the address of some data value, which is the
 * field named `field_name` of the `index`th element of the array.  If
 * the field corresponds to an array within the struct (e.g. `f`),
 * then the value whose address is to be returned is that at the
 * `subindex`th position in that array.
 *
 * This function must check array bounds and valid strings. 
 */
void *get_address( const char *field_name, int index, int subindex )
{
    void *result;

    // Answer goes here

    return result;
}

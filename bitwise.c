#include <stdio.h>
#include <stdlib.h>

/*
 * Helper functions. These can be left alone, but may be handy for debugging.
 */

char *as_bin_str(int val) {
  static char buf[33] = { 0 };

  for (int i = 31; i >= 0; i -= 1) {
    buf[i] = "01"[val & 1];
    val = val >> 1;
  }

  return buf;
}

#define print_binary(v) \
  printf("0b%s for %s at line %d\n", \
  as_bin_str(*(unsigned int *) &v), #v, __LINE__)

/*
 * Provide Implementations for the following functions
 */

unsigned int is_bit_set(unsigned int value, int bit_index) {
  /*
   * Return 1 if the bit at bit_index is set, 0 otherwise.
   * bit_index is 0-indexed from the right.
   */

  return 0;
}

unsigned int set_bit(unsigned int value, int bit_index) {
  /*
   * Return value with the bit at bit_index set to 1.
   */

  return 0;
}

unsigned int clear_bit(unsigned int value, int bit_index) {
  /*
   * Return the value with the bit at bit_index set to 0.
   */

  return 0;
}

unsigned int toggle_bit(unsigned int value, int bit_index) {
  /*
   * Return the value with the bit at bit_index flipped.
   */

  return 0;
}

char to_uppercase(unsigned char c) {
  /*
   * Convert a lowercase alpha character to uppercase using bitwise operations.
   * If the character is not a lowercase letter, return it unchanged.
   * 
   * Hint: Look at the ASCII chart. Lowercase letters have the 6th bit set.
   */

  return 0;
}

/* 
Test code 

It is not recommended to modify any code below this point
*/

int _test_int_equal_result;

#define test_int_equal(exp, result) \
printf("Testing %s == %d\n", #exp, result); \
_test_int_equal_result = exp; \
if ((_test_int_equal_result) != result) { \
  printf("Test for %s == %d FAILED (got %d)\n", #exp, result, _test_int_equal_result); \
  exit(1); \
}

int main() {
  printf("Bit set tests\n");
  test_int_equal(is_bit_set(1, 0), 1);
  test_int_equal(is_bit_set(2, 1), 1);
  test_int_equal(is_bit_set(4, 2), 1);
  test_int_equal(is_bit_set(8, 3), 1);
  test_int_equal(is_bit_set(1, 1), 0);
  test_int_equal(is_bit_set(7, 2), 1);
  test_int_equal(is_bit_set(7, 3), 0);
  test_int_equal(is_bit_set(255, 7), 1);
  test_int_equal(is_bit_set(127, 7), 0);

  printf("\nSet bit tests\n");
  test_int_equal(set_bit(0, 0), 1);
  test_int_equal(set_bit(0, 1), 2);
  test_int_equal(set_bit(0, 2), 4);
  test_int_equal(set_bit(1, 0), 1);
  test_int_equal(set_bit(1, 1), 3);
  test_int_equal(set_bit(4, 2), 4);
  test_int_equal(set_bit(2, 7), 130);
  test_int_equal(set_bit(4, 6), 68);

  printf("\nClear bit tests\n");
  test_int_equal(clear_bit(1, 0), 0);
  test_int_equal(clear_bit(2, 1), 0);
  test_int_equal(clear_bit(4, 2), 0);
  test_int_equal(clear_bit(3, 0), 2);
  test_int_equal(clear_bit(3, 1), 1);
  test_int_equal(clear_bit(7, 2), 3);
  test_int_equal(clear_bit(128, 7), 0);
  test_int_equal(clear_bit(255, 7), 127);

  printf("\nToggle bit tests\n");
  test_int_equal(toggle_bit(0, 0), 1);
  test_int_equal(toggle_bit(0, 1), 2);
  test_int_equal(toggle_bit(0, 2), 4);
  test_int_equal(toggle_bit(1, 0), 0);
  test_int_equal(toggle_bit(1, 1), 3);
  test_int_equal(toggle_bit(3, 1), 1);
  test_int_equal(toggle_bit(7, 2), 3);
  test_int_equal(toggle_bit(255, 7), 127);
  test_int_equal(toggle_bit(127, 7), 255);

  printf("\nUppercase tests\n");
  test_int_equal(to_uppercase('a'), 'A');
  test_int_equal(to_uppercase('b'), 'B');
  test_int_equal(to_uppercase('z'), 'Z');
  test_int_equal(to_uppercase('A'), 'A');
  test_int_equal(to_uppercase('1'), '1');
  test_int_equal(to_uppercase('!'), '!');
  test_int_equal(to_uppercase('{'), '{');
  test_int_equal(to_uppercase('@'), '@');

  printf("\nAll tests passed.\n");
}

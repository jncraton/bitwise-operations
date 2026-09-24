# Bitwise Operations and Data Representation

![Left Logical Shift](https://thumb.wikimedia.org/wikipedia/commons/thumb/5/5c/Rotate_left_logically.svg/330px-Rotate_left_logically.svg.png)

A lab exploring how computers store and manipulate data at the bit level

## Learning Outcomes

After completing this experience, learners will be able to:

1. Use bitwise masks to isolate specific bits in a byte
2. Perform bitwise shifts to manipulate the position of data
3. Use bitwise operations to perform character transformations (e.g., case conversion)

## Bitwise Operators

Bitwise operators work on the individual bits of an integer.

- and (`&`) - Results in 1 only if both bits are 1. Useful for masking (checking if a bit is on).
- or (`|`) - Results in 1 if at least one bit is 1. Useful for setting a bit.
- xor (`^`) - Results in 1 if bits are different. Useful for toggling a bit.
- not (`~`) - Inverts all bits.
- Left Shift (`<<`) - Moves bits to the left, filling with 0s. Effectively multiplies by powers of 2.
- Right Shift (`>>`) - Moves bits to the right. Effectively divides by powers of 2.

## Tasks

Handout code is provided in bitwise.c.

1. Implement `is_bit_set`
2. Implement `set_bit`
3. Implement `clear_bit`
4. Implement `toggle_bit`
5. Implement `to_uppercase`

## Testing

The code includes a number of embedded tests that can be run by executing:

```
make test
```

Output includes a number of tests to ensure the program works correctly followed by the results of the character transformation tasks.

## Resources

- [Bitwise Operators](https://en.wikibooks.org/wiki/C_programming/Operators_and_type_casting#Bitwise_operators)
- [Mask](https://en.wikipedia.org/wiki/Mask_(computing))
- [Bitwise operation](https://en.wikipedia.org/wiki/Bitwise_operation)

![ASCII Code Chart](https://upload.wikimedia.org/wikipedia/commons/4/4f/ASCII_Code_Chart.svg)

# Stackoverflow:-

1's complement is simply bitwise NOT (that is 001 becomes 110), this ends up giving you two zeroes (111 and 000), so you need to take care when you're performing additions of numbers with different signs (and whenever you cross 0). It is, however, very simple to implement negation in hardware (it's a single parallel operation).

2's complement adjusts the range, so you have one more negative than you have positive numbers (for 8-bit numbers, your range is -128 to 127), but you don't have to account for anything and you only have one zero. Negating a number is slightly more expensive (one parallel bit-flip, followed by an addition), but this is probably compensated for by much easier addition circuitry.

The [ Two's complement page ]( https://en.wikipedia.org/wiki/Two's_complement ) contains the verbatim answer to you question: The two's-complement system has the advantage that the fundamental arithmetic operations of addition, subtraction, and multiplication are identical to those for unsigned binary numbers (as long as the inputs are represented in the same number of bits and any overflow beyond those bits is discarded from the result). This property makes the system both simpler to implement and capable of easily handling higher precision arithmetic.

# Geeksforgeeks:-

1’s complement of a binary number is another binary number obtained by toggling all bits in it, i.e., transforming the 0 bit to 1 and the 1 bit to 0.

Examples:

Let numbers be stored using 4 bits

1's complement of 7 (0111) is 8 (1000)
1's complement of 12 (1100) is 3 (0011)



2’s complement of a binary number is 1 added to the 1’s complement of the binary number.

Examples:

Let numbers be stored using 4 bits

2's complement of 7 (0111) is 9 (1001)

2's complement of 12 (1100) is 4 (0100)

These representations are used for signed numbers.

The main difference between 1′ s complement and 2′ s complement is that 1′ s complement has two representations of 0 (zero) – 00000000, which is positive zero (+0) and 11111111, which is negative zero (-0); whereas in 2′ s complement, there is only one representation for zero – 00000000 (+0) because if we add 1 to 11111111 (-1), we get 00000000 (+0) which is the same as positive zero. This is the reason why 2′ s complement is generally used.

Another difference is that while adding numbers using 1′ s complement, we first do binary addition, then add in an end-around carry value. But, 2′ s complement has only one value for zero, and doesn’t require carry values.


[Reference](https://www.geeksforgeeks.org/difference-between-1s-complement-representation-and-2s-complement-representation-technique/)

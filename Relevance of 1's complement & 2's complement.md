stackoverflow:-

1's complement is simply bitwise NOT (that is 001 becomes 110), this ends up giving you two zeroes (111 and 000), so you need to take care when you're performing additions of numbers with different signs (and whenever you cross 0). It is, however, very simple to implement negation in hardware (it's a single parallel operation).

2's complement adjusts the range, so you have one more negative than you have positive numbers (for 8-bit numbers, your range is -128 to 127), but you don't have to account for anything and you only have one zero. Negating a number is slightly more expensive (one parallel bit-flip, followed by an addition), but this is probably compensated for by much easier addition circuitry.

The [ Two's complement page ]( https://en.wikipedia.org/wiki/Two's_complement ) contains the verbatim answer to you question: The two's-complement system has the advantage that the fundamental arithmetic operations of addition, subtraction, and multiplication are identical to those for unsigned binary numbers (as long as the inputs are represented in the same number of bits and any overflow beyond those bits is discarded from the result). This property makes the system both simpler to implement and capable of easily handling higher precision arithmetic.

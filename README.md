# Lab3
COSC 2030 lab 3
Sidney Jensen
10/1/18
with help from Addison D. and Evan S.

2. Overflows at 255
3. Overflows at 113512
4. You can tell it is an overflow because it becomes negative. It overflows at 35
5. Overflows at 171
6.
The double is a lot more accurate than the float for example:
enter a float to calculate a sum: 100
sum: -6.55651e-07
enter a double to calculate a sum: 100
sum: 6.66134e-16

enter a float to calculate a sum: 10
sum: 1.19209e-07
enter a double to calculate a sum: 10
sum: -1.11022e-16

enter a float to calculate a sum: 9
sum: 0
enter a double to calculate a sum: 9
sum: 2.22045e-16

enter a float to calculate a sum: 8
sum: 0
enter a double to calculate a sum: 8
sum: 0

The floats stay 0 for longer, but since the double is more accurate, it doesn't answer zero as much, but is way more closer.

7. The error is that instead of stopping before it reaches 4.4, it stops at 4.4 when a float is used. This is because the float is innacurrate enough that the value it has is below 4.4, but close enough that it shows it as 4.4. Floats and Doubles are stoed in different amounts of bits in memory, making it so when the values stored are converted to base 10, it changes the values slightly.

8. When changed to a double instead of a float, it works just like it is supposed to.

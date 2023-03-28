0x11. C - printf
Description
The C library function int printf(const char *format, ...) sends formatted output to stdout.

Declaration
Following is the declaration for printf() function.

int printf(const char *format, ...)
Parameters
format − This is the string that contains the text to be written to stdout. It can optionally contain embedded format tags that are replaced by the values specified in subsequent additional arguments and formatted as requested. Format tags prototype is %[flags][width][.precision][length]specifier, which is explained below −

Sr.No.	Specifier & Output
1	
c

Character

2	
d or i

Signed decimal integer

3	
e

Scientific notation (mantissa/exponent) using e character

4	
E

Scientific notation (mantissa/exponent) using E character

5	
f

Decimal floating point

6	
g

Uses the shorter of %e or %f

7	
G

Uses the shorter of %E or %f

8	
o

Signed octal

9	
s

String of characters

10	
u

Unsigned decimal integer

11	
x

Unsigned hexadecimal integer

12	
X

Unsigned hexadecimal integer (capital letters)

13	
p

Pointer address

14	
n

Nothing printed

15	
%

Character

Sr.No.	Flags & Description
1	
-

Left-justify within the given field width; Right justification is the default (see width sub-specifier).

2	
+

Forces to precede the result with a plus or minus sign (+ or -) even for positive numbers. By default, only negative numbers are preceded with a -ve sign.

3	
(space)

If no sign is going to be written, a blank space is inserted before the value.

4	
#

Used with o, x or X specifiers the value is preceded with 0, 0x or 0X respectively for values different than zero. Used with e, E and f, it forces the written output to contain a decimal point even if no digits would follow. By default, if no digits follow, no decimal point is written. Used with g or G the result is the same as with e or E but trailing zeros are not removed.

5	
0

Left-pads the number with zeroes (0) instead of spaces, where padding is specified (see width sub-specifier).

Sr.No.	Width & Description
1	
(number)

Minimum number of characters to be printed. If the value to be printed is shorter than this number, the result is padded with blank spaces. The value is not truncated even if the result is larger.

2	
*

The width is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted.

Sr.No.	.precision & Description
1	
.number

For integer specifiers (d, i, o, u, x, X) − precision specifies the minimum number of digits to be written. If the value to be written is shorter than this number, the result is padded with leading zeros. The value is not truncated even if the result is longer. A precision of 0 means that no character is written for the value 0. For e, E and f specifiers − this is the number of digits to be printed after the decimal point. For g and G specifiers − This is the maximum number of significant digits to be printed. For s − this is the maximum number of characters to be printed. By default all characters are printed until the ending null character is encountered. For c type − it has no effect. When no precision is specified, the default is 1. If the period is specified without an explicit value for precision, 0 is assumed.

2	
.*

The precision is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted.

Resources: https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm

Tasks required from us:
Tasks
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
mandatory
Write a function that produces output according to a format.
c
s
%

Education is when you read the fine print. Experience is what you get if you dont
Handle the following conversion specifiers:

d
i
Just because its in print doesn't mean its the gospel
Create a man page for the function

With a face like mine, I do better in print
Handle the following conversion specifiers:

b
What one has not experienced, one will never understand in print
Handle the following conversion specifiers:

u
x
o
x
X
Nothing in fine print is ever good news
Use a local buffer of 1024 chars in order to call write as little as possible.

Handle the following custom conversion specifier
S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters).
How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
Handle the following conversion specifier: p

The big print gives and the small print takes away
Handle the following flag characters for non-custom conversion specifiers:

´+´
space
´#´
Sarcasm is lost in print
Handle the following length modifiers for non-custom conversion specifiers:

l
h Conversion specifiers to handle: d, i, u, o, x, X
Print some money and give it to us for the rain forests
Handle the field width for non-custom conversion specifiers.

The negative is the equivalent of the composer's score, and the print the performance
Handle the precision for non-custom conversion specifiers.

It's depressing when you're still around and your albums are out of print
Handle the 0 flag character for non-custom conversion specifiers.

Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
Handle the - flag character for non-custom conversion specifiers.

Print is the sharpest and the strongest weapon of our party
Handle the following custom conversion specifier:

r : prints the reversed string
The flood of print has turned reading into a process of gulping rather than savoring
Handle the following custom conversion specifier:

15. prints he rot13'ed string
*
All the above options work well together.
A custom _printf() for learning purposes was developed by 
cohort #12 students Stephen Ronald Nottinson and Nancy Mukutiri from ALX. 

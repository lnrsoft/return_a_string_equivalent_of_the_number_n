# How to use QString::number static public member function to return a specified format and precision.

QString QString::number(double n, char format = 'g', int precision = 6) returns a string equivalent of the number n, formatted according to the specified format and precision.  

Argument Formats
In member functions where an argument format can be specified (e.g., arg(), number()), the argument format can be one of the following:

Format 	Meaning
e		format as [-]9.9e[+|-]999
E		format as [-]9.9E[+|-]999
f		format as [-]9.9
g		use e or f format, whichever is the most concise
G		use E or f format, whichever is the most concise

A precision is also specified with the argument format. For the 'e', 'E', and 'f' formats, the precision represents the number of digits after the decimal point. For the 'g' and 'G' formats, the precision represents the maximum number of significant digits (trailing zeroes are omitted).

Let’s see the following simple example. 
There are 3 double values x, y, z.
We want to return the result of the following equation: 
(x /z) * y
We also want to allow the user to set the precision of the result.

Here is how I do with Qt. 
There are many ways to solve this issue, but this time I want to demonstrate how we do in Qt.

#How return a string equivalent of the number n using Qt was written by Roland Ihasz, you can modify or distribute. You can do #anything you want with this software, just don't say you wrote it.

# How to use QString::number static public member function to return a specified format and precision.

QString QString::number(double n, char format = 'g', int precision = 6) returns a string equivalent of the number n, formatted according to the specified format and precision.  

Let’s see the following simple example. 
There are 3 double values x, y, z.
We want to return the result of the following equation: <br>
(x /z) * y <br>
We also want to allow the user to set the precision of the result.

Here is how I do with Qt. 
There are many ways to solve this issue, but this time I want to demonstrate how we do in Qt.

How return a string equivalent of the number n using Qt was written by Roland Ihasz, you can modify or distribute. You can do anything you want with this software, just don't say you wrote it.

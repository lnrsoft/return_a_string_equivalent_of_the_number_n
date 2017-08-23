// (c)  Roland Ihasz - https://github.com/lnrsoft

#include <QCoreApplication>
#include <iostream>
#include <QDebug>

int main(int argc, char* argv[])
{
    QCoreApplication a(argc, argv);
    double x = 1.190;
    double z = 6.634;
    double y = 3.398;
    int precision;
    double result = (x / z) * (5.961 / y);
    std::cout << "\nEnter the required precision of the result: ";
    std::cin >> precision;
    QString resultstring = QString::number(result, 'g', precision);
    std::cout << "\n1.In this case the output is a double value."
              << std::endl;
    std::cout << "The result by the compiler default setting is: "
              << result << "\n" << std::endl;
    std::cout << "2. Using the QString::number member function."
              << std::endl;
    std::cout << "The result when we set the precision to "
              << precision << " is: " << qPrintable(resultstring)
              << "\n" << std::endl;
    /*
     *  using qPrintable to remove qoutes from the output
    */
    return 0;
}

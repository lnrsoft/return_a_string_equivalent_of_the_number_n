// (c)  Roland Ihasz - https://github.com/lnrsoft

#include <QCoreApplication>
#include <iostream>
#include <QDebug>

int main(int argc, char* argv[])
{
    QCoreApplication a(argc, argv);
    double x = 1.190;
    double z = 6.6;
    double y = 3.3;
    int precision;
    double result = (x / z) * (0.009613 * y);
    QVariant(result).toString();
    std::cout <<  "\nEnter the decimal places you want to round the result: ";
    std::cin >> precision;
    QString resultstring = QString::number(result, 'g', precision);
    qDebug() << "1. the output is a double value.";
    qDebug() << "The result by the compiler default setting: " << result << '\n';
    qDebug() << "2. the output using QString::number static member function.";
    qDebug() << "Setting the precision to " << precision << " the result: "
             << qPrintable(resultstring) << '\n';
    /*
     *  using qPrintable to remove qoutes from the output
    */
    return 0;
}

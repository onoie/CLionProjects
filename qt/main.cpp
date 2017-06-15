#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << QT_VERSION_STR;
    //return a.exec();
    return 1;
}

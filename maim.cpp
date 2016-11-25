/*************************************************************************
    > File Name: maim.cpp
    > Created Time: 2016年11月25日 星期五 09时52分45秒
 ************************************************************************/

#include <QWidget>
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget w;
    w.show();

    app.exec();
    return 0;
}


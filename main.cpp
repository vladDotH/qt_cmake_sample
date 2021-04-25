#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include "ImageViewer.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ImageViewer imageViewer;

    imageViewer.loadFile("../MARBLES.BMP");

    imageViewer.show();
    return app.exec();
}
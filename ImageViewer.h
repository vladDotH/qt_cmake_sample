#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H

#include <QMainWindow>
#include <QImage>

QT_BEGIN_NAMESPACE
class QAction;

class QLabel;

class QMenu;

class QScrollArea;

class QScrollBar;
QT_END_NAMESPACE

class ImageViewer : public QMainWindow {
Q_OBJECT

public:
    ImageViewer(QWidget *parent = nullptr);

    bool loadFile(const QString &fileName);

    bool saveFile(const QString &fileName);

private slots:

    void open();

    void saveAs();

private:
    void createActions();

    void setImage(const QImage &newImage);

    QImage image;
    QLabel *imageLabel;
    QScrollArea *scrollArea;
};

#endif
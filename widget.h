#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStringListModel>
#include <QStringList>
#include <QtCore>
#include <QtGui>
#include <QFileSystemModel>
#include <QDir>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    QStringListModel *_qstringlistmod;
    QFileSystemModel *_qfilesysmod;
    QModelIndex curPresItemIndex;
    bool enumRemove;
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_treeView_clicked(const QModelIndex &index);

    void on_checkBox_clicked(bool checked);

private:
    Ui::Widget *ui;

};

#endif // WIDGET_H

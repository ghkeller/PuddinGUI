#ifndef TABWINDOWTEST_H
#define TABWINDOWTEST_H

#include <QDialog>
#include <QFile>
#include <QFileSystemModel>
#include <QModelIndex>
#include <QDirIterator>
#include <QStringList>
#include "widget.h"

#define MAX_NUM_OF_TABS 6

namespace Ui {
class Puddin;
}

class Puddin : public QDialog
{
    Q_OBJECT

public:
    explicit Puddin(QWidget *parent = 0);

    void ConfigMainModel(QFileSystemModel *_fsm);

    ~Puddin();

private slots:
    void on_treeView_clicked(const QModelIndex &index);

    void on_pushButton_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_pushButton_2_clicked();

    void on_plainTextEdit_textChanged();

private:
    Ui::Puddin *ui;

    //void Puddin::ConfigMainModel(void);

    QFileSystemModel *_qfilesysmod_1;
    QString clickName;
    QModelIndex dirPathIndex;
    QString *widgFiles[5];
    QString consoleText;
    bool error;
};

#endif // TABWINDOWTEST_H

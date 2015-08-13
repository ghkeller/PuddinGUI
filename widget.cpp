#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //model stuff for file strings
    /***************************************/
    _qstringlistmod = new QStringListModel(this);
    ui->tableView->setModel(_qstringlistmod);
    /****************************************/

    enumRemove = false;

    //model stuff for file strings
    /***************************************/
    _qfilesysmod = new QFileSystemModel(this);
    _qfilesysmod->setRootPath("");
    _qfilesysmod->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
    ui->treeView->setModel(_qfilesysmod);
    /****************************************/
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    //add
    int row = _qstringlistmod->rowCount();
    _qstringlistmod->insertRows(row, 1);

    QModelIndex index = _qstringlistmod->index(row);

    ui->tableView->setCurrentIndex(index);
    ui->tableView->edit(index);
}

void Widget::on_pushButton_2_clicked()
{
    //delete
    _qstringlistmod->removeRows(ui->tableView->currentIndex().row(), 1);
}

void Widget::on_treeView_clicked(const QModelIndex &index)
{
    curPresItemIndex = index;
}

void Widget::on_checkBox_clicked(bool checked)
{
    enumRemove = checked;
}

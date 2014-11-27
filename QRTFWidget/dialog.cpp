#include "dialog.h"
#include "ui_dialog.h"
#include <QFileDialog>
#include <QDebug>
#include <iostream>
#include <ostream>

#include "rtfparser.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Open file"), ".", tr("Rich Text Format (*.rtf)"));
    qDebug() << "file is " << filename;

    if(filename.isNull())
    {
        return;
    }

    //process the document
    try
    {
        format::utils::stream_logger log ( std::cout, true, true, true );

        std::ifstream file ( filename.toStdString().c_str() );
        format::utils::stream_source src ( file );

        RTFParser rtfp;

        format::parsers::rtf parser(src, rtfp, log);

    }
    catch(...)
    {
        qDebug() << "exception!!" ;
    }


}

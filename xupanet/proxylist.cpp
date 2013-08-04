#include "proxylist.h"
#include "ui_proxylist.h"

ProxyList::ProxyList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProxyList)
{
    ui->setupUi(this);
}

ProxyList::~ProxyList()
{
    delete ui;
}


void ProxyList::on_pushButtonSetDefaultProxies_clicked()
{
    ui->lineEditProxy1->setText("95.87.239.115");
    ui->lineEditPort1->setText("8080");

    ui->lineEditProxy2->setText("218.25.249.188");
    ui->lineEditPort2->setText("81");

    ui->lineEditProxy3->setText("222.29.45.27");
    ui->lineEditPort3->setText("1080");

    ui->lineEditProxy4->setText("109.207.61.206");
    ui->lineEditPort4->setText("8090");

    ui->lineEditProxy5->setText("177.206.131.63");
    ui->lineEditPort5->setText("3128");

}

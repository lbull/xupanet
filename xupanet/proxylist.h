#ifndef PROXYLIST_H
#define PROXYLIST_H

#include <QWidget>

namespace Ui {
class ProxyList;
}

class ProxyList : public QWidget
{
    Q_OBJECT
    
public:
    explicit ProxyList(QWidget *parent = 0);
    ~ProxyList();
    
private slots:
    void on_pushButton_2_clicked();

    void on_pushButtonSetDefaultProxies_clicked();

private:
    Ui::ProxyList *ui;
};

#endif // PROXYLIST_H

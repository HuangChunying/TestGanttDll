#ifndef GANTTCHARDLL_H
#define GANTTCHARDLL_H

#include "ganttchardll_global.h"
#include <QDialog>

namespace Ui {
 class Dialog;
}

class GANTTCHARDLLSHARED_EXPORT Ganttchardll : public QDialog
{

    Q_OBJECT

public:
    Ganttchardll(QWidget *parent = 0);

    void setHtmlPath(QString htmlPath);
    ~Ganttchardll();

private:
    Ui::Dialog *ui;
};

#endif // GANTTCHARDLL_H

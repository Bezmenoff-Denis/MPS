#ifndef TRAININGROOMPARAMS_H
#define TRAININGROOMPARAMS_H

#include <QDialog>

namespace Ui {
class TrainingRoomParams;
}

class TrainingRoomParams : public QDialog
{
    Q_OBJECT

public:
    explicit TrainingRoomParams(QWidget *parent = 0);
    ~TrainingRoomParams();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TrainingRoomParams *ui;
};

#endif // TRAININGROOMPARAMS_H

#ifndef ROWOFWORDS_H
#define ROWOFWORDS_H

#include <QDialog>

namespace Ui {
class RowofWords;
}

class RowofWords : public QDialog
{
    Q_OBJECT

public:
    explicit RowofWords(QWidget *parent = 0, int complexity = 0);
    ~RowofWords();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RowofWords *ui;
};

#endif // ROWOFWORDS_H

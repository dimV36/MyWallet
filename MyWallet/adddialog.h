#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
#include <QDate>
#include <QPushButton>
#include <QTextEdit>

namespace Ui {
class AddDialog;
}

class AddDialog : public QDialog {
    Q_OBJECT

private:
    Ui::AddDialog* _ui;
public:
    explicit AddDialog(QWidget* parent = 0);
    ~AddDialog();

    QDate get_date() const;
    int get_output() const;
    QString get_output_description() const;
    int get_input() const;
    QString get_input_description() const;

    bool IsOutputFieldsActive() const;
    bool IsInputFieldsActive() const;

private slots:
    void SlotUpdateForm(QString);

private:
    bool IsDataEntered() const;

};

#endif // ADDDIALOG_H
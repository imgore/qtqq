#ifndef LOGONWINDOW_H
#define LOGONWINDOW_H

#include <QMainWindow>

namespace Ui {
class LogonWindow;
}

class LogonWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LogonWindow(QWidget *parent = 0);
    ~LogonWindow();

private:
    Ui::LogonWindow *ui;
};

#endif // LOGONWINDOW_H

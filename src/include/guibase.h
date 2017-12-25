#ifndef GUIBASE_H
#define GUIBASE_H

#include <QMainWindow>

namespace Ui {
class GUIbase;
}

class GUIbase : public QMainWindow
{
    Q_OBJECT

public:
    explicit GUIbase(QWidget *parent = 0);
    ~GUIbase();

private:
    Ui::GUIbase *ui;
};

#endif // GUIBASE_H

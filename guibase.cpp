#include "guibase.h"
#include "ui_guibase.h"

GUIbase::GUIbase(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GUIbase)
{
    ui->setupUi(this);
}

GUIbase::~GUIbase()
{
    delete ui;
}

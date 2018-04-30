/********************************************************************************
** Form generated from reading UI file 'guibase.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIBASE_H
#define UI_GUIBASE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUIbase
{
public:
    QAction *actionMyth;
    QAction *actionOpen;
    QAction *actionSMART_Objective;
    QAction *actionOpen_Last;
    QAction *actiong;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabDiary;
    QListView *tableDay;
    QWidget *tabObjectives;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuNew;
    QMenu *menuView;
    QMenu *menuAbout;
    QMenu *menuReport;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GUIbase)
    {
        if (GUIbase->objectName().isEmpty())
            GUIbase->setObjectName(QStringLiteral("GUIbase"));
        GUIbase->resize(1000, 700);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/res/icons/AppIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        GUIbase->setWindowIcon(icon);
        GUIbase->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        actionMyth = new QAction(GUIbase);
        actionMyth->setObjectName(QStringLiteral("actionMyth"));
        actionOpen = new QAction(GUIbase);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSMART_Objective = new QAction(GUIbase);
        actionSMART_Objective->setObjectName(QStringLiteral("actionSMART_Objective"));
        actionOpen_Last = new QAction(GUIbase);
        actionOpen_Last->setObjectName(QStringLiteral("actionOpen_Last"));
        actiong = new QAction(GUIbase);
        actiong->setObjectName(QStringLiteral("actiong"));
        centralWidget = new QWidget(GUIbase);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(40, 40, 921, 571));
        tabWidget->setCursor(QCursor(Qt::ArrowCursor));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabDiary = new QWidget();
        tabDiary->setObjectName(QStringLiteral("tabDiary"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabDiary->sizePolicy().hasHeightForWidth());
        tabDiary->setSizePolicy(sizePolicy);
        tabDiary->setSizeIncrement(QSize(0, 0));
        tabDiary->setBaseSize(QSize(0, 0));
        QFont font;
        font.setStrikeOut(false);
        tabDiary->setFont(font);
        tableDay = new QListView(tabDiary);
        tableDay->setObjectName(QStringLiteral("tableDay"));
        tableDay->setGeometry(QRect(60, 30, 791, 401));
        tabWidget->addTab(tabDiary, QString());
        tabObjectives = new QWidget();
        tabObjectives->setObjectName(QStringLiteral("tabObjectives"));
        tabWidget->addTab(tabObjectives, QString());
        GUIbase->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GUIbase);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 29));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuNew = new QMenu(menuFile);
        menuNew->setObjectName(QStringLiteral("menuNew"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuReport = new QMenu(menuBar);
        menuReport->setObjectName(QStringLiteral("menuReport"));
        GUIbase->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GUIbase);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GUIbase->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GUIbase);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GUIbase->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuReport->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(menuNew->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionOpen_Last);
        menuNew->addAction(actionSMART_Objective);
        menuAbout->addAction(actionMyth);
        menuReport->addAction(actiong);

        retranslateUi(GUIbase);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GUIbase);
    } // setupUi

    void retranslateUi(QMainWindow *GUIbase)
    {
        GUIbase->setWindowTitle(QApplication::translate("GUIbase", "Myth", nullptr));
        actionMyth->setText(QApplication::translate("GUIbase", "&Myth", nullptr));
        actionOpen->setText(QApplication::translate("GUIbase", "Open", nullptr));
        actionSMART_Objective->setText(QApplication::translate("GUIbase", "SMART Objective", nullptr));
        actionOpen_Last->setText(QApplication::translate("GUIbase", "Open Last", nullptr));
#ifndef QT_NO_TOOLTIP
        actionOpen_Last->setToolTip(QApplication::translate("GUIbase", "Open last Myth agenda", nullptr));
#endif // QT_NO_TOOLTIP
        actiong->setText(QApplication::translate("GUIbase", "Begin of day", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabDiary), QApplication::translate("GUIbase", "Diary", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabObjectives), QApplication::translate("GUIbase", "Objectives", nullptr));
        menuFile->setTitle(QApplication::translate("GUIbase", "Fi&le", nullptr));
        menuNew->setTitle(QApplication::translate("GUIbase", "New", nullptr));
        menuView->setTitle(QApplication::translate("GUIbase", "&View", nullptr));
        menuAbout->setTitle(QApplication::translate("GUIbase", "Abo&ut", nullptr));
        menuReport->setTitle(QApplication::translate("GUIbase", "&Report", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GUIbase: public Ui_GUIbase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIBASE_H

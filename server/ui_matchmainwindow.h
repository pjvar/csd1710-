/********************************************************************************
** Form generated from reading UI file 'matchmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATCHMAINWINDOW_H
#define UI_MATCHMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MatchMainWindow
{
public:
    QAction *gameaction;
    QAction *restartaction;
    QAction *exitaction;
    QAction *helpaction;
    QAction *gameaction2;
    QWidget *centralWidget;
    QLabel *label_3;
    QProgressBar *prbtime;
    QLabel *label_4;
    QLabel *labeltip;
    QLabel *label_5;
    QLabel *labelreset;
    QLabel *label_6;
    QPushButton *tipButton;
    QPushButton *resetButton;
    QLabel *label_7;
    QLabel *labelscore;
    QTableView *tableView;
    QListWidget *listWidget;
    QLabel *label_8;
    QLineEdit *sendEdit;
    QPushButton *sendButton;
    QLabel *timelabel;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menu_G;
    QMenu *menu_A;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MatchMainWindow)
    {
        if (MatchMainWindow->objectName().isEmpty())
            MatchMainWindow->setObjectName(QStringLiteral("MatchMainWindow"));
        MatchMainWindow->resize(1111, 899);
        QIcon icon;
        icon.addFile(QStringLiteral("image/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MatchMainWindow->setWindowIcon(icon);
        gameaction = new QAction(MatchMainWindow);
        gameaction->setObjectName(QStringLiteral("gameaction"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("image/24.png"), QSize(), QIcon::Normal, QIcon::Off);
        gameaction->setIcon(icon1);
        restartaction = new QAction(MatchMainWindow);
        restartaction->setObjectName(QStringLiteral("restartaction"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("image/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        restartaction->setIcon(icon2);
        exitaction = new QAction(MatchMainWindow);
        exitaction->setObjectName(QStringLiteral("exitaction"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/000.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        exitaction->setIcon(icon3);
        helpaction = new QAction(MatchMainWindow);
        helpaction->setObjectName(QStringLiteral("helpaction"));
        gameaction2 = new QAction(MatchMainWindow);
        gameaction2->setObjectName(QStringLiteral("gameaction2"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("image3/17.png"), QSize(), QIcon::Normal, QIcon::Off);
        gameaction2->setIcon(icon4);
        centralWidget = new QWidget(MatchMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 0, 41, 16));
        label_3->setFrameShadow(QFrame::Raised);
        prbtime = new QProgressBar(centralWidget);
        prbtime->setObjectName(QStringLiteral("prbtime"));
        prbtime->setGeometry(QRect(130, 0, 241, 21));
        prbtime->setAutoFillBackground(false);
        prbtime->setStyleSheet(QLatin1String("QProgressBar {   border: 2px solid grey;   border-radius: 5px;   background-color: #FFFFFF;}QProgressBar::chunk {   background-color: #05B8CC;   width: 5px;}QProgressBar {   border: 2px solid grey;   border-radius: 5px;   text-align: center;}\n"
""));
        prbtime->setValue(0);
        prbtime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        prbtime->setTextVisible(true);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(410, 0, 41, 16));
        label_4->setFrameShadow(QFrame::Raised);
        labeltip = new QLabel(centralWidget);
        labeltip->setObjectName(QStringLiteral("labeltip"));
        labeltip->setGeometry(QRect(460, 0, 31, 16));
        labeltip->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(520, 0, 51, 16));
        label_5->setFrameShadow(QFrame::Raised);
        labelreset = new QLabel(centralWidget);
        labelreset->setObjectName(QStringLiteral("labelreset"));
        labelreset->setGeometry(QRect(560, 0, 31, 16));
        labelreset->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(630, 0, 41, 16));
        label_6->setFrameShadow(QFrame::Raised);
        tipButton = new QPushButton(centralWidget);
        tipButton->setObjectName(QStringLiteral("tipButton"));
        tipButton->setEnabled(false);
        tipButton->setGeometry(QRect(950, 10, 99, 27));
        tipButton->setStyleSheet(QStringLiteral("selection-background-color: rgb(157, 220, 217);"));
        resetButton = new QPushButton(centralWidget);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setEnabled(false);
        resetButton->setGeometry(QRect(950, 80, 99, 27));
        resetButton->setStyleSheet(QStringLiteral("selection-background-color: rgb(157, 220, 217);"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(850, 120, 67, 17));
        labelscore = new QLabel(centralWidget);
        labelscore->setObjectName(QStringLiteral("labelscore"));
        labelscore->setGeometry(QRect(670, 0, 31, 16));
        labelscore->setFrameShadow(QFrame::Raised);
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(840, 150, 221, 181));
        tableView->setLayoutDirection(Qt::LeftToRight);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(840, 390, 221, 261));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(840, 360, 67, 17));
        sendEdit = new QLineEdit(centralWidget);
        sendEdit->setObjectName(QStringLiteral("sendEdit"));
        sendEdit->setGeometry(QRect(840, 710, 171, 31));
        sendButton = new QPushButton(centralWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setEnabled(false);
        sendButton->setGeometry(QRect(1010, 710, 51, 31));
        timelabel = new QLabel(centralWidget);
        timelabel->setObjectName(QStringLiteral("timelabel"));
        timelabel->setGeometry(QRect(70, 0, 31, 16));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 0, 31, 16));
        MatchMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MatchMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1111, 28));
        menu_G = new QMenu(menuBar);
        menu_G->setObjectName(QStringLiteral("menu_G"));
        menu_A = new QMenu(menuBar);
        menu_A->setObjectName(QStringLiteral("menu_A"));
        MatchMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MatchMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MatchMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MatchMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MatchMainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_G->menuAction());
        menuBar->addAction(menu_A->menuAction());
        menu_G->addAction(gameaction);
        menu_G->addAction(restartaction);
        menu_G->addSeparator();
        menu_G->addAction(exitaction);
        menu_G->addAction(gameaction2);
        menu_A->addAction(helpaction);

        retranslateUi(MatchMainWindow);

        QMetaObject::connectSlotsByName(MatchMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MatchMainWindow)
    {
        MatchMainWindow->setWindowTitle(QApplication::translate("MatchMainWindow", "\350\277\236\350\277\236\347\234\213", 0));
        gameaction->setText(QApplication::translate("MatchMainWindow", "\345\274\200\345\247\213", 0));
        restartaction->setText(QApplication::translate("MatchMainWindow", "\345\201\234\346\255\242\346\270\270\346\210\217", 0));
        exitaction->setText(QApplication::translate("MatchMainWindow", "\351\200\200\345\207\272", 0));
        helpaction->setText(QApplication::translate("MatchMainWindow", "\345\205\263\344\272\216", 0));
        gameaction2->setText(QApplication::translate("MatchMainWindow", "\345\274\200\345\247\2132", 0));
        label_3->setText(QApplication::translate("MatchMainWindow", "\346\227\266\351\227\264:", 0));
        prbtime->setFormat(QString());
        label_4->setText(QApplication::translate("MatchMainWindow", "\346\217\220\347\244\272:", 0));
        labeltip->setText(QString());
        label_5->setText(QApplication::translate("MatchMainWindow", "\351\207\215\346\216\222:", 0));
        labelreset->setText(QString());
        label_6->setText(QApplication::translate("MatchMainWindow", "\345\276\227\345\210\206:", 0));
        tipButton->setText(QApplication::translate("MatchMainWindow", "\346\217\220\347\244\272", 0));
        resetButton->setText(QApplication::translate("MatchMainWindow", "\351\207\215\346\216\222", 0));
        label_7->setText(QApplication::translate("MatchMainWindow", "\346\216\222\345\220\215\357\274\232", 0));
        labelscore->setText(QString());
        label_8->setText(QApplication::translate("MatchMainWindow", "\350\201\212\345\244\251\345\256\244\357\274\232", 0));
        sendButton->setText(QApplication::translate("MatchMainWindow", "\345\217\221\351\200\201", 0));
        timelabel->setText(QString());
        label->setText(QApplication::translate("MatchMainWindow", "\347\247\222", 0));
        menu_G->setTitle(QApplication::translate("MatchMainWindow", "\346\270\270\346\210\217G", 0));
        menu_A->setTitle(QApplication::translate("MatchMainWindow", "\345\270\256\345\212\251A", 0));
    } // retranslateUi

};

namespace Ui {
    class MatchMainWindow: public Ui_MatchMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATCHMAINWINDOW_H

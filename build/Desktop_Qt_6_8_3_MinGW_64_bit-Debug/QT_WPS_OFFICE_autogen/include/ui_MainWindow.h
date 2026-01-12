/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *new_action;
    QAction *open_action;
    QAction *save_action;
    QAction *saveAs_action;
    QAction *quit_action;
    QAction *undo_action;
    QAction *redo_action;
    QAction *copy_action;
    QAction *paste_action;
    QAction *cut_action;
    QAction *find_and_replace_action;
    QAction *image_action;
    QAction *left_align_action;
    QAction *center_align_action;
    QAction *right_align_action;
    QAction *just_align_action;
    QAction *underline_action;
    QAction *bold_action;
    QAction *italic_action;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *file_menu;
    QMenu *editor_menu;
    QMenu *insert_menu;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(735, 516);
        new_action = new QAction(MainWindow);
        new_action->setObjectName("new_action");
        new_action->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/new.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        new_action->setIcon(icon);
        open_action = new QAction(MainWindow);
        open_action->setObjectName("open_action");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        open_action->setIcon(icon1);
        save_action = new QAction(MainWindow);
        save_action->setObjectName("save_action");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/save.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        save_action->setIcon(icon2);
        saveAs_action = new QAction(MainWindow);
        saveAs_action->setObjectName("saveAs_action");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/saveas.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        saveAs_action->setIcon(icon3);
        quit_action = new QAction(MainWindow);
        quit_action->setObjectName("quit_action");
        undo_action = new QAction(MainWindow);
        undo_action->setObjectName("undo_action");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/undo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        undo_action->setIcon(icon4);
        redo_action = new QAction(MainWindow);
        redo_action->setObjectName("redo_action");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/redo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        redo_action->setIcon(icon5);
        copy_action = new QAction(MainWindow);
        copy_action->setObjectName("copy_action");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/copy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        copy_action->setIcon(icon6);
        paste_action = new QAction(MainWindow);
        paste_action->setObjectName("paste_action");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/paste.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        paste_action->setIcon(icon7);
        cut_action = new QAction(MainWindow);
        cut_action->setObjectName("cut_action");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/cut.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cut_action->setIcon(icon8);
        find_and_replace_action = new QAction(MainWindow);
        find_and_replace_action->setObjectName("find_and_replace_action");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/find.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        find_and_replace_action->setIcon(icon9);
        image_action = new QAction(MainWindow);
        image_action->setObjectName("image_action");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/image.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        image_action->setIcon(icon10);
        left_align_action = new QAction(MainWindow);
        left_align_action->setObjectName("left_align_action");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/left.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        left_align_action->setIcon(icon11);
        left_align_action->setMenuRole(QAction::MenuRole::TextHeuristicRole);
        center_align_action = new QAction(MainWindow);
        center_align_action->setObjectName("center_align_action");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/middle.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        center_align_action->setIcon(icon12);
        center_align_action->setMenuRole(QAction::MenuRole::TextHeuristicRole);
        right_align_action = new QAction(MainWindow);
        right_align_action->setObjectName("right_align_action");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/right.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        right_align_action->setIcon(icon13);
        right_align_action->setMenuRole(QAction::MenuRole::TextHeuristicRole);
        just_align_action = new QAction(MainWindow);
        just_align_action->setObjectName("just_align_action");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/just.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        just_align_action->setIcon(icon14);
        just_align_action->setMenuRole(QAction::MenuRole::TextHeuristicRole);
        underline_action = new QAction(MainWindow);
        underline_action->setObjectName("underline_action");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/underline.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        underline_action->setIcon(icon15);
        underline_action->setMenuRole(QAction::MenuRole::TextHeuristicRole);
        bold_action = new QAction(MainWindow);
        bold_action->setObjectName("bold_action");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/bold.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        bold_action->setIcon(icon16);
        bold_action->setMenuRole(QAction::MenuRole::TextHeuristicRole);
        italic_action = new QAction(MainWindow);
        italic_action->setObjectName("italic_action");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/i.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        italic_action->setIcon(icon17);
        italic_action->setMenuRole(QAction::MenuRole::TextHeuristicRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 735, 24));
        file_menu = new QMenu(menubar);
        file_menu->setObjectName("file_menu");
        editor_menu = new QMenu(menubar);
        editor_menu->setObjectName("editor_menu");
        insert_menu = new QMenu(menubar);
        insert_menu->setObjectName("insert_menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(file_menu->menuAction());
        menubar->addAction(editor_menu->menuAction());
        menubar->addAction(insert_menu->menuAction());
        file_menu->addAction(new_action);
        file_menu->addAction(open_action);
        file_menu->addSeparator();
        file_menu->addAction(save_action);
        file_menu->addAction(saveAs_action);
        file_menu->addSeparator();
        file_menu->addAction(quit_action);
        editor_menu->addAction(undo_action);
        editor_menu->addAction(redo_action);
        editor_menu->addSeparator();
        editor_menu->addAction(copy_action);
        editor_menu->addAction(paste_action);
        editor_menu->addAction(cut_action);
        editor_menu->addSeparator();
        editor_menu->addAction(find_and_replace_action);
        insert_menu->addAction(image_action);
        toolBar->addAction(open_action);
        toolBar->addAction(new_action);
        toolBar->addAction(save_action);
        toolBar->addSeparator();
        toolBar->addAction(copy_action);
        toolBar->addAction(cut_action);
        toolBar->addAction(paste_action);
        toolBar->addSeparator();
        toolBar->addAction(undo_action);
        toolBar->addAction(redo_action);
        toolBar->addSeparator();
        toolBar->addAction(left_align_action);
        toolBar->addAction(center_align_action);
        toolBar->addAction(right_align_action);
        toolBar->addAction(just_align_action);
        toolBar->addSeparator();
        toolBar->addAction(underline_action);
        toolBar->addAction(bold_action);
        toolBar->addAction(italic_action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        new_action->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(shortcut)
        new_action->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        open_action->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(shortcut)
        open_action->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        save_action->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(shortcut)
        save_action->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        saveAs_action->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", nullptr));
#if QT_CONFIG(shortcut)
        saveAs_action->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        quit_action->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        undo_action->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
#if QT_CONFIG(shortcut)
        undo_action->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        redo_action->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232", nullptr));
#if QT_CONFIG(shortcut)
        redo_action->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        copy_action->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(shortcut)
        copy_action->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        paste_action->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(shortcut)
        paste_action->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        cut_action->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(shortcut)
        cut_action->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        find_and_replace_action->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276\346\233\277\346\215\242", nullptr));
#if QT_CONFIG(shortcut)
        find_and_replace_action->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        image_action->setText(QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207", nullptr));
        left_align_action->setText(QCoreApplication::translate("MainWindow", "\345\267\246\345\257\271\351\275\220", nullptr));
#if QT_CONFIG(tooltip)
        left_align_action->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\246\345\257\271\351\275\220", nullptr));
#endif // QT_CONFIG(tooltip)
        center_align_action->setText(QCoreApplication::translate("MainWindow", "\345\261\205\344\270\255\345\257\271\351\275\220", nullptr));
#if QT_CONFIG(tooltip)
        center_align_action->setToolTip(QCoreApplication::translate("MainWindow", "\345\261\205\344\270\255\345\257\271\351\275\220", nullptr));
#endif // QT_CONFIG(tooltip)
        right_align_action->setText(QCoreApplication::translate("MainWindow", "\345\217\263\345\257\271\351\275\220", nullptr));
#if QT_CONFIG(tooltip)
        right_align_action->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\263\345\257\271\351\275\220", nullptr));
#endif // QT_CONFIG(tooltip)
        just_align_action->setText(QCoreApplication::translate("MainWindow", "\344\270\244\347\253\257\345\257\271\351\275\220", nullptr));
        underline_action->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        underline_action->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        bold_action->setText(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        bold_action->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        italic_action->setText(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        italic_action->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        file_menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        editor_menu->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        insert_menu->setTitle(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

enum class WETActionType{
    UnKnow,
    NewFile,
    OpenFile,
    SaveFile,
    SaveAsFile,
    Copy,
    Cut,
    Paste,
    Undo,
    Redo,
    Bold,
    Italic,
    UnderLine,
    LeftAlign,
    CenterAlign,
    RightAlign,
    JustifyAlign,
    TextColor,
    Font,
    FontSize,
    Image,
    FindAndReplace,
    Quit,

};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void openFile();
    void newFile();
    bool saveFile();
    bool saveAsFile();

private:
    void initAction();
    bool maybeSave();
    void loadFile(QString path);
    void setCurrentFileName(const QString& fname);

private slots:
    void on_file_menu_triggered(QAction* action);

private:
    Ui::MainWindow *ui;
    QString cur_file_name;
};
#endif // MAINWINDOW_H

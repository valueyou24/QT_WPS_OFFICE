#include "MainWindow.h"
#include "./ui_MainWindow.h"
#include<QFileDialog>
#include<QStandardPaths>
#include<QFile>
#include<QDir>
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->resize(1280,720);

    initAction();

    this->setWindowTitle(QString());//将标题设置为null

    setCurrentFileName(QString());

    this->statusBar()->showMessage("准备就绪",3000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openFile()
{
    if(!maybeSave()) return;//需要保存

    QString docpath = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).first();
    docpath = docpath.isEmpty() ? QDir::currentPath() : docpath;//docpath可能为空

    QString path = QFileDialog::getOpenFileName(this,"打开文件",docpath);
    if(path.isEmpty()) return;

    loadFile(path);

}

void MainWindow::newFile()
{

}

bool MainWindow::saveFile()
{
    return true;
}

bool MainWindow::saveAsFile()
{
    return true;
}

void MainWindow::initAction()
{
    ui->open_action->setData(QVariant(static_cast<int>(WETActionType::OpenFile)));
    ui->new_action->setData(QVariant(static_cast<int>(WETActionType::NewFile)));
    ui->save_action->setData(QVariant(static_cast<int>(WETActionType::SaveFile)));
    ui->saveAs_action->setData(QVariant(static_cast<int>(WETActionType::SaveAsFile)));
}

bool MainWindow::maybeSave()
{
    if(!ui->textEdit->document()->isModified())
    {
        return true;
    }

    const QMessageBox::StandardButton btn = QMessageBox::warning(this,"警告","当前文件没有保存，\n是否需要保存？",
                                                                 QMessageBox::Save|QMessageBox::Discard|QMessageBox::Cancel);

    switch(btn)
    {
    case QMessageBox::Save:
        return saveFile();
    case QMessageBox::Cancel:
        return false;
    }

    return true;
}

void MainWindow::loadFile(QString path)
{
    QFile file(path);
    if(!file.open(QFile::ReadOnly))
    {
        QMessageBox::critical(this,"错误","文件打开失败");
        return;
    }

    QTextStream in(&file);

    ui->textEdit->insertHtml(in.readAll());

}

void MainWindow::setCurrentFileName(const QString &fname)
{
    this->cur_file_name = fname;
    this->setWindowModified(false);
    ui->textEdit->document()->setModified(false);

    if(this->cur_file_name.isEmpty())
    {//新建的文件
        this->setWindowFilePath("untitled");

    }
    else
    {
        this->setWindowFilePath(this->cur_file_name);
    }
}

void MainWindow::on_file_menu_triggered(QAction *action)
{
    WETActionType type = static_cast<WETActionType>(action->data().toInt());

    switch(type)
    {
    case WETActionType::OpenFile:
        openFile();
        break;
    default:
        break;
    }
}

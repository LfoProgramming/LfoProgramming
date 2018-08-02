
#include "mainframe.h"
#include "ui_mainframe.h"
#include <fstream>
#include <string.h>
#include <string>
///#include "dockwidget.h"
///#include "dockwidget.ui"
///#include "dockwidget.cpp"
///#include "settings.h"
///#include "settings.ui"
///#include "settings.cpp"


MainFrame::MainFrame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainFrame)
{
    ui->setupUi(this);

    ui->SitesLabel->setText("<a style=\"color:#534496;\" href=\"https://.dx.am/\">Go! \>\><</a>");
    ui->SureClose->hide();
    ui->File->hide();
    ui->Edit->hide();
    ui->Access->hide();
    ui->About->hide();
    ui->Contributors->hide();
    ui->Notes->hide();
    ui->Help->hide();
    ui->Licence->hide();
    ui->Sites->hide();
    ui->Demo->hide();
    ui->NewFile->hide();



    ui->Site->setText("www.lfoprogramming.dx.am");
    ui->SitesLabel->setText("<a style=\"color:#534496;\" href=\"http://www.lfoprogramming.dx.am/\">Go! \>\><</a>");
    ui->SitesLabel->setTextFormat(Qt::RichText);
    ui->SitesLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->SitesLabel->setOpenExternalLinks(true);

    ui->App->setText("<a style=\"color:#534496;\" href=\"http://www.lfoprogramming.dx.am/\">App1 >></a>");
    ui->App->setTextFormat(Qt::RichText);
    ui->App->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->App->setOpenExternalLinks(true);

    ui->App_2->setText("<a style=\"color:#534496;\" href=\"http://www.lfoprogramming.dx.am/\">App2 >></a>");
    ui->App_2->setTextFormat(Qt::RichText);
    ui->App_2->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->App_2->setOpenExternalLinks(true);

    ui->App_3->setText("<a style=\"color:#534496;\" href=\"http://www.lfoprogramming.dx.am/\">App3 >></a>");
    ui->App_3->setTextFormat(Qt::RichText);
    ui->App_3->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->App_3->setOpenExternalLinks(true);

    ui->App_4->setText("<a style=\"color:#534496;\" href=\"http://www.lfoprogramming.dx.am/\">App4 >></a>");
    ui->App_4->setTextFormat(Qt::RichText);
    ui->App_4->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->App_4->setOpenExternalLinks(true);


    ui->MasterSlider->setSliderPosition(99);
    on_SendButtons_clicked();
}

MainFrame::~MainFrame()
{
    delete ui;
}

QMediaPlayer * Sp = new QMediaPlayer();


int RColor=0;
int BColor=0;
int GColor=0;

int isFile=0;
int isEdit=0;
int isAbout=0;
int isAccess=0;
int isContributors=0;
int isNotes=0;
int isHelp=0;
int isLicence=0;
int isDemo=0;
int isSites=0;

int Volume=99;

QString ColorString="background-color: rgb(0, 0, 0);";

void MainFrame::on_DirectlyClose_clicked()
{
    delete ui;
    on_DirectlyClose_clicked();
}


void MainFrame::on_FileCloseButton_clicked()
{
    on_HiddenClearButton_clicked();
    QMediaPlayer * Sp = new QMediaPlayer();
    Sp->setMedia(QUrl("qrc:/sounds/Sounds/gets-in-the-way.mp3"));
    Sp->setVolume(Volume);
    Sp->play();
    ui->SureClose->show();
}

void MainFrame::on_SureCloseOkButton_clicked()
{
    on_DirectlyClose_clicked();
}

void MainFrame::on_SureCloseCancelButton_clicked()
{
    ui->SureClose->hide();
}

void MainFrame::on_FileButton_clicked()
{
    isEdit=0;
    isAccess=0;

    ui->Edit->hide();
    ui->Access->hide();


    if (isFile==0){
    ui->File->show();
    isFile=1;
    }
    else {
    ui->File->hide();
    isFile=0;
    }
}

void MainFrame::on_AreYouSureCloseButton_clicked()
{
    on_SureCloseCancelButton_clicked();
}

void MainFrame::on_HiddenClearButton_clicked()
{
    isFile=0;
    isEdit=0;
    isAccess=0;

    ui->File->hide();
    ui->Edit->hide();
    ui->Access->hide();
}

void MainFrame::on_EditButton_clicked()
{

    isFile=0;
    isAccess=0;

    ui->File->hide();
    ui->Access->hide();

    if (isEdit==0){
    ui->Edit->show();
    isEdit=1;
    }
    else {
    ui->Edit->hide();
    isEdit=0;
    }
}

void MainFrame::on_AboutButton_clicked()
{
    on_HiddenClearButton_clicked();
    if(isAbout==0){
        ui->About->show();
        isAbout=1;
    }
    else {
        ui->About->hide();
        isAbout=0;
    }

}

void MainFrame::on_AccessButton_clicked()
{

    isEdit=0;
    isFile=0;

    ui->File->hide();
    ui->Edit->hide();

    if(isAccess==0){
        ui->Access->show();
        isAccess=1;
    }
    else {
        ui->Access->hide();
        isAccess=0;
    }
}

void MainFrame::on_AboutCloseButton_clicked()
{
    isAbout=0;
    ui->About->hide();
}

void MainFrame::on_ContributorsButton_clicked()
{
    on_HiddenClearButton_clicked();
    if(isContributors==0){
    ui->Contributors->show();
    isContributors=1;
    }
    else {
    ui->Contributors->hide();
    isContributors=0;
    }
}

void MainFrame::on_ContributorsCloseButton_clicked()
{
    ui->Contributors->hide();
    isContributors=0;
}

void MainFrame::on_HiddenAboutButton_clicked()
{
    on_HiddenClearButton_clicked();
    if(isAbout==0){
        ui->About->show();
        isAbout=1;
    }
    else {
        ui->About->hide();
        isAbout=0;
    }
}

void MainFrame::on_HiddenContributorsButton_clicked()
{
    on_HiddenClearButton_clicked();
    if(isContributors==0){
    ui->Contributors->show();
    isContributors=1;
    }
    else {
    ui->Contributors->hide();
    isContributors=0;
    }
}

void MainFrame::on_NotesButton_clicked()
{
    on_HiddenClearButton_clicked();
    if (isNotes==0){
        ui->Notes->show();
        isNotes=1;
    }
    else{
        ui->Notes->hide();
        isNotes=0;
    }
}

void MainFrame::on_NotesCloseButton_clicked()
{
    ui->Notes->hide();
    isNotes=0;
}

void MainFrame::on_SitesCombo_currentIndexChanged(int index)
{
    if (index==0){
        ui->Site->setText("www.lfoprogramming.dx.am");
        ui->SitesLabel->setText("<a style=\"color:#534496;\" href=\"http://www.lfoprogramming.dx.am/\">Go! \>\><</a>");
        ui->SitesLabel->setTextFormat(Qt::RichText);
        ui->SitesLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);
        ui->SitesLabel->setOpenExternalLinks(true);
    }
    if(index==1){
        ui->Site->setText("https://github.com/LfoProgramming");
        ui->SitesLabel->setText("<a style=\"color:#534496;\" href=\"http://www.github.com/LfoProgramming/\">Go! \>\><</a>");
        ui->SitesLabel->setTextFormat(Qt::RichText);
        ui->SitesLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);
        ui->SitesLabel->setOpenExternalLinks(true);
    }
}

void MainFrame::on_SitesCloseButton_clicked()
{
    isSites=0;
    ui->Sites->hide();
}

void MainFrame::on_SitesButton_clicked()
{
    on_HiddenClearButton_clicked();
    if (isSites==0){
        ui->Sites->show();
        isSites=1;
    }
    else {
        ui->Sites->hide();
        isSites=0;
    }
}

void MainFrame::on_HelpButton_clicked()
{
    on_HiddenClearButton_clicked();
    if(isHelp==0){
    ui->Help->show();
    isHelp=1;
    }
    else {
    ui->Help->hide();
    isHelp=0;
    }
}

void MainFrame::on_HelpCloseButton_clicked()
{
    isHelp=0;
    ui->Help->hide();
}

void MainFrame::on_HiddenHelpButton_clicked()
{
    on_HiddenClearButton_clicked();
    if(isHelp==0){
    ui->Help->show();
    isHelp=1;
    }
    else {
    ui->Help->hide();
    isHelp=0;
    }
}

void MainFrame::on_HiddenNotesButton_clicked()
{
    on_HiddenClearButton_clicked();
    if (isNotes==0){
        ui->Notes->show();
        isNotes=1;
    }
    else{
        ui->Notes->hide();
        isNotes=0;
    }
}

void MainFrame::on_LicenceButton_clicked()
{
    on_HiddenClearButton_clicked();
    if(isLicence==0){
        ui->Licence->show();
        isLicence=1;
    }
    else {
        ui->Licence->hide();
        isLicence=0;
    }
} //// scris aici de ce nu merge?

void MainFrame::on_LicenceClose_clicked()
{
    ui->Licence->hide();
    isLicence=0;
}

void MainFrame::on_SettingsButton_clicked()
{
///    on_HiddenClearButton_clicked();
///    Settings settings;
///    settings.setModal(true);
///    settings.exec();
///
}

void MainFrame::on_RSlider_valueChanged(int value)
{
    RColor=ui->RSlider->value();
    ui->RgbString->setText("rgb("+QString::number(RColor)+", "+QString::number(GColor)+", "+QString::number(BColor)+")");
    ui->ColorsLabel->setStyleSheet("background-color: "+ui->RgbString->text()+";");
    ColorString=ui->ColorsLabel->styleSheet();
}

void MainFrame::on_GSlider_valueChanged(int value)
{
    GColor=ui->GSlider->value();
    ui->RgbString->setText("rgb("+QString::number(RColor)+", "+QString::number(GColor)+", "+QString::number(BColor)+")");
    ui->ColorsLabel->setStyleSheet("background-color: "+ui->RgbString->text()+";");
    ColorString=ui->ColorsLabel->styleSheet();
}

void MainFrame::on_BSlider_valueChanged(int value)
{
    BColor=ui->BSlider->value();
    ui->RgbString->setText("rgb("+QString::number(RColor)+", "+QString::number(GColor)+", "+QString::number(BColor)+")");
    ui->ColorsLabel->setStyleSheet("background-color: "+ui->RgbString->text()+";");
    ColorString=ui->ColorsLabel->styleSheet();
}

void MainFrame::on_SendBg_clicked()
{
    if (ColorString.length()<36){
        ui->tabWidget->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->label->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_9->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_10->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_11->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_12->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    }
    else {
        ui->tabWidget->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->label->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_9->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_10->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_11->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_12->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
   }
    ui->centralWidget->setStyleSheet(ColorString);
}

void MainFrame::on_SendLines_clicked()
{
    ui->line->setStyleSheet(ColorString);
    ui->line_2->setStyleSheet(ColorString);
    ui->line_3->setStyleSheet(ColorString);
    ui->line_4->setStyleSheet(ColorString);
    ui->line_5->setStyleSheet(ColorString);
    ui->line_6->setStyleSheet(ColorString);
    ui->line_7->setStyleSheet(ColorString);
    ui->line_8->setStyleSheet(ColorString);
    ui->line_9->setStyleSheet(ColorString);
    ui->line_10->setStyleSheet(ColorString);
    ui->line_11->setStyleSheet(ColorString);
}

void MainFrame::on_SendBg1_clicked()
{
    ui->Help->setStyleSheet(ColorString);
    ui->About->setStyleSheet(ColorString);
    ui->File->setStyleSheet(ColorString);
    ui->Access->setStyleSheet(ColorString);
    ui->Edit->setStyleSheet(ColorString);
    ui->Licence->setStyleSheet(ColorString);
    ui->Sites->setStyleSheet(ColorString);
    ui->SureClose->setStyleSheet(ColorString);
    ui->Notes->setStyleSheet(ColorString);
    ui->Contributors->setStyleSheet(ColorString);
    if (ColorString.length()<36){
        ui->label_2->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_3->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_4->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_5->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_6->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_7->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_8->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
      }
    else {
        ui->label_2->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_3->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_4->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_5->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_6->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_7->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_8->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
     }

}

void MainFrame::on_SendButtons_clicked()
{
    if (ColorString.length()<36){
        ui->SendBg->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->SendBg1->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->SendLines->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->SendButtons->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->DefaultThemeButton->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->NightThemeButton->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->MainNotesSave->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->MainNewFileCancel->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->MainSaveNewFile->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->DemoDone->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->SureCloseCancelButton->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->MainSave->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->MainBuild->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->MainRun->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->MainCompileAndRun->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->SureCloseOkButton->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->NightThemeButton->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->NightThemeButton->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->NightThemeButton->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->NightThemeButton->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");

    }
    else {
        ui->SendBg->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->SendBg1->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
///        ui->label_10->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
///        ui->label_11->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
///        ui->label_12->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->SendLines->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->SendButtons->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->DefaultThemeButton->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->NightThemeButton->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->MainNotesSave->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->MainNewFileCancel->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->MainSaveNewFile->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->DemoDone->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->SureCloseCancelButton->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->MainSave->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->MainBuild->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->MainRun->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->MainCompileAndRun->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->SureCloseOkButton->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
    }
}

void MainFrame::on_Im1_clicked()
{
    ui->tabWidget->setStyleSheet(ui->Im1->styleSheet()+"color: rgb(255, 255, 255); alternate-background-color: rgb(186, 189, 182);");
    ui->centralWidget->setStyleSheet(ui->Im1->styleSheet());
    ui->label->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_9->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_10->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_11->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_12->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
}

void MainFrame::on_Im2_clicked()
{
    ui->tabWidget->setStyleSheet(ui->Im2->styleSheet()+"color: rgb(255, 255, 255); alternate-background-color: rgb(186, 189, 182);");
    ui->centralWidget->setStyleSheet(ui->Im2->styleSheet());
    ui->label->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_9->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_10->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_11->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_12->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
}

void MainFrame::on_Im3_clicked()
{
    ui->tabWidget->setStyleSheet(ui->Im3->styleSheet()+"color: rgb(255, 255, 255); alternate-background-color: rgb(186, 189, 182);");
    ui->centralWidget->setStyleSheet(ui->Im3->styleSheet());
    ui->label->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_9->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_10->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_11->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_12->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
}

void MainFrame::on_Im4_clicked()
{
    ui->tabWidget->setStyleSheet(ui->Im4->styleSheet()+"color: rgb(255, 255, 255); alternate-background-color: rgb(186, 189, 182);");
    ui->centralWidget->setStyleSheet(ui->Im4->styleSheet());
    ui->label->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_9->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_10->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_11->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_12->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
}

void MainFrame::on_Im5_clicked()
{
    ui->tabWidget->setStyleSheet(ui->Im5->styleSheet()+"color: rgb(255, 255, 255); alternate-background-color: rgb(186, 189, 182);");
    ui->centralWidget->setStyleSheet(ui->Im5->styleSheet());
    ui->label->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_9->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_10->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_11->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_12->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
}

void MainFrame::on_DefaultThemeButton_clicked()
{
    on_Im3_clicked();
    ui->label->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_2->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_3->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_4->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_5->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_6->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_7->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_8->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_9->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_10->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_11->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_12->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->Help->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->About->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->File->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->Access->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->Edit->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->Licence->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->Sites->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->SureClose->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->Notes->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->Contributors->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->line->setStyleSheet(ui->Im3->styleSheet());
    ui->line_2->setStyleSheet(ui->Im3->styleSheet());
    ui->line_3->setStyleSheet(ui->Im3->styleSheet());
    ui->line_4->setStyleSheet(ui->Im3->styleSheet());
    ui->line_5->setStyleSheet(ui->Im3->styleSheet());
    ui->line_6->setStyleSheet(ui->Im3->styleSheet());
    ui->line_7->setStyleSheet(ui->Im3->styleSheet());
    ui->line_8->setStyleSheet(ui->Im3->styleSheet());
    ui->line_9->setStyleSheet(ui->Im3->styleSheet());
    ui->line_10->setStyleSheet(ui->Im3->styleSheet());
    ui->line_11->setStyleSheet(ui->Im3->styleSheet());
    ui->SendBg->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->SendBg1->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->SendLines->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->SendButtons->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->DefaultThemeButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->NightThemeButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->MainNotesSave->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->MainNewFileCancel->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->MainSaveNewFile->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->DemoDone->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->SureCloseCancelButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->MainSave->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->MainBuild->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->MainRun->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->MainCompileAndRun->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->SureCloseOkButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->NightThemeButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->NightThemeButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->NightThemeButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->NightThemeButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");

}

void MainFrame::on_NightThemeButton_clicked()
{
    on_Im2_clicked();
    ui->label->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_2->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_3->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_4->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_5->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_6->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_7->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_8->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_9->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_10->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_11->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_12->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->Help->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->About->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->File->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->Access->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->Edit->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->Licence->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->Sites->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->SureClose->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->Notes->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->Contributors->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->line->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_2->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_3->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_4->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_5->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_6->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_7->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_8->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_9->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_10->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_11->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->SendBg->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->SendBg1->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->SendLines->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->SendButtons->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->DefaultThemeButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->NightThemeButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->MainNotesSave->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->MainNewFileCancel->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->MainSaveNewFile->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->DemoDone->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->SureCloseCancelButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->MainSave->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->MainBuild->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->MainRun->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->MainCompileAndRun->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->SureCloseOkButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->NightThemeButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->NightThemeButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->NightThemeButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->NightThemeButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
}

void MainFrame::on_fontComboBox_currentFontChanged(const QFont &f)
{
    ui->label->setFont(f);
    ui->label_2->setFont(f);
    ui->label_3->setFont(f);
    ui->label_4->setFont(f);
    ui->label_5->setFont(f);
    ui->label_6->setFont(f);
    ui->label_7->setFont(f);
    ui->label_8->setFont(f);
    ui->label_9->setFont(f);
    ui->label_10->setFont(f);
    ui->label_11->setFont(f);
    ui->label_12->setFont(f);
} //// scris aici de ce nu merge?

void MainFrame::on_MasterSlider_valueChanged(int value)
{
    Volume=ui->MasterSlider->value();
    QMediaPlayer * Sp = new QMediaPlayer();
    Sp->setMedia(QUrl("qrc:/sounds/Sounds/gets-in-the-way.mp3"));
    Sp->setVolume(Volume);
    Sp->play();
}

int isNewFile=0;

std::ofstream InFile;

std::string InFileNameString;

QString InFileName;




void MainFrame::on_MainNewFile_clicked()
{
 on_HiddenClearButton_clicked();
 if (isNewFile==0){
     ui->NewFile->show();
     isNewFile=1;
 }
 else {
     ui->NewFile->hide();
     isNewFile=0;
 }
}

void MainFrame::on_NewFileClose_clicked()
{
    ui->NewFile->hide();
    isNewFile=0;
}

void MainFrame::on_MainSaveNewFile_2_clicked()
{
    on_NewFileClose_clicked();
}

void MainFrame::on_MainSaveNewFile_clicked()
{
    InFileName=ui->NewFileLineEdit->text();
    InFileNameString = InFileName.toUtf8().constData();
    if (InFile.is_open()){
        InFile.close();
    }
    InFile.open(InFileNameString);
    ui->MainLineNameIn->setText(InFileName);
    on_MainNewFileCancel_clicked();
}

void MainFrame::on_MuteButton_clicked()
{
    ui->MasterSlider->setSliderPosition(0);
    Volume=0;
}

void MainFrame::on_MainSave_clicked()
{
    QMediaPlayer * Sp = new QMediaPlayer();
    Sp->setMedia(QUrl("qrc:/sounds/Sounds/Sure.mp3"));
    Sp->setVolume(Volume);
    Sp->play();

 ///   ui->InText->
 ///
    QFile data(ui->MainLineNameIn->text()+".lfop");
    if (data.open(QFile::WriteOnly | QFile::Truncate)) {
        QTextStream out(&data);
         QTextStream stream(&data);
        stream << ui->InText->toPlainText();
                    data.flush();
                    data.close();
        out << "Result: " << qSetFieldWidth(10) << left << 3.14 << 2.7;
        // writes "Result: 3.14      2.7       "
    }

}

void MainFrame::on_MainCompile_clicked()
{
    QMediaPlayer * Sp = new QMediaPlayer();
    Sp->setMedia(QUrl("qrc:/sounds/Sounds/Sure.mp3"));
    Sp->setVolume(Volume);
    Sp->play();

}

void MainFrame::on_MainRun_clicked()
{
    QMediaPlayer * Sp = new QMediaPlayer();
    Sp->setMedia(QUrl("qrc:/sounds/Sounds/Sure.mp3"));
    Sp->setVolume(Volume);
    Sp->play();

}

void MainFrame::on_MainCompileAndRun_clicked()
{
    QMediaPlayer * Sp = new QMediaPlayer();
    Sp->setMedia(QUrl("qrc:/sounds/Sounds/Sure.mp3"));
    Sp->setVolume(Volume);
    Sp->play();

}

void MainFrame::on_MainNotesSave_clicked()
{
    QMediaPlayer * Sp = new QMediaPlayer();
    Sp->setMedia(QUrl("qrc:/sounds/Sounds/Sure.mp3"));
    Sp->setVolume(Volume);
    Sp->play();

}

void MainFrame::on_DemoButton_clicked()
{
    on_HiddenClearButton_clicked();
    if (isDemo==0){
        ui->Demo->show();
        isDemo=1;
    }
    else {
        ui->Demo->hide();
        isDemo=0;
    }
}

void MainFrame::on_DemoDone_clicked()
{
    ui->Demo->hide();
    isDemo=0;
}

void MainFrame::on_DemoClose_clicked()
{
    on_DemoDone_clicked();
}

void MainFrame::on_MainLoadFile_clicked()
{
    on_HiddenClearButton_clicked();
/////    InFileName=ui->NewFileLineEdit->text();
/////    InFileNameString = InFileName.toUtf8().constData();
///    if (InFile.is_open()){
///        InFile.close();
///    }
///    InFile.open("In.");
///    on_MainNewFileCancel_clicked();
    ui->MainLineNameIn->setText("In");
    InFileNameString="In";
    ui->MainLineNameOut->setText("Out");
}

void MainFrame::on_MainNewFileCancel_clicked()
{
    ui->NewFile->hide();
    isNewFile=0;
}

void MainFrame::on_MainBuild_clicked()
{
    std::string Str =  "./lfointerpretor";
    Str=Str+InFileNameString;
    system(Str.c_str());
}

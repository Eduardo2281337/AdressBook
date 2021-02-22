#include "adressbookentry.h"
#include "ui_adressbookentry.h"

AdressBookEntry::AdressBookEntry(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AdressBookEntry)
{
    ui->setupUi(this);

    ui->pushButton_save->setText("Сохранить*");


    connect(ui->lineEdit_secondName, &QLineEdit::textEdited, this, &AdressBookEntry::markUnsavedChanges);
    connect(ui->lineEdit_firstName, &QLineEdit::textEdited, this, &AdressBookEntry::markUnsavedChanges);
    connect(ui->lineEdit_thirdName, &QLineEdit::textEdited, this, &AdressBookEntry::markUnsavedChanges);
    connect(ui->lineEdit_adress, &QLineEdit::textEdited, this, &AdressBookEntry::markUnsavedChanges);
    connect(ui->lineEdit_homePhoneNumber, &QLineEdit::textEdited, this, &AdressBookEntry::markUnsavedChanges);
    connect(ui->lineEdit_mobilePhoneNumber, &QLineEdit::textEdited, this, &AdressBookEntry::markUnsavedChanges);
    connect(ui->plainTextEdit_other, &QLineEdit::textEdited, this, &AdressBookEntry::markUnsavedChanges);
    connect(ui->pushButton_save, &QLineEdit::textEdited, this, &AdressBookEntry::markUnsavedChanges);
}

AdressBookEntry::~AdressBookEntry()
{
    delete ui;
}

void AdressBookEntry::save()
{
    ui->pushButton_save->setText("Сохранить");
}

void AdressBookEntry::markUnsavedChanges()
{
    ui->pushButton_save->setText("Сохранить*");
}

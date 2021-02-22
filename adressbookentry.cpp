#include "adressbookentry.h"
#include "ui_adressbookentry.h"

AdressBookEntry::AdressBookEntry(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AdressBookEntry)
{
    ui->setupUi(this);

    ui->pushButton->setText("Сохранить*");

    connect(ui->pushButton, &QPushButton::clicked, this, &AdressBookEntry::save);
}

AdressBookEntry::~AdressBookEntry()
{
    delete ui;
}

void AdressBookEntry::save()
{
    ui->pushButton->setText("Сохранить");
}

void AdressBookEntry::markUnsavedChanges()
{
    ui->pushButton->setText("Сохранить*");
}

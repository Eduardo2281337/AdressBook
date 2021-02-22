#include "adressbookentry.h"
#include "ui_adressbookentry.h"

AdressBookEntry::AdressBookEntry(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AdressBookEntry)
{
    ui->setupUi(this);
}

AdressBookEntry::~AdressBookEntry()
{
    delete ui;
}


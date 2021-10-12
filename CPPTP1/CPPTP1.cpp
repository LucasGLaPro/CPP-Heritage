#include "CPPTP1.h"
#include "dé.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <qmessagebox.h>
using namespace std;


CPPTP1::CPPTP1(QWidget *parent ) : QMainWindow(parent) {

    ui.setupUi( this );
	this->de = new dé;

}

void CPPTP1::denormal() {
	ui.label->setVisible(false);
	ui.label_2->setVisible(false);
	ui.label_3->setVisible(false);
	ui.label_4->setVisible(false);
	ui.pushButton->setVisible(false);
	ui.pushButton_2->setVisible(false);
	ui.pushButton_3->setVisible(false);
}
void CPPTP1::dehisto() {
	ui.label->setVisible(true);
	ui.label_2->setVisible(true);
	ui.label_3->setVisible(true);
	ui.label_4->setVisible(true);
	ui.pushButton->setVisible(true);
	ui.pushButton_2->setVisible(true);
	ui.pushButton_3->setVisible(true);
}

void CPPTP1::tire() {
	
	ui.label->setText(QString::number(this->de->dd()));
	nombretotal();
}

void CPPTP1::affichenombre() {
	ui.label->setText(QString::number(this->de->affichenombre()));
	nombretotal();
}
void CPPTP1::remise() {
	nombrefinal = 0;
	ui.label->setText(QString::number(this->de->zero()));
	ui.label_2->setText(QString::number(this->de->zero()));
}
void CPPTP1::nombretotal(){
	nombrefinal = nombrefinal + this->de->dd();
	ui.label_2->setText(QString::number(nombrefinal));
}


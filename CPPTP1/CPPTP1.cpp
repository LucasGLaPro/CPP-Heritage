#include "CPPTP1.h"
#include "dé.h"
#include "dehisto.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <qmessagebox.h>
#include <qdebug.h>

using namespace std;


CPPTP1::CPPTP1(QWidget *parent ) : QMainWindow(parent) {

    ui.setupUi( this );
	this->de = new dé;
	ui.tableWidget->setVisible(false);
	ui.label_5->setVisible(false);
	ui.lineEdit->setVisible(false);
	ui.pushButton_4->setVisible(false);

}

void CPPTP1::denormal() {
	ui.label->setVisible(false);
	ui.label_2->setVisible(false);
	ui.label_3->setVisible(false);
	ui.label_4->setVisible(false);
	ui.pushButton->setVisible(false);
	ui.pushButton_2->setVisible(false);
	ui.pushButton_3->setVisible(false);
	ui.tableWidget->setVisible(true);
	ui.label_5->setVisible(true);
	ui.lineEdit->setVisible(true);
	ui.pushButton_4->setVisible(true);
	//ui.tableWidget->setItem(1, 1, new QTableWidgetItem("Hello"));
}
void CPPTP1::dehistorique() {
	ui.label->setVisible(true);
	ui.label_2->setVisible(true);
	ui.label_3->setVisible(true);
	ui.label_4->setVisible(true);
	ui.pushButton->setVisible(true);
	ui.pushButton_2->setVisible(true);
	ui.pushButton_3->setVisible(true);
	ui.tableWidget->setVisible(false);
	ui.label_5->setVisible(false);
	ui.lineEdit->setVisible(false);
	ui.pushButton_4->setVisible(false);
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
void CPPTP1::tiredehisto() {
	int tab[7];
	QString tirenombre = ui.lineEdit->text();
	qDebug() << tirenombre;
	for (int i = 0; i < tirenombre.toInt(); i++) {
		qDebug() << this->dehisto->tireplusieur();
		ui.tableWidget->setItem(i, 5, new QTableWidgetItem(5));
	}
	
}

#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CPPTP1.h"
#include "dé.h"
#include "dehisto.h"
#include <QStandardItemModel>
#include <QTableView>

class CPPTP1 : public QMainWindow
{
	Q_OBJECT
	int nombrefinal = 0;

public:
    CPPTP1(QWidget *parent = Q_NULLPTR);
	

private:
    Ui::CPPTP1Class ui;
	dé *de;
	dehisto *dehisto;
	QStandardItemModel *model;

private slots:
	void affichenombre();
	void tire();
	void remise();
	void nombretotal();
	void denormal();
	void dehistorique();
	void tiredehisto();
};

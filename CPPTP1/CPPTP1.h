#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CPPTP1.h"
#include "dé.h"

class CPPTP1 : public QMainWindow
{
	Q_OBJECT
	int nombrefinal;

public:
    CPPTP1(QWidget *parent = Q_NULLPTR);
	

private:
    Ui::CPPTP1Class ui;
	dé *de;

private slots:
	void affichenombre();
	void tire();
	void remise();
	void nombretotal();
	void denormal();
	void dehisto();
};

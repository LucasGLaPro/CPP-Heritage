#pragma once
#include "dé.h"
#include <QtWidgets/QMainWindow>
#include <qDebug>

int dé::dd() {

	nombre = (rand() % 6) + 1;
	qDebug() << nombre;
	return (nombre);
}
int dé::zero() {
	nombre = 0;
	return (nombre);
}
int dé::affichenombre() {
	return (nombre);
}

dé dé::operator++(int AAAAA)
{
	qDebug() << "operateur 1";
	dd();
	return (*this);
}
void operator+=(int &n, dé &dd)
{
	qDebug() << "Opérateur '+='";
	n = dd.val;

}
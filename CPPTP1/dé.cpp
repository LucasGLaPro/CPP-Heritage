#pragma once
#include "d�.h"
#include <QtWidgets/QMainWindow>
#include <qDebug>

int d�::dd() {

	nombre = (rand() % 6) + 1;
	qDebug() << nombre;
	return (nombre);
}
int d�::zero() {
	nombre = 0;
	return (nombre);
}
int d�::affichenombre() {
	return (nombre);
}

d� d�::operator++(int AAAAA)
{
	qDebug() << "operateur 1";
	dd();
	return (*this);
}
void operator+=(int &n, d� &dd)
{
	qDebug() << "Op�rateur '+='";
	n = dd.val;

}
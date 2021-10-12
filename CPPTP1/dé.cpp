#pragma once
#include "dé.h"
#include <QtWidgets/QMainWindow>

int dé::dd() {

	nombre = (rand() % 6) + 1;
	return (nombre);

}
int dé::zero() {
	nombre = 0;
	return (nombre);
}
int dé::affichenombre() {
	return (nombre);
}

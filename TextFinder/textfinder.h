#pragma once

#include <QtWidgets/QWidget>
#include "ui_textfinder.h"

class TextFinder : public QWidget
{
	Q_OBJECT

public:
	TextFinder(QWidget *parent = Q_NULLPTR);

private slots:
	void on_findButton_clicked();

private:
	Ui::TextFinderClass ui;
	void loadTextFile();
};

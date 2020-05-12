#include "stdafx.h"
#include "textfinder.h"

TextFinder::TextFinder(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	loadTextFile();
}

void TextFinder::on_findButton_clicked()
{
	QString searchString = ui.lineEdit->text();

	ui.textEdit->find(searchString, QTextDocument::FindWholeWords);
}

void TextFinder::loadTextFile()
{
	QFile inputfile(":/Resources/input.txt");
	inputfile.open(QIODevice::ReadOnly);

	QTextStream in(&inputfile);
	QString line = in.readAll();
	inputfile.close();

	ui.textEdit->setPlainText(line);
	QTextCursor cursor = ui.textEdit->textCursor();
	cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}

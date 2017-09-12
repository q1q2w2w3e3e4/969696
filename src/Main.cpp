/*
 * Main.cpp
 *
 *  Created on: Sep 8, 2017
 *      Author: moon
 */

#include "Main.h"
#include <iostream>
using namespace std;

Main::Main() {
	this->finished_num = 0;
	this->grade = 0;
	this->right_num = 0;
	this->topic_num = 0;
	this->wrong_num = 0;
}

Main::~Main() {

}

void Main::exec(void) {
	int num;
	float x;
	float y;
	char type;
	float result;

	cout << "请输入题目数量:";
	cin >> this->topic_num;

	num = this->topic_num;
	while (num > 0) {
		//system("clear");
		show();
		srand(time(0));
		x = rand() % 100 + 1;
		y = rand() % 100 + 1;
		type = rand() % 4 + 1;
		calculate.setX(x);
		calculate.setY(y);
		calculate.setType(type);
		show_topic(type,x,y);
		cin >> result;

		calculate.setResultUser(result);
		if (calculate.calculate() == 0)
			this->right_num++;
		else
			this->wrong_num++;

		this->finished_num++;
		num--;
	}
	show_grade();
}

void Main::show(void) {
	cout << "总题数：" << this->topic_num << "\t" << this->finished_num + 1 << "/"
			<< this->topic_num << "（已做/总数）" << endl;
}

void Main::show_topic(char type,int x,int y) {
	switch (type) {
	case ADD:
		cout << x << "+" << y << "=";
		break;

	case SUB:
		cout << x << "-" << y << "=";
		break;

	case MUL:
		cout << x << "*" << y << "=";
		break;

	case DIV:
		cout << x << "/" << y << "=";
		break;

	}
}

void Main::show_grade(void)
{
	this->grade=this->right_num*2;
	cout<<"正确数量："<<this->right_num<<"\t总数:"<<this->topic_num<<"\t得分:"<<this->grade<<endl;
}

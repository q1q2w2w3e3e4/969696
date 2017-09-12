/*
 * Main.h
 *
 *  Created on: Sep 8, 2017
 *      Author: moon
 */

#ifndef MAIN_H_
#define MAIN_H_
#include "Calculate.h"

class Main {
public:
	Main();
	virtual ~Main();

private:
	int topic_num;//总题数量
	int finished_num;//完成的数量
	int right_num;//做对的数量
	int wrong_num;//错误的数量
	int grade;//得分
	Calculate calculate;
private:
	void show(void);
	void show_topic(char type,int x,int y);
	void show_grade(void);
public:
	void exec(void);//开始执行

};

#endif /* MAIN_H_ */

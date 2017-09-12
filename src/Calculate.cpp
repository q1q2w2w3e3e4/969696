/*
 * Calculate.cpp
 *
 *  Created on: Sep 8, 2017
 *      Author: moon
 */

#include "Calculate.h"
#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
using namespace std;

Calculate::Calculate() {
	this->result_true = 0;
	this->result_user = 0;
	this->type = 0;
	this->x = 0;
	this->y = 0;
}

Calculate::~Calculate() {
}

int Calculate::calculate(void) {
	int ret;

	switch (this->type) {
	case ADD:
		result_true = x + y;
		if (result_user == result_true)
			ret = 0;
		else
			ret = -1;
		break;

	case SUB:
		result_true = x - y;
		if (result_user == result_true)
			ret = 0;
		else
			ret = -1;
		break;

	case MUL:
		result_true = x * y;
		if (result_user == result_true)
			ret = 0;
		else
			ret = -1;
		break;

	case DIV:
		result_true = x / y;
		if ((result_user - result_true)<0.01||(result_true-result_user)<0.01)
			ret = 0;
		else
			ret = -1;
		break;

	default:
		cout << "该版本只支持四则运算！" << endl;
		ret = -2;
		break;
	}
	cout<<"正确答案:"<< setprecision(2)<<result_true;
	if(ret==0)
		cout<<"\t正确"<<endl<<endl;
	else if(ret==-1)
		cout<<"\t错误"<<endl<<endl;
	return ret;
}


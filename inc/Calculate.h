/*
 * Calculate.h
 *
 *  Created on: Sep 8, 2017
 *      Author: moon
 */

#ifndef CALCULATE_H_
#define CALCULATE_H_
#define ADD 1 //加
#define SUB 2 //减
#define MUL 3 //乘
#define DIV 4 //除

class Calculate {
public:
	Calculate();
	virtual ~Calculate();
private:
	float x; //四则运算的变量x
	float y; //四则运算的变量y
	float result_true; //四则运算的正确结果
	float result_user;//四则运算用户输入的结果
	char type; //四则运算的类型（+(1)，-(2)，*(3)，/(4)）

public:
	/**
	 * 作用：验证学生输入的结果的正确性
	 * 返回：0正确，-1错误,-2运算类型错误
	 */
	int calculate(void);//开始计算

	int getResultTrue(void) const {
		return result_true;
	}

	void setResultTrue(int resultTrue) {
		result_true = resultTrue;
	}

	int getResultUser(void) const {
		return result_user;
	}

	void setResultUser(int resultUser) {
		result_user = resultUser;
	}

	char getType(void) const {
		return type;
	}

	void setType(char type) {
		this->type = type;
	}

	int getX(void) const {
		return x;
	}

	void setX(int x) {
		this->x = x;
	}

	int getY(void) const {
		return y;
	}

	void setY(int y) {
		this->y = y;
	}
};

#endif /* CALCULATE_H_ */

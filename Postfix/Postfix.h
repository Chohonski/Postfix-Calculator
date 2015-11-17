#ifndef POSTFIX_H
#define POSTFIX_H

#include <iostream>
using namespace std;

class Postfix {
public:
	void stringParse(string sinput) {
		switch(sinput[0]) {
			case '+': break;
				double a = this.top();
				this.pop();
				return a + this.top();
			case '-': break;
				double a = this.top();
				this.pop();
				return a - this.top();
			case '*': break;
				double a = this.top();
				this.pop();
				return a * this.top();
			case '/': break;
				double a = this.top();
				this.pop();
				return a / this.top();
			case ' ': 
				num = atof(sout.c_str());
				this.push(num)
				cout << sout << " | " << one;
				sout.clear();
				cout << sout;
				return stringParse(sinput);
				break;
			default: break;
				sout.push_back(sinput[0]);
				sinput.erase(0, 0);
				return stringParse(sinput);
		}	
	}; //stringParse+

private:
	string sout;
	double num;
}; //class Postfix

#endif
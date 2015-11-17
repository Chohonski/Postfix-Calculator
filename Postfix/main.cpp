#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

double stringParse(stack<double> st, string sinput);

int main() {
	string input = "";
	stack<double> st;
	cout << "Enter a postfix notation expression.\n(Two numbers followed by a math operator)\n";
	getline(cin, input);
	cout << "\nAnswer: " << stringParse(st, input);

	//Termination Sequence
	char c;
	cout << "\nEnter c to continue: ";
	cin >> c;

	return EXIT_SUCCESS;
}

double stringParse(stack<double> st, string sinput) {
	double num, a, b;
	string sout;
	while(!sinput.empty()) {
		cout << "\n (" << sinput[0] << ") ";
	switch(sinput[0]) {
		case '+':
			if(st.size() < 1)
				a = 0;
			else {
				a = st.top();
				st.pop(); }
			if(st.size() < 1)
				b = 0;
			else {
				b = st.top();
				st.pop(); }
			a += b;
			st.push(a);
			cout << st.top();
			sinput.erase(0, 1);
			break;
		case '-':
			if(st.size() < 1)
				a = 0;
			else {
				a = st.top();
				st.pop(); }
			if(st.size() < 1)
				b = 0;
			else {
				b = st.top();
				st.pop(); }
			b -= a;
			st.push(b);
			cout << st.top();
			sinput.erase(0, 1);
			break;
		case '*':
			if(st.size() < 1)
				a = 0;
			else {
				a = st.top();
				st.pop(); }
			if(st.size() < 1)
				b = 0;
			else {
				b = st.top();
				st.pop(); }
			a *= b;
			st.push(a);
			cout << st.top();
			sinput.erase(0, 1);
			break;
		case '/':
			if(st.size() < 1)
				a = 0;
			else {
				a = st.top();
				st.pop(); }
			if(st.size() < 1)
				b = 0;
			else {
				b = st.top();
				st.pop(); }
			b /= a;
			st.push(b);
			cout << st.top();
			sinput.erase(0, 1);
			break;
		case ' ': 
			num = atof(sout.c_str());
			st.push(num);
			cout << sout << " output | num " << num << "(Stack: " << st.top() << ")";
			sout.clear();
			break;
		default:
			sout.push_back(sinput[0]);
			cout << sout << " output | input " << sinput;
			break;
	} //switch(sinput)
	sinput.erase(0, 1);
	} //while(!sinput.empty())
	return st.top();
} //parseString()
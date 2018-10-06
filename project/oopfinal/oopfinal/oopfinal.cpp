#include <iostream>
#include <cstdlib>
#include <thread>
#include <ctime>
using namespace std;
char CHAR[51] = { "金木水火土將士象車馬炮卒天地玄黃宇宙洪荒我好想睡覺"};

bool start = 0;
int lost_C = 0;
int score = 0;
char answer[3];


class character {
public:
	character() {
		reset_D();
		set_C();
	}
	virtual void reset_D() {
		distence_G = 20;
	}
	virtual void set_D() {
		distence_G--;
		if (distence_G == 0) {
			lost_C++;
			set_C();
			reset_D();
		}
	}
	virtual int get_D() {
		return distence_G;
	}
	virtual char get_F_C() {
		return a[0];
	}
	virtual char get_S_C() {
		return a[1];
	}
	virtual void set_C() {
		srand((unsigned)time(NULL));
		int site = rand() % 25;
		a[0] = CHAR[site * 2];
		a[1] = CHAR[(site * 2) + 1];
	}
private:
	int distence_G;
	char a[3];
};
class c1 :public character {
public:
	c1() {
		reset_D();
		set_C();
	}
	virtual void reset_D() {
		distence_G = 20;
	}
	virtual void set_D() {
		distence_G--;
		if (distence_G == 0) {
			lost_C++;
			set_C();
			reset_D();
		}
	}
	virtual int get_D() {
		return distence_G;
	}
	virtual char get_F_C() {
		return a[0];
	}
	virtual char get_S_C() {
		return a[1];
	}
	virtual void set_C() {
		srand((unsigned)time(NULL));
		int site = rand() % 25;
		a[0] = CHAR[site * 2];
		a[1] = CHAR[(site * 2) + 1];
	}
private:
	int distence_G;
	char a[3];
};
class c2 :public character {
public:
	c2() {
		reset_D();
		set_C();
	}
	virtual void reset_D() {
		distence_G = 20;
	}
	virtual void set_D() {
		distence_G--;
		if (distence_G == 0) {
			lost_C++;
			set_C();
			reset_D();
		}
	}
	virtual int get_D() {
		return distence_G;
	}
	virtual char get_F_C() {
		return a[0];
	}
	virtual char get_S_C() {
		return a[1];
	}
	virtual void set_C() {
		srand((unsigned)time(NULL));
		int site = rand() % 25;
		a[0] = CHAR[site * 2];
		a[1] = CHAR[(site * 2) + 1];
	}
private:
	int distence_G;
	char a[3];
};


void space_change(character &c1,character &c2) {
	while (start) {
		for (int i = 0; i < 10000; i++)
			for (int i = 0; i < 10000; i++);
		c1.set_D();
		c2.set_D();
	}
}
void input(character &c) {
	if (answer[0] == c.get_F_C() && answer[1] == c.get_S_C()) {
		c.set_C();
		c.reset_D();
		score++;
	}
}
void out(character &c1, character &c2) {
	while (start) {
		char temp[3];
		cout << '|';
		for (int i = 0; i < c1.get_D(); i++)
			cout << ' ';
		temp[0] = c1.get_F_C();
		temp[1] = c1.get_S_C();
		temp[2] = '\0';
		cout << temp << endl;
		cout << '|';
		for (int i = 0; i < c1.get_D(); i++)
			cout << ' ';
		temp[0] = c2.get_F_C();
		temp[1] = c2.get_S_C();
		temp[2] = '\0';
		cout << temp << endl;
		cout << "\n\nScore:" << score
			<< "\nLost:" << lost_C;
		system("CLS");
	}
}


int main() {
	character c;
	c1 c1;
	c2 c2;
	cout << "歡迎來到打字練習\n"
		<< "輸入1開始遊戲" << endl;
	cin >> start;

	if (start) {
		cout << "請準備好你的輸入法" << endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 10000000; j++) {};
			cout << (i + 1);
		}
	}
	
	while (start) {
		thread down(space_change,ref(c1), ref(c2));
		thread print(out,ref(c1), ref(c2));
		while (start) {
			cin >> answer;
			input(c1);
			input(c2);
			
			if (score >= 10) {
				cout << "you win!輸入任意文字結束" << endl;
				start = 0;
			}
			else if (lost_C >= 2) {
				cout << "you lost!輸入任意文字結束" << endl;
				start = 0;
			}
		}
		down.join();
		print.join();
	}
}
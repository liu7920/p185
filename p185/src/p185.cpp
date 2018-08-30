#include <iostream>
using namespace std;

#include "member.h"

int main() {

	member *m = new member;

	int i;

	while(1){
		cout << "1.가입 2.로그인 3.종료" << endl;
		cout << "입력 : " ;
		cin >> i;
		if(i==1){
			cout << ">>가입<<" << endl;
			m->join();
		}
		else if(i==2){
			cout << ">>로그인<<" << endl;
			m->login();
		}
		else if(i==3){
			cout << ">>종료<<" << endl;
			break;
		}
		else{
			cout << "잘 못된 입력" << endl;
		}
	}

	return 0;
}

//영소대 특문

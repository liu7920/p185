#include <iostream>
using namespace std;

#include "member.h"

member::member() {
	count = 0;
}

member::~member() {
}

void member::join(){

	int o=0;

	while(1){
		cout << "아이디 입력 : ";
		cin >> ID;
		if(ID.length() >= 5){
			if((ID[0] >= 'A' && ID[0] <= 'Z') || (ID[0] >= 'a' && ID[0] <= 'z')){
					for(int i=1; i<ID.length(); i++){
						if(ID[i] == ID[i-1]){
							cout << ">>연속된 글자 사용 불가<<" << endl;
							o=1;
							break;
						}
					}

					if(o==0){
						cout << ">>아이디 입력 완료<<" << endl;
						break;
					}
			}
			else{
				cout << ">>아이디 첫글자는 영문자<<" << endl;
			}
		}
		else{
			cout << ">>아이디는 5글자 이상<<" << endl;
		}
	}

	while(1){
		cout << "비밀번호 입력 : ";
		cin >> PASS;
		o=0;
		for(int i=0; i<PASS.length(); i++){
			if(PASS[i] >= 'A' && PASS[i] <= 'Z'){
				o=1;
				break;
			}
		}
		if(o==1){
			o=0;
			for(int i=0; i<PASS.length(); i++){
				if(PASS[i] >= 'a' && PASS[i] <= 'z'){
					o=1;
					break;
				}
			}

			if(o==1){
				o=0;
				for(int i=0; i<PASS.length(); i++){
					if(PASS[i] >= '0' && PASS[i] <= '9'){
						o=1;
						break;
					}
				}

				if(o==1){
					for(int i=0; i<PASS.length(); i++){
						if((PASS[i] >= '!' && PASS[i] <= '/') || (PASS[i] >= ':' && PASS[i] <= '@') || (PASS[i] >= '{' && PASS[i] <= '~')){
							o=1;
							break;
						}
					}
					if(o==1){
						cout << ">>비밀번호 입력 완료<<" << endl;
						break;
					}
					else{
						cout << ">>비밀번호에 특수문자를 포함<<" << endl;
					}
				}
				else{
					cout << ">>비밀번호에 숫자를 포함<<" << endl;
				}
			}
			else{
				cout << ">>비밀번호에 소문자를 포함<<" << endl;
			}
		}
		else{
			cout << ">>비밀번호에 대문자를 포함<<" << endl;
		}
	}

	cout << "이름 입력 : ";
	cin >> name;

	count = 0;
}

void member::login(){
	string id;
	string pass;

	cout << "아이디 입력 : ";
	cin >> id;

	if(ID != id){
		cout << ">>아이디 틀림<<" << endl;
		return ;
	}

	cout << "비리번호 입력 : ";
	cin >> pass;

	if(PASS != pass){
		cout << ">>비밀번호 틀림<<" << endl;
		return ;
	}

	if(count == 0){
		cout << ">>첫번째 로그인 성공<<" << endl;
		count++;
	}
	else{
		cout << ">>로그인 성공<<" << endl;
	}
	cout << "ID : " << ID << endl;
	cout << "이름 : " << name << endl;

}

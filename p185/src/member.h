#ifndef MEMBER_H_
#define MEMBER_H_

class member {
private:
	string ID;
	string PASS;
	string name;
	int count;
public:
	member();
	virtual ~member();

	void join();
	void login();
};

#endif /* MEMBER_H_ */

//아이디 비번 회원명 string 로그인 횟수 int]

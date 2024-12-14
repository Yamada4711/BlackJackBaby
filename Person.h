#pragma once

class Shoe;

class Person
{
private:
	int _hand[16];	// ��D���;
	int _cardNum;	// ��D�̖���

	char* _pName;	// ���O

public:
	Person(const char* pName);
	virtual ~Person();

	void hit(Shoe* shoe);	// �V���[����P���Ђ�

	void showHand();	// ��D��\��

	int calcScore();	// �X�R�A���v�Z���ĕԂ�

	const char* getName() const;

	virtual bool play(Shoe* pShoe) = 0;

	bool judgeResult(Shoe* pShoe);
};

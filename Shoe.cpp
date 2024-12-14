#include <iostream>
#include "Shoe.h"

using namespace std;

// �R���X�g���N�^
Shoe::Shoe()
{
	_cardNum = CARD_NUM;	//�J�[�h����������
	// �J�[�h������
	for (int i = 0; i < CARD_NUM; i++)
	{
		_cardShoe[i] = i;
	}

	_shuffle();	// �V���b�t������
}

Shoe::~Shoe()
{

}

//�V���b�t���i�t�B�b�V���[�C�F�[�c�j
void Shoe::_shuffle()
{
	for (int i = _cardNum; i > 1; --i) {
		int a = i - 1;
		int b = rand() % i;
		swap(_cardShoe[a], _cardShoe[b]);
	}
}

// �J�[�h���Ȃ��ꍇ��-1��Ԃ��܂��B
int Shoe::takeCard()
{
	// ��납������Ă��������W�b�N�I�Ɋy���񂩂ƁB
	if (_cardNum <= 0) return -1;
	_cardNum--;
	int card = _cardShoe[_cardNum];
	_cardShoe[_cardNum] = -1;	// �O�̂��߂���Ƃ��i�f�o�b�O�p�j

	return card;
}
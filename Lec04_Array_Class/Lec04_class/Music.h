#pragma once
//�Է� ��� ���� ���̺귯��
#include <iostream>
//���ڿ�
#include<string>
//STL vector
#include<vector>

//Namespcae
using namespace std;

class Music {
private:
	string title;
	string artist;
	string album;
	int year;

public:
	//������
	Music(string title, string artist, string album, int year) {
		this->title = title;
		this->artist = artist;
		this->album = album;
		this->year = year;
		
	}

};

class MusicStreamingService {

};
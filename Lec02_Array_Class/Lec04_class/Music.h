#pragma once
//입력 출력 관련 라이브러리
#include <iostream>
//문자열
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
	//생성자
	Music(string title, string artist, string album, int year) {
		this->title = title;
		this->artist = artist;
		this->album = album;
		this->year = year;
		
	}

};

class MusicStreamingService {

};
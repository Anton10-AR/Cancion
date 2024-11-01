#include <iostream>
using namespace std;

#include <string>
#pragma once

class Song
{
private:
	int tmin;
	int tsec;

public:
	std::string name;

	Song();

	Song(std::string n, int m, int s);

	int toSec();

	bool hasTheSameTime(Song s);

	friend bool operator==(const Song& c1, const Song& c2);
	friend bool operator<(const Song& c1, const Song& c2);

	void print();
};


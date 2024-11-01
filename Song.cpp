#include "Song.h"
#include <iostream>

Song::Song()
{
	name = "Cancion X";
	tmin = 0;
	tsec = 0;
}

Song::Song(string n, int m, int s)
{
	name = n;
	tmin = m;
	tsec = s;
}

int Song::toSec()
{
	int sec = tmin * 60 + tsec;
	return sec;
}

bool Song::hasTheSameTime(Song s)
{
	return toSec() == s.toSec();
}

void Song::print()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Time: " << tmin << ":" << tsec << std::endl;
}

bool operator==(const Song& c1, const Song& c2)
{
	return c1.name == c2.name && c1.tmin == c2.tmin && c1.tsec == c2.tsec;
}

bool operator<(const Song& c1, const Song& c2)
{
	return c1.tmin < c2.tmin;
}

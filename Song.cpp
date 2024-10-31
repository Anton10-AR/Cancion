#include "Song.h"

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

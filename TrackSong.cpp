#include "TrackSong.h"
#include "Song.h"

TrackSong::TrackSong()
{
	playMin = playSec = 0;
	rating = 0;
}

TrackSong::TrackSong(int pm, int ps, int r)
{
	playMin = pm;
	playSec = ps;
	rating = r;
}

float TrackSong::getRatingPercent(Song s)
{	
	int tdT = s.toSec();
	int trackTimeS = playMin * 60 + playSec;
	return trackTimeS * 100 / tdT;
}

int TrackSong::getRating()
{
	return rating;
}

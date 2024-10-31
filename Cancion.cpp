#include <iostream>
#include "Song.h"
#include "Tracker.h"

int main()
{
    Song s1("Fiesta", 3, 30);
    Song s2("Cancion B", 4, 30);
    Song s3("Cancion C", 4, 30);

    Tracker t1;
    t1.setSong(s1);
    t1.AddHistorical(TrackSong(1, 30, 3));
    t1.AddHistorical(TrackSong(3, 30, 5));
    t1.AddHistorical(TrackSong(3, 0, 4));
    t1.AddHistorical(TrackSong(3, 30, 4));

    float np = t1.getNumberSongPlayed(80);
    float rate = t1.getBestRating();
    std::cout << "Numero de Reproducciones Validas: " << np << std::endl;
    std::cout << "Rating promedio: " << rate << " ";

    std::cout << "\nHistorias mostradas en estrellas mas el rating promedio: " << std::endl;
    t1.printStars();

    std::cout << "\nHistorias que tienen el mismo rating:" << std::endl;
    t1.printHistoricalWithRate(4); // introducir aqui el rating a comparar

    std::cout << "\nProgreso de reproduccion de cada historia: " << std::endl;
    t1.printBarPercent(); // imprime progreso segun % reproducido
}
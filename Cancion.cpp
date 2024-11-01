#include <iostream>
#include "Song.h"
#include "Tracker.h"
#include <list>

bool compareByName(const Song& s1, const Song& s2) {
    return s1.name < s2.name;
}

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
    std::cout << std::endl;

    Song ss1("Fernandita", 7, 30), ss2("Alejandrita", 7, 40);
    Song ss3("Cancion de la Alegria", 4, 20), ss4("La Tristeza", 5, 0);
    Song ss5("Soledad", 3, 20), ss6("Mi amor", 5, 30);

    if (ss1 < ss2) {
        std::cout << ss1.name << " dura mas que " << ss2.name << std::endl;
    }
    else {
        std::cout << ss2.name << " dura mas que " << ss1.name << std::endl;
    }
    std::cout << std::endl;

    std::list<Song> listaCanciones;
    listaCanciones.push_back(ss1);
    listaCanciones.push_back(ss2);
    listaCanciones.push_back(ss3);
    listaCanciones.push_back(ss4);
    listaCanciones.push_back(ss5);
    listaCanciones.push_back(ss6);

    for (Song s : listaCanciones) {
        s.print();
    }
    std::cout << std::endl;

    // canciones ordenadas por el nombre
    listaCanciones.sort(compareByName); // ordena los objetos en funcion al operador sobreescrito
    for (Song s : listaCanciones) {
        s.print();
    }
    std::cout << std::endl;

    // canciones ordenadas por el tiempo
    listaCanciones.sort(); // ordena los objetos en funcion al operador sobreescrito
    for (Song s : listaCanciones) {
        s.print();
    }
    std::cout << std::endl;

    // crea una lista de Trackers
    // determina el Tracker que tiene más historia
    // determina el Tracker que tiene menos historias
}
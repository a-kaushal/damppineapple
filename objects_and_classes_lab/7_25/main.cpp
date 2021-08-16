/* 
7.25 LAB: Artwork label (classes/constructors)

Given main(), complete the Artist class (in files Artist.h and Artist.cpp) with constructors to initialize an artist's information, get member functions, and a PrintInfo() member function. The default constructor should initialize the artist's name to "None" and the years of birth and death to 0. PrintInfo() should display Artist Name, born XXXX if the year of death is -1 or Artist Name (XXXX-YYYY) otherwise.

Complete the Artwork class (in files Artwork.h and Artwork.cpp) with constructors to initialize an artwork's information, get member functions, and a PrintInfo() member function. The constructor should by default initialize the title to "None", the year created to 0. Declare a private field of type Artist in the Artwork class.

Ex. If the input is:

Pablo Picasso
1881
1973
Three Musicians
1921

the output is:

Artist: Pablo Picasso (1881-1973)
Title: Three Musicians, 1921

If the input is:

Brice Marden
1938
-1
Distant Muses
2000

the output is:

Artist: Brice Marden, born 1938
Title: Distant Muses, 2000

 */

#include "Artist.h"
#include "Artwork.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char* argv[]) {
   string userTitle, userArtistName;
   int yearCreated, userBirthYear, userDeathYear;

   getline(cin, userArtistName);
   cin >> userBirthYear;
   cin.ignore();
   cin >> userDeathYear;
   cin.ignore();
   getline(cin, userTitle);
   cin >> yearCreated;
   cin.ignore();

   Artist userArtist =  Artist(userArtistName, userBirthYear, userDeathYear);

   Artwork newArtwork = Artwork(userTitle, yearCreated, userArtist);

   newArtwork.PrintInfo();
}
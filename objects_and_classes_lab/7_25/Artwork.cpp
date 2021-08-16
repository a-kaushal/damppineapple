#include "Artwork.h"
#include "Artist.h"
#include <iostream>

Artwork::Artwork() : title("None"), yearCreated(0), artist() {
}

Artwork::Artwork(string userTitle, int yearCreated, Artist userArtist) {
   title = userTitle;
   this->yearCreated = yearCreated;
   artist = userArtist;
}

string Artwork::GetTitle() const {
   return title;
}

int Artwork::GetYearCreated() const {
   return yearCreated;
}

void Artwork::PrintInfo() const {
   artist.PrintInfo();
   cout << "Title: " << title << ", " << yearCreated;
}
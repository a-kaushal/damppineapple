#include "Encyclopedia.h"
#include <iostream>

// Define functions declared in Encyclopedia.h

void Encyclopedia::SetEdition(string edition) {
   this->edition = edition;
}

void Encyclopedia::SetNumVolumes(int numVolumes) {
   this->numVolumes = numVolumes;
}

string Encyclopedia::GetEdition() {
   return edition;
}

int Encyclopedia::GetNumVolumes() {
   return numVolumes;
}

void Encyclopedia::PrintInfo() {
   Book::PrintInfo();
   cout << "   Edition: " << edition << endl;
   cout << "   Number of Volumes: " << numVolumes << endl;
}
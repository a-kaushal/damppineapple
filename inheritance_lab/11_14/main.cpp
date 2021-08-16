/* 
11.14 LAB: Book information (overriding member functions)

Given main() and a base Book class, define a derived class called Encyclopedia. Within the derived Encyclopedia class, define a PrintInfo() function that overrides the Book class' PrintInfo() function by printing not only the title, author, publisher, and publication date, but also the edition and number of volumes.

Ex. If the input is:

The Hobbit
J. R. R. Tolkien
George Allen & Unwin
21 September 1937
The Illustrated Encyclopedia of the Universe
James W. Guthrie
Watson-Guptill
2001
2nd
1

the output is:

Book Information:
   Book Title: The Hobbit
   Author: J. R. R. Tolkien
   Publisher: George Allen & Unwin
   Publication Date: 21 September 1937
Book Information:
   Book Title: The Illustrated Encyclopedia of the Universe
   Author: James W. Guthrie
   Publisher: Watson-Guptill
   Publication Date: 2001
   Edition: 2nd
   Number of Volumes: 1
 */

#include "Book.h"
#include "Encyclopedia.h"
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
   Book myBook;
   Encyclopedia myEncyclopedia;

   string title, author, publisher, publicationDate;
   string eTitle, eAuthor, ePublisher, ePublicationDate, edition;
   int numVolumes;

   getline(cin, title);
   getline(cin, author);
   getline(cin, publisher);
   getline(cin, publicationDate);

   getline(cin, eTitle);
   getline(cin, eAuthor);
   getline(cin, ePublisher);
   getline(cin, ePublicationDate);
   getline(cin, edition);
   cin >> numVolumes;

   myBook.SetTitle(title);
   myBook.SetAuthor(author);
   myBook.SetPublisher(publisher);
   myBook.SetPublicationDate(publicationDate);
   myBook.PrintInfo();

   myEncyclopedia.SetTitle(eTitle);
   myEncyclopedia.SetAuthor(eAuthor);
   myEncyclopedia.SetPublisher(ePublisher);
   myEncyclopedia.SetPublicationDate(ePublicationDate);
   myEncyclopedia.SetEdition(edition);
   myEncyclopedia.SetNumVolumes(numVolumes);
   myEncyclopedia.PrintInfo();

   return 0;
 }
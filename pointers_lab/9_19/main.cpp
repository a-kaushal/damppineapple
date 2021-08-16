/* 

9.19 LAB*: Program: Playlist

You will be building a linked list. Make sure to keep track of both the head and tail nodes.

(1) Create three files to submit.

    PlaylistNode.h - Class declaration
    PlaylistNode.cpp - Class definition
    main.cpp - main() function

Build the PlaylistNode class per the following specifications. Note: Some functions can initially be function stubs (empty functions), to be completed in later steps.

    Default constructor (1 pt)
    Parameterized constructor (1 pt)
    Public member functions
        InsertAfter() - Mutator (1 pt)
        SetNext() - Mutator (1 pt)
        GetID() - Accessor
        GetSongName() - Accessor
        GetArtistName() - Accessor
        GetSongLength() - Accessor
        GetNext() - Accessor
        PrintPlaylistNode()
    Private data members
        string uniqueID - Initialized to "none" in default constructor
        string songName - Initialized to "none" in default constructor
        string artistName - Initialized to "none" in default constructor
        int songLength - Initialized to 0 in default constructor
        PlaylistNode* nextNodePtr - Initialized to 0 in default constructor

Ex. of PrintPlaylistNode output:

Unique ID: S123
Song Name: Peg
Artist Name: Steely Dan
Song Length (in seconds): 237

(2) In main(), prompt the user for the title of the playlist. (1 pt)

Ex:

Enter playlist's title:
JAMZ 


(3) Implement the PrintMenu() function. PrintMenu() takes the playlist title as a parameter and outputs a menu of options to manipulate the playlist. (1 pt)

Ex:

JAMZ PLAYLIST MENU
a - Add song
d - Remove song
c - Change position of song
s - Output songs by specific artist
t - Output total time of playlist (in seconds)
o - Output full playlist
q - Quit


(4) Implement the ExecuteMenu() function that takes 3 parameters: a character representing the user's choice, a playlist title, and the pointer to the head node of a playlist. ExecuteMenu() performs the menu options (described below) according to the user's choice, and returns the pointer to the head node of the playlist.(1 pt)


(5) In main(), call PrintMenu() and prompt for the user's choice of menu options. Each option is represented by a single character.

If an invalid character is entered, continue to prompt for a valid choice. When a valid option is entered, execute the option by calling ExecuteMenu() and overwrite the pointer to the head node of the playlist with the returned pointer. Then, print the menu, and prompt for a new option. Continue until the user enters 'q'. Hint: Implement Quit before implementing other options. (1 pt)

Ex:

JAMZ PLAYLIST MENU
a - Add song
d - Remove song
c - Change position of song
s - Output songs by specific artist
t - Output total time of playlist (in seconds)
o - Output full playlist
q - Quit

Choose an option:


(6) Implement "Output full playlist" menu option in ExecuteMenu(). If the list is empty, output: Playlist is empty (3 pts)

Ex:

JAMZ - OUTPUT FULL PLAYLIST
1.
Unique ID: SD123
Song Name: Peg
Artist Name: Steely Dan
Song Length (in seconds): 237

2.
Unique ID: JJ234
Song Name: All For You
Artist Name: Janet Jackson
Song Length (in seconds): 391

3.
Unique ID: J345
Song Name: Canned Heat
Artist Name: Jamiroquai
Song Length (in seconds): 330

4.
Unique ID: JJ456
Song Name: Black Eagle
Artist Name: Janet Jackson
Song Length (in seconds): 197

5. 
Unique ID: SD567
Song Name: I Got The News
Artist Name: Steely Dan
Song Length (in seconds): 306


(7) Implement the "Add song" menu option in ExecuteMenu(). New additions are added to the end of the list. (2 pts)

Ex:

ADD SONG
Enter song's unique ID:
SD123
Enter song's name:
Peg
Enter artist's name:
Steely Dan
Enter song's length (in seconds):
237


(8) Implement the "Remove song" menu option in ExecuteMenu(). Prompt the user for the unique ID of the song to be removed.(4 pts)

Ex:

REMOVE SONG
Enter song's unique ID:
JJ234
"All For You" removed.


(9) Implement the "Change position of song" menu option in ExecuteMenu(). Prompt the user for the current position of the song and the desired new position. Valid new positions are 1 - n (the number of nodes). If the user enters a new position that is less than 1, move the node to the position 1 (the head). If the user enters a new position greater than n, move the node to position n (the tail). 6 cases will be tested:

    Moving the head node (1 pt)
    Moving the tail node (1 pt)
    Moving a node to the head (1 pt)
    Moving a node to the tail (1 pt)
    Moving a node up the list (1 pt)
    Moving a node down the list (1 pt)

Ex:

CHANGE POSITION OF SONG
Enter song's current position:
3
Enter new position for song:
2
"Canned Heat" moved to position 2


(10) Implement the "Output songs by specific artist" menu option in ExecuteMenu(). Prompt the user for the artist's name, and output the node's information, starting with the node's current position. (2 pt)

Ex:

OUTPUT SONGS BY SPECIFIC ARTIST
Enter artist's name:
Janet Jackson

2.
Unique ID: JJ234
Song Name: All For You
Artist Name: Janet Jackson
Song Length (in seconds): 391

4.
Unique ID: JJ456
Song Name: Black Eagle
Artist Name: Janet Jackson
Song Length (in seconds): 197


(11) Implement the "Output total time of playlist" menu option in ExecuteMenu(). Output the sum of the time of the playlist's songs (in seconds). (2 pts)

Ex:

OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)
Total time: 1461 seconds
*/

#include "PlaylistNode.h"
#include <iostream>
#include <string>
using namespace std;

void PrintMenu(string playlistTitle) {
    cout << playlistTitle << " PLAYLIST MENU" << endl;
    cout << "a - Add song" << endl;
    cout << "d - Remove song" << endl;
    cout << "c - Change position of song" << endl;
    cout << "s - Output songs by specific artist" << endl;
    cout << "t - Output total time of playlist (in seconds)" << endl;
    cout << "o - Output full playlist" << endl;
    cout << "q - Quit" << endl << endl;
}

void ExecuteMenu(char userChoice, string playlistTitle, PlaylistNode* headNode) {
    PlaylistNode* prevNode;
    PlaylistNode* currNode;
    PlaylistNode* tempNode;
    PlaylistNode* node1;
    PlaylistNode* node2;
    PlaylistNode* nodePrev1;
    PlaylistNode* nodePrev2;

    string uniqueID;
    string songName;
    string artistName;
    int songLength;
    int index;
    int currPos;
    int newPos;
    int count;

    if (userChoice == 'q') {
        return;
    }

    else if (userChoice == 'a') {

        cout << "ADD SONG" << endl;
        cout << "Enter song's unique ID:" << endl;
        cin >> uniqueID;
        cin.ignore();
        cout << "Enter song's name:" << endl;
        getline(cin, songName);
        cout << "Enter artist's name:" << endl;
        getline(cin, artistName);
        cout << "Enter song's length (in seconds):" << endl << endl;
        cin >> songLength;

        currNode = new PlaylistNode(uniqueID, songName, artistName, songLength);
        if (headNode->GetNext()) {
            prevNode = headNode->GetNext();
        }
        else {
            prevNode = headNode;
        }
        while (prevNode->GetNext()) {
            cout << "a";
            if (prevNode->GetNext()) {
                prevNode = prevNode->GetNext();
            }
        }
        prevNode->InsertAfter(currNode);
    }

    else if (userChoice == 'd') {
        cout << "REMOVE SONG" << endl;
        cout << "Enter song's unique ID:" << endl;
        cin >> uniqueID;

        prevNode = headNode;
        currNode = headNode->GetNext();
        while (currNode) {
            if (currNode->GetID() == uniqueID) {
                cout << "\"" << currNode->GetSongName() << "\"" << " removed." << endl << endl;
                tempNode = prevNode->GetNext();
                prevNode->SetNext(currNode->GetNext());
                delete tempNode;
                break;
            }
            prevNode = currNode;
            currNode = currNode->GetNext();
        }
    }

    else if (userChoice == 'c') {
        cout << "CHANGE POSITION OF SONG" << endl;
        cout << "Enter song's current position:" << endl;
        cin >> currPos;
        cout << "Enter new position for song:" << endl;
        cin >> newPos; 
        
        prevNode = headNode;
        currNode = headNode->GetNext();
        count = 0;
        while (currNode) {
            currNode = currNode->GetNext();
            ++count;
        }

        if (newPos >= count) {
            newPos = count;
        }
        else if (newPos <= 1) {
            newPos = 1;
        }

        prevNode = headNode;
        currNode = headNode->GetNext();
        index = 1;
        while (currNode) {
            if (index == currPos) {
                node1 = currNode;
                nodePrev1 = prevNode;
            }
            if (index == newPos) {
                node2 = currNode;
                nodePrev2 = prevNode;
            }
            prevNode = currNode;
            currNode = currNode->GetNext();
            ++index;
        }
        
        if ((currPos - newPos) > 0) {
            nodePrev1->SetNext(node1->GetNext());
            nodePrev2->SetNext(node1);
            node1->SetNext(node2);
        }
        else {
            nodePrev1->SetNext(node1->GetNext());
            node1->SetNext(node2->GetNext());
            node2->SetNext(node1);
        }

        cout << "\"" << node1->GetSongName() << "\"" << " moved to position " << newPos << endl << endl;
    }

    else if (userChoice == 's') {
        cout << "OUTPUT SONGS BY SPECIFIC ARTIST" << endl;
        cout << "Enter artist's name:" << endl;
        cin.ignore();
        getline(cin, artistName);

        currNode = headNode->GetNext();
        count = 1;
        while (currNode) {
            if (currNode->GetArtistName() == artistName) {
                cout << endl;
                cout << count << "." << endl;
                currNode->PrintPlaylistNode();
            }
            currNode = currNode->GetNext();
            ++count;
        }
        cout << endl;
    }

    else if (userChoice == 't') {
        cout << "OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)" << endl;

        currNode = headNode->GetNext();
        count = 0;
        while (currNode) {
            count = count + currNode->GetSongLength();
            currNode = currNode->GetNext();
        }
        cout << "Total time: " << count << " seconds" << endl << endl;
    }

    else if (userChoice == 'o') {
        cout << playlistTitle << " - OUTPUT FULL PLAYLIST" << endl;
        prevNode = headNode->GetNext();
        index = 1;

        if (headNode->GetNext() == nullptr) {
            cout << "Playlist is empty" << endl << endl;
        }
        else {
            while (prevNode) {
                cout << index << "." << endl;
                prevNode->PrintPlaylistNode();
                prevNode = prevNode->GetNext();
                cout << endl;
                ++index;
            }
        } 
    }
}

int main() {
    PlaylistNode* headNode;

    string playlistTitle;
    char userChoice;

    headNode = new PlaylistNode();

    cout << "Enter playlist's title:" << endl << endl;
    getline(cin, playlistTitle);
    ExecuteMenu('o', "JAMZ", headNode);
    return 0;
    userChoice = ' ';
    while (userChoice != 'q') {
        PrintMenu(playlistTitle);
        
        cout << "Choose an option:" << endl;
        cin >> userChoice;
        while ((userChoice != 'a') & (userChoice != 'd') & (userChoice != 'c') & (userChoice != 's') & (userChoice != 't') & (userChoice != 'o') & (userChoice != 'q')) {
            cout << "Choose an option:" << endl;
            cin >> userChoice;
        }
        if (userChoice != 'q') {
            ExecuteMenu(userChoice, playlistTitle, headNode);
        }
    }

    return 0;
}

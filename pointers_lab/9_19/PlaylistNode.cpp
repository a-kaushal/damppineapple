#include "PlaylistNode.h"
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

PlaylistNode::PlaylistNode(string uniqueID, string songName, string artistName, int songLength, PlaylistNode* nextNodePtr) {
   this->uniqueID = uniqueID;
   this->songName = songName;
   this->artistName = artistName;
   this->songLength =songLength;
   this->nextNodePtr = nextNodePtr;
}

void PlaylistNode::InsertAfter(PlaylistNode* nextNode) {
   PlaylistNode* temp;
   temp = this->nextNodePtr;
   this->nextNodePtr = nextNode;
   nextNode->nextNodePtr = temp;
}

void PlaylistNode::SetNext(PlaylistNode* nextNode) {
   this->nextNodePtr = nextNode;
}

string PlaylistNode::GetID() {
   return this->uniqueID;   
}

string PlaylistNode::GetSongName() {
   return this->songName;   
}

string PlaylistNode::GetArtistName() {
   return this->artistName;   
}

int PlaylistNode::GetSongLength() {
   return this->songLength;   
}

PlaylistNode* PlaylistNode::GetNext() {
   return this->nextNodePtr;
}

void PlaylistNode::PrintPlaylistNode() {
   cout << "Unique ID: " << uniqueID << endl;
   cout << "Song Name: " << songName << endl;
   cout << "Artist Name: " << artistName << endl;
   cout << "Song Length (in seconds): " << songLength << endl;
}
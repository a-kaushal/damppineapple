#ifndef PLAYLISTNODE_H
#define PLAYLISTNODE_H

#include <string>
#include <stdio.h>
#include "iostream"

using namespace std;

class PlaylistNode {   
   public:    
      PlaylistNode() {
         uniqueID = "none";
         songName = "none";
         artistName = "none";
         songLength = 0;
         nextNodePtr = nullptr;
      }

      PlaylistNode(string uniqueID, string songName, string artistName, int songLength, PlaylistNode* nextNodePtr = nullptr);

      void InsertAfter(PlaylistNode* nextNode);

      void SetNext(PlaylistNode* nextNode);

      string GetID();

      string GetSongName();

      string GetArtistName();

      int GetSongLength();

      PlaylistNode* GetNext();

      void PrintPlaylistNode();

   private:   
      string uniqueID;

      string songName;

      string artistName;

      int songLength;

      PlaylistNode* nextNodePtr;

};
#endif
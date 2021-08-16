#ifndef TEAMH
#define TEAMH

#include <string>
using namespace std;

class Team {
   private:
      string teamName;
      int teamWins;
      int teamLosses;

   public:
      void SetTeamName(string teamName);
      void SetTeamWins(int teamWins);
      void SetTeamLosses(int teamLosses);
      string GetTeamName();
      int GetTeamWins();
      int GetTeamLosses();
      double GetWinPercentage();
   // TODO: Declare private data members - teamName, teamWins, teamLosses
   
   // TODO: Declare mutator functions - 
   //       SetTeamName(), SetTeamWins(), SetTeamLosses()
   
   // TODO: Declare accessor functions - 
   //       GetTeamName(), GetTeamWins(), GetTeamLosses()
   
   // TODO: Declare GetWinPercentage()
};

#endif
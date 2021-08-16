/* 
7.23 LAB: Winning team (classes)

Given main(), define the Team class (in files Team.h and Team.cpp). For class member function GetWinPercentage(), the formula is:
teamWins / (teamWins + teamLosses)

Note: Use casting to prevent integer division.

Ex: If the input is:

Ravens
13
3 

where Ravens is the team's name, 13 is number of team wins, and 3 is the number of team losses, the output is:

Congratulations, Team Ravens has a winning average!

If the input is Angels 80 82, the output is:

Team Angels has a losing average.
 */

#include <iostream>
#include <string>
#include "Team.h"
using namespace std;

int main(int argc, const char* argv[]) {
   string name;
   int wins;
   int losses;
   Team team;

   cin >> name;
   cin >> wins;
   cin >> losses;

   team.SetTeamName(name);
   team.SetTeamWins(wins);
   team.SetTeamLosses(losses);

   if (team.GetWinPercentage() >= 0.5) {
      cout << "Congratulations, Team " << team.GetTeamName() <<
              " has a winning average!" << endl;
   }
   else {
      cout << "Team " << team.GetTeamName() << " has a losing average." << endl;
   }
}
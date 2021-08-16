/* 
14.5 LAB: Zip code and population (class templates)

Define a class StatePair with two template types (T1 and T2), constructors, mutators, accessors, and a PrintInfo() method. Three vectors have been pre-filled with StatePair data in main():

    vector<StatePair <int, string>> zipCodeState: ZIP code - state abbreviation pairs
    vector<StatePair<string, string>> abbrevState: state abbreviation - state name pairs
    vector<StatePair<string, int>> statePopulation: state name - population pairs

Complete main() to use an input ZIP code to retrieve the correct state abbreviation from the vector zipCodeState. Then use the state abbreviation to retrieve the state name from the vector abbrevState. Lastly, use the state name to retrieve the correct state name/population pair from the vector statePopulation and output the pair.

Ex: If the input is:

21044

the output is:

Maryland: 6079602

 */

#include<iostream>
#include <fstream>
#include <vector>
#include <string>
#include "StatePair.h"
using namespace std;

int main() {
	ifstream inFS; // File input stream
	int zip;
	int population;
	string abbrev;
	string state;
	unsigned int i;

	// ZIP code - state abbrev. pairs
	vector<StatePair <int, string>> zipCodeState;

	// state abbrev. - state name pairs
	vector<StatePair<string, string>> abbrevState;

	// state name - population pairs
	vector<StatePair<string, int>> statePopulation;

	// Fill the three ArrayLists

	// Try to open zip_code_state.txt file
	inFS.open("zip_code_state.txt");
	if (!inFS.is_open()) {
		cout << "Could not open file zip_code_state.txt." << endl;
		return 1; // 1 indicates error
	}
	while (!inFS.eof()) {
		StatePair <int, string> temp;
		inFS >> zip;
		if (!inFS.fail()) {
			temp.SetKey(zip);
		}
		inFS >> abbrev;
		if (!inFS.fail()) {
			temp.SetValue(abbrev);
		}
		zipCodeState.push_back(temp);
	}
	inFS.close();
	
   // Try to open abbreviation_state.txt file
	inFS.open("abbreviation_state.txt");
	if (!inFS.is_open()) {
		cout << "Could not open file abbreviation_state.txt." << endl;
		return 1; // 1 indicates error
	}
	while (!inFS.eof()) {
		StatePair <string, string> temp;
		inFS >> abbrev;
		if (!inFS.fail()) {
			temp.SetKey(abbrev);
		}
		getline(inFS, state); //flushes endline
		getline(inFS, state);
		state = state.substr(0, state.size()-1);
		if (!inFS.fail()) {
			temp.SetValue(state);
		}
		
		abbrevState.push_back(temp);
	}
	inFS.close();
	
	// Try to open state_population.txt file
	inFS.open("state_population.txt");
	if (!inFS.is_open()) {
		cout << "Could not open file state_population.txt." << endl;
		return 1; // 1 indicates error
	}
	while (!inFS.eof()) {
		StatePair <string, int> temp;
		getline(inFS, state);
		state = state.substr(0, state.size()-1);
		if (!inFS.fail()) {
			temp.SetKey(state);
		}
		inFS >> population;
		if (!inFS.fail()) {
			temp.SetValue(population);
		}
		getline(inFS, state); //flushes endline
		statePopulation.push_back(temp);
	}
	inFS.close();
	
	cin >> zip;


   for (i = 0; i < zipCodeState.size(); ++i) {
      StatePair <int, string> temp;
      temp = zipCodeState.at(i);
		if (temp.GetKey() == zip) {
         abbrev = temp.GetValue();
      }
	}


	for (i = 0; i < abbrevState.size(); ++i) {
      StatePair <string, string> temp;
      temp = abbrevState.at(i);
		if (temp.GetKey() == abbrev) {
         state = temp.GetValue();
      }
	}


	for (i = 0; i < statePopulation.size(); ++i) {		
      StatePair <string, int> temp;
      temp = statePopulation.at(i);
		if (temp.GetKey() == state) {
         population = temp.GetValue();
         temp.PrintInfo();
      }
	}

}
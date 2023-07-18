#pragma once
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class names_n_scores
{
private:
	vector<string> m_names;
	vector<int> m_scores;

public:
	void addName(string& name, int& score)
	{
		for (int i = 0; i < m_names.size(); i++)
		{
			if (find(m_names.begin(),m_names.end(), name)!=m_names.end())
			{
				
				m_names.push_back(name);
				m_scores.push_back(score);
			}
			else
			{
				cout << " name already exists: " << endl;
			}
		}
		
	}

	void displayNames_n_scores()
	{
		cout << " names: " << "scores:" << endl;
		for (int i = 0; i < m_names.size(); i++)
		{
			cout << m_names[i] << '\t';
			for (int i = 0; i < m_scores.size(); i++)
			{
				cout << m_names[i] << '\t' << endl;
			}
		}
	}
	
};


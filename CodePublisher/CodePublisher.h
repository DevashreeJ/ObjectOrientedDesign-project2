#pragma once
#include<iostream>
#include<unordered_map>
#include<set>
#include<string>
class Publish
{
private:
	std::unordered_map<std::string, std::set<std::string>> deptab;

public :	
	void makeHtmFiles(std::unordered_map<std::string, std::set<std::string>> &table);
};

inline void Publish::makeHtmFiles(std::unordered_map<std::string, std::set<std::string>> &table)
{

	std::cout << table.size();
	
}

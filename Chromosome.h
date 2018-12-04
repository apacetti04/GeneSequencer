#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Allele.h"
#include "Gene.h"

using namespace std;

class Chromosome
{
  private:
	vector<Gene> genes;

	Allele myAllele;

  public:
	Chromosome();

	void AnalyzeGenotype();
	void AddGene(Gene);
	void InputFromFile(ifstream &);
	void OutputToFile(ofstream &);

	Gene FindGene(string name);
};

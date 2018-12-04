#pragma once

#include <string>
#include <fstream>
#include "Allele.h"

using namespace std;

class Gene
{
  private:
	string geneName;
	string geneTrait;
	Allele a;
	Allele b;

  public:
	Gene();
	Gene(Allele newA, Allele newB);

	void WriteToFile(ofstream &);
	string getGeneName();
	string getGeneTrait();
	void setGeneName(string);
	void setGeneTrait(string);
	void FindGene();
	Allele getAlleleA();
	Allele getAlleleB();
	void setAlleleA(Allele A);
	void setAlleleB(Allele B);
};
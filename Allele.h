#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Allele
{
  private:
	string nucleotideSequence;
	string variantName;
	string variantType;

  public:
	Allele();
	Allele(string nucleotideSequence, string variantName, string variantType);

	void WriteAlleleToFile(ofstream &);
	string getName();
	string getType();
	string getNucleotideSequence();

	void setName(string nameToBe);
	void setType(string typeToBe);
	void setNucleotideSequence(string nucleotideSequenceToBe);
};
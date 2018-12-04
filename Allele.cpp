#include "Allele.h"
#include <iostream>
#include <string>

using namespace std;

Allele::Allele()
{
}

Allele::Allele(string nucleotideSequence, string variantName, string variantType)
{
	this->nucleotideSequence = nucleotideSequence;
	this->variantName = variantName;
	this->variantType = variantType;
}

void Allele::WriteAlleleToFile(ofstream &)
{
}

string Allele::getName()
{
	return variantName;
}

string Allele::getType()
{
	return variantType;
}

string Allele::getNucleotideSequence()
{
	return nucleotideSequence;
}

void Allele::setName(string nameToBe)
{
	this->variantName = nameToBe;
}

void Allele::setType(string typeToBe)
{
	this->variantType = typeToBe;
}

void Allele::setNucleotideSequence(string nucleotideSequenceToBe)
{
	this->nucleotideSequence = nucleotideSequenceToBe;
}

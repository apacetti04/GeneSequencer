#include "Gene.h"
#include <iostream>
#include "Allele.h"

using namespace std;

Gene::Gene()
{
}

Gene::Gene(Allele newA, Allele newB)
{
	this->a = newA;
	this->b = newB;
}

void Gene::WriteToFile(ofstream &)
{
}

string Gene::getGeneName()
{
	return geneName;
}

string Gene::getGeneTrait()
{
	return geneTrait;
}

void Gene::setGeneName(string nameToBe)
{
	this->geneName = nameToBe;
}

void Gene::setGeneTrait(string typeToBe)
{
	this->geneTrait = typeToBe;
}

void Gene::FindGene()
{
	if (a.getType() == "dominant")
	{
		cout << "Expressed Allele:  " << a.getName() << " - " << a.getType() << endl;
		cout << "Nucleotide Sequence:  " << a.getNucleotideSequence() << endl;
	}
	if (b.getType() == "dominant")
	{
		cout << "Expressed Allele:  " << b.getName() << " - " << b.getType() << endl;
		cout << "Nucleotide Sequence:  " << b.getNucleotideSequence() << endl;
	}
}

void Gene::setAlleleA(Allele A)
{
	a = A;
}

Allele Gene::getAlleleA()
{
	return a;
}

Allele Gene::getAlleleB()
{
	return b;
}

void Gene::setAlleleB(Allele B)
{
	b = B;
}
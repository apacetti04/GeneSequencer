#include <iostream>
#include <string>
#include "Allele.h"
#include "Gene.h"
#include "Chromosome.h"
#include "GeneSequencer.h"

using namespace std;

void menu(int &inputNumber)
{
	cout << "MENU" << endl;
	cout << "1 - Create chromosome" << endl;
	cout << "2 - Analyze chromosome" << endl;
	cout << "3 - Output chromosome to file" << endl;
	cout << "4 - Input chromosome from file" << endl;
	cout << "5 - Combine chromosomes" << endl;
	cout << "6 - Exit" << endl;
	cout << "Please enter your choice (1-5)" << endl;
	cin >> inputNumber;
}

int main(int argc, char *argv[])
{
	int inputNumber = 0;
	string geneName;
	string geneTrait;
	string nucleotideSequence;
	string variantName;
	string variantType;
	Chromosome myChromosome;
	Gene myGene;

	while (inputNumber != 6)
	{
		menu(inputNumber);
		if (inputNumber == 1)
		{
			cout << "What is the name of the new gene? (e.g. TZ458)" << endl;
			cin >> geneName;
			cout << "What is the gene trait? (e.g. eye color)" << endl;
			cin >> geneTrait;
			cout << "What is the allele A nucleotide sequence? (e.g. AGTC)" << endl;
			cin >> nucleotideSequence;
			cout << "What is the allele A variant? (e.g. brown/blue/etc,)" << endl;
			cin >> variantName;
			cout << "What is the allele A type? (e.g. dominant or recessive)" << endl;
			cin >> variantType;

			Allele a(nucleotideSequence, variantName, variantType);

			cout << "What is the allele B nucleotide sequence? (e.g. AGTC)" << endl;
			cin >> nucleotideSequence;
			cout << "What is the allele B variant? (e.g. brown/blue/etc,)" << endl;
			cin >> variantName;
			cout << "What is the allele B type? (e.g. dominant or recessive)" << endl;
			cin >> variantType;

			Allele b(nucleotideSequence, variantName, variantType);
			myGene.setAlleleA(a);
			myGene.setAlleleB(b);
		}
		else if (inputNumber == 2)
		{
			myGene.setGeneName(geneName);
			myGene.setGeneTrait(geneTrait);

			cout << "Name:  " << myGene.getGeneName() << endl;
			cout << "Genetic trait:  " << myGene.getGeneTrait() << endl;
			myGene.FindGene();
		}
		else if (inputNumber == 3)
		{
			cout << "What file would you like to import from?" << endl;
		}
		else if (inputNumber == 4)
		{
			cout << "What file would you like to export to?" << endl;
		}
		else if (inputNumber == 5)
		{
		}
		else
		{
			cout << "Thank you - Goodbye!" << endl;
			break;
		}
	}

	{
		char c;
		cout << "Hit enter to exit:";
		cin.get(c);
	}
	return 0;
}

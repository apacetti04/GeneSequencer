#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Allele.h"
#include "Gene.h"
#include "Chromosome.h"

using namespace std;

Chromosome::Chromosome()
{
}

void Chromosome::AddGene(Gene g)
{
	this->genes.push_back(g);
}

void Chromosome::AnalyzeGenotype()
{
}

void Chromosome::InputFromFile(ifstream &)
{
}

void Chromosome::OutputToFile(ofstream &)
{
}
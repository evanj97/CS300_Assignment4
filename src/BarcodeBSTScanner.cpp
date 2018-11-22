/*
 * BarcodeBSTScanner.cpp
 *
 *  Created on: Nov 19, 2018
 *      Author: Evan
 */

#include "BarcodeIndex.h"

using namespace std;

int main()
{
	clock_t arrayTime;
	clock_t treeTime;
	string desc;
	string UPC;

	BarcodeIndex* ind = new BarcodeIndex();

	cout << "pre readFile" << endl;

	ind->readFile("upc_corpus.txt");

	while (1)
	{
		cout << "UPC Code: " << endl;
		cin >> UPC;

		ind->search(arrayTime, treeTime, desc, UPC);

		cout << desc << endl;
		cout << "BST Time: " << treeTime << endl;
		cout << "Array Time: " << arrayTime << endl;

	}

}


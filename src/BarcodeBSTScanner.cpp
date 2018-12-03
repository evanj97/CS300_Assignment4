/*
 * Evan Johnson
 * CS300 Fall 2018
 * 21 November, 2018
 * Assignment 4
 * Resubmitted on 3 December, 2018
 *
 * BarcodeBSTScanner.h
 */

#include "BarcodeIndex.h"

using namespace std;

int main()
{
	clock_t arrayTime;
	clock_t treeTime;
	string desc;
	string UPC;

	BarcodeIndex* ind = new BarcodeIndex(); // param is # of UPCs to load

	ind->readFile("upc_corpus.txt", 1100000); // file name

	while (1)
	{
		cout << "UPC Code: " << endl; // take UPC code
		cin >> UPC;

		ind->search(arrayTime, treeTime, desc, UPC); // perform searches

		cout << desc << endl;
		cout << "BST Time: " << treeTime << endl;
		cout << "Array Time: " << arrayTime << endl << endl; // print results

	}

}


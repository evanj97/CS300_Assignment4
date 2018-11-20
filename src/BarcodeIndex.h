/*
 * BarcodeIndex.h
 *
 *  Created on: Nov 19, 2018
 *      Author: Evan
 */

#ifndef BARCODEINDEX_H_
#define BARCODEINDEX_H_

#include <string>
#include <iostream>
#include <time.h>
#include <sstream>
#include "BinaryTree.h"

struct map
{
	long key;
	string val;
};

class BarcodeIndex
{
private:

	BinaryTree<map>* tree;

public:

	BarcodeIndex();

};

BarcodeIndex::BarcodeIndex()
{
	tree = new BinaryTree<map>;
}

#endif /* BARCODEINDEX_H_ */

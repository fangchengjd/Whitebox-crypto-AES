/*
 * NTLUtils.c
 *
 *  Created on: Mar 2, 2013
 *      Author: ph4r05
 */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <ctime>


// NTL dependencies
#include "NTLUtils.h"
#include <iomanip>
NTL_CLIENT

using namespace std;
using namespace NTL;

void dumpVector(NTL::vec_GF2E& a){
	unsigned int i, len = a.length();
	for (i=0; i<len; i++){
		cout << " " << GF2EHEX(a[i]) << " ";
		if (((i+1) % 16) == 0) cout << endl;
	}
	cout << endl;
}

void dumpVector(NTL::vec_GF2& a){
	unsigned int i, len = a.length();
	for (i=0; i<len; i++){
		cout << " " << a[i] << " ";
		if (((i+1) % 16) == 0) cout << endl;
	}
	cout << endl;
}

void dumpVector(long * a, size_t len){
	unsigned int i;
	for (i=0; i<len; i++){
		cout << " " << CHEX(a[i]) << " ";
		if (((i+1) % 16) == 0) cout << endl;
	}
	cout << endl;
}

void dumpVector(GF2E * a, size_t len){
	unsigned int i;
	for (i=0; i<len; i++){
		cout << " " << GF2EHEX(a[i]) << " ";
		if (((i+1) % 16) == 0) cout << endl;
	}
	cout << endl;
}

void dumpMatrix(NTL::mat_GF2E& a){
	unsigned int i,j, n = a.NumRows(), m=a.NumCols();
	for (i=0; i<n; i++){
		for(j=0; j<m; j++){
			cout << " " << GF2EHEX(a[i][j]) << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void dumpMatrix(NTL::mat_GF2& a){
	int i,j, n = a.NumRows(), m=a.NumCols();
	for (i=0; i<n; i++){
		for(j=0; j<m; j++){
			cout << " " << a.get(i,j) << " ";
		}
		cout << endl;
	}
	cout << endl;
}


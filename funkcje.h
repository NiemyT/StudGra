#ifndef FUNKCJE_H
#define FUNKCJE_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

#define W  5
#define K  5
#define R  100

class engram
{

private:
	
		int grid[W][K];
		int wynik;
		int end;
		bool err;

public:

	engram();

	int match();
	int matche();
	int wprowadz1(int x, int y);
	int wprowadz2(int x, int y, int z , int a);
	int swap(int var1, int var2, int var3, int var4);



	
	int getGrid(int x, int y);
	bool getErr(){return err;}
	int getEnd();
	int getWynik();

	void setErr(int x){ err=x;}
	bool koniec();
	

};





#endif
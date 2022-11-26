#include "FUNKCJE.H"

//Konstruktor domyœlny losujaty tablice
engram::engram()
{
	err = 0;
	end = 0;
	wynik = 0;
    srand(time(NULL));
    for(int i=0; i < W; i++)
    {
        for(int j=0; j < K; j++)
        {
            grid[i][j] = rand() % 3 + 1;
        }
    }
}

// sprawdzanie czy s¹ podobne
int engram::match()
{

	
	for(int i=0; i < W; i++)
	for(int j=0; j < K; j++)
	{
	
		if(grid[i][j]==grid[i+1][j] && grid[i][j]==grid[i-1][j])
		{
			grid[i-1][j] = rand() % 3 + 1;
			grid[i+1][j] = rand() % 3 + 1;
			grid[i][j] = rand() % 3 + 1;
		
			
			wynik = wynik+1; 
			
			
		}
		if(grid[i][j]==grid[i][j+1] && grid[i][j]==grid[i][j-1])
		{
			grid[i][j-1] = rand() % 3 + 1;
			grid[i][j+1] = rand() % 3 + 1;
			grid[i][j] = rand() % 3 + 1;
			
			
			wynik = wynik+1; 
			
		}
		
	}

	
	return wynik;
}

//koordynaty 1
int engram::wprowadz1(int x, int y)
{
		
	int temp1 = 0;
	if( x <=W-1 && y <=K-1)
		{
			temp1= grid[x][y];
			return temp1;
		}
		else
		{
			err = 1;
			return err;
		}
		
	

}

//koordynaty 2
int engram::wprowadz2(int x, int y , int z , int a)
{
	int temp2 = 0;
		if( x <=W-1 && y <=K-1)
		{
			temp2= grid[x][y];
			return temp2;
		}
		else
		{
			err = 1;
			return err;
		}
		

}

//Zamiana
int engram::swap(int var1, int var2, int var3, int var4)
{

	int temp3 = 0;
	
	if(var3 == var1 || var3 == var1 + 1 || var3 == var1 - 1 && var4 == var2 + 1 || var4 == var2 - 1 || var4 == var2)
	{
	end = end + 1 ;
	temp3 = grid[var1][var2];
	grid[var1][var2] = grid[var3][var4];
	grid[var3][var4] = temp3;
	return 0;
	}
	else
	{
		err = 1;
		return err;
	}
	
	
}


// sprawdzanie czy s¹ podbne na pocz¹tek gry
int engram::matche()
{
	for(int i=0; i<(W*K)/10; i++)
	{
		for(int i=0; i < W; i++)
		for(int j=0; j < K; j++)
		{
			if(grid[i][j]==grid[i+1][j] && grid[i][j]==grid[i-1][j])
			{
				grid[i-1][j] = rand() % 3 + 1;
				grid[i+1][j] = rand() % 3 + 1;
				grid[i][j] = rand() % 3 + 1;
			}
			if(grid[i][j]==grid[i][j+1] && grid[i][j]==grid[i][j-1])
			{
				grid[i][j-1] = rand() % 3 + 1;
				grid[i][j+1] = rand() % 3 + 1;
				grid[i][j] = rand() % 3 + 1;	
			}
		
		}
	}
	
	return 0;
}


int engram::getEnd()
{
	return end;
}

int engram::getWynik()
{
	return wynik;
}

bool engram::koniec()
{
	
	if(end == R)
		{
			return true;
		}
		else
		{
			return false;
		}

}

//pobor tablicy
int engram::getGrid(int x, int y)
{
	return grid[x][y];
}
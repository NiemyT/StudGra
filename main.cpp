#include "FUNKCJE.H"


int main()
{
	
	int pomoc, q , w , e , r;
	

	engram test;
	test.matche();

	while(1)
	{

	test.setErr(0);
	system("cls");
	cout <<"Ruch: " << test.getEnd() << endl;

	//rozpoczêcie gry 
	test.match();

	cout <<"Wynik: "<< test.getWynik() << endl;
	cout <<"Plansza: "<< endl;
	//Wyswietlanie tablicy
	for(int i=0; i < W; i++)
	{
		cout<< endl;
	for(int j=0; j < K; j++)
	{
		cout<< test.getGrid(i,j) << " ";
	}
	}
	//Wprowadzanie pozycji 1 
	cout << endl;
	cout <<"Wprowadz1: "<< endl;
	cin>>q;
	cin>>w;
	//sprawdzenie koordynatow
	test.wprowadz1(q,w);

	//Wprowadzanie pozycji 2 
	cout <<"Wprowadz2: "<< endl;
	cin>>e;
	cin>>r;
	//sprawdzenie koordynatow
	test.wprowadz2(e,r,q,w);
	//zmaina miejscami pozycji
	test.swap(e,r,q,w);
	//Bland
	if(test.getErr()== true)
		{
			cout << "error" << endl;
		}
	//Koniec
	if(test.koniec()== true)
		{
			cout<< "Koniec gry" << endl;
			break;
		}
		cin >> q;
	}

 	return 0;
}


#include <iostream>
#include <vector>

using namespace std;

typedef int nmb;
typedef vector<nmb> nmbvec;

nmbvec m = {2,1,7,6,3,1,12,4,7};

void doublevalues(nmbvec &vc)
{
	int i = 0;
	for (nmb a : vc)
	{
		a *= 2;
		vc[i++] = a;
	}
}

/*
i = 10;
i++;

1) return i == 10;
2) i = i + 1 = 10;

i = 10;
++i;
1) i = i + 1 = 11;
2) return i == 11;
*/

void printvalues(nmbvec vc)
{
	for (nmb a : vc)
	{
		cout << a << endl;
	}
}

int main()
{
	nmb a = 2;
	nmb b = 5;
	nmb c = a + b;
	std::cout << c << std::endl;
	cout << "Got doubled vector:\n";
	doublevalues(m);
	printvalues(m);
	system("pause");
}

#include <iostream>

using namespace std;

int n,d;
int main()
{
	cin >> n;
	for (int x = 1; x <= n; x++)
		if (n % x == 0)
			d++;
	if (d == 2)
		cout << "E PRIM";
	else
		cout << "NU E PRIM";
}


#include <iostream>

using namespace std;

int n,d;
int main()
{
	cin >> n;
	for (int x = 1; x * x <= n; x++)
		if (n % x == 0)
		{
			d++;
			if (n / x > x)
				d++;
		}
	if (d == 2)
		cout << "E PRIM";
	else
		cout << "NU E PRIM";
}


#include <iostream>

using namespace std;

int n,ok = 1;
int main()
{
	cin >> n;
	if (n == 1 || n == 0)
		ok = 0;
	else if (n != 2 && n % 2 == 0)
		ok = 0;
	else
		for (int x = 3; x * x <= n; x += 2)
			if (n % x == 0)
			{
				ok = 0;
				break;
			}
	if (ok == 1)
		cout << "E PRIM";
	else
		cout << "NU E PRIM";
}


#include <iostream>
using namespace std;

int n, d, x = 1;
int main()
{
	cin >> n;
	while (x <= n)
	{
		if (n % x == 0)
			d++;
		x++;
	}
	if (d == 2)
		cout << "E PRIM";
	else
		cout << "NU E PRIM";

}


#include <iostream>
using namespace std;


int n, d, x = 1;
int main()
{
	cin >> n;
	while (x * x <= n)
	{
		if (n % x == 0)
		{
			d++;
			if (n / x > x)
				d++;
		}
		x++;
	}
	if (d == 2)
		cout << "E PRIM";
	else
		cout << "NU E PRIM";

}


#include <iostream>
using namespace std;


int n, nr_div = 1, a = 2,p;
int main()
{
	cin >> n;
	while (n > 1)
	{
		p = 0;
		while (n % a == 0)
		{
			p++;
			n /= a;
		}
		if (p)
			nr_div = (p + 1) * nr_div;
		a++;
		if (a * a > n)
			a = n;
	}
	if (nr_div == 2)
		cout << "E PRIM";
	else
		cout << "NU E PRIM";
}


#include <iostream>
using namespace std;

int ciur[10000001], prime[1000001], nrprime;
#define mil 1000000
void gen_ciur()
{
	ciur[1] = ciur[0] = 1;
	for (int x = 1; x * x <= mil; x++)
		if (ciur[x] == 0)
			for (int j = 2; x * j <= mil; j++)
				ciur[x * j] = 1;
	for (int x = 2; x <= mil; x++)
		if (ciur[x] == 0)
			prime[++nrprime] = x;
}
bool bn_search(int k)
{
	int x = 1, mij = 0,j = nrprime;
	while (x <= j)
	{
		mij = (x + j) / 2;
		if (prime[mij] == k)
		{
			return true;
			break;
		}
		else
		{
			if (prime[mij] < k)
				x = mij + 1;
			else
				j = mij - 1;
		}
	}
	return false;
}
int n;
int main()
{
	cin >> n;
	gen_ciur();
	if (bn_search(n) == true)
		cout << "E PRIM";
	else
		cout << "NU E PRIM";
}

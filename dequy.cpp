#include "dequy.h"

//===================================================================================================

void nhapsonguyenduong(int &n)
{
	do
	{
		printf("nhap n : ");
		scanf("%d", &n);
		if (n < 0) {
			printf("vui long nhap lai gia tri lon hon 0!");
		}
	} while (n<=0);
}

//===================================================================================================

// Tinh giai thua 
double tinh_gt(int n)
{
	if (n == 0) return 0;
	return n * tinh_gt(n - 1);
}
// Tinh giai thua khu de quy
double tinh_gtk(int n)
{
	double t = 1;
	if (n == 0) return 1;
	for (int i = 1; i <= n; i++)
	{
		t *= i;
	} return t;
}

//===================================================================================================

// Tinh n= 1+2+3+.....+n

int Sum(int n)
{
	if (n == 0) 
	{ 
		return 0;
	}
	else 
	{
    return n + Sum(n - 1);
	}
	
}

//===================================================================================================

// Tinh n = 1+1/2+1/3....1/n
float tinhthapphan(int n)
{
	if (n == 1) return 1;
	 
	return (float)1 / n + tinhthapphan(n - 1);
}

//===================================================================================================

// Tinh de quy S(x,n)

double S(int x, int n)
{
	if (n == 0) return 0;
	return (float)pow(x, n) / Sum(n) + S(x, n - 1);
}
// Tinh khu de quy S(x,n)
int tong1_n(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

double tongx_n(int x, int n)
{
	double sum = 0;
	for (int i = 1; i <=n; i++)
	{
		sum += pow(x, i) / tong1_n(i);
	}
	return sum;

}

//Tính tổng các chữ số lẻ của một số nguyên dương n
// de quy
int tongchusole(int n)
{
	if (n == 0) return 0;
	if ((n % 10) % 2 != 0)
	{
		return n%10 + tongchusole(n /10);
	}
	else {
		return tongchusole(n / 10);
	}
}
// khu de quy
int tcsl(int n)
{
	if (n == 0) return 0;
	int sum = 0;
	while (n > 0)
	{
		if ((n % 10) % 2 != 0) {
			sum += n%10;
		} n /= 10;
	} return sum;
}
// dem chu so le
// de quy

int demsole(int n)
{
	if (n == 0) return 0;
	if ((n % 10) % 2 != 0)
	{
		return 1 + demsole(n / 10);
	}
	else return demsole(n / 10);
}
// khu de quy
int ds(int n)
{
	if (n == 0) return 0;
	int dem =0;
	while (n > 0)
	{
		if ((n % 10) % 2 != 0)
		{
			dem++;
		}
		n /= 10;
	} return dem;
}

// tinh A0 = 1; A1 = 2; An = nA0 + (n-1)A1 + … + A(n-1).

int An(int n) {
	if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return 2;
	}
	else{
		return n * An(0) + (n - 1) * An(1) + An(n - 1);
	}
}
//S(n) = √5 + √5 + ⋯ + √5 + √5 có n dấu căn.
 
double Sn(int n)
{
	if (n == 1) return sqrt(5);
	return sqrt((double)5 + Sn(n - 1));
}

double snk(int n)
{
	if (n == 1) return sqrt(5);
	double s = 0;
	for (int i = 0; i < n; i++)
	{
		s = sqrt((double)s + 5);
	}return s;

}

//S(n) = 1/2 + 2/3+....+ n/ n+1
double sn1(int n)
{
	if (n == 1) return (double)1 / 2 ;
	return (double)n / (n + 1) + sn1(n - 1);
}

double sn1k(int n)
{
	double s = 0;

	for (int i = 0; i <= n; i++)
	{
		s += (double)i / (i + 1);
	} return s;
}

//S(n) = 1 + 1/3+....+ 1/ 2n+1
double sn2(int n)
{
	if (n == 0) return 1;
	return (double)1 / (2 * n + 1) + sn2(n - 1);
}

double sn2k(int n)
{
	double s = 0;
	if (n == 0) return 1;
	for (int i = 0; i <= n; i++)
	{
		s += (double)1 / (2 * i + 1);
	} 
	return s;
}
// S(n) = 1.2 + 2.3+ 3.4 + 4.5 +.….+ n.(n+1)

double sn3(int n)
{
	if (n == 1) return 2;

	return n * (n + 1) + sn3(n - 1);
}

double sn3k(int n)
{
	if (n == 1) return 2;

	double s = 0;

	for (int i = 0; i <= n; i++)
	{
		s += i * (i + 1);
	}
	return s;
}

//======================================================================================

double sn4(int n)
{
	if (n == 0) return 0;
	return (double)n * tinh_gt(n + 1) / ((n + 1) + (sqrt((double)n + 2)))+ sn4(n-1);
}

double sn4k(int n)
{
	if (n == 0) return 0;
	double s = 0;
	for (int i = 0; i <= n; i++)
	{
		s += (double)i * tinh_gt(i + 1) / ((i + 1) + (sqrt((double)i + 2)));
	}
	return s;
}
double sn5(int n)
{
	if (n == 0) return 0;
	return (double)n +sqrt((double)n+n+1)/((n+1)+sqrt((double)tinh_gt(n+2))) + sn5(n - 1);
}
//a. A0 = 1 ; A1=0 ; A2=-1 ; An = 2An-1 – 3An-2 – An-3
int a1n(int n)
{
	if (n == 0) return 1;
	else if (n == 1) return 0;
	else if (n == 2) return -1;
	else return 2 * a1n(n - 1) - 3 * a1n(n - 2) - a1n(n - 3) ;
}
//b. A1 = 1 ; A2=2 ; A3=3 ; An+3 = 2An+2 + An+1 - 3An
long int a2n(int n)
{
	if (n == 1) return 1;
	else if (n == 2) return 2;
	else if (n == 3) return 3;
	else return 2 * a2n(n + 2) + a2n(n +1) - 3*a2n(n);
}

// tinh n= 1^2+ 2^2+....+n^2
int mu(int n)
{
	if (n == 0) return 0;
	return n * n + mu(n - 1);
}
//S(n) = 1 + (1 + 2) + (1 + 2 + 3) + ⋯ + (1 + 2 + 3 + ⋯ + n)
int tn_khudequy(int n)
{
	if (n == 1) return 1;
	int s = 0, t = 0;
	for (int i = 0; i <= n; i++)
	{
		t += i;
		s += t;
	}
	return s;
}

//x0 = 1, y0 = 0
// xn = xn-1 + yn-1 với mọi n > 0
//yn = 3xn-1 + 2yn-1 với mọi n > 0
int xn(int n)
{
	if (n == 0) return 1;
	return  xn(n - 1) + yn(n - 1);
} 
int yn(int n)
{
	if (n == 0) return 0;
	return   3 * xn(n - 1) +2*yn(n - 1);
}

#include"dequy.h"

//===================================================================================================

void showmenu()
{
	printf("\n*****************************************************\n");
	printf("\n*                      MENU                         *");
	printf("\n*1.  Tinh giai thua                                 *");
	printf("\n*2.  Tinh tong cac so nguyen duong                  *");
	printf("\n*3.  Tinh so thap phan                              *");
	printf("\n*4.  Tinh  de quy S(x,n)                            *");
	printf("\n*5.  Tinh khu de quy S(x,n)                         *");
	printf("\n*6.  Tong cac chu so le de quy                      *");
	printf("\n*7.  Tong cac chu so le khu de quy                  *");
	printf("\n*8.  Dem cac chu so le de quy                       *");
	printf("\n*9.  Dem cac chu so le khu de quy                   *");
	printf("\n*9.  Dem cac chu so le khu de quy                   *");
	printf("\n*10. Tinh A(n)                                      *");
	printf("\n*11. Tinh S(n)                                      *");
	printf("\n*12. Tinh S1(n)                                     *");
	printf("\n*13. Tinh S2(n)                                     *");
	printf("\n*14. Tinh S3(n)                                     *");
	printf("\n*15. Tinh S4(n)                                     *");
	printf("\n*16. Tinh S5(n)                                     *");
	printf("\n*17. Tinh A1n(n)                                    *");
	printf("\n*18. Tinh A2n(n)                                    *");
	printf("\n*19. Tinh mu                                        *");
	printf("\n*20. Tinh tong                                      *");
	printf("\n*21. Tinh x va y                                    *");
	printf("\n*****************************************************\n");
}
//===================================================================================================

int process()
{
	int chon;
	int n, x;
	nhapsonguyenduong(n);
	printf(" nhap x: ");
	scanf("%d", &x);

	do
	{
		showmenu();
		printf("\nhay chon chuc nang:  ");
		scanf("%d", &chon);
		switch (chon)
		{
		case 1:
			printf("Giai thua DQ cua %d = %lf\n", n, tinh_gt(n));
			printf("Giai thua KDQ cua %d = %lf\n", n, tinh_gtk(n));
			break;
		case 2:
			printf(" Tong cac so nguyen duong cua %d = %ld\n", n, Sum(n));
			break;
		case 3:
			printf(" Tong cac so thap phan  cua %d = %f \n", n, tinhthapphan(n));
			break;
		case 4:
			printf(" S(%d,%d) = %lf \n",x, n, S(x,n));
			break;
		case 5:
			printf(" S(%d,%d) = %lf \n",x, n, tongx_n(x, n));
			break;
		case 6:
			printf(" Tong cac chu so le su dung de quy cua %d = %d \n", n, tongchusole(n));
			break;
		case 7:
			printf(" Tong cac chu so le su dung khu de quy cua %d = %d \n", n, tcsl(n));
			break;
		case 8:
			printf(" Dem cac chu so le su dung de quy cua %d = %d \n", n, demsole(n));
			break;
		case 9:
			printf(" Dem cac chu so le su dung khu de quy cua %d = %d \n", n, ds(n));
			break;
		case 10:
			printf(" Tinh A(%d) = %d \n", n, An(n));
			break;
		case 11:
			printf(" Tinh DQ S(n) cua %d = %lf \n", n, Sn(n));
			printf(" Tinh KDQ S(n) cua %d = %lf \n", n, snk(n));
			break;
		case 12:
			printf(" Tinh DQ S(%d) = %lf \n", n, sn1(n));
			printf(" Tinh KDQ S(%d) = %lf \n", n, sn1k(n));
			break;
		case 13:
			printf(" Tinh DQ S(%d) = %lf \n", n, sn2(n));
			printf(" Tinh KDQ S(%d) = %lf \n", n, sn2k(n));
			break;
		case 14:
			printf(" Tinh DQ S(%d) = %lf \n", n, sn3(n));
			printf(" Tinh KDQ S(%d) = %lf \n", n, sn3k(n));
			break;
		case 15:
			printf(" Tinh DQ S(%d) = %lf \n", n, sn4(n));
			printf(" Tinh KDQ S(%d) = %lf \n", n, sn4k(n));
			break;
		case 16:
			printf(" Tinh DQ S(%d) = %lf \n", n, sn5(n));
			
			break;
		case 17:
			printf(" Tinh DQ A(%d) = %d \n", n, a1n(n));

			break;
		case 18:
			printf(" Tinh DQ A(%d) = %d \n", n, a2n(n));

			break;
		case 19:
			printf(" Tinh mu %d^2 = %d \n", n, mu(n));

			break;
		case 20:
			printf(" Tinhtong%d = %d \n", n, tn_khudequy(n));

			break;
		case 21:
			printf(" Tinh X%d = %d \n", n,xn(n));
			printf(" Tinh Y%d = %d \n", n, yn(n));
			break;
		}
	} while (!0);
	return 0;
}
//===================================================================================================


int main()
{
	process();
   return 0;
}

//===================================================================================================

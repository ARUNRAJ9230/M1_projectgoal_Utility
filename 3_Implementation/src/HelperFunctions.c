#include "HelperFunctions.h"




extern struct mynode passengers[20];

extern int time1, time2, a[55];
extern char source[20], destination[20], train[40];

extern char station[40], class[40];

int cal(int y1, int y2, int h)
{
	int b, c, i, t, r, n;
	printf("\t\tEnter Your Choice......\n");
	printf("\t\t1. Slepper Class....\n");
	printf("\t\t2. A.C Class.......\n");
	fflush(stdin);
	scanf("%d", &i);
	switch (i) {
	case 1: {
		strcpy(class, "Slepper Class");
		b = y2 * h;
		c = b + (b * 0.18);
	} break;
	case 2: {
		printf("\t\tEnter Your Choice....\n");
		printf("\t\t1. 3A Class....\n");
		printf("\t\t2. 2A Class....\n");
		printf("\t\t3. 1st Class A.C.....\n");
		fflush(stdin);
		scanf("%d", &n);
		switch (n) {
		case 1: {
			strcpy(class, "3A Class");
			b = y1 * h;
			c = b + (b * 0.18);
		}; break;
		case 2: {
			strcpy(class, "2A Class");
			b = (y1 + 1000) * h;
			c = b + (b * 0.18);
		}; break;
		case 3: {
			strcpy(class, "1st Class A.C.");
			b = (y1 + 5000) * h;
			c = b + (b * 0.18);
		}; break;
		default: {
			printf("\t\tEnter Right Choice......\n");
		}
		}
	} break;
	default: {
		printf("\t\tEnter Right Choice......\n");
	}
	}
	return c;
}

void details(int n)
{
	int i, a;
	for (i = 0; i < n ; i++) {
		printf("Enter The %d Passenger Name: ", i+1);
		fflush(stdin);
		scanf("%s",passengers[i].name) ; 
		printf("Enter The %d Passenger Gender: ", i+1);
		fflush(stdin);
		scanf("%s",passengers[i].gender) ;
		printf("Enter The %d Passenger Age: ", i+1);
		scanf("%d",&(passengers[i].age));
	}
}

int seat(int p)
{
	int i;
	printf("\t		 -:SEAT MATRIX:-	 \n");
	printf("\t(U) (M)	 (L) (L) "
		" (U)\n\n");
	printf("\t01 02	 03\t04	 "
		"05\n\n");
	printf("\t06 07	 08\t09	 "
		"10\n");
	printf("\t11 12	 13\t14	 "
		"15\n\n");
	printf("\t16 17	 18\t19	 "
		"20\n");
	printf("\t21 22	 23\t24	 "
		"25\n\n");
	printf("\t26 27	 28\t29	 "
		"30\n");
	printf("\t31 32	 33\t34	 "
		"35\n\n");
	printf("\t36 37	 38\t39	 "
		"40\n");
	printf("\t41 42	 43\t44	 "
		"45\n\n");
	printf("\t46 47	 48\t49	 "
		"50\n");
	printf("\t51 52	 53\t54	 "
		"55\n\n");
	printf("\t56 57	 58\t59	 "
		"60\n");
	printf("\tEnter Seat Numbers: \n");
	for (i = 0; i < p; i++)
		scanf("%d", &a[i]);
}

void bill(int y, int j)
{
	int i;
	for (i = 0; i < no_of_passengers; i++)
	{
		printf("\t\t %dst Passenger Name: %s", i,passengers[i].name);
		printf("\t\t %dst Passenger Gender:%s", i,passengers[i].gender);
		printf("\t\t%dst Passenger Age: %d\n\n", i,passengers[i].age);
	}
	printf("\t\tSource Place: %s",source);
	printf("\t\tDestination Place: %s",destination);
	printf("\t\tThe Boarding Station: %s",station);
	printf("\t\tTrain Is: %s",train);
	printf("\t\tAllocated Class: %s",class);
	printf("\t\tBoarding Time: %d:%d\n", time1, time2);
	printf("\t\tTotal Bill Amount: %d\n", y);
	printf("\t\tAllocated Seats Are: \n");
	for (i = 0; i < j; i++)
	{
		printf("\t\t%d ", a[i]);
	}
	printf("\n");
	printf("\t\t\t\tThank You......\n");
}
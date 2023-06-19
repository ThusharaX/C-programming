#include <stdio.h>

int main(void)
{
	FILE *app; //File Pointer

	char name[15]; // declare character array
	char type;
	int i, countT = 0, countS = 0, countC = 0;

	app = fopen("appoinment.dat", "w"); // open file to write

	if(app == NULL) // check file opening
	{
		printf("File Not Opened.\n");
		return -1; // if file not opening correctly exit the program
	}

	for(i = 0; i <5; i++) // looping getting the use input
	{
	    printf("Enter Name: ");
        scanf("%s", name);

        printf("Enter Type: ");
        scanf(" %c", &type);

        fprintf(app, "%-15s %c\n", name, type); // print data in to file
	}
	fclose(app); // close the opened file

    app = fopen("appoinment.dat", "r"); // opeb file for the reading content

    if(app == NULL) // check file opening
	{
		printf("File Not Opened.\n");
		return -1; // if file not opening correctly exit the program
	}

	fscanf(app,"%c", &type); // reading the file contents

    while(!feof(app))
	{
        if(type == 'C')
		{
		    countC++;
		}
        else if(type == 'S')
		{
			countS++;
		}
        else if(type == 'T')
		{
            countT++;
		}

        fscanf(app,"%c", &type); // reading the file contents
    }

    fclose(app);

    printf("%-20s %-20s\n", "Appoinment Type", "Number of Patients");
    printf("%-20s %-20d\n", "Consulting", countC);
    printf("%-20s %-20d\n", "Scanning", countS);
    printf("%-20s %-20d\n", "Testing", countT);

	return 0;
}

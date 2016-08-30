#include <stdio.h>
#include<string.h>
/****************************************************
*													*
*			CONVERT BINARY TO HEX					*
*			CONVERT HEX TO BINARY					*
*													*
*****************************************************/

// HEX TO BINARY
void hex_to_binary(char input[],char binary[][5],char hex[])
{
	int i;
	for(i=0; i < strlen(input);i++) // loop through input
	{		
		int j;
		for(j=0;j<16;j++) // loop through hex
		{
			if (input[i] == hex[j])// if input matches hex 
			{
				printf("%s	",binary[j]); // print binary
				break; // break loop
			}
		}
	}
}

//BINARY TO HEX
void binary_to_hex(char input[],char binary[][5],char hex[])
{	
	int i;
	for(i=0; i < strlen(input);i=i+4) // loop through input
	{
		// copy 4 bytes EX 0001
		char new_input[5];
		new_input[0] = input[i];
		new_input[1] = input[i+1];
		new_input[2] = input[i+2];
		new_input[3] = input[i+3];
		new_input[4] = '\0';
		
		int j;
		for(j=0;j<16;j++) // loop through binary array for matching value
		{
			if ( strcmp(new_input,binary[j]) ==0)// if input matches binary
			{
				printf("%c	",hex[j]); // print hex
				break; // break loop
			}
		}
	}
}
	
int main(int argc ,char* argv[])
{
	char binary[16][5] = {"0000", "0001", "0010", "0011", "0100", "0101","0110", "0111", "1000", "1001", "1010", "1011", "1100", "1101", "1110","1111"};
	char hex[16] = {'0','1', '2', '3', '4', '5', '6','7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	
	if(argc < 3)
	{
		printf("Example:\n	bintohex hex AAFF\n	bintohex bin 1010101011111111");
	}
	else
	{
		//hex->bin OR bin->hex                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
		if(strcmp(argv[1],"hex")==0)
			hex_to_binary(argv[2],binary,hex);
		else if(strcmp(argv[1],"bin")==0)
			binary_to_hex(argv[2],binary,hex);
		else
			printf("Example:\n	bintohex hex AAFF\n	bintohex bin 1010101011111111");
		char enter;
		printf("\nEnter to exit\n");
		scanf("%c",&enter);
	}
	

	return 0;
}
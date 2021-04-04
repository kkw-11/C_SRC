#include <stdio.h>
#define BOLD     (0x01 << 0)                   //macro constant
#define ITALIC   (0X01 << 1)       
#define SHADOW   (0x01 << 2)
#define UL       (0x01 << 3)

int main(void)
{
	unsigned char attr;
	
	//attr = attr ^ attr; // attr = 0;
	//attr = attr | 0x01; // bold  
	//attr = attr | (0x04 | 0x02); // + shadow and italic
	//attr = attr & ~0x01; //~0x01=0xFE

	attr = attr ^ attr; // attr = 0;
	attr = attr | BOLD; // bold  
	attr = attr | (SHADOW + ITALIC); // + shadow and italic
	attr = attr & ~BOLD; //~0x01=0xFE
	
	
	printf("0x%02x\n", attr);  //
	return 0;
}

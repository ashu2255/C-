//print binary equivalent of the characters using showbits() function
//unsigned char --> character datatype (variable consumes all the 8 bits of the memory and there is no sign bit).

/*Left-shift operator(<<)

It is an operator that shifts the number of bits to the left-side.

Syntax of the left-shift operator is given below:

    Operand << n  
    

Operand is an integer expression on which we apply the left-shift operation.

n is the number of bits to be shifted.
* 
a & b = 0110 && 1110 = 0110

*/

#include<stdio.h>

int showbits(unsigned char);

int main(){
	
	unsigned char n;
	printf("DECIMAL |BINARY\n");
	for(n=0;n<=15;n++){          // loop to print all values
		printf("%d \t|",n);
		showbits(n);            //function call
		printf("\n");
		}
	return 0;
	}


int showbits(unsigned char n){     
	
	int i;        
	unsigned char j,k,andmask;
	
	for(i=7;i>=0;i--){         // to disply 8 bytes 
		j=i;
		andmask = 1<<j;        // 7 times on 1 int --> left shift operator 
		k=n & andmask;
		k==0?printf("0"):printf("1");
		}
	return 0;
	}

/*
 * here is the working of the showbits() function:
 * 
 * for example when n=15
 * 1)j=i i.e j=7 
 andmask became 00000001<<7 -->10000000 
 k = 15 & 10000000 --> 00001111 && 10000000
 k=0
 
 2) j=6 
 andmask 00000001 << 6 -->01000000
 k= 15 & 01000000
 * 
 k=0
 * 
 same goes with the 3rd and 4th step as we know 1&1 is 1 rest all are zero
 
 for the 5)  time
 when j=3
 andmask = 00000001 << 3 -->00001000
k= 15 &00001000  -->
	00001000
&&  00001111
-------------
	00001000
k=1 same goes for the rest
 */

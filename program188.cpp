#include<iostream>
using namespace std;

typedef unsigned long int UINT;
/*

  op1  op2  &  |  ^ 
   1     0  0  1  1 
   0     1  0  1  1
   1     1  1  1  0
   0     0  0  0  0

*/

// iNo    0000  0000  1110  0100  1111  0100 1011 1010
// iPos   6
// iRet   0000  0000  1110  0100  1111  0100 1001 1010

UINT ToggleBit(UINT iNo,int iPos)
{
	int iResult = 0;
    UINT iMask = 0x00000001;
    if((iPos < 1)||(iPos > 32))
    {
    	return 0;
    }
    iMask = iMask<<(iPos-1);

    iResult = iNo ^ iMask;
    return iResult;


}
int main()
{
  
    UINT iValue=0,iRet=0;
    int i=0;

    cout<<"Enter Number\n";
    cin>>iValue;

    cout<<"Enter The Position of bit\n";
    cin>>i;
    iRet = ToggleBit(iValue,i);

    cout<<"Updated Number is :"<<iRet<<"\n";

	return 0;
}
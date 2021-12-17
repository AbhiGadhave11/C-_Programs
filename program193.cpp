#include<iostream>
using namespace std;

typedef unsigned long int UINT;

UINT CountBit(UINT iNo)
{
	UINT iMask=0xf000000f,iResult=0;
  
  iResult = iMask ^ iNo;
  
  return iResult;
}
int main()
{
  
    UINT iValue=0,iRet=0;
    
    cout<<"Enter Number\n";
    cin>>iValue;
   
    iRet = CountBit(iValue);

    cout<<"Updated Number is :"<<iRet<<"\n";
    //printf("%lu\n",iRet);

	return 0;
}
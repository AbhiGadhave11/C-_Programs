#include<iostream>
using namespace std;

typedef unsigned long int UINT;

UINT CountBit(UINT iNo)
{
	int i=0,iCnt=0;
  UINT iMask = 0x00000001,iResult=0;

  for(i=1;i<31;i++,iMask = iMask<<1)
  {
    
    if((iNo & iMask)==iMask)
    {
      iCnt++;
    }
    
  }
  return iCnt;

}
int main()
{
  
    UINT iValue=0,iRet=0;
    

    cout<<"Enter Number\n";
    cin>>iValue;

    iRet = CountBit(iValue);

    cout<<"Number of Bits are ON :"<<iRet<<"\n";

	return 0;
}
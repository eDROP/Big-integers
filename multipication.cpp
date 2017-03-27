
#include <iostream>

using namespace std;


    int multiplication(int Arraylastt[], int cv, int firstArrayy[], int firstnumelemm, int secondArrayy[], int secondnumelemm)
    {
    int B;
    int A;
    int cc;
    int z=1;
    memset(Arraylastt, 0, sizeof(Arraylastt));
    for(B=secondnumelemm; B>=0; B--)
    {
            cc = cv - z;
            for(A=firstnumelemm; A>=0; A--)
            {
              Arraylastt[cc] += secondArrayy[B]* firstArrayy[A];
              cc--;
            }
            z++;
    }

    for(cc=cv-1; cc>0; cc--)
    {

        Arraylastt[cc-1]+=Arraylastt[cc]/10;
        Arraylastt[cc]=Arraylastt[cc]%10;

    }
    if(Arraylastt[0]>9)
    {

      for(cc=cv; cc>0; cc--)
      {
          Arraylastt[cc]=Arraylastt[cc-1];
      }
              Arraylastt[1]=Arraylastt[0]%10;
              Arraylastt[0]=Arraylastt[0]/10;
    }
    else cv=cv-1;

    return cv;
    }
    
    
    
    
    
    
    int main() {
    
    
char RSA2048_1[] = "2519590847565789349402718324004839857142928212620403202777713783604366202070"
                 "7595556264018525880784406918290641249515082189298559149176184502808489120072"
                 "8449926873928072877767359714183472702618963750149718246911650776133798590957"
                 "0009733045974880842840179742910064245869181719511874612151517265463228221686"
                 "9987549182422433637259085141865462043576798423387184774447920739934236584823"
                 "8242811981638150106748104516603773060562016196762561338441436038339044149526"
                 "3443219011465754445417842402092461651572335077870774981712577246796292638635"
                 "6373289912154831438167899885040445364023527381951378636564391212010397122822"
                 "120720357";

char RSA2048_2[] = "2519590847565789349402718324004839857142928212620403202777713783604366202070"
                 "7595556264018525880784406918290641249515082189298559149176184502808489120072"
                 "8449926873928072877767359714183472702618963750149718246911650776133798590957"
                 "0009733045974880842840179742910064245869181719511874612151517265463228221686"
                 "9987549182422433637259085141865462043576798423387184774447920739934236584823"
                 "8242811981638150106748104516603773060562016196762561338441436038339044149526"
                 "3443219011465754445417842402092461651572335077870774981712577246796292638635"
                 "6373289912154831438167899885040445364023527381951378636564391212010397122822"
                 "120720357";



    const int firstnumelem=sizeof(RSA2048_1)-2;
    const int secondnumelem=sizeof(RSA2048_2)-2;

    int firstArray[firstnumelem+1];
    int secondArray[secondnumelem+1];

 for(int i=0; i<=firstnumelem; i++) firstArray[i] = RSA2048_1[i]-'0';
 for(int t=0; t<=secondnumelem; t++) secondArray[t] = RSA2048_2[t]-'0';


int ccc = firstnumelem+secondnumelem+1;
int Arraylast[ccc];
memset(Arraylast, 0, sizeof(Arraylast));
int c = multiplication(Arraylast, ccc, firstArray, firstnumelem, secondArray, secondnumelem);



 cerr << " RESULT: \n\n";
 for(int s=0; s<=c; s++) cerr << Arraylast[s];
 cerr << "\n\n";

    
    
    
    return 0;
    }

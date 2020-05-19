
#include <iostream>
using namespace std;


    int compare(int ffirstArray[], int ffirstnumelem, int ssecondArray[], int ssecondnumelem)
    {
        if(ssecondnumelem<ffirstnumelem) return 1;
        if(ssecondnumelem>ffirstnumelem) return 2;
        if(ffirstArray[0]>ssecondArray[0]) return 1;
        if(ffirstArray[0]<ssecondArray[0]) return 2;

        for(int A=1; A<=ffirstnumelem; A++)
        {

           if(ffirstArray[A]-ssecondArray[A]>0) return 1;
           if(ffirstArray[A]-ssecondArray[A]<0) return 2;
        }
    return 0;
    }



                                   //// IMPORTANT ! FIRST NUMBER MUST BE BIGGER ////
                                   ////////////////////////////////////////////////


                                   int subtraction(int firstArray[], int firstnumelem, int secondArray[], int secondnumelem)
                                   {
                                            int cb;
                                            int fif = firstnumelem;
                                            int sis = secondnumelem;

                                            if(firstnumelem >= secondnumelem) cb=secondnumelem;
                                            else cb=firstnumelem;

                                           for(; cb>=0; cb--, sis--, fif--)
                                          {

                                           if(firstArray[fif]<secondArray[sis])
                                           {
                                            firstArray[fif]=firstArray[fif]+10-secondArray[sis];
                                            if(ffirstArray[fif-1]>0)
                                           {
                                          
                                             ffirstArray[fif-1]-=1;
                                           }
                                           else
                                          {


                                             for(int r=fif-1; r>=0; r--)
                                             {

                                                 if(ffirstArray[r]>0)
                                                 {
                                                 ffirstArray[r]--;
                                                 break;
                                                 }
                                                 else
                                                 {
                                                  ffirstArray[r]=9;
                                                 }
                                         }
                                        }
                                       }
                                       else
                                       {
                                         ffirstArray[fif]=ffirstArray[fif]-ssecondArray[sis];
                                        }
                                       }
      
                                         
                                           



                                            while(firstArray[0]==0)
                                           {

                                             firstnumelem-=1;
                                             for(int aa=1; aa<=firstnumelem+1; aa++) firstArray[aa-1]=firstArray[aa];

                                           }
										                
                                    return firstnumelem;
                                   }




                                    int addition(int firstArray[], int firstnumelem, int secondArray[], int secondnumelem)
                                    {
                                            int cb;
                                            int fif = firstnumelem;
                                            int sis = secondnumelem;

                                            if(firstnumelem >= secondnumelem) cb=secondnumelem;
                                            else cb=firstnumelem;

                                           for(; cb>=0; cb--, sis--, fif--)
                                          {

                                           firstArray[fif]+=secondArray[sis];

                                          }
                                           int pp;
                                           for(pp=firstnumelem; pp>0; pp--)
                                           {

                                             firstArray[pp-1]+=firstArray[pp]/10;
                                             firstArray[pp]=firstArray[pp]%10;

                                           }
                                           if(firstArray[0]>9)
                                          {

                                             for(pp=firstnumelem+1; pp>0; pp--)
                                            {
                                              firstArray[pp]=firstArray[pp-1];

                                            }
                                              firstArray[1]=firstArray[0]%10;
                                              firstArray[0]=firstArray[0]/10;

                                          firstnumelem+=1;
                                          }
                                     return firstnumelem;
                                    }



int main() {

char R_1[] = "2519590847565789349402718324004839857142928212620403202777713783604366202070"
                 "7595556264018525880784406918290641249515082189298559149176184502808489120072"
                 "8449926873928072877767359714183472702618963750149718246911650776133798590957"
                 "0009733045974880842840179742910064245869181719511874612151517265463228221686"
                 "9987549182422433637259085141865462043576798423387184774447920739934236584823"
                 "8242811981638150106748104516603773060562016196762561338441436038339044149526"
                 "3443219011465754445417842402092461651572335077870774981712577246796292638635"
                 "6373289912154831438167899885040445364023527381951378636564391212010397122822"
                 "120720357";

char R_2[] = "2519590847565789349402718324004839857142928212620403202777713783604366202070"
                 "7595556264018525880784406918290641249515082189298559149176184502808489120072"
                 "8449926873928072877767359714183472702618963750149718246911650776133798590957"
                 "0009733045974880842840179742910064245869181719511874612151517265463228221686"
                 "9987549182422433637259085141865462043576798423387184774447920739934236584823"
                 "8242811981638150106748104516603773060562016196762561338441436038339044149526"
                 "3443219011465754445417842402092461651572335077870774981712577246796292638635"
                 "6373289912154831438167899885040445364023527381951378636564391212010397122822"
                 "120720357";



    const int firstnumelem=sizeof(R_1)-2;
    const int secondnumelem=sizeof(R_2)-2;

    int firstArray[firstnumelem+1];
    int secondArray[secondnumelem+1];

 for(int i=0; i<=firstnumelem; i++) firstArray[i] = R_1[i]-'0';
 for(int t=0; t<=secondnumelem; t++) secondArray[t] = R_2[t]-'0';



int o = addition(firstArray, firstnumelem, secondArray, secondnumelem);
 cerr << " addition result: \n\n";
 for(int s=0; s<=o; s++) cerr << firstArray[s];
 cerr << "\n\n";
int c = subtraction(firstArray, firstnumelem, secondArray, secondnumelem);
 cerr << " subtraction result: \n\n";
 for(int s=0; s<=c; s++) cerr << firstArray[s];
 cerr << "\n\n";
int a = compare(firstArray, firstnumelem, secondArray, secondnumelem);

 if(a==0) cerr << " EQUAL\n\n";
 if(a==1) cerr << " FIRST BIGGER\n\n";
 if(a==2) cerr << " SECOND BIGGER\n\n";




  return 0;
}

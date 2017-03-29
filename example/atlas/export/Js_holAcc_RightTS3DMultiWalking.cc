/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:57:38 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var)
{
  double _NotUsed;
  NULL;
  p_output1[0]=1;
  p_output1[1]=1;
  p_output1[2]=1;
  p_output1[3]=1;
  p_output1[4]=1;
  p_output1[5]=1;
  p_output1[6]=1;
  p_output1[7]=1;
  p_output1[8]=1;
  p_output1[9]=1;
  p_output1[10]=1;
  p_output1[11]=1;
  p_output1[12]=1;
  p_output1[13]=1;
  p_output1[14]=1;
  p_output1[15]=1;
  p_output1[16]=1;
  p_output1[17]=1;
  p_output1[18]=1;
  p_output1[19]=1;
  p_output1[20]=1;
  p_output1[21]=1;
  p_output1[22]=1;
  p_output1[23]=1;
  p_output1[24]=1;
  p_output1[25]=1;
  p_output1[26]=1;
  p_output1[27]=1;
  p_output1[28]=1;
  p_output1[29]=1;
  p_output1[30]=1;
  p_output1[31]=1;
  p_output1[32]=2;
  p_output1[33]=2;
  p_output1[34]=2;
  p_output1[35]=2;
  p_output1[36]=2;
  p_output1[37]=2;
  p_output1[38]=2;
  p_output1[39]=2;
  p_output1[40]=2;
  p_output1[41]=2;
  p_output1[42]=2;
  p_output1[43]=2;
  p_output1[44]=2;
  p_output1[45]=2;
  p_output1[46]=2;
  p_output1[47]=2;
  p_output1[48]=2;
  p_output1[49]=2;
  p_output1[50]=2;
  p_output1[51]=2;
  p_output1[52]=2;
  p_output1[53]=2;
  p_output1[54]=2;
  p_output1[55]=2;
  p_output1[56]=2;
  p_output1[57]=2;
  p_output1[58]=2;
  p_output1[59]=2;
  p_output1[60]=2;
  p_output1[61]=2;
  p_output1[62]=2;
  p_output1[63]=2;
  p_output1[64]=2;
  p_output1[65]=3;
  p_output1[66]=3;
  p_output1[67]=3;
  p_output1[68]=3;
  p_output1[69]=3;
  p_output1[70]=3;
  p_output1[71]=3;
  p_output1[72]=3;
  p_output1[73]=3;
  p_output1[74]=3;
  p_output1[75]=3;
  p_output1[76]=3;
  p_output1[77]=3;
  p_output1[78]=3;
  p_output1[79]=3;
  p_output1[80]=3;
  p_output1[81]=3;
  p_output1[82]=3;
  p_output1[83]=3;
  p_output1[84]=3;
  p_output1[85]=3;
  p_output1[86]=3;
  p_output1[87]=3;
  p_output1[88]=3;
  p_output1[89]=3;
  p_output1[90]=3;
  p_output1[91]=3;
  p_output1[92]=3;
  p_output1[93]=3;
  p_output1[94]=3;
  p_output1[95]=3;
  p_output1[96]=3;
  p_output1[97]=4;
  p_output1[98]=4;
  p_output1[99]=4;
  p_output1[100]=4;
  p_output1[101]=4;
  p_output1[102]=4;
  p_output1[103]=4;
  p_output1[104]=4;
  p_output1[105]=4;
  p_output1[106]=4;
  p_output1[107]=4;
  p_output1[108]=4;
  p_output1[109]=4;
  p_output1[110]=4;
  p_output1[111]=4;
  p_output1[112]=4;
  p_output1[113]=4;
  p_output1[114]=4;
  p_output1[115]=4;
  p_output1[116]=4;
  p_output1[117]=4;
  p_output1[118]=5;
  p_output1[119]=5;
  p_output1[120]=5;
  p_output1[121]=5;
  p_output1[122]=5;
  p_output1[123]=5;
  p_output1[124]=5;
  p_output1[125]=5;
  p_output1[126]=5;
  p_output1[127]=5;
  p_output1[128]=5;
  p_output1[129]=5;
  p_output1[130]=5;
  p_output1[131]=5;
  p_output1[132]=5;
  p_output1[133]=5;
  p_output1[134]=5;
  p_output1[135]=5;
  p_output1[136]=5;
  p_output1[137]=5;
  p_output1[138]=5;
  p_output1[139]=5;
  p_output1[140]=5;
  p_output1[141]=5;
  p_output1[142]=5;
  p_output1[143]=6;
  p_output1[144]=6;
  p_output1[145]=6;
  p_output1[146]=6;
  p_output1[147]=6;
  p_output1[148]=6;
  p_output1[149]=6;
  p_output1[150]=6;
  p_output1[151]=6;
  p_output1[152]=6;
  p_output1[153]=6;
  p_output1[154]=6;
  p_output1[155]=6;
  p_output1[156]=6;
  p_output1[157]=6;
  p_output1[158]=6;
  p_output1[159]=6;
  p_output1[160]=6;
  p_output1[161]=6;
  p_output1[162]=6;
  p_output1[163]=6;
  p_output1[164]=6;
  p_output1[165]=6;
  p_output1[166]=6;
  p_output1[167]=6;
  p_output1[168]=7;
  p_output1[169]=7;
  p_output1[170]=7;
  p_output1[171]=7;
  p_output1[172]=7;
  p_output1[173]=7;
  p_output1[174]=7;
  p_output1[175]=7;
  p_output1[176]=7;
  p_output1[177]=7;
  p_output1[178]=7;
  p_output1[179]=7;
  p_output1[180]=7;
  p_output1[181]=7;
  p_output1[182]=7;
  p_output1[183]=7;
  p_output1[184]=7;
  p_output1[185]=7;
  p_output1[186]=7;
  p_output1[187]=7;
  p_output1[188]=7;
  p_output1[189]=7;
  p_output1[190]=7;
  p_output1[191]=7;
  p_output1[192]=7;
  p_output1[193]=7;
  p_output1[194]=7;
  p_output1[195]=7;
  p_output1[196]=7;
  p_output1[197]=7;
  p_output1[198]=7;
  p_output1[199]=7;
  p_output1[200]=8;
  p_output1[201]=8;
  p_output1[202]=8;
  p_output1[203]=8;
  p_output1[204]=8;
  p_output1[205]=8;
  p_output1[206]=8;
  p_output1[207]=8;
  p_output1[208]=8;
  p_output1[209]=8;
  p_output1[210]=8;
  p_output1[211]=8;
  p_output1[212]=8;
  p_output1[213]=8;
  p_output1[214]=8;
  p_output1[215]=8;
  p_output1[216]=8;
  p_output1[217]=8;
  p_output1[218]=8;
  p_output1[219]=8;
  p_output1[220]=8;
  p_output1[221]=8;
  p_output1[222]=8;
  p_output1[223]=8;
  p_output1[224]=8;
  p_output1[225]=8;
  p_output1[226]=8;
  p_output1[227]=8;
  p_output1[228]=8;
  p_output1[229]=8;
  p_output1[230]=8;
  p_output1[231]=8;
  p_output1[232]=8;
  p_output1[233]=9;
  p_output1[234]=9;
  p_output1[235]=9;
  p_output1[236]=9;
  p_output1[237]=9;
  p_output1[238]=9;
  p_output1[239]=9;
  p_output1[240]=9;
  p_output1[241]=9;
  p_output1[242]=9;
  p_output1[243]=9;
  p_output1[244]=9;
  p_output1[245]=9;
  p_output1[246]=9;
  p_output1[247]=9;
  p_output1[248]=9;
  p_output1[249]=9;
  p_output1[250]=9;
  p_output1[251]=9;
  p_output1[252]=9;
  p_output1[253]=9;
  p_output1[254]=9;
  p_output1[255]=9;
  p_output1[256]=9;
  p_output1[257]=9;
  p_output1[258]=9;
  p_output1[259]=9;
  p_output1[260]=9;
  p_output1[261]=9;
  p_output1[262]=9;
  p_output1[263]=9;
  p_output1[264]=9;
  p_output1[265]=10;
  p_output1[266]=10;
  p_output1[267]=10;
  p_output1[268]=10;
  p_output1[269]=10;
  p_output1[270]=10;
  p_output1[271]=10;
  p_output1[272]=10;
  p_output1[273]=10;
  p_output1[274]=10;
  p_output1[275]=10;
  p_output1[276]=10;
  p_output1[277]=10;
  p_output1[278]=10;
  p_output1[279]=10;
  p_output1[280]=10;
  p_output1[281]=10;
  p_output1[282]=10;
  p_output1[283]=10;
  p_output1[284]=10;
  p_output1[285]=10;
  p_output1[286]=11;
  p_output1[287]=11;
  p_output1[288]=11;
  p_output1[289]=11;
  p_output1[290]=11;
  p_output1[291]=11;
  p_output1[292]=11;
  p_output1[293]=11;
  p_output1[294]=11;
  p_output1[295]=11;
  p_output1[296]=11;
  p_output1[297]=11;
  p_output1[298]=11;
  p_output1[299]=11;
  p_output1[300]=11;
  p_output1[301]=11;
  p_output1[302]=11;
  p_output1[303]=11;
  p_output1[304]=11;
  p_output1[305]=11;
  p_output1[306]=11;
  p_output1[307]=11;
  p_output1[308]=11;
  p_output1[309]=11;
  p_output1[310]=11;
  p_output1[311]=12;
  p_output1[312]=13;
  p_output1[313]=14;
  p_output1[314]=4;
  p_output1[315]=5;
  p_output1[316]=6;
  p_output1[317]=16;
  p_output1[318]=17;
  p_output1[319]=18;
  p_output1[320]=19;
  p_output1[321]=20;
  p_output1[322]=21;
  p_output1[323]=22;
  p_output1[324]=23;
  p_output1[325]=24;
  p_output1[326]=25;
  p_output1[327]=26;
  p_output1[328]=27;
  p_output1[329]=37;
  p_output1[330]=38;
  p_output1[331]=39;
  p_output1[332]=40;
  p_output1[333]=41;
  p_output1[334]=42;
  p_output1[335]=43;
  p_output1[336]=44;
  p_output1[337]=45;
  p_output1[338]=46;
  p_output1[339]=47;
  p_output1[340]=48;
  p_output1[341]=59;
  p_output1[342]=60;
  p_output1[343]=61;
  p_output1[344]=62;
  p_output1[345]=63;
  p_output1[346]=4;
  p_output1[347]=5;
  p_output1[348]=6;
  p_output1[349]=16;
  p_output1[350]=17;
  p_output1[351]=18;
  p_output1[352]=19;
  p_output1[353]=20;
  p_output1[354]=21;
  p_output1[355]=22;
  p_output1[356]=23;
  p_output1[357]=24;
  p_output1[358]=25;
  p_output1[359]=26;
  p_output1[360]=27;
  p_output1[361]=37;
  p_output1[362]=38;
  p_output1[363]=39;
  p_output1[364]=40;
  p_output1[365]=41;
  p_output1[366]=42;
  p_output1[367]=43;
  p_output1[368]=44;
  p_output1[369]=45;
  p_output1[370]=46;
  p_output1[371]=47;
  p_output1[372]=48;
  p_output1[373]=58;
  p_output1[374]=59;
  p_output1[375]=60;
  p_output1[376]=61;
  p_output1[377]=62;
  p_output1[378]=63;
  p_output1[379]=4;
  p_output1[380]=5;
  p_output1[381]=6;
  p_output1[382]=16;
  p_output1[383]=17;
  p_output1[384]=18;
  p_output1[385]=19;
  p_output1[386]=20;
  p_output1[387]=21;
  p_output1[388]=22;
  p_output1[389]=23;
  p_output1[390]=24;
  p_output1[391]=25;
  p_output1[392]=26;
  p_output1[393]=27;
  p_output1[394]=37;
  p_output1[395]=38;
  p_output1[396]=39;
  p_output1[397]=40;
  p_output1[398]=41;
  p_output1[399]=42;
  p_output1[400]=43;
  p_output1[401]=44;
  p_output1[402]=45;
  p_output1[403]=46;
  p_output1[404]=47;
  p_output1[405]=48;
  p_output1[406]=59;
  p_output1[407]=60;
  p_output1[408]=61;
  p_output1[409]=62;
  p_output1[410]=63;
  p_output1[411]=5;
  p_output1[412]=6;
  p_output1[413]=17;
  p_output1[414]=18;
  p_output1[415]=19;
  p_output1[416]=20;
  p_output1[417]=21;
  p_output1[418]=25;
  p_output1[419]=26;
  p_output1[420]=27;
  p_output1[421]=38;
  p_output1[422]=39;
  p_output1[423]=40;
  p_output1[424]=41;
  p_output1[425]=42;
  p_output1[426]=46;
  p_output1[427]=47;
  p_output1[428]=48;
  p_output1[429]=58;
  p_output1[430]=60;
  p_output1[431]=62;
  p_output1[432]=5;
  p_output1[433]=6;
  p_output1[434]=16;
  p_output1[435]=17;
  p_output1[436]=18;
  p_output1[437]=19;
  p_output1[438]=20;
  p_output1[439]=21;
  p_output1[440]=25;
  p_output1[441]=26;
  p_output1[442]=27;
  p_output1[443]=37;
  p_output1[444]=38;
  p_output1[445]=39;
  p_output1[446]=40;
  p_output1[447]=41;
  p_output1[448]=42;
  p_output1[449]=46;
  p_output1[450]=47;
  p_output1[451]=48;
  p_output1[452]=59;
  p_output1[453]=60;
  p_output1[454]=61;
  p_output1[455]=62;
  p_output1[456]=63;
  p_output1[457]=5;
  p_output1[458]=6;
  p_output1[459]=16;
  p_output1[460]=17;
  p_output1[461]=18;
  p_output1[462]=19;
  p_output1[463]=20;
  p_output1[464]=21;
  p_output1[465]=25;
  p_output1[466]=26;
  p_output1[467]=27;
  p_output1[468]=37;
  p_output1[469]=38;
  p_output1[470]=39;
  p_output1[471]=40;
  p_output1[472]=41;
  p_output1[473]=42;
  p_output1[474]=46;
  p_output1[475]=47;
  p_output1[476]=48;
  p_output1[477]=59;
  p_output1[478]=60;
  p_output1[479]=61;
  p_output1[480]=62;
  p_output1[481]=63;
  p_output1[482]=4;
  p_output1[483]=5;
  p_output1[484]=6;
  p_output1[485]=10;
  p_output1[486]=11;
  p_output1[487]=12;
  p_output1[488]=13;
  p_output1[489]=14;
  p_output1[490]=15;
  p_output1[491]=22;
  p_output1[492]=23;
  p_output1[493]=24;
  p_output1[494]=25;
  p_output1[495]=26;
  p_output1[496]=27;
  p_output1[497]=31;
  p_output1[498]=32;
  p_output1[499]=33;
  p_output1[500]=34;
  p_output1[501]=35;
  p_output1[502]=36;
  p_output1[503]=43;
  p_output1[504]=44;
  p_output1[505]=45;
  p_output1[506]=46;
  p_output1[507]=47;
  p_output1[508]=48;
  p_output1[509]=53;
  p_output1[510]=54;
  p_output1[511]=55;
  p_output1[512]=56;
  p_output1[513]=57;
  p_output1[514]=4;
  p_output1[515]=5;
  p_output1[516]=6;
  p_output1[517]=10;
  p_output1[518]=11;
  p_output1[519]=12;
  p_output1[520]=13;
  p_output1[521]=14;
  p_output1[522]=15;
  p_output1[523]=22;
  p_output1[524]=23;
  p_output1[525]=24;
  p_output1[526]=25;
  p_output1[527]=26;
  p_output1[528]=27;
  p_output1[529]=31;
  p_output1[530]=32;
  p_output1[531]=33;
  p_output1[532]=34;
  p_output1[533]=35;
  p_output1[534]=36;
  p_output1[535]=43;
  p_output1[536]=44;
  p_output1[537]=45;
  p_output1[538]=46;
  p_output1[539]=47;
  p_output1[540]=48;
  p_output1[541]=52;
  p_output1[542]=53;
  p_output1[543]=54;
  p_output1[544]=55;
  p_output1[545]=56;
  p_output1[546]=57;
  p_output1[547]=4;
  p_output1[548]=5;
  p_output1[549]=6;
  p_output1[550]=10;
  p_output1[551]=11;
  p_output1[552]=12;
  p_output1[553]=13;
  p_output1[554]=14;
  p_output1[555]=15;
  p_output1[556]=22;
  p_output1[557]=23;
  p_output1[558]=24;
  p_output1[559]=25;
  p_output1[560]=26;
  p_output1[561]=27;
  p_output1[562]=31;
  p_output1[563]=32;
  p_output1[564]=33;
  p_output1[565]=34;
  p_output1[566]=35;
  p_output1[567]=36;
  p_output1[568]=43;
  p_output1[569]=44;
  p_output1[570]=45;
  p_output1[571]=46;
  p_output1[572]=47;
  p_output1[573]=48;
  p_output1[574]=53;
  p_output1[575]=54;
  p_output1[576]=55;
  p_output1[577]=56;
  p_output1[578]=57;
  p_output1[579]=5;
  p_output1[580]=6;
  p_output1[581]=11;
  p_output1[582]=12;
  p_output1[583]=13;
  p_output1[584]=14;
  p_output1[585]=15;
  p_output1[586]=25;
  p_output1[587]=26;
  p_output1[588]=27;
  p_output1[589]=32;
  p_output1[590]=33;
  p_output1[591]=34;
  p_output1[592]=35;
  p_output1[593]=36;
  p_output1[594]=46;
  p_output1[595]=47;
  p_output1[596]=48;
  p_output1[597]=52;
  p_output1[598]=54;
  p_output1[599]=56;
  p_output1[600]=5;
  p_output1[601]=6;
  p_output1[602]=10;
  p_output1[603]=11;
  p_output1[604]=12;
  p_output1[605]=13;
  p_output1[606]=14;
  p_output1[607]=15;
  p_output1[608]=25;
  p_output1[609]=26;
  p_output1[610]=27;
  p_output1[611]=31;
  p_output1[612]=32;
  p_output1[613]=33;
  p_output1[614]=34;
  p_output1[615]=35;
  p_output1[616]=36;
  p_output1[617]=46;
  p_output1[618]=47;
  p_output1[619]=48;
  p_output1[620]=53;
  p_output1[621]=54;
  p_output1[622]=55;
  p_output1[623]=56;
  p_output1[624]=57;
  p_output1[625]=49;
  p_output1[626]=50;
  p_output1[627]=51;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 314, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_holAcc_RightTS3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void Js_holAcc_RightTS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

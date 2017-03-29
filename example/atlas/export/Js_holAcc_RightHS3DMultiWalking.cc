/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 14:00:01 GMT-05:00
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
  p_output1[168]=6;
  p_output1[169]=6;
  p_output1[170]=6;
  p_output1[171]=6;
  p_output1[172]=6;
  p_output1[173]=6;
  p_output1[174]=6;
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
  p_output1[200]=7;
  p_output1[201]=7;
  p_output1[202]=7;
  p_output1[203]=7;
  p_output1[204]=7;
  p_output1[205]=7;
  p_output1[206]=7;
  p_output1[207]=7;
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
  p_output1[233]=8;
  p_output1[234]=8;
  p_output1[235]=8;
  p_output1[236]=8;
  p_output1[237]=8;
  p_output1[238]=8;
  p_output1[239]=8;
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
  p_output1[261]=10;
  p_output1[262]=10;
  p_output1[263]=10;
  p_output1[264]=10;
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
  p_output1[287]=12;
  p_output1[288]=13;
  p_output1[289]=4;
  p_output1[290]=5;
  p_output1[291]=6;
  p_output1[292]=16;
  p_output1[293]=17;
  p_output1[294]=18;
  p_output1[295]=19;
  p_output1[296]=20;
  p_output1[297]=21;
  p_output1[298]=22;
  p_output1[299]=23;
  p_output1[300]=24;
  p_output1[301]=25;
  p_output1[302]=26;
  p_output1[303]=27;
  p_output1[304]=37;
  p_output1[305]=38;
  p_output1[306]=39;
  p_output1[307]=40;
  p_output1[308]=41;
  p_output1[309]=42;
  p_output1[310]=43;
  p_output1[311]=44;
  p_output1[312]=45;
  p_output1[313]=46;
  p_output1[314]=47;
  p_output1[315]=48;
  p_output1[316]=59;
  p_output1[317]=60;
  p_output1[318]=61;
  p_output1[319]=62;
  p_output1[320]=63;
  p_output1[321]=4;
  p_output1[322]=5;
  p_output1[323]=6;
  p_output1[324]=16;
  p_output1[325]=17;
  p_output1[326]=18;
  p_output1[327]=19;
  p_output1[328]=20;
  p_output1[329]=21;
  p_output1[330]=22;
  p_output1[331]=23;
  p_output1[332]=24;
  p_output1[333]=25;
  p_output1[334]=26;
  p_output1[335]=27;
  p_output1[336]=37;
  p_output1[337]=38;
  p_output1[338]=39;
  p_output1[339]=40;
  p_output1[340]=41;
  p_output1[341]=42;
  p_output1[342]=43;
  p_output1[343]=44;
  p_output1[344]=45;
  p_output1[345]=46;
  p_output1[346]=47;
  p_output1[347]=48;
  p_output1[348]=58;
  p_output1[349]=59;
  p_output1[350]=60;
  p_output1[351]=61;
  p_output1[352]=62;
  p_output1[353]=63;
  p_output1[354]=4;
  p_output1[355]=5;
  p_output1[356]=6;
  p_output1[357]=16;
  p_output1[358]=17;
  p_output1[359]=18;
  p_output1[360]=19;
  p_output1[361]=20;
  p_output1[362]=21;
  p_output1[363]=22;
  p_output1[364]=23;
  p_output1[365]=24;
  p_output1[366]=25;
  p_output1[367]=26;
  p_output1[368]=27;
  p_output1[369]=37;
  p_output1[370]=38;
  p_output1[371]=39;
  p_output1[372]=40;
  p_output1[373]=41;
  p_output1[374]=42;
  p_output1[375]=43;
  p_output1[376]=44;
  p_output1[377]=45;
  p_output1[378]=46;
  p_output1[379]=47;
  p_output1[380]=48;
  p_output1[381]=59;
  p_output1[382]=60;
  p_output1[383]=61;
  p_output1[384]=62;
  p_output1[385]=63;
  p_output1[386]=5;
  p_output1[387]=6;
  p_output1[388]=17;
  p_output1[389]=18;
  p_output1[390]=19;
  p_output1[391]=20;
  p_output1[392]=21;
  p_output1[393]=25;
  p_output1[394]=26;
  p_output1[395]=27;
  p_output1[396]=38;
  p_output1[397]=39;
  p_output1[398]=40;
  p_output1[399]=41;
  p_output1[400]=42;
  p_output1[401]=46;
  p_output1[402]=47;
  p_output1[403]=48;
  p_output1[404]=58;
  p_output1[405]=60;
  p_output1[406]=62;
  p_output1[407]=5;
  p_output1[408]=6;
  p_output1[409]=16;
  p_output1[410]=17;
  p_output1[411]=18;
  p_output1[412]=19;
  p_output1[413]=20;
  p_output1[414]=21;
  p_output1[415]=25;
  p_output1[416]=26;
  p_output1[417]=27;
  p_output1[418]=37;
  p_output1[419]=38;
  p_output1[420]=39;
  p_output1[421]=40;
  p_output1[422]=41;
  p_output1[423]=42;
  p_output1[424]=46;
  p_output1[425]=47;
  p_output1[426]=48;
  p_output1[427]=59;
  p_output1[428]=60;
  p_output1[429]=61;
  p_output1[430]=62;
  p_output1[431]=63;
  p_output1[432]=4;
  p_output1[433]=5;
  p_output1[434]=6;
  p_output1[435]=10;
  p_output1[436]=11;
  p_output1[437]=12;
  p_output1[438]=13;
  p_output1[439]=14;
  p_output1[440]=15;
  p_output1[441]=22;
  p_output1[442]=23;
  p_output1[443]=24;
  p_output1[444]=25;
  p_output1[445]=26;
  p_output1[446]=27;
  p_output1[447]=31;
  p_output1[448]=32;
  p_output1[449]=33;
  p_output1[450]=34;
  p_output1[451]=35;
  p_output1[452]=36;
  p_output1[453]=43;
  p_output1[454]=44;
  p_output1[455]=45;
  p_output1[456]=46;
  p_output1[457]=47;
  p_output1[458]=48;
  p_output1[459]=53;
  p_output1[460]=54;
  p_output1[461]=55;
  p_output1[462]=56;
  p_output1[463]=57;
  p_output1[464]=4;
  p_output1[465]=5;
  p_output1[466]=6;
  p_output1[467]=10;
  p_output1[468]=11;
  p_output1[469]=12;
  p_output1[470]=13;
  p_output1[471]=14;
  p_output1[472]=15;
  p_output1[473]=22;
  p_output1[474]=23;
  p_output1[475]=24;
  p_output1[476]=25;
  p_output1[477]=26;
  p_output1[478]=27;
  p_output1[479]=31;
  p_output1[480]=32;
  p_output1[481]=33;
  p_output1[482]=34;
  p_output1[483]=35;
  p_output1[484]=36;
  p_output1[485]=43;
  p_output1[486]=44;
  p_output1[487]=45;
  p_output1[488]=46;
  p_output1[489]=47;
  p_output1[490]=48;
  p_output1[491]=52;
  p_output1[492]=53;
  p_output1[493]=54;
  p_output1[494]=55;
  p_output1[495]=56;
  p_output1[496]=57;
  p_output1[497]=4;
  p_output1[498]=5;
  p_output1[499]=6;
  p_output1[500]=10;
  p_output1[501]=11;
  p_output1[502]=12;
  p_output1[503]=13;
  p_output1[504]=14;
  p_output1[505]=15;
  p_output1[506]=22;
  p_output1[507]=23;
  p_output1[508]=24;
  p_output1[509]=25;
  p_output1[510]=26;
  p_output1[511]=27;
  p_output1[512]=31;
  p_output1[513]=32;
  p_output1[514]=33;
  p_output1[515]=34;
  p_output1[516]=35;
  p_output1[517]=36;
  p_output1[518]=43;
  p_output1[519]=44;
  p_output1[520]=45;
  p_output1[521]=46;
  p_output1[522]=47;
  p_output1[523]=48;
  p_output1[524]=53;
  p_output1[525]=54;
  p_output1[526]=55;
  p_output1[527]=56;
  p_output1[528]=57;
  p_output1[529]=5;
  p_output1[530]=6;
  p_output1[531]=11;
  p_output1[532]=12;
  p_output1[533]=13;
  p_output1[534]=14;
  p_output1[535]=15;
  p_output1[536]=25;
  p_output1[537]=26;
  p_output1[538]=27;
  p_output1[539]=32;
  p_output1[540]=33;
  p_output1[541]=34;
  p_output1[542]=35;
  p_output1[543]=36;
  p_output1[544]=46;
  p_output1[545]=47;
  p_output1[546]=48;
  p_output1[547]=52;
  p_output1[548]=54;
  p_output1[549]=56;
  p_output1[550]=5;
  p_output1[551]=6;
  p_output1[552]=10;
  p_output1[553]=11;
  p_output1[554]=12;
  p_output1[555]=13;
  p_output1[556]=14;
  p_output1[557]=15;
  p_output1[558]=25;
  p_output1[559]=26;
  p_output1[560]=27;
  p_output1[561]=31;
  p_output1[562]=32;
  p_output1[563]=33;
  p_output1[564]=34;
  p_output1[565]=35;
  p_output1[566]=36;
  p_output1[567]=46;
  p_output1[568]=47;
  p_output1[569]=48;
  p_output1[570]=53;
  p_output1[571]=54;
  p_output1[572]=55;
  p_output1[573]=56;
  p_output1[574]=57;
  p_output1[575]=49;
  p_output1[576]=50;
  p_output1[577]=51;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 289, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_holAcc_RightHS3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void Js_holAcc_RightHS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

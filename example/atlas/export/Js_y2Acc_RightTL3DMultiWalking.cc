/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:58:38 GMT-04:00
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
  p_output1[21]=2;
  p_output1[22]=2;
  p_output1[23]=2;
  p_output1[24]=2;
  p_output1[25]=2;
  p_output1[26]=2;
  p_output1[27]=2;
  p_output1[28]=2;
  p_output1[29]=2;
  p_output1[30]=2;
  p_output1[31]=2;
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
  p_output1[42]=3;
  p_output1[43]=3;
  p_output1[44]=3;
  p_output1[45]=3;
  p_output1[46]=3;
  p_output1[47]=3;
  p_output1[48]=3;
  p_output1[49]=3;
  p_output1[50]=3;
  p_output1[51]=3;
  p_output1[52]=3;
  p_output1[53]=3;
  p_output1[54]=3;
  p_output1[55]=3;
  p_output1[56]=3;
  p_output1[57]=3;
  p_output1[58]=3;
  p_output1[59]=3;
  p_output1[60]=3;
  p_output1[61]=3;
  p_output1[62]=3;
  p_output1[63]=3;
  p_output1[64]=4;
  p_output1[65]=4;
  p_output1[66]=4;
  p_output1[67]=4;
  p_output1[68]=4;
  p_output1[69]=4;
  p_output1[70]=4;
  p_output1[71]=4;
  p_output1[72]=4;
  p_output1[73]=4;
  p_output1[74]=4;
  p_output1[75]=4;
  p_output1[76]=4;
  p_output1[77]=4;
  p_output1[78]=4;
  p_output1[79]=4;
  p_output1[80]=4;
  p_output1[81]=4;
  p_output1[82]=4;
  p_output1[83]=4;
  p_output1[84]=4;
  p_output1[85]=4;
  p_output1[86]=4;
  p_output1[87]=5;
  p_output1[88]=5;
  p_output1[89]=5;
  p_output1[90]=5;
  p_output1[91]=5;
  p_output1[92]=5;
  p_output1[93]=5;
  p_output1[94]=5;
  p_output1[95]=5;
  p_output1[96]=5;
  p_output1[97]=5;
  p_output1[98]=5;
  p_output1[99]=5;
  p_output1[100]=5;
  p_output1[101]=5;
  p_output1[102]=5;
  p_output1[103]=5;
  p_output1[104]=5;
  p_output1[105]=5;
  p_output1[106]=5;
  p_output1[107]=5;
  p_output1[108]=5;
  p_output1[109]=6;
  p_output1[110]=6;
  p_output1[111]=6;
  p_output1[112]=6;
  p_output1[113]=6;
  p_output1[114]=6;
  p_output1[115]=6;
  p_output1[116]=6;
  p_output1[117]=6;
  p_output1[118]=6;
  p_output1[119]=6;
  p_output1[120]=6;
  p_output1[121]=6;
  p_output1[122]=6;
  p_output1[123]=6;
  p_output1[124]=6;
  p_output1[125]=6;
  p_output1[126]=6;
  p_output1[127]=6;
  p_output1[128]=6;
  p_output1[129]=6;
  p_output1[130]=6;
  p_output1[131]=7;
  p_output1[132]=7;
  p_output1[133]=7;
  p_output1[134]=7;
  p_output1[135]=7;
  p_output1[136]=7;
  p_output1[137]=7;
  p_output1[138]=7;
  p_output1[139]=7;
  p_output1[140]=7;
  p_output1[141]=7;
  p_output1[142]=7;
  p_output1[143]=7;
  p_output1[144]=7;
  p_output1[145]=7;
  p_output1[146]=7;
  p_output1[147]=7;
  p_output1[148]=7;
  p_output1[149]=7;
  p_output1[150]=7;
  p_output1[151]=7;
  p_output1[152]=7;
  p_output1[153]=7;
  p_output1[154]=8;
  p_output1[155]=8;
  p_output1[156]=8;
  p_output1[157]=8;
  p_output1[158]=8;
  p_output1[159]=8;
  p_output1[160]=8;
  p_output1[161]=8;
  p_output1[162]=8;
  p_output1[163]=8;
  p_output1[164]=8;
  p_output1[165]=8;
  p_output1[166]=8;
  p_output1[167]=8;
  p_output1[168]=8;
  p_output1[169]=8;
  p_output1[170]=8;
  p_output1[171]=8;
  p_output1[172]=8;
  p_output1[173]=8;
  p_output1[174]=8;
  p_output1[175]=8;
  p_output1[176]=9;
  p_output1[177]=9;
  p_output1[178]=9;
  p_output1[179]=9;
  p_output1[180]=9;
  p_output1[181]=9;
  p_output1[182]=9;
  p_output1[183]=9;
  p_output1[184]=9;
  p_output1[185]=9;
  p_output1[186]=9;
  p_output1[187]=9;
  p_output1[188]=9;
  p_output1[189]=9;
  p_output1[190]=9;
  p_output1[191]=9;
  p_output1[192]=9;
  p_output1[193]=9;
  p_output1[194]=9;
  p_output1[195]=9;
  p_output1[196]=9;
  p_output1[197]=9;
  p_output1[198]=9;
  p_output1[199]=10;
  p_output1[200]=10;
  p_output1[201]=10;
  p_output1[202]=10;
  p_output1[203]=10;
  p_output1[204]=10;
  p_output1[205]=10;
  p_output1[206]=10;
  p_output1[207]=10;
  p_output1[208]=10;
  p_output1[209]=10;
  p_output1[210]=10;
  p_output1[211]=10;
  p_output1[212]=10;
  p_output1[213]=10;
  p_output1[214]=10;
  p_output1[215]=10;
  p_output1[216]=10;
  p_output1[217]=10;
  p_output1[218]=10;
  p_output1[219]=10;
  p_output1[220]=10;
  p_output1[221]=10;
  p_output1[222]=10;
  p_output1[223]=10;
  p_output1[224]=10;
  p_output1[225]=10;
  p_output1[226]=10;
  p_output1[227]=10;
  p_output1[228]=10;
  p_output1[229]=10;
  p_output1[230]=10;
  p_output1[231]=10;
  p_output1[232]=10;
  p_output1[233]=10;
  p_output1[234]=10;
  p_output1[235]=10;
  p_output1[236]=10;
  p_output1[237]=10;
  p_output1[238]=10;
  p_output1[239]=10;
  p_output1[240]=10;
  p_output1[241]=10;
  p_output1[242]=10;
  p_output1[243]=10;
  p_output1[244]=11;
  p_output1[245]=11;
  p_output1[246]=11;
  p_output1[247]=11;
  p_output1[248]=11;
  p_output1[249]=11;
  p_output1[250]=11;
  p_output1[251]=11;
  p_output1[252]=11;
  p_output1[253]=11;
  p_output1[254]=11;
  p_output1[255]=11;
  p_output1[256]=11;
  p_output1[257]=11;
  p_output1[258]=11;
  p_output1[259]=11;
  p_output1[260]=11;
  p_output1[261]=11;
  p_output1[262]=11;
  p_output1[263]=11;
  p_output1[264]=11;
  p_output1[265]=11;
  p_output1[266]=11;
  p_output1[267]=11;
  p_output1[268]=11;
  p_output1[269]=11;
  p_output1[270]=11;
  p_output1[271]=11;
  p_output1[272]=11;
  p_output1[273]=11;
  p_output1[274]=11;
  p_output1[275]=11;
  p_output1[276]=11;
  p_output1[277]=11;
  p_output1[278]=11;
  p_output1[279]=11;
  p_output1[280]=11;
  p_output1[281]=11;
  p_output1[282]=11;
  p_output1[283]=11;
  p_output1[284]=11;
  p_output1[285]=11;
  p_output1[286]=5;
  p_output1[287]=17;
  p_output1[288]=19;
  p_output1[289]=21;
  p_output1[290]=26;
  p_output1[291]=38;
  p_output1[292]=40;
  p_output1[293]=42;
  p_output1[294]=47;
  p_output1[295]=59;
  p_output1[296]=61;
  p_output1[297]=63;
  p_output1[298]=64;
  p_output1[299]=65;
  p_output1[300]=66;
  p_output1[301]=67;
  p_output1[302]=68;
  p_output1[303]=69;
  p_output1[304]=70;
  p_output1[305]=71;
  p_output1[306]=72;
  p_output1[307]=5;
  p_output1[308]=17;
  p_output1[309]=19;
  p_output1[310]=21;
  p_output1[311]=26;
  p_output1[312]=38;
  p_output1[313]=40;
  p_output1[314]=42;
  p_output1[315]=47;
  p_output1[316]=59;
  p_output1[317]=61;
  p_output1[318]=63;
  p_output1[319]=64;
  p_output1[320]=65;
  p_output1[321]=73;
  p_output1[322]=74;
  p_output1[323]=75;
  p_output1[324]=76;
  p_output1[325]=77;
  p_output1[326]=78;
  p_output1[327]=79;
  p_output1[328]=5;
  p_output1[329]=17;
  p_output1[330]=19;
  p_output1[331]=21;
  p_output1[332]=26;
  p_output1[333]=38;
  p_output1[334]=40;
  p_output1[335]=42;
  p_output1[336]=47;
  p_output1[337]=58;
  p_output1[338]=59;
  p_output1[339]=61;
  p_output1[340]=63;
  p_output1[341]=64;
  p_output1[342]=65;
  p_output1[343]=80;
  p_output1[344]=81;
  p_output1[345]=82;
  p_output1[346]=83;
  p_output1[347]=84;
  p_output1[348]=85;
  p_output1[349]=86;
  p_output1[350]=5;
  p_output1[351]=17;
  p_output1[352]=19;
  p_output1[353]=21;
  p_output1[354]=26;
  p_output1[355]=38;
  p_output1[356]=40;
  p_output1[357]=42;
  p_output1[358]=47;
  p_output1[359]=58;
  p_output1[360]=59;
  p_output1[361]=60;
  p_output1[362]=61;
  p_output1[363]=63;
  p_output1[364]=64;
  p_output1[365]=65;
  p_output1[366]=87;
  p_output1[367]=88;
  p_output1[368]=89;
  p_output1[369]=90;
  p_output1[370]=91;
  p_output1[371]=92;
  p_output1[372]=93;
  p_output1[373]=5;
  p_output1[374]=17;
  p_output1[375]=19;
  p_output1[376]=21;
  p_output1[377]=26;
  p_output1[378]=38;
  p_output1[379]=40;
  p_output1[380]=42;
  p_output1[381]=47;
  p_output1[382]=59;
  p_output1[383]=61;
  p_output1[384]=62;
  p_output1[385]=63;
  p_output1[386]=64;
  p_output1[387]=65;
  p_output1[388]=94;
  p_output1[389]=95;
  p_output1[390]=96;
  p_output1[391]=97;
  p_output1[392]=98;
  p_output1[393]=99;
  p_output1[394]=100;
  p_output1[395]=5;
  p_output1[396]=17;
  p_output1[397]=19;
  p_output1[398]=21;
  p_output1[399]=26;
  p_output1[400]=38;
  p_output1[401]=40;
  p_output1[402]=42;
  p_output1[403]=47;
  p_output1[404]=57;
  p_output1[405]=59;
  p_output1[406]=61;
  p_output1[407]=63;
  p_output1[408]=64;
  p_output1[409]=65;
  p_output1[410]=101;
  p_output1[411]=102;
  p_output1[412]=103;
  p_output1[413]=104;
  p_output1[414]=105;
  p_output1[415]=106;
  p_output1[416]=107;
  p_output1[417]=5;
  p_output1[418]=17;
  p_output1[419]=19;
  p_output1[420]=21;
  p_output1[421]=26;
  p_output1[422]=38;
  p_output1[423]=40;
  p_output1[424]=42;
  p_output1[425]=47;
  p_output1[426]=55;
  p_output1[427]=57;
  p_output1[428]=59;
  p_output1[429]=61;
  p_output1[430]=63;
  p_output1[431]=64;
  p_output1[432]=65;
  p_output1[433]=108;
  p_output1[434]=109;
  p_output1[435]=110;
  p_output1[436]=111;
  p_output1[437]=112;
  p_output1[438]=113;
  p_output1[439]=114;
  p_output1[440]=5;
  p_output1[441]=17;
  p_output1[442]=19;
  p_output1[443]=21;
  p_output1[444]=26;
  p_output1[445]=38;
  p_output1[446]=40;
  p_output1[447]=42;
  p_output1[448]=47;
  p_output1[449]=53;
  p_output1[450]=59;
  p_output1[451]=61;
  p_output1[452]=63;
  p_output1[453]=64;
  p_output1[454]=65;
  p_output1[455]=115;
  p_output1[456]=116;
  p_output1[457]=117;
  p_output1[458]=118;
  p_output1[459]=119;
  p_output1[460]=120;
  p_output1[461]=121;
  p_output1[462]=5;
  p_output1[463]=17;
  p_output1[464]=19;
  p_output1[465]=21;
  p_output1[466]=26;
  p_output1[467]=38;
  p_output1[468]=40;
  p_output1[469]=42;
  p_output1[470]=47;
  p_output1[471]=54;
  p_output1[472]=59;
  p_output1[473]=60;
  p_output1[474]=61;
  p_output1[475]=63;
  p_output1[476]=64;
  p_output1[477]=65;
  p_output1[478]=122;
  p_output1[479]=123;
  p_output1[480]=124;
  p_output1[481]=125;
  p_output1[482]=126;
  p_output1[483]=127;
  p_output1[484]=128;
  p_output1[485]=4;
  p_output1[486]=5;
  p_output1[487]=6;
  p_output1[488]=10;
  p_output1[489]=11;
  p_output1[490]=12;
  p_output1[491]=13;
  p_output1[492]=14;
  p_output1[493]=15;
  p_output1[494]=17;
  p_output1[495]=19;
  p_output1[496]=21;
  p_output1[497]=25;
  p_output1[498]=26;
  p_output1[499]=27;
  p_output1[500]=31;
  p_output1[501]=32;
  p_output1[502]=33;
  p_output1[503]=34;
  p_output1[504]=35;
  p_output1[505]=36;
  p_output1[506]=38;
  p_output1[507]=40;
  p_output1[508]=42;
  p_output1[509]=46;
  p_output1[510]=47;
  p_output1[511]=48;
  p_output1[512]=52;
  p_output1[513]=53;
  p_output1[514]=54;
  p_output1[515]=55;
  p_output1[516]=56;
  p_output1[517]=57;
  p_output1[518]=59;
  p_output1[519]=61;
  p_output1[520]=63;
  p_output1[521]=64;
  p_output1[522]=65;
  p_output1[523]=129;
  p_output1[524]=130;
  p_output1[525]=131;
  p_output1[526]=132;
  p_output1[527]=133;
  p_output1[528]=134;
  p_output1[529]=135;
  p_output1[530]=4;
  p_output1[531]=5;
  p_output1[532]=6;
  p_output1[533]=11;
  p_output1[534]=12;
  p_output1[535]=13;
  p_output1[536]=14;
  p_output1[537]=15;
  p_output1[538]=17;
  p_output1[539]=19;
  p_output1[540]=21;
  p_output1[541]=25;
  p_output1[542]=26;
  p_output1[543]=27;
  p_output1[544]=32;
  p_output1[545]=33;
  p_output1[546]=34;
  p_output1[547]=35;
  p_output1[548]=36;
  p_output1[549]=38;
  p_output1[550]=40;
  p_output1[551]=42;
  p_output1[552]=46;
  p_output1[553]=47;
  p_output1[554]=48;
  p_output1[555]=53;
  p_output1[556]=54;
  p_output1[557]=55;
  p_output1[558]=56;
  p_output1[559]=57;
  p_output1[560]=59;
  p_output1[561]=61;
  p_output1[562]=63;
  p_output1[563]=64;
  p_output1[564]=65;
  p_output1[565]=136;
  p_output1[566]=137;
  p_output1[567]=138;
  p_output1[568]=139;
  p_output1[569]=140;
  p_output1[570]=141;
  p_output1[571]=142;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 286, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_y2Acc_RightTL3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void Js_y2Acc_RightTL3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

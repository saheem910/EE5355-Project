/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:59:17 GMT-05:00
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
  p_output1[17]=2;
  p_output1[18]=2;
  p_output1[19]=2;
  p_output1[20]=2;
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
  p_output1[34]=3;
  p_output1[35]=3;
  p_output1[36]=3;
  p_output1[37]=3;
  p_output1[38]=3;
  p_output1[39]=3;
  p_output1[40]=3;
  p_output1[41]=3;
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
  p_output1[52]=4;
  p_output1[53]=4;
  p_output1[54]=4;
  p_output1[55]=4;
  p_output1[56]=4;
  p_output1[57]=4;
  p_output1[58]=4;
  p_output1[59]=4;
  p_output1[60]=4;
  p_output1[61]=4;
  p_output1[62]=4;
  p_output1[63]=4;
  p_output1[64]=4;
  p_output1[65]=4;
  p_output1[66]=4;
  p_output1[67]=4;
  p_output1[68]=4;
  p_output1[69]=4;
  p_output1[70]=4;
  p_output1[71]=5;
  p_output1[72]=5;
  p_output1[73]=5;
  p_output1[74]=5;
  p_output1[75]=5;
  p_output1[76]=5;
  p_output1[77]=5;
  p_output1[78]=5;
  p_output1[79]=5;
  p_output1[80]=5;
  p_output1[81]=5;
  p_output1[82]=5;
  p_output1[83]=5;
  p_output1[84]=5;
  p_output1[85]=5;
  p_output1[86]=5;
  p_output1[87]=5;
  p_output1[88]=5;
  p_output1[89]=6;
  p_output1[90]=6;
  p_output1[91]=6;
  p_output1[92]=6;
  p_output1[93]=6;
  p_output1[94]=6;
  p_output1[95]=6;
  p_output1[96]=6;
  p_output1[97]=6;
  p_output1[98]=6;
  p_output1[99]=6;
  p_output1[100]=6;
  p_output1[101]=6;
  p_output1[102]=6;
  p_output1[103]=6;
  p_output1[104]=6;
  p_output1[105]=6;
  p_output1[106]=6;
  p_output1[107]=7;
  p_output1[108]=7;
  p_output1[109]=7;
  p_output1[110]=7;
  p_output1[111]=7;
  p_output1[112]=7;
  p_output1[113]=7;
  p_output1[114]=7;
  p_output1[115]=7;
  p_output1[116]=7;
  p_output1[117]=7;
  p_output1[118]=7;
  p_output1[119]=7;
  p_output1[120]=7;
  p_output1[121]=7;
  p_output1[122]=7;
  p_output1[123]=7;
  p_output1[124]=7;
  p_output1[125]=7;
  p_output1[126]=8;
  p_output1[127]=8;
  p_output1[128]=8;
  p_output1[129]=8;
  p_output1[130]=8;
  p_output1[131]=8;
  p_output1[132]=8;
  p_output1[133]=8;
  p_output1[134]=8;
  p_output1[135]=8;
  p_output1[136]=8;
  p_output1[137]=8;
  p_output1[138]=8;
  p_output1[139]=8;
  p_output1[140]=8;
  p_output1[141]=8;
  p_output1[142]=8;
  p_output1[143]=8;
  p_output1[144]=9;
  p_output1[145]=9;
  p_output1[146]=9;
  p_output1[147]=9;
  p_output1[148]=9;
  p_output1[149]=9;
  p_output1[150]=9;
  p_output1[151]=9;
  p_output1[152]=9;
  p_output1[153]=9;
  p_output1[154]=9;
  p_output1[155]=9;
  p_output1[156]=9;
  p_output1[157]=9;
  p_output1[158]=9;
  p_output1[159]=9;
  p_output1[160]=9;
  p_output1[161]=9;
  p_output1[162]=9;
  p_output1[163]=10;
  p_output1[164]=10;
  p_output1[165]=10;
  p_output1[166]=10;
  p_output1[167]=10;
  p_output1[168]=10;
  p_output1[169]=10;
  p_output1[170]=10;
  p_output1[171]=10;
  p_output1[172]=10;
  p_output1[173]=10;
  p_output1[174]=10;
  p_output1[175]=10;
  p_output1[176]=10;
  p_output1[177]=10;
  p_output1[178]=10;
  p_output1[179]=10;
  p_output1[180]=10;
  p_output1[181]=10;
  p_output1[182]=10;
  p_output1[183]=10;
  p_output1[184]=10;
  p_output1[185]=10;
  p_output1[186]=10;
  p_output1[187]=10;
  p_output1[188]=10;
  p_output1[189]=10;
  p_output1[190]=10;
  p_output1[191]=10;
  p_output1[192]=10;
  p_output1[193]=10;
  p_output1[194]=10;
  p_output1[195]=10;
  p_output1[196]=11;
  p_output1[197]=11;
  p_output1[198]=11;
  p_output1[199]=11;
  p_output1[200]=11;
  p_output1[201]=11;
  p_output1[202]=11;
  p_output1[203]=11;
  p_output1[204]=11;
  p_output1[205]=11;
  p_output1[206]=11;
  p_output1[207]=11;
  p_output1[208]=11;
  p_output1[209]=11;
  p_output1[210]=11;
  p_output1[211]=11;
  p_output1[212]=11;
  p_output1[213]=11;
  p_output1[214]=11;
  p_output1[215]=11;
  p_output1[216]=11;
  p_output1[217]=11;
  p_output1[218]=11;
  p_output1[219]=11;
  p_output1[220]=11;
  p_output1[221]=11;
  p_output1[222]=11;
  p_output1[223]=11;
  p_output1[224]=11;
  p_output1[225]=11;
  p_output1[226]=11;
  p_output1[227]=5;
  p_output1[228]=17;
  p_output1[229]=19;
  p_output1[230]=21;
  p_output1[231]=26;
  p_output1[232]=38;
  p_output1[233]=40;
  p_output1[234]=42;
  p_output1[235]=43;
  p_output1[236]=44;
  p_output1[237]=45;
  p_output1[238]=46;
  p_output1[239]=47;
  p_output1[240]=48;
  p_output1[241]=49;
  p_output1[242]=50;
  p_output1[243]=51;
  p_output1[244]=5;
  p_output1[245]=17;
  p_output1[246]=19;
  p_output1[247]=21;
  p_output1[248]=26;
  p_output1[249]=38;
  p_output1[250]=40;
  p_output1[251]=42;
  p_output1[252]=43;
  p_output1[253]=44;
  p_output1[254]=52;
  p_output1[255]=53;
  p_output1[256]=54;
  p_output1[257]=55;
  p_output1[258]=56;
  p_output1[259]=57;
  p_output1[260]=58;
  p_output1[261]=5;
  p_output1[262]=17;
  p_output1[263]=19;
  p_output1[264]=21;
  p_output1[265]=26;
  p_output1[266]=37;
  p_output1[267]=38;
  p_output1[268]=40;
  p_output1[269]=42;
  p_output1[270]=43;
  p_output1[271]=44;
  p_output1[272]=59;
  p_output1[273]=60;
  p_output1[274]=61;
  p_output1[275]=62;
  p_output1[276]=63;
  p_output1[277]=64;
  p_output1[278]=65;
  p_output1[279]=5;
  p_output1[280]=17;
  p_output1[281]=19;
  p_output1[282]=21;
  p_output1[283]=26;
  p_output1[284]=37;
  p_output1[285]=38;
  p_output1[286]=39;
  p_output1[287]=40;
  p_output1[288]=42;
  p_output1[289]=43;
  p_output1[290]=44;
  p_output1[291]=66;
  p_output1[292]=67;
  p_output1[293]=68;
  p_output1[294]=69;
  p_output1[295]=70;
  p_output1[296]=71;
  p_output1[297]=72;
  p_output1[298]=5;
  p_output1[299]=17;
  p_output1[300]=19;
  p_output1[301]=21;
  p_output1[302]=26;
  p_output1[303]=38;
  p_output1[304]=40;
  p_output1[305]=41;
  p_output1[306]=42;
  p_output1[307]=43;
  p_output1[308]=44;
  p_output1[309]=73;
  p_output1[310]=74;
  p_output1[311]=75;
  p_output1[312]=76;
  p_output1[313]=77;
  p_output1[314]=78;
  p_output1[315]=79;
  p_output1[316]=5;
  p_output1[317]=17;
  p_output1[318]=19;
  p_output1[319]=21;
  p_output1[320]=26;
  p_output1[321]=36;
  p_output1[322]=38;
  p_output1[323]=40;
  p_output1[324]=42;
  p_output1[325]=43;
  p_output1[326]=44;
  p_output1[327]=80;
  p_output1[328]=81;
  p_output1[329]=82;
  p_output1[330]=83;
  p_output1[331]=84;
  p_output1[332]=85;
  p_output1[333]=86;
  p_output1[334]=5;
  p_output1[335]=17;
  p_output1[336]=19;
  p_output1[337]=21;
  p_output1[338]=26;
  p_output1[339]=34;
  p_output1[340]=36;
  p_output1[341]=38;
  p_output1[342]=40;
  p_output1[343]=42;
  p_output1[344]=43;
  p_output1[345]=44;
  p_output1[346]=87;
  p_output1[347]=88;
  p_output1[348]=89;
  p_output1[349]=90;
  p_output1[350]=91;
  p_output1[351]=92;
  p_output1[352]=93;
  p_output1[353]=5;
  p_output1[354]=17;
  p_output1[355]=19;
  p_output1[356]=21;
  p_output1[357]=26;
  p_output1[358]=32;
  p_output1[359]=38;
  p_output1[360]=40;
  p_output1[361]=42;
  p_output1[362]=43;
  p_output1[363]=44;
  p_output1[364]=94;
  p_output1[365]=95;
  p_output1[366]=96;
  p_output1[367]=97;
  p_output1[368]=98;
  p_output1[369]=99;
  p_output1[370]=100;
  p_output1[371]=5;
  p_output1[372]=17;
  p_output1[373]=19;
  p_output1[374]=21;
  p_output1[375]=26;
  p_output1[376]=33;
  p_output1[377]=38;
  p_output1[378]=39;
  p_output1[379]=40;
  p_output1[380]=42;
  p_output1[381]=43;
  p_output1[382]=44;
  p_output1[383]=101;
  p_output1[384]=102;
  p_output1[385]=103;
  p_output1[386]=104;
  p_output1[387]=105;
  p_output1[388]=106;
  p_output1[389]=107;
  p_output1[390]=4;
  p_output1[391]=5;
  p_output1[392]=6;
  p_output1[393]=10;
  p_output1[394]=11;
  p_output1[395]=12;
  p_output1[396]=13;
  p_output1[397]=14;
  p_output1[398]=15;
  p_output1[399]=17;
  p_output1[400]=19;
  p_output1[401]=21;
  p_output1[402]=25;
  p_output1[403]=26;
  p_output1[404]=27;
  p_output1[405]=31;
  p_output1[406]=32;
  p_output1[407]=33;
  p_output1[408]=34;
  p_output1[409]=35;
  p_output1[410]=36;
  p_output1[411]=38;
  p_output1[412]=40;
  p_output1[413]=42;
  p_output1[414]=43;
  p_output1[415]=44;
  p_output1[416]=108;
  p_output1[417]=109;
  p_output1[418]=110;
  p_output1[419]=111;
  p_output1[420]=112;
  p_output1[421]=113;
  p_output1[422]=114;
  p_output1[423]=4;
  p_output1[424]=5;
  p_output1[425]=6;
  p_output1[426]=11;
  p_output1[427]=12;
  p_output1[428]=13;
  p_output1[429]=14;
  p_output1[430]=15;
  p_output1[431]=17;
  p_output1[432]=19;
  p_output1[433]=21;
  p_output1[434]=25;
  p_output1[435]=26;
  p_output1[436]=27;
  p_output1[437]=32;
  p_output1[438]=33;
  p_output1[439]=34;
  p_output1[440]=35;
  p_output1[441]=36;
  p_output1[442]=38;
  p_output1[443]=40;
  p_output1[444]=42;
  p_output1[445]=43;
  p_output1[446]=44;
  p_output1[447]=115;
  p_output1[448]=116;
  p_output1[449]=117;
  p_output1[450]=118;
  p_output1[451]=119;
  p_output1[452]=120;
  p_output1[453]=121;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 227, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_y2Vel_RightTL3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void Js_y2Vel_RightTL3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:58:41 GMT-04:00
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
  p_output1[2]=2;
  p_output1[3]=2;
  p_output1[4]=3;
  p_output1[5]=3;
  p_output1[6]=4;
  p_output1[7]=4;
  p_output1[8]=5;
  p_output1[9]=5;
  p_output1[10]=6;
  p_output1[11]=6;
  p_output1[12]=7;
  p_output1[13]=7;
  p_output1[14]=8;
  p_output1[15]=8;
  p_output1[16]=9;
  p_output1[17]=9;
  p_output1[18]=10;
  p_output1[19]=10;
  p_output1[20]=11;
  p_output1[21]=11;
  p_output1[22]=12;
  p_output1[23]=12;
  p_output1[24]=13;
  p_output1[25]=13;
  p_output1[26]=14;
  p_output1[27]=14;
  p_output1[28]=15;
  p_output1[29]=15;
  p_output1[30]=16;
  p_output1[31]=16;
  p_output1[32]=17;
  p_output1[33]=17;
  p_output1[34]=18;
  p_output1[35]=18;
  p_output1[36]=19;
  p_output1[37]=19;
  p_output1[38]=20;
  p_output1[39]=20;
  p_output1[40]=21;
  p_output1[41]=21;
  p_output1[42]=22;
  p_output1[43]=22;
  p_output1[44]=23;
  p_output1[45]=23;
  p_output1[46]=24;
  p_output1[47]=24;
  p_output1[48]=25;
  p_output1[49]=25;
  p_output1[50]=26;
  p_output1[51]=26;
  p_output1[52]=27;
  p_output1[53]=27;
  p_output1[54]=28;
  p_output1[55]=28;
  p_output1[56]=29;
  p_output1[57]=29;
  p_output1[58]=30;
  p_output1[59]=30;
  p_output1[60]=31;
  p_output1[61]=31;
  p_output1[62]=32;
  p_output1[63]=32;
  p_output1[64]=33;
  p_output1[65]=33;
  p_output1[66]=34;
  p_output1[67]=34;
  p_output1[68]=35;
  p_output1[69]=35;
  p_output1[70]=36;
  p_output1[71]=36;
  p_output1[72]=37;
  p_output1[73]=37;
  p_output1[74]=38;
  p_output1[75]=38;
  p_output1[76]=39;
  p_output1[77]=39;
  p_output1[78]=40;
  p_output1[79]=40;
  p_output1[80]=41;
  p_output1[81]=41;
  p_output1[82]=42;
  p_output1[83]=42;
  p_output1[84]=43;
  p_output1[85]=43;
  p_output1[86]=44;
  p_output1[87]=44;
  p_output1[88]=45;
  p_output1[89]=45;
  p_output1[90]=46;
  p_output1[91]=46;
  p_output1[92]=47;
  p_output1[93]=47;
  p_output1[94]=48;
  p_output1[95]=48;
  p_output1[96]=49;
  p_output1[97]=49;
  p_output1[98]=50;
  p_output1[99]=50;
  p_output1[100]=51;
  p_output1[101]=51;
  p_output1[102]=52;
  p_output1[103]=52;
  p_output1[104]=53;
  p_output1[105]=53;
  p_output1[106]=54;
  p_output1[107]=54;
  p_output1[108]=55;
  p_output1[109]=55;
  p_output1[110]=56;
  p_output1[111]=56;
  p_output1[112]=57;
  p_output1[113]=57;
  p_output1[114]=58;
  p_output1[115]=58;
  p_output1[116]=59;
  p_output1[117]=59;
  p_output1[118]=60;
  p_output1[119]=60;
  p_output1[120]=61;
  p_output1[121]=61;
  p_output1[122]=62;
  p_output1[123]=62;
  p_output1[124]=63;
  p_output1[125]=63;
  p_output1[126]=64;
  p_output1[127]=64;
  p_output1[128]=65;
  p_output1[129]=65;
  p_output1[130]=66;
  p_output1[131]=66;
  p_output1[132]=67;
  p_output1[133]=67;
  p_output1[134]=68;
  p_output1[135]=68;
  p_output1[136]=69;
  p_output1[137]=69;
  p_output1[138]=70;
  p_output1[139]=70;
  p_output1[140]=71;
  p_output1[141]=71;
  p_output1[142]=72;
  p_output1[143]=72;
  p_output1[144]=73;
  p_output1[145]=73;
  p_output1[146]=74;
  p_output1[147]=74;
  p_output1[148]=75;
  p_output1[149]=75;
  p_output1[150]=76;
  p_output1[151]=76;
  p_output1[152]=77;
  p_output1[153]=77;
  p_output1[154]=1;
  p_output1[155]=78;
  p_output1[156]=2;
  p_output1[157]=79;
  p_output1[158]=3;
  p_output1[159]=80;
  p_output1[160]=4;
  p_output1[161]=81;
  p_output1[162]=5;
  p_output1[163]=82;
  p_output1[164]=6;
  p_output1[165]=83;
  p_output1[166]=7;
  p_output1[167]=84;
  p_output1[168]=8;
  p_output1[169]=85;
  p_output1[170]=9;
  p_output1[171]=86;
  p_output1[172]=10;
  p_output1[173]=87;
  p_output1[174]=11;
  p_output1[175]=88;
  p_output1[176]=12;
  p_output1[177]=89;
  p_output1[178]=13;
  p_output1[179]=90;
  p_output1[180]=14;
  p_output1[181]=91;
  p_output1[182]=15;
  p_output1[183]=92;
  p_output1[184]=16;
  p_output1[185]=93;
  p_output1[186]=17;
  p_output1[187]=94;
  p_output1[188]=18;
  p_output1[189]=95;
  p_output1[190]=19;
  p_output1[191]=96;
  p_output1[192]=20;
  p_output1[193]=97;
  p_output1[194]=21;
  p_output1[195]=98;
  p_output1[196]=22;
  p_output1[197]=99;
  p_output1[198]=23;
  p_output1[199]=100;
  p_output1[200]=24;
  p_output1[201]=101;
  p_output1[202]=25;
  p_output1[203]=102;
  p_output1[204]=26;
  p_output1[205]=103;
  p_output1[206]=27;
  p_output1[207]=104;
  p_output1[208]=28;
  p_output1[209]=105;
  p_output1[210]=29;
  p_output1[211]=106;
  p_output1[212]=30;
  p_output1[213]=107;
  p_output1[214]=31;
  p_output1[215]=108;
  p_output1[216]=32;
  p_output1[217]=109;
  p_output1[218]=33;
  p_output1[219]=110;
  p_output1[220]=34;
  p_output1[221]=111;
  p_output1[222]=35;
  p_output1[223]=112;
  p_output1[224]=36;
  p_output1[225]=113;
  p_output1[226]=37;
  p_output1[227]=114;
  p_output1[228]=38;
  p_output1[229]=115;
  p_output1[230]=39;
  p_output1[231]=116;
  p_output1[232]=40;
  p_output1[233]=117;
  p_output1[234]=41;
  p_output1[235]=118;
  p_output1[236]=42;
  p_output1[237]=119;
  p_output1[238]=43;
  p_output1[239]=120;
  p_output1[240]=44;
  p_output1[241]=121;
  p_output1[242]=45;
  p_output1[243]=122;
  p_output1[244]=46;
  p_output1[245]=123;
  p_output1[246]=47;
  p_output1[247]=124;
  p_output1[248]=48;
  p_output1[249]=125;
  p_output1[250]=49;
  p_output1[251]=126;
  p_output1[252]=50;
  p_output1[253]=127;
  p_output1[254]=51;
  p_output1[255]=128;
  p_output1[256]=52;
  p_output1[257]=129;
  p_output1[258]=53;
  p_output1[259]=130;
  p_output1[260]=54;
  p_output1[261]=131;
  p_output1[262]=55;
  p_output1[263]=132;
  p_output1[264]=56;
  p_output1[265]=133;
  p_output1[266]=57;
  p_output1[267]=134;
  p_output1[268]=58;
  p_output1[269]=135;
  p_output1[270]=59;
  p_output1[271]=136;
  p_output1[272]=60;
  p_output1[273]=137;
  p_output1[274]=61;
  p_output1[275]=138;
  p_output1[276]=62;
  p_output1[277]=139;
  p_output1[278]=63;
  p_output1[279]=140;
  p_output1[280]=64;
  p_output1[281]=141;
  p_output1[282]=65;
  p_output1[283]=142;
  p_output1[284]=66;
  p_output1[285]=143;
  p_output1[286]=67;
  p_output1[287]=144;
  p_output1[288]=68;
  p_output1[289]=145;
  p_output1[290]=69;
  p_output1[291]=146;
  p_output1[292]=70;
  p_output1[293]=147;
  p_output1[294]=71;
  p_output1[295]=148;
  p_output1[296]=72;
  p_output1[297]=149;
  p_output1[298]=73;
  p_output1[299]=150;
  p_output1[300]=74;
  p_output1[301]=151;
  p_output1[302]=75;
  p_output1[303]=152;
  p_output1[304]=76;
  p_output1[305]=153;
  p_output1[306]=77;
  p_output1[307]=154;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 154, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_aCont_RightTL3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void Js_aCont_RightTL3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

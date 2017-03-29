/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 14:00:56 GMT-05:00
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
  p_output1[63]=4;
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
  p_output1[85]=5;
  p_output1[86]=5;
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
  p_output1[108]=6;
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
  p_output1[130]=7;
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
  p_output1[152]=5;
  p_output1[153]=17;
  p_output1[154]=19;
  p_output1[155]=21;
  p_output1[156]=26;
  p_output1[157]=38;
  p_output1[158]=40;
  p_output1[159]=42;
  p_output1[160]=47;
  p_output1[161]=59;
  p_output1[162]=61;
  p_output1[163]=63;
  p_output1[164]=64;
  p_output1[165]=65;
  p_output1[166]=66;
  p_output1[167]=67;
  p_output1[168]=68;
  p_output1[169]=69;
  p_output1[170]=70;
  p_output1[171]=71;
  p_output1[172]=72;
  p_output1[173]=5;
  p_output1[174]=17;
  p_output1[175]=19;
  p_output1[176]=21;
  p_output1[177]=26;
  p_output1[178]=38;
  p_output1[179]=40;
  p_output1[180]=42;
  p_output1[181]=47;
  p_output1[182]=59;
  p_output1[183]=61;
  p_output1[184]=63;
  p_output1[185]=64;
  p_output1[186]=65;
  p_output1[187]=73;
  p_output1[188]=74;
  p_output1[189]=75;
  p_output1[190]=76;
  p_output1[191]=77;
  p_output1[192]=78;
  p_output1[193]=79;
  p_output1[194]=5;
  p_output1[195]=17;
  p_output1[196]=19;
  p_output1[197]=21;
  p_output1[198]=26;
  p_output1[199]=38;
  p_output1[200]=40;
  p_output1[201]=42;
  p_output1[202]=47;
  p_output1[203]=59;
  p_output1[204]=61;
  p_output1[205]=63;
  p_output1[206]=64;
  p_output1[207]=65;
  p_output1[208]=80;
  p_output1[209]=81;
  p_output1[210]=82;
  p_output1[211]=83;
  p_output1[212]=84;
  p_output1[213]=85;
  p_output1[214]=86;
  p_output1[215]=5;
  p_output1[216]=17;
  p_output1[217]=19;
  p_output1[218]=21;
  p_output1[219]=26;
  p_output1[220]=38;
  p_output1[221]=40;
  p_output1[222]=42;
  p_output1[223]=47;
  p_output1[224]=58;
  p_output1[225]=59;
  p_output1[226]=61;
  p_output1[227]=63;
  p_output1[228]=64;
  p_output1[229]=65;
  p_output1[230]=87;
  p_output1[231]=88;
  p_output1[232]=89;
  p_output1[233]=90;
  p_output1[234]=91;
  p_output1[235]=92;
  p_output1[236]=93;
  p_output1[237]=5;
  p_output1[238]=17;
  p_output1[239]=19;
  p_output1[240]=21;
  p_output1[241]=26;
  p_output1[242]=38;
  p_output1[243]=40;
  p_output1[244]=42;
  p_output1[245]=47;
  p_output1[246]=58;
  p_output1[247]=59;
  p_output1[248]=60;
  p_output1[249]=61;
  p_output1[250]=63;
  p_output1[251]=64;
  p_output1[252]=65;
  p_output1[253]=94;
  p_output1[254]=95;
  p_output1[255]=96;
  p_output1[256]=97;
  p_output1[257]=98;
  p_output1[258]=99;
  p_output1[259]=100;
  p_output1[260]=5;
  p_output1[261]=17;
  p_output1[262]=19;
  p_output1[263]=21;
  p_output1[264]=26;
  p_output1[265]=38;
  p_output1[266]=40;
  p_output1[267]=42;
  p_output1[268]=47;
  p_output1[269]=59;
  p_output1[270]=61;
  p_output1[271]=62;
  p_output1[272]=63;
  p_output1[273]=64;
  p_output1[274]=65;
  p_output1[275]=101;
  p_output1[276]=102;
  p_output1[277]=103;
  p_output1[278]=104;
  p_output1[279]=105;
  p_output1[280]=106;
  p_output1[281]=107;
  p_output1[282]=5;
  p_output1[283]=17;
  p_output1[284]=19;
  p_output1[285]=21;
  p_output1[286]=26;
  p_output1[287]=38;
  p_output1[288]=40;
  p_output1[289]=42;
  p_output1[290]=47;
  p_output1[291]=53;
  p_output1[292]=59;
  p_output1[293]=61;
  p_output1[294]=63;
  p_output1[295]=64;
  p_output1[296]=65;
  p_output1[297]=108;
  p_output1[298]=109;
  p_output1[299]=110;
  p_output1[300]=111;
  p_output1[301]=112;
  p_output1[302]=113;
  p_output1[303]=114;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 152, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_y2Acc_RightHS3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void Js_y2Acc_RightHS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

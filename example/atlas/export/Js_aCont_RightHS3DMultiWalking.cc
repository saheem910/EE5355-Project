/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 14:01:02 GMT-05:00
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
  p_output1[98]=1;
  p_output1[99]=50;
  p_output1[100]=2;
  p_output1[101]=51;
  p_output1[102]=3;
  p_output1[103]=52;
  p_output1[104]=4;
  p_output1[105]=53;
  p_output1[106]=5;
  p_output1[107]=54;
  p_output1[108]=6;
  p_output1[109]=55;
  p_output1[110]=7;
  p_output1[111]=56;
  p_output1[112]=8;
  p_output1[113]=57;
  p_output1[114]=9;
  p_output1[115]=58;
  p_output1[116]=10;
  p_output1[117]=59;
  p_output1[118]=11;
  p_output1[119]=60;
  p_output1[120]=12;
  p_output1[121]=61;
  p_output1[122]=13;
  p_output1[123]=62;
  p_output1[124]=14;
  p_output1[125]=63;
  p_output1[126]=15;
  p_output1[127]=64;
  p_output1[128]=16;
  p_output1[129]=65;
  p_output1[130]=17;
  p_output1[131]=66;
  p_output1[132]=18;
  p_output1[133]=67;
  p_output1[134]=19;
  p_output1[135]=68;
  p_output1[136]=20;
  p_output1[137]=69;
  p_output1[138]=21;
  p_output1[139]=70;
  p_output1[140]=22;
  p_output1[141]=71;
  p_output1[142]=23;
  p_output1[143]=72;
  p_output1[144]=24;
  p_output1[145]=73;
  p_output1[146]=25;
  p_output1[147]=74;
  p_output1[148]=26;
  p_output1[149]=75;
  p_output1[150]=27;
  p_output1[151]=76;
  p_output1[152]=28;
  p_output1[153]=77;
  p_output1[154]=29;
  p_output1[155]=78;
  p_output1[156]=30;
  p_output1[157]=79;
  p_output1[158]=31;
  p_output1[159]=80;
  p_output1[160]=32;
  p_output1[161]=81;
  p_output1[162]=33;
  p_output1[163]=82;
  p_output1[164]=34;
  p_output1[165]=83;
  p_output1[166]=35;
  p_output1[167]=84;
  p_output1[168]=36;
  p_output1[169]=85;
  p_output1[170]=37;
  p_output1[171]=86;
  p_output1[172]=38;
  p_output1[173]=87;
  p_output1[174]=39;
  p_output1[175]=88;
  p_output1[176]=40;
  p_output1[177]=89;
  p_output1[178]=41;
  p_output1[179]=90;
  p_output1[180]=42;
  p_output1[181]=91;
  p_output1[182]=43;
  p_output1[183]=92;
  p_output1[184]=44;
  p_output1[185]=93;
  p_output1[186]=45;
  p_output1[187]=94;
  p_output1[188]=46;
  p_output1[189]=95;
  p_output1[190]=47;
  p_output1[191]=96;
  p_output1[192]=48;
  p_output1[193]=97;
  p_output1[194]=49;
  p_output1[195]=98;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 98, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_aCont_RightHS3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void Js_aCont_RightHS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

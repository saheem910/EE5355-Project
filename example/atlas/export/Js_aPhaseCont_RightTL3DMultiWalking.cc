/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:59:28 GMT-05:00
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
  p_output1[84]=1;
  p_output1[85]=85;
  p_output1[86]=2;
  p_output1[87]=86;
  p_output1[88]=3;
  p_output1[89]=87;
  p_output1[90]=4;
  p_output1[91]=88;
  p_output1[92]=5;
  p_output1[93]=89;
  p_output1[94]=6;
  p_output1[95]=90;
  p_output1[96]=7;
  p_output1[97]=91;
  p_output1[98]=8;
  p_output1[99]=92;
  p_output1[100]=9;
  p_output1[101]=93;
  p_output1[102]=10;
  p_output1[103]=94;
  p_output1[104]=11;
  p_output1[105]=95;
  p_output1[106]=12;
  p_output1[107]=96;
  p_output1[108]=13;
  p_output1[109]=97;
  p_output1[110]=14;
  p_output1[111]=98;
  p_output1[112]=15;
  p_output1[113]=99;
  p_output1[114]=16;
  p_output1[115]=100;
  p_output1[116]=17;
  p_output1[117]=101;
  p_output1[118]=18;
  p_output1[119]=102;
  p_output1[120]=19;
  p_output1[121]=103;
  p_output1[122]=20;
  p_output1[123]=104;
  p_output1[124]=21;
  p_output1[125]=105;
  p_output1[126]=22;
  p_output1[127]=106;
  p_output1[128]=23;
  p_output1[129]=107;
  p_output1[130]=24;
  p_output1[131]=108;
  p_output1[132]=25;
  p_output1[133]=109;
  p_output1[134]=26;
  p_output1[135]=110;
  p_output1[136]=27;
  p_output1[137]=111;
  p_output1[138]=28;
  p_output1[139]=112;
  p_output1[140]=29;
  p_output1[141]=113;
  p_output1[142]=30;
  p_output1[143]=114;
  p_output1[144]=31;
  p_output1[145]=115;
  p_output1[146]=32;
  p_output1[147]=116;
  p_output1[148]=33;
  p_output1[149]=117;
  p_output1[150]=34;
  p_output1[151]=118;
  p_output1[152]=35;
  p_output1[153]=119;
  p_output1[154]=50;
  p_output1[155]=120;
  p_output1[156]=51;
  p_output1[157]=121;
  p_output1[158]=52;
  p_output1[159]=122;
  p_output1[160]=53;
  p_output1[161]=123;
  p_output1[162]=54;
  p_output1[163]=124;
  p_output1[164]=55;
  p_output1[165]=125;
  p_output1[166]=56;
  p_output1[167]=126;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 84, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_aPhaseCont_RightTL3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void Js_aPhaseCont_RightTL3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

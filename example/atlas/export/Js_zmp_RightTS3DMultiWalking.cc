/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:58:02 GMT-05:00
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
  p_output1[1]=2;
  p_output1[2]=2;
  p_output1[3]=3;
  p_output1[4]=3;
  p_output1[5]=4;
  p_output1[6]=4;
  p_output1[7]=5;
  p_output1[8]=5;
  p_output1[9]=6;
  p_output1[10]=6;
  p_output1[11]=7;
  p_output1[12]=7;
  p_output1[13]=8;
  p_output1[14]=9;
  p_output1[15]=9;
  p_output1[16]=10;
  p_output1[17]=11;
  p_output1[18]=11;
  p_output1[19]=12;
  p_output1[20]=12;
  p_output1[21]=13;
  p_output1[22]=13;
  p_output1[23]=14;
  p_output1[24]=14;
  p_output1[25]=15;
  p_output1[26]=15;
  p_output1[27]=16;
  p_output1[28]=16;
  p_output1[29]=3;
  p_output1[30]=1;
  p_output1[31]=3;
  p_output1[32]=1;
  p_output1[33]=3;
  p_output1[34]=2;
  p_output1[35]=3;
  p_output1[36]=2;
  p_output1[37]=3;
  p_output1[38]=3;
  p_output1[39]=4;
  p_output1[40]=3;
  p_output1[41]=4;
  p_output1[42]=5;
  p_output1[43]=3;
  p_output1[44]=5;
  p_output1[45]=9;
  p_output1[46]=7;
  p_output1[47]=9;
  p_output1[48]=7;
  p_output1[49]=9;
  p_output1[50]=8;
  p_output1[51]=9;
  p_output1[52]=8;
  p_output1[53]=9;
  p_output1[54]=9;
  p_output1[55]=10;
  p_output1[56]=9;
  p_output1[57]=10;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 29, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_zmp_RightTS3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void Js_zmp_RightTS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

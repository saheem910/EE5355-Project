/*
 * Automatically Generated from Mathematica.
 * Mon 10 Apr 2017 15:18:03 GMT-04:00
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
static void output1(double *p_output1,const double *t,const double *a)
{
  double t1;
  double t2;
  double t3;
  double t4;
  double t5;
  double t6;
  double t7;
  double t8;
  double t9;
  double t10;
  double t11;
  double t12;
  t1 = -1.*t[0];
  t2 = 1. + t1;
  t3 = Power(t2,6);
  t4 = Power(t2,5);
  t5 = Power(t2,4);
  t6 = Power(t[0],2);
  t7 = Power(t2,3);
  t8 = Power(t[0],3);
  t9 = Power(t2,2);
  t10 = Power(t[0],4);
  t11 = Power(t[0],5);
  t12 = Power(t[0],6);
  p_output1[0]=t3*a[0] + 15.*t5*t6*a[2] + 20.*t7*t8*a[3] + 15.*t10*t9*a[4] + 6.*t11*t2*a[5] + t12*a[6] + 6.*t4*a[1]*t[0];
  p_output1[1]=t3*a[7] + 15.*t5*t6*a[9] + 20.*t7*t8*a[10] + 15.*t10*t9*a[11] + 6.*t11*t2*a[12] + t12*a[13] + 6.*t4*a[8]*t[0];
  p_output1[2]=t3*a[14] + 15.*t5*t6*a[16] + 20.*t7*t8*a[17] + 15.*t10*t9*a[18] + 6.*t11*t2*a[19] + t12*a[20] + 6.*t4*a[15]*t[0];
  p_output1[3]=t3*a[21] + 15.*t5*t6*a[23] + 20.*t7*t8*a[24] + 15.*t10*t9*a[25] + 6.*t11*t2*a[26] + t12*a[27] + 6.*t4*a[22]*t[0];
  p_output1[4]=t3*a[28] + 15.*t5*t6*a[30] + 20.*t7*t8*a[31] + 15.*t10*t9*a[32] + 6.*t11*t2*a[33] + t12*a[34] + 6.*t4*a[29]*t[0];
  p_output1[5]=t3*a[35] + 15.*t5*t6*a[37] + 20.*t7*t8*a[38] + 15.*t10*t9*a[39] + 6.*t11*t2*a[40] + t12*a[41] + 6.*t4*a[36]*t[0];
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

  double *t,*a;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (t,a).");
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
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "t is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 42 && ncols == 1) && 
      !(mrows == 1 && ncols == 42))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "a is wrong.");
    }

  /*  Assign pointers to each input.  */
  t = mxGetPr(prhs[0]);
  a = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,t,a);


}

#else // MATLAB_MEX_FILE

#include "yd2_RightTS3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void yd2_RightTS3DMultiWalking_raw(double *p_output1, const double *t,const double *a)
{
  // Call Subroutines
  output1(p_output1, t, a);

}

}
}

#endif // MATLAB_MEX_FILE

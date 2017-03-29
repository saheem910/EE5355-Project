/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:57:49 GMT-05:00
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
  double t13;
  double t14;
  double t15;
  double t16;
  double t17;
  double t18;
  double t19;
  double t20;
  double t21;
  double t22;
  double t23;
  double t24;
  double t25;
  double t26;
  double t27;
  double t28;
  double t29;
  double t30;
  double t31;
  double t32;
  t1 = var[22];
  t2 = -1.*t1;
  t3 = var[20];
  t4 = var[21];
  t5 = t4 + t2;
  t6 = 1/t5;
  t7 = var[16];
  t8 = 0.07645*t7;
  t9 = var[18];
  t10 = 0.87245*t9;
  t11 = 0.49845*t3;
  t12 = var[4];
  t13 = 0.87245*t12;
  t14 = t2 + t8 + t10 + t11 + t13;
  t15 = -1.*t6*t14;
  t16 = 1. + t15;
  t17 = Power(t16,6);
  t18 = Power(t16,5);
  t19 = Power(t5,-2);
  t20 = Power(t16,4);
  t21 = Power(t14,2);
  t22 = Power(t5,-3);
  t23 = Power(t16,3);
  t24 = Power(t14,3);
  t25 = Power(t5,-4);
  t26 = Power(t16,2);
  t27 = Power(t14,4);
  t28 = Power(t5,-5);
  t29 = Power(t14,5);
  t30 = Power(t5,-6);
  t31 = Power(t14,6);
  t32 = var[15];
  p_output1[0]=t3 - 1.*t17*var[23] - 6.*t14*t18*t6*var[24] - 15.*t19*t20*t21*var[25] - 20.*t22*t23*t24*var[26] - 15.*t25*t26*t27*var[27] - 6.*t16*t28*t29*var[28] - 1.*t30*t31*var[29];
  p_output1[1]=-1.*t3 - 1.*t7 - 1.*t9 - 1.*t17*var[30] - 6.*t14*t18*t6*var[31] - 15.*t19*t20*t21*var[32] - 20.*t22*t23*t24*var[33] - 15.*t25*t26*t27*var[34] - 6.*t16*t28*t29*var[35] - 1.*t30*t31*var[36];
  p_output1[2]=t32 - 1.*t17*var[37] - 6.*t14*t18*t6*var[38] - 15.*t19*t20*t21*var[39] - 20.*t22*t23*t24*var[40] - 15.*t25*t26*t27*var[41] - 6.*t16*t28*t29*var[42] - 1.*t30*t31*var[43];
  p_output1[3]=-1.*t32 - 1.*var[17] - 1.*t17*var[44] - 6.*t14*t18*t6*var[45] - 15.*t19*t20*t21*var[46] - 20.*t22*t23*t24*var[47] - 15.*t25*t26*t27*var[48] - 6.*t16*t28*t29*var[49] - 1.*t30*t31*var[50];
  p_output1[4]=var[19] - 1.*t17*var[51] - 6.*t14*t18*t6*var[52] - 15.*t19*t20*t21*var[53] - 20.*t22*t23*t24*var[54] - 15.*t25*t26*t27*var[55] - 6.*t16*t28*t29*var[56] - 1.*t30*t31*var[57];
  p_output1[5]=var[14] - 1.*t17*var[58] - 6.*t14*t18*t6*var[59] - 15.*t19*t20*t21*var[60] - 20.*t22*t23*t24*var[61] - 15.*t25*t26*t27*var[62] - 6.*t16*t28*t29*var[63] - 1.*t30*t31*var[64];
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
    ( !(mrows == 65 && ncols == 1) && 
      !(mrows == 1 && ncols == 65))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "f_y2Pos_RightTS3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void f_y2Pos_RightTS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

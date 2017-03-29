/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:43 GMT-04:00
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
  double t33;
  double t34;
  double t35;
  double t36;
  double t37;
  t1 = var[21];
  t2 = Power(t1,2);
  t3 = var[14];
  t4 = var[22];
  t5 = Power(t4,2);
  t6 = var[15];
  t7 = Power(t3,2);
  t8 = t2*t7;
  t9 = Power(t6,2);
  t10 = t5*t9;
  t11 = var[23];
  t12 = Power(t11,2);
  t13 = var[16];
  t14 = Power(t13,2);
  t15 = t12*t14;
  t16 = var[25];
  t17 = Power(t16,2);
  t18 = var[17];
  t19 = Power(t18,2);
  t20 = t17*t19;
  t21 = var[26];
  t22 = Power(t21,2);
  t23 = var[18];
  t24 = Power(t23,2);
  t25 = t22*t24;
  t26 = var[27];
  t27 = Power(t26,2);
  t28 = var[19];
  t29 = Power(t28,2);
  t30 = t27*t29;
  t31 = var[24];
  t32 = Power(t31,2);
  t33 = var[20];
  t34 = Power(t33,2);
  t35 = t32*t34;
  t36 = t8 + t10 + t15 + t20 + t25 + t30 + t35;
  t37 = 1/Sqrt(t36);
  p_output1[0]=t2*t3*t37;
  p_output1[1]=t37*t5*t6;
  p_output1[2]=t12*t13*t37;
  p_output1[3]=t17*t18*t37;
  p_output1[4]=t22*t23*t37;
  p_output1[5]=t27*t28*t37;
  p_output1[6]=t32*t33*t37;
  p_output1[7]=t1*t37*t7;
  p_output1[8]=t37*t4*t9;
  p_output1[9]=t11*t14*t37;
  p_output1[10]=t31*t34*t37;
  p_output1[11]=t16*t19*t37;
  p_output1[12]=t21*t24*t37;
  p_output1[13]=t26*t29*t37;
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
    ( !(mrows == 28 && ncols == 1) && 
      !(mrows == 1 && ncols == 28))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "J_power_RightTS3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void J_power_RightTS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Mon 10 Apr 2017 15:18:23 GMT-04:00
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
  double t38;
  double t39;
  double t40;
  double t41;
  double t42;
  double t43;
  t1 = -1.*t[0];
  t2 = 1. + t1;
  t3 = Power(t2,4);
  t4 = a[1];
  t5 = Power(t2,3);
  t6 = a[2];
  t7 = Power(t2,2);
  t8 = Power(t[0],2);
  t9 = a[3];
  t10 = Power(t[0],3);
  t11 = a[4];
  t12 = Power(t[0],4);
  t13 = a[5];
  t14 = a[8];
  t15 = a[9];
  t16 = a[10];
  t17 = a[11];
  t18 = a[12];
  t19 = a[15];
  t20 = a[16];
  t21 = a[17];
  t22 = a[18];
  t23 = a[19];
  t24 = a[22];
  t25 = a[23];
  t26 = a[24];
  t27 = a[25];
  t28 = a[26];
  t29 = a[29];
  t30 = a[30];
  t31 = a[31];
  t32 = a[32];
  t33 = a[33];
  t34 = a[36];
  t35 = a[37];
  t36 = a[38];
  t37 = a[39];
  t38 = a[40];
  t39 = a[43];
  t40 = a[44];
  t41 = a[45];
  t42 = a[46];
  t43 = a[47];
  p_output1[0]=30.*t11*t12 - 60.*t12*t13 - 240.*t10*t11*t2 + 120.*t10*t13*t2 - 60.*t3*t4 + 30.*t3*t6 + 180.*t11*t7*t8 + 180.*t6*t7*t8 + 120.*t10*t2*t9 - 360.*t7*t8*t9 + 30.*t3*a[0] + 30.*t12*a[6] + 120.*t4*t5*t[0] - 240.*t5*t6*t[0] + 120.*t5*t9*t[0];
  p_output1[1]=30.*t12*t17 - 60.*t12*t18 + 120.*t10*t16*t2 - 240.*t10*t17*t2 + 120.*t10*t18*t2 - 60.*t14*t3 + 30.*t15*t3 + 180.*t15*t7*t8 - 360.*t16*t7*t8 + 180.*t17*t7*t8 + 30.*t3*a[7] + 30.*t12*a[13] + 120.*t14*t5*t[0] - 240.*t15*t5*t[0] + 120.*t16*t5*t[0];
  p_output1[2]=120.*t10*t2*t21 + 30.*t12*t22 - 240.*t10*t2*t22 - 60.*t12*t23 + 120.*t10*t2*t23 - 60.*t19*t3 + 30.*t20*t3 + 180.*t20*t7*t8 - 360.*t21*t7*t8 + 180.*t22*t7*t8 + 30.*t3*a[14] + 30.*t12*a[20] + 120.*t19*t5*t[0] - 240.*t20*t5*t[0] + 120.*t21*t5*t[0];
  p_output1[3]=120.*t10*t2*t26 + 30.*t12*t27 - 240.*t10*t2*t27 - 60.*t12*t28 + 120.*t10*t2*t28 - 60.*t24*t3 + 30.*t25*t3 + 180.*t25*t7*t8 - 360.*t26*t7*t8 + 180.*t27*t7*t8 + 30.*t3*a[21] + 30.*t12*a[27] + 120.*t24*t5*t[0] - 240.*t25*t5*t[0] + 120.*t26*t5*t[0];
  p_output1[4]=-60.*t29*t3 + 30.*t3*t30 + 120.*t10*t2*t31 + 30.*t12*t32 - 240.*t10*t2*t32 - 60.*t12*t33 + 120.*t10*t2*t33 + 180.*t30*t7*t8 - 360.*t31*t7*t8 + 180.*t32*t7*t8 + 30.*t3*a[28] + 30.*t12*a[34] + 120.*t29*t5*t[0] - 240.*t30*t5*t[0] + 120.*t31*t5*t[0];
  p_output1[5]=-60.*t3*t34 + 30.*t3*t35 + 120.*t10*t2*t36 + 30.*t12*t37 - 240.*t10*t2*t37 - 60.*t12*t38 + 120.*t10*t2*t38 + 180.*t35*t7*t8 - 360.*t36*t7*t8 + 180.*t37*t7*t8 + 30.*t3*a[35] + 30.*t12*a[41] + 120.*t34*t5*t[0] - 240.*t35*t5*t[0] + 120.*t36*t5*t[0];
  p_output1[6]=-60.*t3*t39 + 30.*t3*t40 + 120.*t10*t2*t41 + 30.*t12*t42 - 240.*t10*t2*t42 - 60.*t12*t43 + 120.*t10*t2*t43 + 180.*t40*t7*t8 - 360.*t41*t7*t8 + 180.*t42*t7*t8 + 30.*t3*a[42] + 30.*t12*a[48] + 120.*t39*t5*t[0] - 240.*t40*t5*t[0] + 120.*t41*t5*t[0];
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
    ( !(mrows == 49 && ncols == 1) && 
      !(mrows == 1 && ncols == 49))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "a is wrong.");
    }

  /*  Assign pointers to each input.  */
  t = mxGetPr(prhs[0]);
  a = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,t,a);


}

#else // MATLAB_MEX_FILE

#include "ddyd2_RightHS3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void ddyd2_RightHS3DMultiWalking_raw(double *p_output1, const double *t,const double *a)
{
  // Call Subroutines
  output1(p_output1, t, a);

}

}
}

#endif // MATLAB_MEX_FILE

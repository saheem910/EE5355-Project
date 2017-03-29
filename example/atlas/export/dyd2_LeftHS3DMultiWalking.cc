/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:29:44 GMT-04:00
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
  double t44;
  double t45;
  t1 = -1.*t[0];
  t2 = 1. + t1;
  t3 = Power(t2,5);
  t4 = a[1];
  t5 = Power(t2,4);
  t6 = a[2];
  t7 = Power(t2,3);
  t8 = Power(t[0],2);
  t9 = a[3];
  t10 = Power(t2,2);
  t11 = Power(t[0],3);
  t12 = a[4];
  t13 = Power(t[0],4);
  t14 = a[5];
  t15 = Power(t[0],5);
  t16 = a[8];
  t17 = a[9];
  t18 = a[10];
  t19 = a[11];
  t20 = a[12];
  t21 = a[15];
  t22 = a[16];
  t23 = a[17];
  t24 = a[18];
  t25 = a[19];
  t26 = a[22];
  t27 = a[23];
  t28 = a[24];
  t29 = a[25];
  t30 = a[26];
  t31 = a[29];
  t32 = a[30];
  t33 = a[31];
  t34 = a[32];
  t35 = a[33];
  t36 = a[36];
  t37 = a[37];
  t38 = a[38];
  t39 = a[39];
  t40 = a[40];
  t41 = a[43];
  t42 = a[44];
  t43 = a[45];
  t44 = a[46];
  t45 = a[47];
  p_output1[0]=60.*t10*t11*t12 - 6.*t14*t15 - 30.*t12*t13*t2 + 30.*t13*t14*t2 + 6.*t3*t4 - 60.*t6*t7*t8 - 60.*t10*t11*t9 + 60.*t7*t8*t9 - 6.*t3*a[0] + 6.*t15*a[6] - 30.*t4*t5*t[0] + 30.*t5*t6*t[0];
  p_output1[1]=-60.*t10*t11*t18 + 60.*t10*t11*t19 - 30.*t13*t19*t2 - 6.*t15*t20 + 30.*t13*t2*t20 + 6.*t16*t3 - 60.*t17*t7*t8 + 60.*t18*t7*t8 - 6.*t3*a[7] + 6.*t15*a[13] - 30.*t16*t5*t[0] + 30.*t17*t5*t[0];
  p_output1[2]=-60.*t10*t11*t23 + 60.*t10*t11*t24 - 30.*t13*t2*t24 - 6.*t15*t25 + 30.*t13*t2*t25 + 6.*t21*t3 - 60.*t22*t7*t8 + 60.*t23*t7*t8 - 6.*t3*a[14] + 6.*t15*a[20] - 30.*t21*t5*t[0] + 30.*t22*t5*t[0];
  p_output1[3]=-60.*t10*t11*t28 + 60.*t10*t11*t29 - 30.*t13*t2*t29 + 6.*t26*t3 - 6.*t15*t30 + 30.*t13*t2*t30 - 60.*t27*t7*t8 + 60.*t28*t7*t8 - 6.*t3*a[21] + 6.*t15*a[27] - 30.*t26*t5*t[0] + 30.*t27*t5*t[0];
  p_output1[4]=6.*t3*t31 - 60.*t10*t11*t33 + 60.*t10*t11*t34 - 30.*t13*t2*t34 - 6.*t15*t35 + 30.*t13*t2*t35 - 60.*t32*t7*t8 + 60.*t33*t7*t8 - 6.*t3*a[28] + 6.*t15*a[34] - 30.*t31*t5*t[0] + 30.*t32*t5*t[0];
  p_output1[5]=6.*t3*t36 - 60.*t10*t11*t38 + 60.*t10*t11*t39 - 30.*t13*t2*t39 - 6.*t15*t40 + 30.*t13*t2*t40 - 60.*t37*t7*t8 + 60.*t38*t7*t8 - 6.*t3*a[35] + 6.*t15*a[41] - 30.*t36*t5*t[0] + 30.*t37*t5*t[0];
  p_output1[6]=6.*t3*t41 - 60.*t10*t11*t43 + 60.*t10*t11*t44 - 30.*t13*t2*t44 - 6.*t15*t45 + 30.*t13*t2*t45 - 60.*t42*t7*t8 + 60.*t43*t7*t8 - 6.*t3*a[42] + 6.*t15*a[48] - 30.*t41*t5*t[0] + 30.*t42*t5*t[0];
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

#include "dyd2_LeftHS3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void dyd2_LeftHS3DMultiWalking_raw(double *p_output1, const double *t,const double *a)
{
  // Call Subroutines
  output1(p_output1, t, a);

}

}
}

#endif // MATLAB_MEX_FILE

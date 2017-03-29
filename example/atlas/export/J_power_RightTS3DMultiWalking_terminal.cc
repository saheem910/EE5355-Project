/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:58:11 GMT-05:00
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
static void output1(double *p_output1,const double *var,const double *auxdata)
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
  t1 = -1. + auxdata[0];
  t2 = 1/t1;
  t3 = var[22];
  t4 = Power(t3,2);
  t5 = var[15];
  t6 = Power(t5,2);
  t7 = t4*t6;
  t8 = var[23];
  t9 = Power(t8,2);
  t10 = var[16];
  t11 = Power(t10,2);
  t12 = t9*t11;
  t13 = var[24];
  t14 = Power(t13,2);
  t15 = var[17];
  t16 = Power(t15,2);
  t17 = t14*t16;
  t18 = var[26];
  t19 = Power(t18,2);
  t20 = var[18];
  t21 = Power(t20,2);
  t22 = t19*t21;
  t23 = var[27];
  t24 = Power(t23,2);
  t25 = var[19];
  t26 = Power(t25,2);
  t27 = t24*t26;
  t28 = var[28];
  t29 = Power(t28,2);
  t30 = var[20];
  t31 = Power(t30,2);
  t32 = t29*t31;
  t33 = var[25];
  t34 = Power(t33,2);
  t35 = var[21];
  t36 = Power(t35,2);
  t37 = t34*t36;
  t38 = t7 + t12 + t17 + t22 + t27 + t32 + t37;
  t39 = 1/Sqrt(t38);
  p_output1[0]=0.166666666666667*t2*Sqrt(t38);
  p_output1[1]=0.166666666666667*t2*t39*t4*t5*var[0];
  p_output1[2]=0.166666666666667*t10*t2*t39*t9*var[0];
  p_output1[3]=0.166666666666667*t14*t15*t2*t39*var[0];
  p_output1[4]=0.166666666666667*t19*t2*t20*t39*var[0];
  p_output1[5]=0.166666666666667*t2*t24*t25*t39*var[0];
  p_output1[6]=0.166666666666667*t2*t29*t30*t39*var[0];
  p_output1[7]=0.166666666666667*t2*t34*t35*t39*var[0];
  p_output1[8]=0.166666666666667*t2*t3*t39*t6*var[0];
  p_output1[9]=0.166666666666667*t11*t2*t39*t8*var[0];
  p_output1[10]=0.166666666666667*t13*t16*t2*t39*var[0];
  p_output1[11]=0.166666666666667*t2*t33*t36*t39*var[0];
  p_output1[12]=0.166666666666667*t18*t2*t21*t39*var[0];
  p_output1[13]=0.166666666666667*t2*t23*t26*t39*var[0];
  p_output1[14]=0.166666666666667*t2*t28*t31*t39*var[0];
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

  double *var,*auxdata;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var,auxdata).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 29 && ncols == 1) && 
      !(mrows == 1 && ncols == 29))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "auxdata is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
  auxdata = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 15, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var,auxdata);


}

#else // MATLAB_MEX_FILE

#include "J_power_RightTS3DMultiWalking_terminal.hh"

namespace symbolic
{
namespace basic
{

void J_power_RightTS3DMultiWalking_terminal_raw(double *p_output1, const double *var,const double *auxdata)
{
  // Call Subroutines
  output1(p_output1, var, auxdata);

}

}
}

#endif // MATLAB_MEX_FILE

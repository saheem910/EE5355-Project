/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:57:51 GMT-05:00
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
  double t38;
  double t39;
  double t40;
  double t41;
  double t42;
  double t43;
  double t44;
  double t45;
  double t46;
  double t47;
  double t48;
  double t49;
  double t50;
  double t51;
  double t52;
  double t53;
  double t54;
  double t55;
  double t56;
  double t57;
  double t58;
  double t59;
  double t60;
  double t61;
  double t62;
  double t63;
  double t64;
  double t65;
  double t66;
  double t67;
  double t68;
  double t69;
  t1 = var[42];
  t2 = var[43];
  t3 = -1.*t2;
  t4 = t1 + t3;
  t5 = 1/t4;
  t6 = var[41];
  t7 = var[16];
  t8 = 0.07645*t7;
  t9 = var[18];
  t10 = 0.87245*t9;
  t11 = var[20];
  t12 = 0.49845*t11;
  t13 = var[4];
  t14 = 0.87245*t13;
  t15 = t3 + t8 + t10 + t12 + t14;
  t16 = -1.*t5*t15;
  t17 = 1. + t16;
  t18 = Power(t17,5);
  t19 = var[37];
  t20 = 0.07645*t19;
  t21 = var[39];
  t22 = 0.87245*t21;
  t23 = 0.49845*t6;
  t24 = var[25];
  t25 = 0.87245*t24;
  t26 = t20 + t22 + t23 + t25;
  t27 = var[45];
  t28 = Power(t4,-2);
  t29 = Power(t17,4);
  t30 = var[46];
  t31 = Power(t4,-3);
  t32 = Power(t17,3);
  t33 = Power(t15,2);
  t34 = var[47];
  t35 = Power(t4,-4);
  t36 = Power(t17,2);
  t37 = Power(t15,3);
  t38 = var[48];
  t39 = Power(t4,-5);
  t40 = Power(t15,4);
  t41 = var[49];
  t42 = Power(t4,-6);
  t43 = Power(t15,5);
  t44 = var[52];
  t45 = var[53];
  t46 = var[54];
  t47 = var[55];
  t48 = var[56];
  t49 = var[59];
  t50 = var[60];
  t51 = var[61];
  t52 = var[62];
  t53 = var[63];
  t54 = var[36];
  t55 = var[66];
  t56 = var[67];
  t57 = var[68];
  t58 = var[69];
  t59 = var[70];
  t60 = var[73];
  t61 = var[74];
  t62 = var[75];
  t63 = var[76];
  t64 = var[77];
  t65 = var[80];
  t66 = var[81];
  t67 = var[82];
  t68 = var[83];
  t69 = var[84];
  p_output1[0]=30.*t15*t26*t27*t28*t29 - 30.*t15*t26*t28*t29*t30 + 60.*t26*t30*t31*t32*t33 - 60.*t26*t31*t32*t33*t34 + 60.*t26*t34*t35*t36*t37 - 60.*t26*t35*t36*t37*t38 + 30.*t17*t26*t38*t39*t40 - 30.*t17*t26*t39*t40*t41 + 6.*t26*t41*t42*t43 - 6.*t18*t26*t27*t5 + t6 + 6.*t18*t26*t5*var[44] - 6.*t26*t42*t43*var[50];
  p_output1[1]=-1.*t19 - 1.*t21 + 30.*t15*t26*t28*t29*t44 - 30.*t15*t26*t28*t29*t45 + 60.*t26*t31*t32*t33*t45 - 60.*t26*t31*t32*t33*t46 + 60.*t26*t35*t36*t37*t46 - 60.*t26*t35*t36*t37*t47 + 30.*t17*t26*t39*t40*t47 - 30.*t17*t26*t39*t40*t48 + 6.*t26*t42*t43*t48 - 6.*t18*t26*t44*t5 - 1.*t6 + 6.*t18*t26*t5*var[51] - 6.*t26*t42*t43*var[57];
  p_output1[2]=30.*t15*t26*t28*t29*t49 - 6.*t18*t26*t49*t5 - 30.*t15*t26*t28*t29*t50 + 60.*t26*t31*t32*t33*t50 - 60.*t26*t31*t32*t33*t51 + 60.*t26*t35*t36*t37*t51 - 60.*t26*t35*t36*t37*t52 + 30.*t17*t26*t39*t40*t52 - 30.*t17*t26*t39*t40*t53 + 6.*t26*t42*t43*t53 + t54 + 6.*t18*t26*t5*var[58] - 6.*t26*t42*t43*var[64];
  p_output1[3]=-1.*t54 + 30.*t15*t26*t28*t29*t55 - 6.*t18*t26*t5*t55 - 30.*t15*t26*t28*t29*t56 + 60.*t26*t31*t32*t33*t56 - 60.*t26*t31*t32*t33*t57 + 60.*t26*t35*t36*t37*t57 - 60.*t26*t35*t36*t37*t58 + 30.*t17*t26*t39*t40*t58 - 30.*t17*t26*t39*t40*t59 + 6.*t26*t42*t43*t59 - 1.*var[38] + 6.*t18*t26*t5*var[65] - 6.*t26*t42*t43*var[71];
  p_output1[4]=30.*t15*t26*t28*t29*t60 - 6.*t18*t26*t5*t60 - 30.*t15*t26*t28*t29*t61 + 60.*t26*t31*t32*t33*t61 - 60.*t26*t31*t32*t33*t62 + 60.*t26*t35*t36*t37*t62 - 60.*t26*t35*t36*t37*t63 + 30.*t17*t26*t39*t40*t63 - 30.*t17*t26*t39*t40*t64 + 6.*t26*t42*t43*t64 + var[40] + 6.*t18*t26*t5*var[72] - 6.*t26*t42*t43*var[78];
  p_output1[5]=30.*t15*t26*t28*t29*t65 - 6.*t18*t26*t5*t65 - 30.*t15*t26*t28*t29*t66 + 60.*t26*t31*t32*t33*t66 - 60.*t26*t31*t32*t33*t67 + 60.*t26*t35*t36*t37*t67 - 60.*t26*t35*t36*t37*t68 + 30.*t17*t26*t39*t40*t68 - 30.*t17*t26*t39*t40*t69 + 6.*t26*t42*t43*t69 + var[35] + 6.*t18*t26*t5*var[79] - 6.*t26*t42*t43*var[85];
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
    ( !(mrows == 86 && ncols == 1) && 
      !(mrows == 1 && ncols == 86))) 
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

#include "f_y2Vel_RightTS3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void f_y2Vel_RightTS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

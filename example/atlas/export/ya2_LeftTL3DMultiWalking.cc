/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:29:34 GMT-04:00
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
static void output1(double *p_output1,const double *q)
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
  double t70;
  t1 = q[14];
  t2 = q[9];
  t3 = q[20];
  t4 = q[11];
  t5 = q[4];
  t6 = q[17];
  t7 = q[3];
  t8 = Cos(t7);
  t9 = q[5];
  t10 = q[19];
  t11 = Cos(t9);
  t12 = Sin(t7);
  t13 = Sin(t5);
  t14 = Sin(t9);
  t15 = q[15];
  t16 = q[16];
  t17 = q[18];
  t18 = Cos(t10);
  t19 = -1.*t8*t11*t13;
  t20 = t12*t14;
  t21 = t19 + t20;
  t22 = Sin(t10);
  t23 = t11*t12;
  t24 = t8*t13*t14;
  t25 = t23 + t24;
  t26 = Cos(t6);
  t27 = Cos(t5);
  t28 = Sin(t6);
  t29 = -1.*t22*t21;
  t30 = t18*t25;
  t31 = t29 + t30;
  t32 = Cos(t17);
  t33 = t18*t21;
  t34 = t22*t25;
  t35 = t33 + t34;
  t36 = Sin(t17);
  t37 = t26*t8*t27;
  t38 = -1.*t28*t31;
  t39 = t37 + t38;
  t40 = Cos(t3);
  t41 = t36*t35;
  t42 = t32*t39;
  t43 = t41 + t42;
  t44 = Sin(t3);
  t45 = t32*t35;
  t46 = -1.*t36*t39;
  t47 = t45 + t46;
  t48 = Cos(t16);
  t49 = t11*t12*t13;
  t50 = t8*t14;
  t51 = t49 + t50;
  t52 = t8*t11;
  t53 = -1.*t12*t13*t14;
  t54 = t52 + t53;
  t55 = t18*t51;
  t56 = t22*t54;
  t57 = t55 + t56;
  t58 = -1.*t26*t27*t12;
  t59 = -1.*t22*t51;
  t60 = t18*t54;
  t61 = t59 + t60;
  t62 = -1.*t28*t61;
  t63 = t58 + t62;
  t64 = Sin(t16);
  t65 = t36*t57;
  t66 = t32*t63;
  t67 = t65 + t66;
  t68 = t32*t57;
  t69 = -1.*t36*t63;
  t70 = t68 + t69;
  p_output1[0]=t1;
  p_output1[1]=-1.*t1 - 1.*q[10] - 1.*q[12];
  p_output1[2]=t2;
  p_output1[3]=-1.*t2 - 1.*t4;
  p_output1[4]=q[13];
  p_output1[5]=t3;
  p_output1[6]=1.00394560743416*t17 + 0.530150753768844*t3 + 1.00394560743416*t5;
  p_output1[7]=t16;
  p_output1[8]=t4 - 1.*t6;
  p_output1[9]=0. + 0.15240000000000004*((t26*t31 + t27*t28*t8)*Cos(t15) + ((t40*t43 + t44*t47)*t48 + (-1.*t43*t44 + t40*t47)*t64)*Sin(t15));
  p_output1[10]=0. - 0.2548*(t48*(-1.*t44*t67 + t40*t70) - 1.*t64*(t40*t67 + t44*t70));
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

  double *q;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (q).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 21 && ncols == 1) && 
      !(mrows == 1 && ncols == 21))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "q is wrong.");
    }

  /*  Assign pointers to each input.  */
  q = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,q);


}

#else // MATLAB_MEX_FILE

#include "ya2_LeftTL3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void ya2_LeftTL3DMultiWalking_raw(double *p_output1, const double *q)
{
  // Call Subroutines
  output1(p_output1, q);

}

}
}

#endif // MATLAB_MEX_FILE

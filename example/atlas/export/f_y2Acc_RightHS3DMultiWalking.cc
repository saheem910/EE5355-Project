/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 14:00:56 GMT-05:00
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
  double t70;
  double t71;
  double t72;
  double t73;
  double t74;
  double t75;
  double t76;
  double t77;
  double t78;
  double t79;
  double t80;
  double t81;
  double t82;
  double t83;
  double t84;
  double t85;
  double t86;
  double t87;
  double t88;
  double t89;
  double t90;
  double t91;
  double t92;
  double t93;
  double t94;
  double t95;
  double t96;
  double t97;
  double t98;
  t1 = var[63];
  t2 = var[64];
  t3 = -1.*t2;
  t4 = t1 + t3;
  t5 = Power(t4,-2);
  t6 = 1/t4;
  t7 = var[16];
  t8 = 0.07645*t7;
  t9 = var[18];
  t10 = 0.87245*t9;
  t11 = var[20];
  t12 = 0.49845*t11;
  t13 = var[4];
  t14 = 0.87245*t13;
  t15 = t3 + t8 + t10 + t12 + t14;
  t16 = -1.*t6*t15;
  t17 = 1. + t16;
  t18 = Power(t17,4);
  t19 = var[37];
  t20 = 0.07645*t19;
  t21 = var[39];
  t22 = 0.87245*t21;
  t23 = var[41];
  t24 = 0.49845*t23;
  t25 = var[25];
  t26 = 0.87245*t25;
  t27 = t20 + t22 + t24 + t26;
  t28 = Power(t27,2);
  t29 = var[66];
  t30 = var[67];
  t31 = Power(t4,-3);
  t32 = Power(t17,3);
  t33 = var[68];
  t34 = Power(t4,-4);
  t35 = Power(t17,2);
  t36 = Power(t15,2);
  t37 = var[69];
  t38 = Power(t4,-5);
  t39 = Power(t15,3);
  t40 = var[70];
  t41 = Power(t4,-6);
  t42 = Power(t15,4);
  t43 = var[65];
  t44 = var[58];
  t45 = Power(t17,5);
  t46 = 0.07645*t44;
  t47 = var[60];
  t48 = 0.87245*t47;
  t49 = var[62];
  t50 = 0.49845*t49;
  t51 = var[46];
  t52 = 0.87245*t51;
  t53 = t46 + t48 + t50 + t52;
  t54 = var[71];
  t55 = Power(t15,5);
  t56 = var[73];
  t57 = var[74];
  t58 = var[75];
  t59 = var[76];
  t60 = var[77];
  t61 = var[72];
  t62 = var[78];
  t63 = var[80];
  t64 = var[81];
  t65 = var[82];
  t66 = var[83];
  t67 = var[84];
  t68 = var[79];
  t69 = var[85];
  t70 = var[87];
  t71 = var[88];
  t72 = var[89];
  t73 = var[90];
  t74 = var[91];
  t75 = var[86];
  t76 = var[92];
  t77 = var[94];
  t78 = var[95];
  t79 = var[96];
  t80 = var[97];
  t81 = var[98];
  t82 = var[57];
  t83 = var[93];
  t84 = var[99];
  t85 = var[101];
  t86 = var[102];
  t87 = var[103];
  t88 = var[104];
  t89 = var[105];
  t90 = var[100];
  t91 = var[106];
  t92 = var[108];
  t93 = var[109];
  t94 = var[110];
  t95 = var[111];
  t96 = var[112];
  t97 = var[107];
  t98 = var[113];
  p_output1[0]=-120.*t15*t28*t29*t31*t32 + 240.*t15*t28*t30*t31*t32 - 120.*t15*t28*t31*t32*t33 - 180.*t28*t30*t34*t35*t36 + 360.*t28*t33*t34*t35*t36 - 180.*t28*t34*t35*t36*t37 - 120.*t17*t28*t33*t38*t39 + 240.*t17*t28*t37*t38*t39 - 120.*t17*t28*t38*t39*t40 - 30.*t28*t37*t41*t42 + 60.*t28*t40*t41*t42 + t44 + 60.*t18*t28*t29*t5 - 30.*t18*t28*t30*t5 - 30.*t18*t28*t43*t5 + 60.*t30*t31*t32*t36*t53 - 60.*t31*t32*t33*t36*t53 + 60.*t33*t34*t35*t39*t53 - 60.*t34*t35*t37*t39*t53 + 30.*t17*t37*t38*t42*t53 - 30.*t17*t38*t40*t42*t53 + 30.*t15*t18*t29*t5*t53 - 30.*t15*t18*t30*t5*t53 - 30.*t28*t41*t42*t54 + 6.*t40*t41*t53*t55 - 6.*t41*t53*t54*t55 - 6.*t29*t45*t53*t6 + 6.*t43*t45*t53*t6;
  p_output1[1]=t49 - 120.*t15*t28*t31*t32*t56 + 60.*t18*t28*t5*t56 + 30.*t15*t18*t5*t53*t56 + 240.*t15*t28*t31*t32*t57 - 180.*t28*t34*t35*t36*t57 - 30.*t18*t28*t5*t57 + 60.*t31*t32*t36*t53*t57 - 30.*t15*t18*t5*t53*t57 - 120.*t15*t28*t31*t32*t58 + 360.*t28*t34*t35*t36*t58 - 120.*t17*t28*t38*t39*t58 - 60.*t31*t32*t36*t53*t58 + 60.*t34*t35*t39*t53*t58 - 180.*t28*t34*t35*t36*t59 + 240.*t17*t28*t38*t39*t59 - 30.*t28*t41*t42*t59 - 60.*t34*t35*t39*t53*t59 + 30.*t17*t38*t42*t53*t59 - 6.*t45*t53*t56*t6 - 120.*t17*t28*t38*t39*t60 + 60.*t28*t41*t42*t60 - 30.*t17*t38*t42*t53*t60 + 6.*t41*t53*t55*t60 - 30.*t18*t28*t5*t61 + 6.*t45*t53*t6*t61 - 30.*t28*t41*t42*t62 - 6.*t41*t53*t55*t62;
  p_output1[2]=-1.*t44 - 1.*t47 - 1.*t49 - 120.*t15*t28*t31*t32*t63 + 60.*t18*t28*t5*t63 + 30.*t15*t18*t5*t53*t63 - 6.*t45*t53*t6*t63 + 240.*t15*t28*t31*t32*t64 - 180.*t28*t34*t35*t36*t64 - 30.*t18*t28*t5*t64 + 60.*t31*t32*t36*t53*t64 - 30.*t15*t18*t5*t53*t64 - 120.*t15*t28*t31*t32*t65 + 360.*t28*t34*t35*t36*t65 - 120.*t17*t28*t38*t39*t65 - 60.*t31*t32*t36*t53*t65 + 60.*t34*t35*t39*t53*t65 - 180.*t28*t34*t35*t36*t66 + 240.*t17*t28*t38*t39*t66 - 30.*t28*t41*t42*t66 - 60.*t34*t35*t39*t53*t66 + 30.*t17*t38*t42*t53*t66 - 120.*t17*t28*t38*t39*t67 + 60.*t28*t41*t42*t67 - 30.*t17*t38*t42*t53*t67 + 6.*t41*t53*t55*t67 - 30.*t18*t28*t5*t68 + 6.*t45*t53*t6*t68 - 30.*t28*t41*t42*t69 - 6.*t41*t53*t55*t69;
  p_output1[3]=-120.*t15*t28*t31*t32*t70 + 60.*t18*t28*t5*t70 + 30.*t15*t18*t5*t53*t70 - 6.*t45*t53*t6*t70 + 240.*t15*t28*t31*t32*t71 - 180.*t28*t34*t35*t36*t71 - 30.*t18*t28*t5*t71 + 60.*t31*t32*t36*t53*t71 - 30.*t15*t18*t5*t53*t71 - 120.*t15*t28*t31*t32*t72 + 360.*t28*t34*t35*t36*t72 - 120.*t17*t28*t38*t39*t72 - 60.*t31*t32*t36*t53*t72 + 60.*t34*t35*t39*t53*t72 - 180.*t28*t34*t35*t36*t73 + 240.*t17*t28*t38*t39*t73 - 30.*t28*t41*t42*t73 - 60.*t34*t35*t39*t53*t73 + 30.*t17*t38*t42*t53*t73 - 120.*t17*t28*t38*t39*t74 + 60.*t28*t41*t42*t74 - 30.*t17*t38*t42*t53*t74 + 6.*t41*t53*t55*t74 - 30.*t18*t28*t5*t75 + 6.*t45*t53*t6*t75 - 30.*t28*t41*t42*t76 - 6.*t41*t53*t55*t76 + t82;
  p_output1[4]=-120.*t15*t28*t31*t32*t77 + 60.*t18*t28*t5*t77 + 30.*t15*t18*t5*t53*t77 - 6.*t45*t53*t6*t77 + 240.*t15*t28*t31*t32*t78 - 180.*t28*t34*t35*t36*t78 - 30.*t18*t28*t5*t78 + 60.*t31*t32*t36*t53*t78 - 30.*t15*t18*t5*t53*t78 - 120.*t15*t28*t31*t32*t79 + 360.*t28*t34*t35*t36*t79 - 120.*t17*t28*t38*t39*t79 - 60.*t31*t32*t36*t53*t79 + 60.*t34*t35*t39*t53*t79 - 180.*t28*t34*t35*t36*t80 + 240.*t17*t28*t38*t39*t80 - 30.*t28*t41*t42*t80 - 60.*t34*t35*t39*t53*t80 + 30.*t17*t38*t42*t53*t80 - 120.*t17*t28*t38*t39*t81 + 60.*t28*t41*t42*t81 - 30.*t17*t38*t42*t53*t81 + 6.*t41*t53*t55*t81 - 1.*t82 - 30.*t18*t28*t5*t83 + 6.*t45*t53*t6*t83 - 30.*t28*t41*t42*t84 - 6.*t41*t53*t55*t84 - 1.*var[59];
  p_output1[5]=-120.*t15*t28*t31*t32*t85 + 60.*t18*t28*t5*t85 + 30.*t15*t18*t5*t53*t85 - 6.*t45*t53*t6*t85 + 240.*t15*t28*t31*t32*t86 - 180.*t28*t34*t35*t36*t86 - 30.*t18*t28*t5*t86 + 60.*t31*t32*t36*t53*t86 - 30.*t15*t18*t5*t53*t86 - 120.*t15*t28*t31*t32*t87 + 360.*t28*t34*t35*t36*t87 - 120.*t17*t28*t38*t39*t87 - 60.*t31*t32*t36*t53*t87 + 60.*t34*t35*t39*t53*t87 - 180.*t28*t34*t35*t36*t88 + 240.*t17*t28*t38*t39*t88 - 30.*t28*t41*t42*t88 - 60.*t34*t35*t39*t53*t88 + 30.*t17*t38*t42*t53*t88 - 120.*t17*t28*t38*t39*t89 + 60.*t28*t41*t42*t89 - 30.*t17*t38*t42*t53*t89 + 6.*t41*t53*t55*t89 - 30.*t18*t28*t5*t90 + 6.*t45*t53*t6*t90 - 30.*t28*t41*t42*t91 - 6.*t41*t53*t55*t91 + var[61];
  p_output1[6]=-120.*t15*t28*t31*t32*t92 + 60.*t18*t28*t5*t92 + 30.*t15*t18*t5*t53*t92 - 6.*t45*t53*t6*t92 + 240.*t15*t28*t31*t32*t93 - 180.*t28*t34*t35*t36*t93 - 30.*t18*t28*t5*t93 + 60.*t31*t32*t36*t53*t93 - 30.*t15*t18*t5*t53*t93 - 120.*t15*t28*t31*t32*t94 + 360.*t28*t34*t35*t36*t94 - 120.*t17*t28*t38*t39*t94 - 60.*t31*t32*t36*t53*t94 + 60.*t34*t35*t39*t53*t94 - 180.*t28*t34*t35*t36*t95 + 240.*t17*t28*t38*t39*t95 - 30.*t28*t41*t42*t95 - 60.*t34*t35*t39*t53*t95 + 30.*t17*t38*t42*t53*t95 - 120.*t17*t28*t38*t39*t96 + 60.*t28*t41*t42*t96 - 30.*t17*t38*t42*t53*t96 + 6.*t41*t53*t55*t96 - 30.*t18*t28*t5*t97 + 6.*t45*t53*t6*t97 - 30.*t28*t41*t42*t98 - 6.*t41*t53*t55*t98 + var[52];
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
    ( !(mrows == 114 && ncols == 1) && 
      !(mrows == 1 && ncols == 114))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "f_y2Acc_RightHS3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void f_y2Acc_RightHS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:59:58 GMT-04:00
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
  double t99;
  double t100;
  double t101;
  double t102;
  double t103;
  double t104;
  double t105;
  double t106;
  double t107;
  double t108;
  double t109;
  double t110;
  double t111;
  double t112;
  t1 = var[3];
  t2 = Cos(t1);
  t3 = var[4];
  t4 = var[5];
  t5 = var[19];
  t6 = Cos(t4);
  t7 = Sin(t1);
  t8 = Sin(t3);
  t9 = Sin(t4);
  t10 = var[17];
  t11 = Sin(t5);
  t12 = -1.*t2*t6*t8;
  t13 = t7*t9;
  t14 = t12 + t13;
  t15 = Cos(t5);
  t16 = t6*t7;
  t17 = t2*t8*t9;
  t18 = t16 + t17;
  t19 = var[18];
  t20 = var[15];
  t21 = Cos(t3);
  t22 = Sin(t10);
  t23 = Cos(t10);
  t24 = -1.*t11*t14;
  t25 = t15*t18;
  t26 = t24 + t25;
  t27 = Cos(t19);
  t28 = Sin(t19);
  t29 = 0.05*t28;
  t30 = t15*t14;
  t31 = t11*t18;
  t32 = t30 + t31;
  t33 = t23*t2*t21;
  t34 = -1.*t22*t26;
  t35 = t33 + t34;
  t36 = var[20];
  t37 = Sin(t36);
  t38 = t28*t32;
  t39 = t27*t35;
  t40 = t38 + t39;
  t41 = Cos(t36);
  t42 = t27*t32;
  t43 = -1.*t28*t35;
  t44 = t42 + t43;
  t45 = var[16];
  t46 = Cos(t20);
  t47 = -1.*t46;
  t48 = 1. + t47;
  t49 = Sin(t20);
  t50 = Sin(t45);
  t51 = -1.*t37*t40;
  t52 = t41*t44;
  t53 = t51 + t52;
  t54 = Cos(t45);
  t55 = t41*t40;
  t56 = t37*t44;
  t57 = t55 + t56;
  t58 = t2*t21*t22;
  t59 = t23*t26;
  t60 = t58 + t59;
  t61 = t50*t53;
  t62 = t54*t57;
  t63 = t61 + t62;
  t64 = var[13];
  t65 = var[11];
  t66 = Sin(t64);
  t67 = Cos(t64);
  t68 = var[12];
  t69 = var[9];
  t70 = Sin(t65);
  t71 = Cos(t65);
  t72 = -1.*t66*t14;
  t73 = t67*t18;
  t74 = t72 + t73;
  t75 = Cos(t68);
  t76 = Sin(t68);
  t77 = 0.05*t76;
  t78 = t67*t14;
  t79 = t66*t18;
  t80 = t78 + t79;
  t81 = t71*t2*t21;
  t82 = -1.*t70*t74;
  t83 = t81 + t82;
  t84 = var[14];
  t85 = Sin(t84);
  t86 = t76*t80;
  t87 = t75*t83;
  t88 = t86 + t87;
  t89 = Cos(t84);
  t90 = t75*t80;
  t91 = -1.*t76*t83;
  t92 = t90 + t91;
  t93 = var[10];
  t94 = Cos(t69);
  t95 = -1.*t94;
  t96 = 1. + t95;
  t97 = Sin(t69);
  t98 = Sin(t93);
  t99 = -1.*t85*t88;
  t100 = t89*t92;
  t101 = t99 + t100;
  t102 = Cos(t93);
  t103 = t89*t88;
  t104 = t85*t92;
  t105 = t103 + t104;
  t106 = t2*t21*t70;
  t107 = t71*t74;
  t108 = t106 + t107;
  t109 = t98*t101;
  t110 = t102*t105;
  t111 = t109 + t110;
  t112 = var[2];
  p_output1[0]=t112 - 0.089*t11*t14 - 0.089*(1. - 1.*t15)*t18 + 0.089*t2*t21*t22 - 0.089*(1. - 1.*t23)*t26 + (0.05*(1. - 1.*t27) + t29)*t32 + (0.05*(-1. + t27) + t29)*t35 - 0.424*t40*(1. - 1.*t41) + 0.424*t37*t44 + 0.846*t50*t53 - 0.846*(1. - 1.*t54)*t57 - 0.082*(t53*t54 - 1.*t50*t57) + (-0.089*t48 - 0.846*t49)*t60 + (-0.846*t48 + 0.089*t49)*t63 - 0.92245*(-1.*t49*t60 + t46*t63) - 0.089*(t46*t60 + t49*t63);
  p_output1[1]=-0.846*(1. - 1.*t102)*t105 + t112 + 0.089*t14*t66 + 0.089*t18*(1. - 1.*t67) - 0.089*t2*t21*t70 + 0.089*(1. - 1.*t71)*t74 + (0.05*(1. - 1.*t75) + t77)*t80 + (0.05*(-1. + t75) + t77)*t83 - 0.424*t88*(1. - 1.*t89) + 0.424*t85*t92 + t108*(0.089*t96 - 0.846*t97) + t111*(-0.846*t96 - 0.089*t97) - 0.92245*(t111*t94 - 1.*t108*t97) + 0.089*(t108*t94 + t111*t97) + 0.846*t101*t98 + 0.1728*(t101*t102 - 1.*t105*t98);
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
    ( !(mrows == 21 && ncols == 1) && 
      !(mrows == 1 && ncols == 21))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "f_unilateral_RightHS3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void f_unilateral_RightHS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

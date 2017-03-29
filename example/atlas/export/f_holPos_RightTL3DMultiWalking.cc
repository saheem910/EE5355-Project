/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:58:18 GMT-05:00
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
  double t113;
  double t114;
  double t115;
  double t116;
  double t117;
  double t118;
  double t119;
  double t120;
  double t121;
  double t122;
  double t123;
  double t124;
  double t125;
  double t126;
  double t127;
  double t128;
  double t129;
  double t130;
  double t131;
  double t132;
  double t133;
  double t134;
  double t135;
  double t136;
  double t137;
  double t138;
  double t139;
  double t140;
  double t141;
  double t142;
  double t143;
  double t144;
  double t145;
  double t146;
  double t147;
  double t148;
  double t149;
  double t150;
  double t151;
  double t152;
  double t153;
  double t154;
  double t155;
  double t156;
  t1 = var[4];
  t2 = var[19];
  t3 = Cos(t1);
  t4 = var[5];
  t5 = var[17];
  t6 = Cos(t4);
  t7 = Sin(t2);
  t8 = Cos(t2);
  t9 = Sin(t4);
  t10 = var[18];
  t11 = var[15];
  t12 = Sin(t5);
  t13 = Sin(t1);
  t14 = Cos(t5);
  t15 = -1.*t3*t6*t7;
  t16 = -1.*t8*t3*t9;
  t17 = t15 + t16;
  t18 = Cos(t10);
  t19 = Sin(t10);
  t20 = 0.05*t19;
  t21 = t8*t3*t6;
  t22 = -1.*t3*t7*t9;
  t23 = t21 + t22;
  t24 = t14*t13;
  t25 = -1.*t12*t17;
  t26 = t24 + t25;
  t27 = var[20];
  t28 = Sin(t27);
  t29 = t19*t23;
  t30 = t18*t26;
  t31 = t29 + t30;
  t32 = Cos(t27);
  t33 = t18*t23;
  t34 = -1.*t19*t26;
  t35 = t33 + t34;
  t36 = var[16];
  t37 = Cos(t11);
  t38 = -1.*t37;
  t39 = 1. + t38;
  t40 = Sin(t11);
  t41 = Sin(t36);
  t42 = -1.*t28*t31;
  t43 = t32*t35;
  t44 = t42 + t43;
  t45 = Cos(t36);
  t46 = t32*t31;
  t47 = t28*t35;
  t48 = t46 + t47;
  t49 = t12*t13;
  t50 = t14*t17;
  t51 = t49 + t50;
  t52 = t41*t44;
  t53 = t45*t48;
  t54 = t52 + t53;
  t55 = var[3];
  t56 = Sin(t55);
  t57 = -1.*t8;
  t58 = 1. + t57;
  t59 = Cos(t55);
  t60 = -1.*t14;
  t61 = 1. + t60;
  t62 = t6*t56*t13;
  t63 = t59*t9;
  t64 = t62 + t63;
  t65 = t59*t6;
  t66 = -1.*t56*t13*t9;
  t67 = t65 + t66;
  t68 = -1.*t18;
  t69 = 1. + t68;
  t70 = 0.05*t69;
  t71 = t70 + t20;
  t72 = -0.089*t39;
  t73 = -0.846*t40;
  t74 = t72 + t73;
  t75 = -1.*t7*t64;
  t76 = t8*t67;
  t77 = t75 + t76;
  t78 = -1. + t18;
  t79 = 0.05*t78;
  t80 = t79 + t20;
  t81 = -1.*t32;
  t82 = 1. + t81;
  t83 = t8*t64;
  t84 = t7*t67;
  t85 = t83 + t84;
  t86 = -1.*t14*t3*t56;
  t87 = -1.*t12*t77;
  t88 = t86 + t87;
  t89 = t19*t85;
  t90 = t18*t88;
  t91 = t89 + t90;
  t92 = t18*t85;
  t93 = -1.*t19*t88;
  t94 = t92 + t93;
  t95 = -1.*t45;
  t96 = 1. + t95;
  t97 = -0.846*t39;
  t98 = 0.089*t40;
  t99 = t97 + t98;
  t100 = -1.*t28*t91;
  t101 = t32*t94;
  t102 = t100 + t101;
  t103 = t32*t91;
  t104 = t28*t94;
  t105 = t103 + t104;
  t106 = -1.*t3*t12*t56;
  t107 = t14*t77;
  t108 = t106 + t107;
  t109 = t41*t102;
  t110 = t45*t105;
  t111 = t109 + t110;
  t112 = -1.*t59*t6*t13;
  t113 = t56*t9;
  t114 = t112 + t113;
  t115 = t6*t56;
  t116 = t59*t13*t9;
  t117 = t115 + t116;
  t118 = -1.*t7*t114;
  t119 = t8*t117;
  t120 = t118 + t119;
  t121 = t8*t114;
  t122 = t7*t117;
  t123 = t121 + t122;
  t124 = t14*t59*t3;
  t125 = -1.*t12*t120;
  t126 = t124 + t125;
  t127 = t19*t123;
  t128 = t18*t126;
  t129 = t127 + t128;
  t130 = t18*t123;
  t131 = -1.*t19*t126;
  t132 = t130 + t131;
  t133 = -1.*t28*t129;
  t134 = t32*t132;
  t135 = t133 + t134;
  t136 = t32*t129;
  t137 = t28*t132;
  t138 = t136 + t137;
  t139 = t59*t3*t12;
  t140 = t14*t120;
  t141 = t139 + t140;
  t142 = t41*t135;
  t143 = t45*t138;
  t144 = t142 + t143;
  t145 = -1.*t40*t141;
  t146 = t37*t144;
  t147 = t37*t141;
  t148 = t40*t144;
  t149 = 0. + t145 + t146;
  t150 = t45*t135;
  t151 = -1.*t41*t138;
  t152 = 0. + t147 + t148;
  t153 = t45*t44;
  t154 = -1.*t41*t48;
  t155 = t45*t102;
  t156 = -1.*t41*t105;
  p_output1[0]=0.089*t12*t13 + 0.1728*(t153 + t154) + 0.424*t28*t35 + 0.846*t41*t44 - 0.92245*(-1.*t40*t51 + t37*t54) - 0.089*(t37*t51 + t40*t54) - 0.089*t17*t61 - 0.089*t3*t6*t7 + t23*t71 + t51*t74 + t26*t80 - 0.424*t31*t82 + 0.089*t3*t58*t9 - 0.846*t48*t96 + t54*t99 + var[0] - 1.*var[21];
  p_output1[1]=0.1728*(t155 + t156) - 0.92245*(t111*t37 - 1.*t108*t40) - 0.089*(t108*t37 + t111*t40) + 0.846*t102*t41 - 0.089*t12*t3*t56 - 0.089*t58*t67 - 0.089*t64*t7 + t108*t74 - 0.089*t61*t77 + t71*t85 + t80*t88 - 0.424*t82*t91 + 0.424*t28*t94 - 0.846*t105*t96 + t111*t99 + var[1] - 1.*var[22];
  p_output1[2]=-0.92245*(t145 + t146) - 0.089*(t147 + t148) + 0.1728*(t150 + t151) + 0.424*t132*t28 + 0.846*t135*t41 - 0.089*t117*t58 + 0.089*t12*t3*t59 - 0.089*t120*t61 - 0.089*t114*t7 + t123*t71 + t141*t74 + t126*t80 - 0.424*t129*t82 - 0.846*t138*t96 + t144*t99 + var[2] - 1.*var[23];
  p_output1[3]=ArcTan(t149,t152) - 1.*var[24];
  p_output1[4]=ArcTan(t149,(-1.*t149*(0. + t150 + t151))/Sqrt(Power(t149,2) + Power(t152,2))) - 1.*var[25];
  p_output1[5]=ArcTan(0. + t153 + t154,0. + t155 + t156) - 1.*var[26];
  p_output1[6]=var[6] - 1.*var[27];
  p_output1[7]=var[7] - 1.*var[28];
  p_output1[8]=var[8] - 1.*var[29];
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
    ( !(mrows == 30 && ncols == 1) && 
      !(mrows == 1 && ncols == 30))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "f_holPos_RightTL3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void f_holPos_RightTL3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:58:50 GMT-04:00
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
  double t157;
  double t158;
  double t159;
  double t160;
  double t161;
  double t162;
  double t163;
  double t164;
  double t165;
  double t166;
  double t167;
  double t168;
  double t169;
  double t170;
  double t171;
  double t172;
  double t173;
  double t174;
  double t175;
  double t176;
  double t177;
  double t178;
  double t179;
  double t180;
  double t181;
  double t182;
  double t183;
  double t184;
  double t185;
  double t186;
  double t187;
  double t188;
  double t189;
  double t190;
  double t191;
  double t192;
  double t193;
  double t194;
  double t195;
  double t196;
  double t197;
  double t198;
  double t199;
  double t200;
  double t201;
  double t202;
  double t203;
  double t204;
  double t205;
  double t206;
  double t207;
  double t208;
  double t209;
  double t210;
  double t211;
  double t212;
  double t213;
  double t214;
  double t215;
  double t216;
  double t217;
  t1 = var[3];
  t2 = Sin(t1);
  t3 = var[4];
  t4 = var[5];
  t5 = var[13];
  t6 = Cos(t1);
  t7 = Cos(t4);
  t8 = Sin(t3);
  t9 = Sin(t4);
  t10 = var[11];
  t11 = Sin(t5);
  t12 = t7*t2*t8;
  t13 = t6*t9;
  t14 = t12 + t13;
  t15 = Cos(t5);
  t16 = t6*t7;
  t17 = -1.*t2*t8*t9;
  t18 = t16 + t17;
  t19 = var[12];
  t20 = var[9];
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
  t33 = -1.*t23*t21*t2;
  t34 = -1.*t22*t26;
  t35 = t33 + t34;
  t36 = var[14];
  t37 = Sin(t36);
  t38 = t28*t32;
  t39 = t27*t35;
  t40 = t38 + t39;
  t41 = Cos(t36);
  t42 = t27*t32;
  t43 = -1.*t28*t35;
  t44 = t42 + t43;
  t45 = var[10];
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
  t58 = -1.*t21*t22*t2;
  t59 = t23*t26;
  t60 = t58 + t59;
  t61 = t50*t53;
  t62 = t54*t57;
  t63 = t61 + t62;
  t64 = -1.*t15;
  t65 = 1. + t64;
  t66 = -1.*t23;
  t67 = 1. + t66;
  t68 = -1.*t27;
  t69 = 1. + t68;
  t70 = 0.05*t69;
  t71 = t70 + t29;
  t72 = 0.089*t48;
  t73 = -0.846*t49;
  t74 = t72 + t73;
  t75 = t6*t21*t7*t11;
  t76 = t15*t6*t21*t9;
  t77 = t75 + t76;
  t78 = -1. + t27;
  t79 = 0.05*t78;
  t80 = t79 + t29;
  t81 = -1.*t41;
  t82 = 1. + t81;
  t83 = -1.*t15*t6*t21*t7;
  t84 = t6*t21*t11*t9;
  t85 = t83 + t84;
  t86 = -1.*t23*t6*t8;
  t87 = -1.*t22*t77;
  t88 = t86 + t87;
  t89 = t28*t85;
  t90 = t27*t88;
  t91 = t89 + t90;
  t92 = t27*t85;
  t93 = -1.*t28*t88;
  t94 = t92 + t93;
  t95 = -1.*t54;
  t96 = 1. + t95;
  t97 = -0.846*t48;
  t98 = -0.089*t49;
  t99 = t97 + t98;
  t100 = -1.*t37*t91;
  t101 = t41*t94;
  t102 = t100 + t101;
  t103 = t41*t91;
  t104 = t37*t94;
  t105 = t103 + t104;
  t106 = -1.*t6*t22*t8;
  t107 = t23*t77;
  t108 = t106 + t107;
  t109 = t50*t102;
  t110 = t54*t105;
  t111 = t109 + t110;
  t112 = t6*t7*t8;
  t113 = -1.*t2*t9;
  t114 = t112 + t113;
  t115 = t7*t2;
  t116 = t6*t8*t9;
  t117 = t115 + t116;
  t118 = t15*t114;
  t119 = -1.*t11*t117;
  t120 = t118 + t119;
  t121 = t11*t114;
  t122 = t15*t117;
  t123 = t121 + t122;
  t124 = t28*t123;
  t125 = -1.*t27*t22*t120;
  t126 = t124 + t125;
  t127 = t27*t123;
  t128 = t22*t28*t120;
  t129 = t127 + t128;
  t130 = -1.*t37*t126;
  t131 = t41*t129;
  t132 = t130 + t131;
  t133 = t41*t126;
  t134 = t37*t129;
  t135 = t133 + t134;
  t136 = t50*t132;
  t137 = t54*t135;
  t138 = t136 + t137;
  t139 = -1.*t6*t7*t8;
  t140 = t2*t9;
  t141 = t139 + t140;
  t142 = -1.*t11*t141;
  t143 = t142 + t122;
  t144 = t15*t141;
  t145 = t11*t117;
  t146 = t144 + t145;
  t147 = t23*t6*t21;
  t148 = -1.*t22*t143;
  t149 = t147 + t148;
  t150 = t28*t146;
  t151 = t27*t149;
  t152 = t150 + t151;
  t153 = t27*t146;
  t154 = -1.*t28*t149;
  t155 = t153 + t154;
  t156 = t6*t21*t22;
  t157 = t23*t143;
  t158 = t156 + t157;
  t159 = -1.*t37*t152;
  t160 = t41*t155;
  t161 = t159 + t160;
  t162 = t50*t161;
  t163 = t41*t152;
  t164 = t37*t155;
  t165 = t163 + t164;
  t166 = t54*t165;
  t167 = t162 + t166;
  t168 = t54*t161;
  t169 = -1.*t50*t165;
  t170 = t168 + t169;
  t171 = -1.*t6*t21*t22;
  t172 = -1.*t23*t143;
  t173 = t171 + t172;
  t174 = -1.*t41*t28*t173;
  t175 = -1.*t27*t37*t173;
  t176 = t174 + t175;
  t177 = t27*t41*t173;
  t178 = -1.*t28*t37*t173;
  t179 = t177 + t178;
  t180 = t50*t176;
  t181 = t54*t179;
  t182 = t180 + t181;
  t183 = 0.05*t27;
  t184 = -1.*t28*t146;
  t185 = -1.*t27*t149;
  t186 = t184 + t185;
  t187 = t37*t186;
  t188 = t187 + t160;
  t189 = t41*t186;
  t190 = -1.*t37*t155;
  t191 = t189 + t190;
  t192 = t54*t188;
  t193 = t50*t191;
  t194 = t192 + t193;
  t195 = 0.089*t11*t117;
  t196 = -1.*t15*t141;
  t197 = t196 + t119;
  t198 = t28*t143;
  t199 = -1.*t27*t22*t197;
  t200 = t198 + t199;
  t201 = t27*t143;
  t202 = t22*t28*t197;
  t203 = t201 + t202;
  t204 = -1.*t37*t200;
  t205 = t41*t203;
  t206 = t204 + t205;
  t207 = t41*t200;
  t208 = t37*t203;
  t209 = t207 + t208;
  t210 = t50*t206;
  t211 = t54*t209;
  t212 = t210 + t211;
  t213 = -1.*t50*t161;
  t214 = -1.*t41*t152;
  t215 = t214 + t190;
  t216 = t50*t215;
  t217 = t168 + t216;
  p_output1[0]=1.;
  p_output1[1]=0.089*t11*t14 + 0.089*t2*t21*t22 + 0.424*t37*t44 + 0.846*t50*t53 - 0.082*(t53*t54 - 1.*t50*t57) - 0.92245*(-1.*t49*t60 + t46*t63) + 0.089*(t46*t60 + t49*t63) + 0.089*t18*t65 + 0.089*t26*t67 + t32*t71 + t60*t74 + t35*t80 - 0.424*t40*t82 - 0.846*t57*t96 + t63*t99;
  p_output1[2]=-0.92245*(t111*t46 - 1.*t108*t49) + 0.089*(t108*t46 + t111*t49) + 0.846*t102*t50 - 0.082*(-1.*t105*t50 + t102*t54) - 0.089*t11*t21*t6*t7 + t108*t74 + 0.089*t67*t77 + 0.089*t22*t6*t8 + t71*t85 + t80*t88 + 0.089*t21*t6*t65*t9 - 0.424*t82*t91 + 0.424*t37*t94 - 0.846*t105*t96 + t111*t99;
  p_output1[3]=t195 + 0.424*t129*t37 + 0.089*(t120*t23*t46 + t138*t49) - 0.92245*(t138*t46 - 1.*t120*t23*t49) + 0.846*t132*t50 - 0.082*(-1.*t135*t50 + t132*t54) + 0.089*t114*t65 + 0.089*t120*t67 + t123*t71 + t120*t23*t74 - 1.*t120*t22*t80 - 0.424*t126*t82 - 0.846*t135*t96 + t138*t99;
  p_output1[4]=t158*(-0.846*t46 + 0.089*t49) + 0.089*(t167*t46 - 1.*t158*t49) - 0.92245*(-1.*t158*t46 - 1.*t167*t49) + t167*(-0.089*t46 + t73);
  p_output1[5]=-0.92245*t170*t46 + 0.089*t170*t49 - 0.846*t165*t50 + 0.846*t161*t54 - 0.082*(t213 - 1.*t165*t54) + t170*t99;
  p_output1[6]=0.089*t143*t22 - 0.424*t173*t28*t37 - 0.92245*(t182*t46 - 1.*t149*t49) + 0.089*(t149*t46 + t182*t49) + 0.846*t176*t50 - 0.082*(-1.*t179*t50 + t176*t54) - 0.089*t21*t23*t6 + t149*t74 + t173*t80 - 0.424*t173*t27*t82 - 0.846*t179*t96 + t182*t99;
  p_output1[7]=t149*(t183 - 0.05*t28) + t146*(t183 + t29) + 0.424*t186*t37 - 0.92245*t194*t46 + 0.089*t194*t49 + 0.846*t191*t50 - 0.082*(-1.*t188*t50 + t191*t54) - 0.424*t155*t82 - 0.846*t188*t96 + t194*t99;
  p_output1[8]=0.089*t141*t15 + t195 + 0.424*t203*t37 + 0.089*(t197*t23*t46 + t212*t49) - 0.92245*(t212*t46 - 1.*t197*t23*t49) + 0.846*t206*t50 - 0.082*(-1.*t209*t50 + t206*t54) + 0.089*t197*t67 + t143*t71 + t197*t23*t74 - 1.*t197*t22*t80 - 0.424*t200*t82 - 0.846*t209*t96 + t212*t99;
  p_output1[9]=-0.424*t152*t37 + 0.424*t155*t41 - 0.92245*t217*t46 + 0.089*t217*t49 + 0.846*t215*t50 - 0.082*(t213 + t215*t54) - 0.846*t161*t96 + t217*t99;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "J_heelClearance_sca.hh"

namespace Kinematics
{
namespace basic
{

void J_heelClearance_sca_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

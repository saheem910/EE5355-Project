/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:28:52 GMT-04:00
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
  double t218;
  double t219;
  double t220;
  double t221;
  double t222;
  double t223;
  double t224;
  double t225;
  t1 = q[4];
  t2 = q[19];
  t3 = Cos(t1);
  t4 = q[5];
  t5 = q[17];
  t6 = Cos(t4);
  t7 = Sin(t2);
  t8 = Cos(t2);
  t9 = Sin(t4);
  t10 = q[18];
  t11 = Sin(t5);
  t12 = Sin(t1);
  t13 = Cos(t5);
  t14 = -1.*t3*t6*t7;
  t15 = -1.*t8*t3*t9;
  t16 = t14 + t15;
  t17 = Cos(t10);
  t18 = Sin(t10);
  t19 = 0.05*t18;
  t20 = t8*t3*t6;
  t21 = -1.*t3*t7*t9;
  t22 = t20 + t21;
  t23 = t13*t12;
  t24 = -1.*t11*t16;
  t25 = t23 + t24;
  t26 = q[0];
  t27 = q[3];
  t28 = Sin(t27);
  t29 = -1.*t8;
  t30 = 1. + t29;
  t31 = Cos(t27);
  t32 = -1.*t13;
  t33 = 1. + t32;
  t34 = t6*t28*t12;
  t35 = t31*t9;
  t36 = t34 + t35;
  t37 = t31*t6;
  t38 = -1.*t28*t12*t9;
  t39 = t37 + t38;
  t40 = -1.*t17;
  t41 = 1. + t40;
  t42 = 0.05*t41;
  t43 = t42 + t19;
  t44 = -1.*t7*t36;
  t45 = t8*t39;
  t46 = t44 + t45;
  t47 = -1. + t17;
  t48 = 0.05*t47;
  t49 = t48 + t19;
  t50 = t8*t36;
  t51 = t7*t39;
  t52 = t50 + t51;
  t53 = -1.*t13*t3*t28;
  t54 = -1.*t11*t46;
  t55 = t53 + t54;
  t56 = q[1];
  t57 = -1.*t31*t6*t12;
  t58 = t28*t9;
  t59 = t57 + t58;
  t60 = t6*t28;
  t61 = t31*t12*t9;
  t62 = t60 + t61;
  t63 = -1.*t7*t59;
  t64 = t8*t62;
  t65 = t63 + t64;
  t66 = t8*t59;
  t67 = t7*t62;
  t68 = t66 + t67;
  t69 = t13*t31*t3;
  t70 = -1.*t11*t65;
  t71 = t69 + t70;
  t72 = q[2];
  t73 = -0.089*t3*t6*t7;
  t74 = 0.089*t11*t12;
  t75 = 0.089*t30*t3*t9;
  t76 = -0.089*t33*t16;
  t77 = t43*t22;
  t78 = t11*t12;
  t79 = t13*t16;
  t80 = t78 + t79;
  t81 = -0.089*t80;
  t82 = t49*t25;
  t83 = q[20];
  t84 = t17*t22;
  t85 = -1.*t18*t25;
  t86 = t84 + t85;
  t87 = Cos(t83);
  t88 = t18*t22;
  t89 = t17*t25;
  t90 = t88 + t89;
  t91 = Sin(t83);
  t92 = -0.089*t3*t11*t28;
  t93 = -0.089*t7*t36;
  t94 = -0.089*t30*t39;
  t95 = -0.089*t33*t46;
  t96 = t43*t52;
  t97 = -1.*t3*t11*t28;
  t98 = t13*t46;
  t99 = t97 + t98;
  t100 = -0.089*t99;
  t101 = t49*t55;
  t102 = -1.*t87;
  t103 = 1. + t102;
  t104 = t17*t52;
  t105 = -1.*t18*t55;
  t106 = t104 + t105;
  t107 = t18*t52;
  t108 = t17*t55;
  t109 = t107 + t108;
  t110 = 0.089*t31*t3*t11;
  t111 = -0.089*t7*t59;
  t112 = -0.089*t30*t62;
  t113 = -0.089*t33*t65;
  t114 = t43*t68;
  t115 = t31*t3*t11;
  t116 = t13*t65;
  t117 = t115 + t116;
  t118 = -0.089*t117;
  t119 = t49*t71;
  t120 = t17*t68;
  t121 = -1.*t18*t71;
  t122 = t120 + t121;
  t123 = t18*t68;
  t124 = t17*t71;
  t125 = t123 + t124;
  t126 = -0.424*t103*t90;
  t127 = 0.424*t91*t86;
  t128 = q[16];
  t129 = t87*t90;
  t130 = t91*t86;
  t131 = t129 + t130;
  t132 = Sin(t128);
  t133 = -1.*t91*t90;
  t134 = t87*t86;
  t135 = t133 + t134;
  t136 = Cos(t128);
  t137 = -0.424*t103*t109;
  t138 = 0.424*t91*t106;
  t139 = -1.*t136;
  t140 = 1. + t139;
  t141 = t87*t109;
  t142 = t91*t106;
  t143 = t141 + t142;
  t144 = -1.*t91*t109;
  t145 = t87*t106;
  t146 = t144 + t145;
  t147 = -0.424*t103*t125;
  t148 = 0.424*t91*t122;
  t149 = t87*t125;
  t150 = t91*t122;
  t151 = t149 + t150;
  t152 = -1.*t91*t125;
  t153 = t87*t122;
  t154 = t152 + t153;
  t155 = q[15];
  t156 = 0.846*t132*t135;
  t157 = -0.846*t140*t131;
  t158 = Cos(t155);
  t159 = -1.*t158;
  t160 = 1. + t159;
  t161 = Sin(t155);
  t162 = t132*t135;
  t163 = t136*t131;
  t164 = t162 + t163;
  t165 = -0.089*t160;
  t166 = -0.846*t161;
  t167 = t165 + t166;
  t168 = 0.846*t132*t146;
  t169 = -0.846*t140*t143;
  t170 = -0.846*t160;
  t171 = 0.089*t161;
  t172 = t170 + t171;
  t173 = t132*t146;
  t174 = t136*t143;
  t175 = t173 + t174;
  t176 = 0.846*t132*t154;
  t177 = -0.846*t140*t151;
  t178 = t132*t154;
  t179 = t136*t151;
  t180 = t178 + t179;
  t181 = t167*t80;
  t182 = t172*t164;
  t183 = t136*t135;
  t184 = -1.*t132*t131;
  t185 = t183 + t184;
  t186 = -1.*t161*t80;
  t187 = t158*t164;
  t188 = t186 + t187;
  t189 = -0.92245*t188;
  t190 = t158*t80;
  t191 = t161*t164;
  t192 = t190 + t191;
  t193 = -0.089*t192;
  t194 = t167*t99;
  t195 = t172*t175;
  t196 = t136*t146;
  t197 = -1.*t132*t143;
  t198 = t196 + t197;
  t199 = -1.*t161*t99;
  t200 = t158*t175;
  t201 = t199 + t200;
  t202 = -0.92245*t201;
  t203 = t158*t99;
  t204 = t161*t175;
  t205 = t203 + t204;
  t206 = -0.089*t205;
  t207 = t167*t117;
  t208 = t172*t180;
  t209 = t136*t154;
  t210 = -1.*t132*t151;
  t211 = t209 + t210;
  t212 = -1.*t161*t117;
  t213 = t158*t180;
  t214 = t212 + t213;
  t215 = -0.92245*t214;
  t216 = t158*t117;
  t217 = t161*t180;
  t218 = t216 + t217;
  t219 = -0.089*t218;
  t220 = -0.846*t164;
  t221 = t73 + t74 + t75 + t76 + t77 + t81 + t82 + t126 + t127 + t156 + t157 + t220 + t26;
  t222 = -0.846*t175;
  t223 = t92 + t93 + t94 + t95 + t96 + t100 + t101 + t137 + t138 + t168 + t169 + t222 + t56;
  t224 = -0.846*t180;
  t225 = t110 + t111 + t112 + t113 + t114 + t118 + t119 + t147 + t148 + t176 + t177 + t224 + t72;
  p_output1[0]=t26;
  p_output1[1]=t56;
  p_output1[2]=t72;
  p_output1[3]=0.05*(-1.*t18*t22 - 1.*t17*t25) + t26 + t73 + t74 + t75 + t76 + t77 + t81 + t82 + 0.05*t86;
  p_output1[4]=t100 + t101 + 0.05*t106 + 0.05*(-1.*t18*t52 - 1.*t17*t55) + t56 + t92 + t93 + t94 + t95 + t96;
  p_output1[5]=t110 + t111 + t112 + t113 + t114 + t118 + t119 + 0.05*t122 + 0.05*(-1.*t18*t68 - 1.*t17*t71) + t72;
  p_output1[6]=t126 + t127 - 0.424*t131 + t26 + t73 + t74 + t75 + t76 + t77 + t81 + t82;
  p_output1[7]=t100 + t101 + t137 + t138 - 0.424*t143 + t56 + t92 + t93 + t94 + t95 + t96;
  p_output1[8]=t110 + t111 + t112 + t113 + t114 + t118 + t119 + t147 + t148 - 0.424*t151 + t72;
  p_output1[9]=t221;
  p_output1[10]=t223;
  p_output1[11]=t225;
  p_output1[12]=t126 + t127 + t156 + t157 + t181 + t182 + 0.1728*t185 + t189 + t193 + t26 + t73 + t74 + t75 + t76 + t77 + t82;
  p_output1[13]=t101 + t137 + t138 + t168 + t169 + t194 + t195 + 0.1728*t198 + t202 + t206 + t56 + t92 + t93 + t94 + t95 + t96;
  p_output1[14]=t110 + t111 + t112 + t113 + t114 + t119 + t147 + t148 + t176 + t177 + t207 + t208 + 0.1728*t211 + t215 + t219 + t72;
  p_output1[15]=t126 + t127 + t156 + t157 + t181 + t182 - 0.082*t185 + t189 + t193 + t26 + t73 + t74 + t75 + t76 + t77 + t82;
  p_output1[16]=t101 + t137 + t138 + t168 + t169 + t194 + t195 - 0.082*t198 + t202 + t206 + t56 + t92 + t93 + t94 + t95 + t96;
  p_output1[17]=t110 + t111 + t112 + t113 + t114 + t119 + t147 + t148 + t176 + t177 + t207 + t208 - 0.082*t211 + t215 + t219 + t72;
  p_output1[18]=t221;
  p_output1[19]=t223;
  p_output1[20]=t225;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,q);


}

#else // MATLAB_MEX_FILE

#include "h_RightLeg.hh"

namespace Kinematics
{
namespace basic
{

void h_RightLeg_raw(double *p_output1, const double *q)
{
  // Call Subroutines
  output1(p_output1, q);

}

}
}

#endif // MATLAB_MEX_FILE

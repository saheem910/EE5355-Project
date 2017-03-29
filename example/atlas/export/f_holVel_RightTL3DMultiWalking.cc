/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:52 GMT-04:00
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
  double t218;
  double t219;
  double t220;
  double t221;
  double t222;
  double t223;
  double t224;
  double t225;
  double t226;
  double t227;
  double t228;
  double t229;
  double t230;
  double t231;
  double t232;
  double t233;
  double t234;
  double t235;
  double t236;
  double t237;
  double t238;
  double t239;
  double t240;
  double t241;
  double t242;
  double t243;
  double t244;
  double t245;
  double t246;
  double t247;
  double t248;
  double t249;
  t1 = var[15];
  t2 = Cos(t1);
  t3 = 0. + t2;
  t4 = -1.*t2;
  t5 = 1. + t4;
  t6 = Sin(t1);
  t7 = -1.*t6;
  t8 = 0. + t7;
  t9 = -0.089*t5;
  t10 = -0.089*t2;
  t11 = 0.07645000000000002*t6;
  t12 = 0. + t9 + t10 + t11;
  t13 = -0.846*t5;
  t14 = -0.92245*t2;
  t15 = 0. + t13 + t14;
  t16 = var[16];
  t17 = var[20];
  t18 = var[18];
  t19 = Cos(t16);
  t20 = 0. + t19;
  t21 = Cos(t17);
  t22 = Sin(t16);
  t23 = -1.*t22;
  t24 = 0. + t23;
  t25 = Sin(t17);
  t26 = Cos(t18);
  t27 = 0. + t6;
  t28 = Sin(t18);
  t29 = t19*t27;
  t30 = 0. + t29;
  t31 = t27*t22;
  t32 = 0. + t31;
  t33 = t8*t12;
  t34 = -1.*t19;
  t35 = 1. + t34;
  t36 = -0.846*t35;
  t37 = t15*t19;
  t38 = -0.1728*t22;
  t39 = t36 + t37 + t38;
  t40 = 0.1728*t19;
  t41 = 0.846*t22;
  t42 = t15*t22;
  t43 = t40 + t41 + t42;
  t44 = t3*t19;
  t45 = 0. + t44;
  t46 = t3*t22;
  t47 = 0. + t46;
  t48 = 0.05*t28;
  t49 = t21*t43;
  t50 = 0.424*t25;
  t51 = t39*t25;
  t52 = t49 + t50 + t51;
  t53 = -1.*t21;
  t54 = 1. + t53;
  t55 = -0.424*t54;
  t56 = t21*t39;
  t57 = -1.*t43*t25;
  t58 = t55 + t56 + t57;
  t59 = t21*t47;
  t60 = t45*t25;
  t61 = 0. + t59 + t60;
  t62 = t45*t21;
  t63 = -1.*t47*t25;
  t64 = 0. + t62 + t63;
  t65 = t26*t61;
  t66 = t28*t64;
  t67 = 0. + t65 + t66;
  t68 = -1.*t3*t12;
  t69 = -1. + t26;
  t70 = 0.05*t69;
  t71 = -1.*t28*t52;
  t72 = t26*t58;
  t73 = t70 + t48 + t71 + t72;
  t74 = t21*t32;
  t75 = t30*t25;
  t76 = 0. + t74 + t75;
  t77 = t21*t30;
  t78 = -1.*t32*t25;
  t79 = 0. + t77 + t78;
  t80 = -1.*t26;
  t81 = 1. + t80;
  t82 = 0.05*t81;
  t83 = t26*t52;
  t84 = t28*t58;
  t85 = t82 + t48 + t83 + t84;
  t86 = t26*t76;
  t87 = t28*t79;
  t88 = 0. + t86 + t87;
  t89 = t21*t24;
  t90 = -1.*t20*t25;
  t91 = 0. + t89 + t90;
  t92 = t20*t21;
  t93 = t24*t25;
  t94 = 0. + t92 + t93;
  t95 = var[17];
  t96 = -1.*t28*t76;
  t97 = t26*t79;
  t98 = 0. + t96 + t97;
  t99 = Sin(t95);
  t100 = Cos(t95);
  t101 = -1.*t28*t61;
  t102 = t26*t64;
  t103 = 0. + t101 + t102;
  t104 = t8*t99;
  t105 = t100*t103;
  t106 = 0. + t104 + t105;
  t107 = 0. + t82 + t48 + t83 + t84;
  t108 = 0.089*t99;
  t109 = t12*t99;
  t110 = t100*t73;
  t111 = t108 + t109 + t110;
  t112 = t3*t99;
  t113 = t100*t98;
  t114 = 0. + t112 + t113;
  t115 = -1.*t100;
  t116 = 1. + t115;
  t117 = -0.089*t116;
  t118 = t100*t12;
  t119 = -1.*t99*t73;
  t120 = t117 + t118 + t119;
  t121 = t26*t91;
  t122 = -1.*t28*t94;
  t123 = 0. + t121 + t122;
  t124 = var[4];
  t125 = t28*t91;
  t126 = t26*t94;
  t127 = 0. + t125 + t126;
  t128 = var[19];
  t129 = Sin(t128);
  t130 = Cos(t128);
  t131 = -1.*t99*t123;
  t132 = 0. + t131;
  t133 = var[5];
  t134 = Cos(t133);
  t135 = t129*t127;
  t136 = t130*t132;
  t137 = 0. + t135 + t136;
  t138 = t130*t127;
  t139 = -1.*t129*t132;
  t140 = 0. + t138 + t139;
  t141 = Sin(t133);
  t142 = var[3];
  t143 = Cos(t124);
  t144 = t100*t123;
  t145 = 0. + t144;
  t146 = Sin(t124);
  t147 = t134*t140;
  t148 = -1.*t137*t141;
  t149 = 0. + t147 + t148;
  t150 = Sin(t142);
  t151 = t134*t137;
  t152 = t140*t141;
  t153 = 0. + t151 + t152;
  t154 = Cos(t142);
  t155 = t143*t145;
  t156 = -1.*t146*t149;
  t157 = 0. + t155 + t156;
  t158 = t3*t100;
  t159 = -1.*t99*t98;
  t160 = 0. + t158 + t159;
  t161 = t100*t8;
  t162 = -1.*t99*t103;
  t163 = 0. + t161 + t162;
  t164 = -0.089*t129;
  t165 = t130*t107;
  t166 = -1.*t129*t120;
  t167 = t164 + t165 + t166;
  t168 = -1.*t130;
  t169 = 1. + t168;
  t170 = -0.089*t169;
  t171 = t129*t107;
  t172 = t130*t120;
  t173 = t170 + t171 + t172;
  t174 = t130*t67;
  t175 = -1.*t129*t163;
  t176 = 0. + t174 + t175;
  t177 = t129*t67;
  t178 = t130*t163;
  t179 = 0. + t177 + t178;
  t180 = 0. + t108 + t109 + t110;
  t181 = t134*t167;
  t182 = -1.*t173*t141;
  t183 = 0. + t181 + t182;
  t184 = t134*t176;
  t185 = -1.*t179*t141;
  t186 = 0. + t184 + t185;
  t187 = t106*t146;
  t188 = t143*t186;
  t189 = 0. + t187 + t188;
  t190 = t134*t173;
  t191 = t167*t141;
  t192 = 0. + t190 + t191;
  t193 = t129*t88;
  t194 = t130*t160;
  t195 = 0. + t193 + t194;
  t196 = t130*t88;
  t197 = -1.*t129*t160;
  t198 = 0. + t196 + t197;
  t199 = t180*t146;
  t200 = t143*t183;
  t201 = 0. + t199 + t200;
  t202 = t114*t146;
  t203 = t134*t198;
  t204 = -1.*t195*t141;
  t205 = 0. + t203 + t204;
  t206 = t143*t205;
  t207 = 0. + t202 + t206;
  t208 = t143*t180;
  t209 = -1.*t146*t183;
  t210 = 0. + t208 + t209;
  t211 = t134*t195;
  t212 = t198*t141;
  t213 = 0. + t211 + t212;
  t214 = t134*t179;
  t215 = t176*t141;
  t216 = 0. + t214 + t215;
  t217 = t192*t216;
  t218 = -1.*t192*t213;
  t219 = t180*t106;
  t220 = -1.*t180*t114;
  t221 = var[37];
  t222 = var[38];
  t223 = var[39];
  t224 = var[40];
  t225 = var[41];
  t226 = var[21];
  t227 = t143*t114;
  t228 = -1.*t146*t205;
  t229 = 0. + t227 + t228;
  t230 = var[22];
  t231 = var[23];
  t232 = t145*t146;
  t233 = t143*t149;
  t234 = 0. + t232 + t233;
  t235 = t143*t106;
  t236 = -1.*t146*t186;
  t237 = 0. + t235 + t236;
  t238 = var[24];
  t239 = t153*t192;
  t240 = -1.*t192*t216;
  t241 = var[25];
  t242 = t145*t180;
  t243 = -1.*t180*t106;
  t244 = var[26];
  t245 = -1.*t153*t192;
  t246 = t192*t213;
  t247 = -1.*t145*t180;
  t248 = t180*t114;
  t249 = var[36];
  p_output1[0]=0. + (0. + t153*t154 - 1.*t150*t157)*t230 + (0. + t150*t153 + t154*t157)*t231 + t226*t234 + (t189*(-1.*t201*t207 + t218 - 1.*t210*t229) + t207*(t189*t201 + t217 + t210*t237))*t238 + (t213*(t183*t186 + t217 + t219) + t216*(-1.*t183*t205 + t218 + t220))*t241 + (t114*(t167*t176 + t173*t179 + t219) + t106*(-1.*t173*t195 - 1.*t167*t198 + t220))*t244 + t221*(0.846 + t3*(0. + t15*t3 + t33) + (0. - 1.*t15*t27 + t68)*t8) + t225*(0. + 0.424*t20 + t3*(t33 + t39*t45 + t43*t47) + (-1.*t30*t39 - 1.*t32*t43 + t68)*t8) + t224*(-0.089*t127 + t114*(t106*t111 + t120*t163 + t107*t67) + t106*(-1.*t111*t114 - 1.*t120*t160 - 1.*t107*t88)) + t223*(0. + t3*(t33 + t52*t61 + t58*t64) + (t68 - 1.*t52*t76 - 1.*t58*t79)*t8 + 0.05*t91 + 0.05*t94) + t222*(0. + 0.089*t123 + (t33 + t103*t73 + t67*t85)*t88 + t67*(t68 - 1.*t85*t88 - 1.*t73*t98));
  p_output1[1]=t207*t226 + (0. + t154*t213 - 1.*t150*t229)*t230 + (0. + t150*t213 + t154*t229)*t231 + t238*(t189*(t157*t210 + t201*t234 + t239) + t234*(-1.*t189*t201 - 1.*t210*t237 + t240)) + t241*(t216*(t149*t183 + t239 + t242) + t153*(-1.*t183*t186 + t240 + t243)) + (t106*(t140*t167 + t137*t173 + t242) + t145*(-1.*t167*t176 - 1.*t173*t179 + t243))*t244 + 0.07645000000000002*t249 + t221*(0. + 0.1728*t8) + t225*(0. + 0.424*t32 + (0. + t24*t39 + t20*t43)*t8) + t224*(t106*(t107*t127 + t120*t132 + t111*t145) + t145*(-1.*t106*t111 - 1.*t120*t163 - 1.*t107*t67) - 0.089*t88) + t223*(0. + 0.05*t76 + 0.05*t79 + t8*(0. + t58*t91 + t52*t94)) + t222*(t67*(0. + t123*t73 + t127*t85) + t127*(-1.*t103*t73 - 1.*t12*t8 - 1.*t67*t85) + 0.089*t98);
  p_output1[2]=0. + t189*t226 + t230*(0. + t154*t216 - 1.*t150*t237) + t231*(0. + t150*t216 + t154*t237) + t238*(t207*(-1.*t157*t210 - 1.*t201*t234 + t245) + t234*(t201*t207 + t210*t229 + t246)) + t244*(t114*(-1.*t140*t167 - 1.*t137*t173 + t247) + t145*(t173*t195 + t167*t198 + t248)) + t241*(t213*(-1.*t149*t183 + t245 + t247) + t153*(t183*t205 + t246 + t248)) + t221*(0. - 0.1728*t3) + t225*(0. + t3*(0. - 1.*t24*t39 - 1.*t20*t43) + 0.424*t47) + t224*(t114*(-1.*t107*t127 - 1.*t120*t132 - 1.*t111*t145) - 0.089*t67 + t145*(t111*t114 + t120*t160 + t107*t88)) + t223*(0. + 0.05*t61 + 0.05*t64 + t3*(0. - 1.*t58*t91 - 1.*t52*t94)) + t222*(0.089*t103 + (0. - 1.*t123*t73 - 1.*t127*t85)*t88 + t127*(t12*t3 + t85*t88 + t73*t98));
  p_output1[3]=0. + t127*t222 + t145*t224 + t234*t238 + t153*t241 + t145*t244 + t249;
  p_output1[4]=0. + t114*t224 + t207*t238 + t213*t241 + t114*t244 + t221*t3 + t223*t3 + t225*t3 + t222*t88;
  p_output1[5]=0. + t106*t224 + t189*t238 + t216*t241 + t106*t244 + t222*t67 + t221*t8 + t223*t8 + t225*t8;
  p_output1[6]=var[27];
  p_output1[7]=var[28];
  p_output1[8]=var[29];
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
    ( !(mrows == 42 && ncols == 1) && 
      !(mrows == 1 && ncols == 42))) 
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

#include "f_holVel_RightTL3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void f_holVel_RightTL3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:58:59 GMT-04:00
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
  double t250;
  double t251;
  double t252;
  double t253;
  double t254;
  double t255;
  double t256;
  double t257;
  double t258;
  double t259;
  double t260;
  double t261;
  double t262;
  double t263;
  double t264;
  double t265;
  double t266;
  double t267;
  double t268;
  double t269;
  double t270;
  double t271;
  double t272;
  double t273;
  double t274;
  double t275;
  double t276;
  double t277;
  double t278;
  double t279;
  double t280;
  double t281;
  double t282;
  double t283;
  double t284;
  double t285;
  double t286;
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
  t149 = t45*t44;
  t150 = -1.*t41*t48;
  t151 = t45*t102;
  t152 = -1.*t41*t105;
  t153 = var[13];
  t154 = var[11];
  t155 = Sin(t153);
  t156 = Cos(t153);
  t157 = var[12];
  t158 = var[9];
  t159 = Sin(t154);
  t160 = Cos(t154);
  t161 = -1.*t3*t6*t155;
  t162 = -1.*t156*t3*t9;
  t163 = t161 + t162;
  t164 = Cos(t157);
  t165 = Sin(t157);
  t166 = 0.05*t165;
  t167 = t156*t3*t6;
  t168 = -1.*t3*t155*t9;
  t169 = t167 + t168;
  t170 = t160*t13;
  t171 = -1.*t159*t163;
  t172 = t170 + t171;
  t173 = var[14];
  t174 = Sin(t173);
  t175 = t165*t169;
  t176 = t164*t172;
  t177 = t175 + t176;
  t178 = Cos(t173);
  t179 = t164*t169;
  t180 = -1.*t165*t172;
  t181 = t179 + t180;
  t182 = var[10];
  t183 = Cos(t158);
  t184 = -1.*t183;
  t185 = 1. + t184;
  t186 = Sin(t158);
  t187 = Sin(t182);
  t188 = -1.*t174*t177;
  t189 = t178*t181;
  t190 = t188 + t189;
  t191 = Cos(t182);
  t192 = t178*t177;
  t193 = t174*t181;
  t194 = t192 + t193;
  t195 = t159*t13;
  t196 = t160*t163;
  t197 = t195 + t196;
  t198 = t187*t190;
  t199 = t191*t194;
  t200 = t198 + t199;
  t201 = var[0];
  t202 = -1.*t156;
  t203 = 1. + t202;
  t204 = -1.*t160;
  t205 = 1. + t204;
  t206 = -1.*t164;
  t207 = 1. + t206;
  t208 = 0.05*t207;
  t209 = t208 + t166;
  t210 = 0.089*t185;
  t211 = -0.846*t186;
  t212 = t210 + t211;
  t213 = -1.*t155*t64;
  t214 = t156*t67;
  t215 = t213 + t214;
  t216 = -1. + t164;
  t217 = 0.05*t216;
  t218 = t217 + t166;
  t219 = -1.*t178;
  t220 = 1. + t219;
  t221 = t156*t64;
  t222 = t155*t67;
  t223 = t221 + t222;
  t224 = -1.*t160*t3*t56;
  t225 = -1.*t159*t215;
  t226 = t224 + t225;
  t227 = t165*t223;
  t228 = t164*t226;
  t229 = t227 + t228;
  t230 = t164*t223;
  t231 = -1.*t165*t226;
  t232 = t230 + t231;
  t233 = -1.*t191;
  t234 = 1. + t233;
  t235 = -0.846*t185;
  t236 = -0.089*t186;
  t237 = t235 + t236;
  t238 = -1.*t174*t229;
  t239 = t178*t232;
  t240 = t238 + t239;
  t241 = t178*t229;
  t242 = t174*t232;
  t243 = t241 + t242;
  t244 = -1.*t3*t159*t56;
  t245 = t160*t215;
  t246 = t244 + t245;
  t247 = t187*t240;
  t248 = t191*t243;
  t249 = t247 + t248;
  t250 = var[1];
  t251 = -1.*t155*t114;
  t252 = t156*t117;
  t253 = t251 + t252;
  t254 = t156*t114;
  t255 = t155*t117;
  t256 = t254 + t255;
  t257 = t160*t59*t3;
  t258 = -1.*t159*t253;
  t259 = t257 + t258;
  t260 = t165*t256;
  t261 = t164*t259;
  t262 = t260 + t261;
  t263 = t164*t256;
  t264 = -1.*t165*t259;
  t265 = t263 + t264;
  t266 = -1.*t174*t262;
  t267 = t178*t265;
  t268 = t266 + t267;
  t269 = t178*t262;
  t270 = t174*t265;
  t271 = t269 + t270;
  t272 = t59*t3*t159;
  t273 = t160*t253;
  t274 = t272 + t273;
  t275 = t187*t268;
  t276 = t191*t271;
  t277 = t275 + t276;
  t278 = var[2];
  t279 = -1.*t186*t274;
  t280 = t183*t277;
  t281 = t183*t274;
  t282 = t186*t277;
  t283 = t191*t190;
  t284 = -1.*t187*t194;
  t285 = t191*t240;
  t286 = -1.*t187*t243;
  p_output1[0]=0.089*t12*t13 + 0.1728*(t149 + t150) + t201 + 0.424*t28*t35 + 0.846*t41*t44 - 0.92245*(-1.*t40*t51 + t37*t54) - 0.089*(t37*t51 + t40*t54) - 0.089*t17*t61 - 0.089*t3*t6*t7 + t23*t71 + t51*t74 + t26*t80 - 0.424*t31*t82 + 0.089*t3*t58*t9 - 0.846*t48*t96 + t54*t99 - 1.*var[21];
  p_output1[1]=0.1728*(t151 + t152) + t250 - 0.92245*(t111*t37 - 1.*t108*t40) - 0.089*(t108*t37 + t111*t40) + 0.846*t102*t41 - 0.089*t12*t3*t56 - 0.089*t58*t67 - 0.089*t64*t7 + t108*t74 - 0.089*t61*t77 + t71*t85 + t80*t88 - 0.424*t82*t91 + 0.424*t28*t94 - 0.846*t105*t96 + t111*t99 - 1.*var[22];
  p_output1[2]=-0.92245*(t145 + t146) - 0.089*(t147 + t148) + t278 + 0.424*t132*t28 + 0.846*t135*t41 + 0.1728*(-1.*t138*t41 + t135*t45) - 0.089*t117*t58 + 0.089*t12*t3*t59 - 0.089*t120*t61 - 0.089*t114*t7 + t123*t71 + t141*t74 + t126*t80 - 0.424*t129*t82 - 0.846*t138*t96 + t144*t99 - 1.*var[23];
  p_output1[3]=ArcTan(0. + t145 + t146,0. + t147 + t148) - 1.*var[24];
  p_output1[4]=ArcTan(0. + t149 + t150,0. + t151 + t152) - 1.*var[25];
  p_output1[5]=-0.089*t13*t159 + 0.424*t174*t181 + 0.846*t187*t190 - 0.92245*(-1.*t186*t197 + t183*t200) + 0.089*(t183*t197 + t186*t200) + t201 + 0.089*t163*t205 + t169*t209 + t197*t212 + t172*t218 - 0.424*t177*t220 - 0.846*t194*t234 + t200*t237 - 0.082*(t283 + t284) + 0.089*t155*t3*t6 - 0.089*t203*t3*t9 - 1.*var[26];
  p_output1[6]=0.089*t205*t215 + t209*t223 + t218*t226 - 0.424*t220*t229 + 0.424*t174*t232 + 0.846*t187*t240 - 0.846*t234*t243 + t212*t246 + t237*t249 - 0.92245*(-1.*t186*t246 + t183*t249) + 0.089*(t183*t246 + t186*t249) + t250 - 0.082*(t285 + t286) + 0.089*t159*t3*t56 + 0.089*t155*t64 + 0.089*t203*t67 - 1.*var[27];
  p_output1[7]=0.089*t114*t155 + 0.089*t117*t203 + 0.089*t205*t253 + t209*t256 + t218*t259 - 0.424*t220*t262 + 0.424*t174*t265 + 0.846*t187*t268 - 0.846*t234*t271 - 0.082*(t191*t268 - 1.*t187*t271) + t212*t274 + t237*t277 + t278 - 0.92245*(t279 + t280) + 0.089*(t281 + t282) - 0.089*t159*t3*t59 - 1.*var[28];
  p_output1[8]=ArcTan(0. + t279 + t280,0. + t281 + t282) - 1.*var[29];
  p_output1[9]=ArcTan(0. + t283 + t284,0. + t285 + t286) - 1.*var[30];
  p_output1[10]=var[6] - 1.*var[31];
  p_output1[11]=var[7] - 1.*var[32];
  p_output1[12]=var[8] - 1.*var[33];
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
    ( !(mrows == 34 && ncols == 1) && 
      !(mrows == 1 && ncols == 34))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 13, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "f_holPos_RightHS3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void f_holPos_RightHS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

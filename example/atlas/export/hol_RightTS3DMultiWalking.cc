/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:28:56 GMT-04:00
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
  double t287;
  double t288;
  double t289;
  double t290;
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
  t11 = q[15];
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
  t27 = q[20];
  t28 = Sin(t27);
  t29 = t19*t23;
  t30 = t18*t26;
  t31 = t29 + t30;
  t32 = Cos(t27);
  t33 = t18*t23;
  t34 = -1.*t19*t26;
  t35 = t33 + t34;
  t36 = q[16];
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
  t55 = q[3];
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
  t157 = q[13];
  t158 = q[11];
  t159 = Sin(t157);
  t160 = Cos(t157);
  t161 = q[12];
  t162 = q[9];
  t163 = Sin(t158);
  t164 = Cos(t158);
  t165 = -1.*t3*t6*t159;
  t166 = -1.*t160*t3*t9;
  t167 = t165 + t166;
  t168 = Cos(t161);
  t169 = Sin(t161);
  t170 = 0.05*t169;
  t171 = t160*t3*t6;
  t172 = -1.*t3*t159*t9;
  t173 = t171 + t172;
  t174 = t164*t13;
  t175 = -1.*t163*t167;
  t176 = t174 + t175;
  t177 = q[14];
  t178 = Sin(t177);
  t179 = t169*t173;
  t180 = t168*t176;
  t181 = t179 + t180;
  t182 = Cos(t177);
  t183 = t168*t173;
  t184 = -1.*t169*t176;
  t185 = t183 + t184;
  t186 = q[10];
  t187 = Cos(t162);
  t188 = -1.*t187;
  t189 = 1. + t188;
  t190 = Sin(t162);
  t191 = Sin(t186);
  t192 = -1.*t178*t181;
  t193 = t182*t185;
  t194 = t192 + t193;
  t195 = Cos(t186);
  t196 = t182*t181;
  t197 = t178*t185;
  t198 = t196 + t197;
  t199 = t163*t13;
  t200 = t164*t167;
  t201 = t199 + t200;
  t202 = t191*t194;
  t203 = t195*t198;
  t204 = t202 + t203;
  t205 = q[0];
  t206 = -1.*t160;
  t207 = 1. + t206;
  t208 = -1.*t164;
  t209 = 1. + t208;
  t210 = -1.*t168;
  t211 = 1. + t210;
  t212 = 0.05*t211;
  t213 = t212 + t170;
  t214 = 0.089*t189;
  t215 = -0.846*t190;
  t216 = t214 + t215;
  t217 = -1.*t159*t64;
  t218 = t160*t67;
  t219 = t217 + t218;
  t220 = -1. + t168;
  t221 = 0.05*t220;
  t222 = t221 + t170;
  t223 = -1.*t182;
  t224 = 1. + t223;
  t225 = t160*t64;
  t226 = t159*t67;
  t227 = t225 + t226;
  t228 = -1.*t164*t3*t56;
  t229 = -1.*t163*t219;
  t230 = t228 + t229;
  t231 = t169*t227;
  t232 = t168*t230;
  t233 = t231 + t232;
  t234 = t168*t227;
  t235 = -1.*t169*t230;
  t236 = t234 + t235;
  t237 = -1.*t195;
  t238 = 1. + t237;
  t239 = -0.846*t189;
  t240 = -0.089*t190;
  t241 = t239 + t240;
  t242 = -1.*t178*t233;
  t243 = t182*t236;
  t244 = t242 + t243;
  t245 = t182*t233;
  t246 = t178*t236;
  t247 = t245 + t246;
  t248 = -1.*t3*t163*t56;
  t249 = t164*t219;
  t250 = t248 + t249;
  t251 = t191*t244;
  t252 = t195*t247;
  t253 = t251 + t252;
  t254 = q[1];
  t255 = -1.*t159*t114;
  t256 = t160*t117;
  t257 = t255 + t256;
  t258 = t160*t114;
  t259 = t159*t117;
  t260 = t258 + t259;
  t261 = t164*t59*t3;
  t262 = -1.*t163*t257;
  t263 = t261 + t262;
  t264 = t169*t260;
  t265 = t168*t263;
  t266 = t264 + t265;
  t267 = t168*t260;
  t268 = -1.*t169*t263;
  t269 = t267 + t268;
  t270 = -1.*t178*t266;
  t271 = t182*t269;
  t272 = t270 + t271;
  t273 = t182*t266;
  t274 = t178*t269;
  t275 = t273 + t274;
  t276 = t59*t3*t163;
  t277 = t164*t257;
  t278 = t276 + t277;
  t279 = t191*t272;
  t280 = t195*t275;
  t281 = t279 + t280;
  t282 = q[2];
  t283 = -1.*t190*t278;
  t284 = t187*t281;
  t285 = t187*t278;
  t286 = t190*t281;
  t287 = t195*t194;
  t288 = -1.*t191*t198;
  t289 = t195*t244;
  t290 = -1.*t191*t247;
  p_output1[0]=0.089*t12*t13 + 0.1728*(t153 + t154) + t205 + 0.424*t28*t35 + 0.846*t41*t44 - 0.92245*(-1.*t40*t51 + t37*t54) - 0.089*(t37*t51 + t40*t54) - 0.089*t17*t61 - 0.089*t3*t6*t7 + t23*t71 + t51*t74 + t26*t80 - 0.424*t31*t82 + 0.089*t3*t58*t9 - 0.846*t48*t96 + t54*t99;
  p_output1[1]=0.1728*(t155 + t156) + t254 - 0.92245*(t111*t37 - 1.*t108*t40) - 0.089*(t108*t37 + t111*t40) + 0.846*t102*t41 - 0.089*t12*t3*t56 - 0.089*t58*t67 - 0.089*t64*t7 + t108*t74 - 0.089*t61*t77 + t71*t85 + t80*t88 - 0.424*t82*t91 + 0.424*t28*t94 - 0.846*t105*t96 + t111*t99;
  p_output1[2]=-0.92245*(t145 + t146) - 0.089*(t147 + t148) + 0.1728*(t150 + t151) + 0.424*t132*t28 + t282 + 0.846*t135*t41 - 0.089*t117*t58 + 0.089*t12*t3*t59 - 0.089*t120*t61 - 0.089*t114*t7 + t123*t71 + t141*t74 + t126*t80 - 0.424*t129*t82 - 0.846*t138*t96 + t144*t99;
  p_output1[3]=ArcTan(t149,t152);
  p_output1[4]=ArcTan(t149,(-1.*t149*(0. + t150 + t151))/Sqrt(Power(t149,2) + Power(t152,2)));
  p_output1[5]=ArcTan(0. + t153 + t154,0. + t155 + t156);
  p_output1[6]=-0.089*t13*t163 + 0.424*t178*t185 + 0.846*t191*t194 - 0.92245*(-1.*t190*t201 + t187*t204) + 0.089*(t187*t201 + t190*t204) + t205 + 0.089*t167*t209 + t173*t213 + t201*t216 + t176*t222 - 0.424*t181*t224 - 0.846*t198*t238 + t204*t241 + 0.1728*(t287 + t288) + 0.089*t159*t3*t6 - 0.089*t207*t3*t9;
  p_output1[7]=0.089*t209*t219 + t213*t227 + t222*t230 - 0.424*t224*t233 + 0.424*t178*t236 + 0.846*t191*t244 - 0.846*t238*t247 + t216*t250 + t241*t253 - 0.92245*(-1.*t190*t250 + t187*t253) + 0.089*(t187*t250 + t190*t253) + t254 + 0.1728*(t289 + t290) + 0.089*t163*t3*t56 + 0.089*t159*t64 + 0.089*t207*t67;
  p_output1[8]=0.089*t114*t159 + 0.089*t117*t207 + 0.089*t209*t257 + t213*t260 + t222*t263 - 0.424*t224*t266 + 0.424*t178*t269 + 0.846*t191*t272 - 0.846*t238*t275 + 0.1728*(t195*t272 - 1.*t191*t275) + t216*t278 + t241*t281 + t282 - 0.92245*(t283 + t284) + 0.089*(t285 + t286) - 0.089*t163*t3*t59;
  p_output1[9]=ArcTan(0. + t283 + t284,0. + t285 + t286);
  p_output1[10]=ArcTan(0. + t287 + t288,0. + t289 + t290);
  p_output1[11]=q[6];
  p_output1[12]=q[7];
  p_output1[13]=q[8];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,q);


}

#else // MATLAB_MEX_FILE

#include "hol_RightTS3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void hol_RightTS3DMultiWalking_raw(double *p_output1, const double *q)
{
  // Call Subroutines
  output1(p_output1, q);

}

}
}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:50 GMT-04:00
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
  t1 = var[16];
  t2 = var[20];
  t3 = var[18];
  t4 = Cos(t1);
  t5 = 0. + t4;
  t6 = Cos(t2);
  t7 = Sin(t1);
  t8 = -1.*t7;
  t9 = 0. + t8;
  t10 = Sin(t2);
  t11 = var[4];
  t12 = Sin(t3);
  t13 = t6*t9;
  t14 = -1.*t5*t10;
  t15 = 0. + t13 + t14;
  t16 = Cos(t3);
  t17 = t5*t6;
  t18 = t9*t10;
  t19 = 0. + t17 + t18;
  t20 = var[19];
  t21 = var[17];
  t22 = t16*t15;
  t23 = -1.*t12*t19;
  t24 = 0. + t22 + t23;
  t25 = Sin(t20);
  t26 = t12*t15;
  t27 = t16*t19;
  t28 = 0. + t26 + t27;
  t29 = Cos(t20);
  t30 = Sin(t21);
  t31 = -1.*t30*t24;
  t32 = 0. + t31;
  t33 = var[5];
  t34 = Cos(t21);
  t35 = var[15];
  t36 = Cos(t35);
  t37 = 0. + t36;
  t38 = t37*t4;
  t39 = 0. + t38;
  t40 = t37*t7;
  t41 = 0. + t40;
  t42 = Sin(t11);
  t43 = Cos(t11);
  t44 = Cos(t33);
  t45 = t6*t41;
  t46 = t39*t10;
  t47 = 0. + t45 + t46;
  t48 = t39*t6;
  t49 = -1.*t41*t10;
  t50 = 0. + t48 + t49;
  t51 = Sin(t35);
  t52 = -1.*t51;
  t53 = 0. + t52;
  t54 = -1.*t12*t47;
  t55 = t16*t50;
  t56 = 0. + t54 + t55;
  t57 = t16*t47;
  t58 = t12*t50;
  t59 = 0. + t57 + t58;
  t60 = t34*t53;
  t61 = -1.*t30*t56;
  t62 = 0. + t60 + t61;
  t63 = Sin(t33);
  t64 = 0. + t51;
  t65 = t4*t64;
  t66 = 0. + t65;
  t67 = t64*t7;
  t68 = 0. + t67;
  t69 = t6*t68;
  t70 = t66*t10;
  t71 = 0. + t69 + t70;
  t72 = t6*t66;
  t73 = -1.*t68*t10;
  t74 = 0. + t72 + t73;
  t75 = -1.*t12*t71;
  t76 = t16*t74;
  t77 = 0. + t75 + t76;
  t78 = t16*t71;
  t79 = t12*t74;
  t80 = 0. + t78 + t79;
  t81 = t37*t34;
  t82 = -1.*t30*t77;
  t83 = 0. + t81 + t82;
  t84 = var[33];
  t85 = t25*t28;
  t86 = t29*t32;
  t87 = 0. + t85 + t86;
  t88 = t29*t28;
  t89 = -1.*t25*t32;
  t90 = 0. + t88 + t89;
  t91 = var[3];
  t92 = t34*t24;
  t93 = 0. + t92;
  t94 = t44*t90;
  t95 = -1.*t87*t63;
  t96 = 0. + t94 + t95;
  t97 = var[35];
  t98 = Cos(t91);
  t99 = t25*t59;
  t100 = t29*t62;
  t101 = 0. + t99 + t100;
  t102 = t29*t59;
  t103 = -1.*t25*t62;
  t104 = 0. + t102 + t103;
  t105 = Sin(t91);
  t106 = t53*t30;
  t107 = t34*t56;
  t108 = 0. + t106 + t107;
  t109 = t44*t104;
  t110 = -1.*t101*t63;
  t111 = 0. + t109 + t110;
  t112 = var[34];
  t113 = t25*t80;
  t114 = t29*t83;
  t115 = 0. + t113 + t114;
  t116 = t29*t80;
  t117 = -1.*t25*t83;
  t118 = 0. + t116 + t117;
  t119 = t37*t30;
  t120 = t34*t77;
  t121 = 0. + t119 + t120;
  t122 = t44*t118;
  t123 = -1.*t115*t63;
  t124 = 0. + t122 + t123;
  t125 = t44*t87;
  t126 = t90*t63;
  t127 = 0. + t125 + t126;
  t128 = t43*t93;
  t129 = -1.*t42*t96;
  t130 = 0. + t128 + t129;
  t131 = t44*t101;
  t132 = t104*t63;
  t133 = 0. + t131 + t132;
  t134 = t43*t108;
  t135 = -1.*t42*t111;
  t136 = 0. + t134 + t135;
  t137 = t44*t115;
  t138 = t118*t63;
  t139 = 0. + t137 + t138;
  t140 = t43*t121;
  t141 = -1.*t42*t124;
  t142 = 0. + t140 + t141;
  t143 = t93*t42;
  t144 = t43*t96;
  t145 = 0. + t143 + t144;
  t146 = t108*t42;
  t147 = t43*t111;
  t148 = 0. + t146 + t147;
  t149 = t121*t42;
  t150 = t43*t124;
  t151 = 0. + t149 + t150;
  t152 = -1.*t36;
  t153 = 1. + t152;
  t154 = -0.846*t153;
  t155 = -0.92245*t36;
  t156 = 0. + t154 + t155;
  t157 = -1.*t4;
  t158 = 1. + t157;
  t159 = -0.846*t158;
  t160 = t156*t4;
  t161 = -0.1728*t7;
  t162 = t159 + t160 + t161;
  t163 = 0.1728*t4;
  t164 = 0.846*t7;
  t165 = t156*t7;
  t166 = t163 + t164 + t165;
  t167 = 0.05*t12;
  t168 = t6*t166;
  t169 = 0.424*t10;
  t170 = t162*t10;
  t171 = t168 + t169 + t170;
  t172 = -1.*t6;
  t173 = 1. + t172;
  t174 = -0.424*t173;
  t175 = t6*t162;
  t176 = -1.*t166*t10;
  t177 = t174 + t175 + t176;
  t178 = -1.*t16;
  t179 = 1. + t178;
  t180 = 0.05*t179;
  t181 = t16*t171;
  t182 = t12*t177;
  t183 = 0. + t180 + t167 + t181 + t182;
  t184 = -1.*t34;
  t185 = 1. + t184;
  t186 = -0.089*t185;
  t187 = -0.089*t153;
  t188 = -0.089*t36;
  t189 = 0.07645000000000002*t51;
  t190 = 0. + t187 + t188 + t189;
  t191 = t34*t190;
  t192 = -1. + t16;
  t193 = 0.05*t192;
  t194 = -1.*t12*t171;
  t195 = t16*t177;
  t196 = t193 + t167 + t194 + t195;
  t197 = -1.*t30*t196;
  t198 = t186 + t191 + t197;
  t199 = -0.089*t25;
  t200 = t29*t183;
  t201 = -1.*t25*t198;
  t202 = t199 + t200 + t201;
  t203 = -1.*t29;
  t204 = 1. + t203;
  t205 = -0.089*t204;
  t206 = t25*t183;
  t207 = t29*t198;
  t208 = t205 + t206 + t207;
  t209 = 0.089*t30;
  t210 = t190*t30;
  t211 = t34*t196;
  t212 = 0. + t209 + t210 + t211;
  t213 = t44*t202;
  t214 = -1.*t208*t63;
  t215 = 0. + t213 + t214;
  t216 = t44*t208;
  t217 = t202*t63;
  t218 = 0. + t216 + t217;
  t219 = t212*t42;
  t220 = t43*t215;
  t221 = 0. + t219 + t220;
  t222 = t43*t212;
  t223 = -1.*t42*t215;
  t224 = 0. + t222 + t223;
  t225 = var[36];
  t226 = var[38];
  t227 = var[37];
  t228 = t127*t218;
  t229 = -1.*t218*t133;
  t230 = t218*t133;
  t231 = -1.*t218*t139;
  t232 = -1.*t127*t218;
  t233 = t218*t139;
  t234 = t93*t212;
  t235 = -1.*t212*t108;
  t236 = t212*t108;
  t237 = -1.*t212*t121;
  t238 = -1.*t93*t212;
  t239 = t212*t121;
  t240 = t180 + t167 + t181 + t182;
  t241 = t53*t190;
  t242 = -1.*t37*t190;
  t243 = -1.*t37*t227;
  t244 = -1.*t226*t53;
  t245 = -1.*t225*t93;
  t246 = -1.*t226*t108;
  t247 = -1.*t227*t121;
  t248 = t209 + t210 + t211;
  p_output1[0]=-1.*t112*t151 - 1.*t145*t84 - 1.*t148*t97;
  p_output1[1]=-1.*t84*(0. - 1.*t105*t130 + t127*t98) - 1.*t97*(0. - 1.*t105*t136 + t133*t98) - 1.*t112*(0. - 1.*t105*t142 + t139*t98);
  p_output1[2]=-1.*t84*(0. + t105*t127 + t130*t98) - 1.*t97*(0. + t105*t133 + t136*t98) - 1.*t112*(0. + t105*t139 + t142*t98);
  p_output1[3]=-1.*t145*t225 - 1.*t148*t226 - 1.*t151*t227 - 1.*t112*(t148*(t145*t221 + t130*t224 + t228) + t145*(-1.*t148*t221 - 1.*t136*t224 + t229)) - 1.*(t151*(t148*t221 + t136*t224 + t230) + t148*(-1.*t151*t221 - 1.*t142*t224 + t231))*t84 - 1.*(t151*(-1.*t145*t221 - 1.*t130*t224 + t232) + t145*(t151*t221 + t142*t224 + t233))*t97;
  p_output1[4]=-1.*t127*t225 - 1.*t133*t226 - 1.*t139*t227 - 1.*(t139*(t111*t215 + t230 + t236) + t133*(-1.*t124*t215 + t231 + t237))*t84 - 1.*t112*(t127*(-1.*t111*t215 + t229 + t235) + t133*(t228 + t234 + t215*t96)) - 1.*(t127*(t124*t215 + t233 + t239) + t139*(t232 + t238 - 1.*t215*t96))*t97;
  p_output1[5]=t245 + t246 + t247 - 1.*(t121*(t104*t202 + t101*t208 + t236) + t108*(-1.*t118*t202 - 1.*t115*t208 + t237))*t84 - 1.*t112*(t108*(t234 + t208*t87 + t202*t90) + (-1.*t104*t202 - 1.*t101*t208 + t235)*t93) - 1.*(t121*(t238 - 1.*t208*t87 - 1.*t202*t90) + (t118*t202 + t115*t208 + t239)*t93)*t97;
  p_output1[6]=-1.*var[39];
  p_output1[7]=-1.*var[40];
  p_output1[8]=-1.*var[41];
  p_output1[9]=-1.*var[21];
  p_output1[10]=-1.*var[22];
  p_output1[11]=-1.*var[24];
  p_output1[12]=-1.*var[25];
  p_output1[13]=-1.*var[26];
  p_output1[14]=-1.*var[23];
  p_output1[15]=0. - 0.07645000000000002*t112 - 1.*t225 - 1.*var[27];
  p_output1[16]=0. + t243 + t244 - 1.*t112*(0. + 0.1728*t53) - 1.*(0.846 + t37*(0. + t241 + t156*t37) + t53*(0. + t242 - 1.*t156*t64))*t84 - 1.*(0. - 0.1728*t37)*t97 - 1.*var[28];
  p_output1[17]=-1.*t225*t28 - 1.*t226*t59 - 1.*t112*((0. + t196*t24 + t240*t28)*t59 + t28*(-1.*t190*t53 - 1.*t196*t56 - 1.*t240*t59) + 0.089*t77) - 1.*t227*t80 - 1.*(0. + 0.089*t24 + (t241 + t196*t56 + t240*t59)*t80 + t59*(t242 - 1.*t196*t77 - 1.*t240*t80))*t84 - 1.*(0.089*t56 + (0. - 1.*t196*t24 - 1.*t240*t28)*t80 + t28*(t190*t37 + t196*t77 + t240*t80))*t97 - 1.*var[30];
  p_output1[18]=0. + t243 + t244 - 1.*t112*(0. + (0. + t15*t177 + t171*t19)*t53 + 0.05*t71 + 0.05*t74) - 1.*(0. + 0.05*t15 + 0.05*t19 + t37*(t241 + t171*t47 + t177*t50) + t53*(t242 - 1.*t171*t71 - 1.*t177*t74))*t84 - 1.*(0. + (0. - 1.*t15*t177 - 1.*t171*t19)*t37 + 0.05*t47 + 0.05*t50)*t97 - 1.*var[31];
  p_output1[19]=t245 + t246 + t247 - 1.*(-0.089*t28 + t121*(t108*t248 + t183*t59 + t198*t62) + t108*(-1.*t121*t248 - 1.*t183*t80 - 1.*t198*t83))*t84 - 1.*t112*(-0.089*t80 + (-1.*t108*t248 - 1.*t183*t59 - 1.*t198*t62)*t93 + t108*(t183*t28 + t198*t32 + t248*t93)) - 1.*(-0.089*t59 + (t121*t248 + t183*t80 + t198*t83)*t93 + t121*(-1.*t183*t28 - 1.*t198*t32 - 1.*t248*t93))*t97 - 1.*var[32];
  p_output1[20]=0. + t243 + t244 - 1.*(0. + t37*(t241 + t162*t39 + t166*t41) + 0.424*t5 + t53*(t242 - 1.*t162*t66 - 1.*t166*t68))*t84 - 1.*t112*(0. + 0.424*t68 + t53*(0. + t166*t5 + t162*t9)) - 1.*(0. + 0.424*t41 + t37*(0. - 1.*t166*t5 - 1.*t162*t9))*t97 - 1.*var[29];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "f_controlDynamics_RightTL3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void f_controlDynamics_RightTL3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

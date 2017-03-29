/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:59:47 GMT-04:00
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
  t1 = var[21];
  t2 = var[22];
  t3 = -1.*t2;
  t4 = t1 + t3;
  t5 = 1/t4;
  t6 = var[16];
  t7 = 0.07645*t6;
  t8 = var[18];
  t9 = 0.87245*t8;
  t10 = var[20];
  t11 = 0.49845*t10;
  t12 = var[4];
  t13 = 0.87245*t12;
  t14 = t3 + t7 + t9 + t11 + t13;
  t15 = -1.*t5*t14;
  t16 = 1. + t15;
  t17 = Power(t16,5);
  t18 = var[24];
  t19 = Power(t4,-2);
  t20 = Power(t16,4);
  t21 = var[25];
  t22 = Power(t4,-3);
  t23 = Power(t16,3);
  t24 = Power(t14,2);
  t25 = var[26];
  t26 = Power(t4,-4);
  t27 = Power(t16,2);
  t28 = Power(t14,3);
  t29 = var[27];
  t30 = Power(t4,-5);
  t31 = Power(t14,4);
  t32 = var[28];
  t33 = Power(t4,-6);
  t34 = Power(t14,5);
  t35 = var[23];
  t36 = var[29];
  t37 = 5.2347*t35*t5*t17;
  t38 = -5.2347*t18*t5*t17;
  t39 = 26.1735*t18*t19*t20*t14;
  t40 = -26.1735*t21*t19*t20*t14;
  t41 = 52.347*t21*t22*t23*t24;
  t42 = -52.347*t25*t22*t23*t24;
  t43 = 52.347*t25*t26*t27*t28;
  t44 = -52.347*t29*t26*t27*t28;
  t45 = 26.1735*t29*t30*t16*t31;
  t46 = -26.1735*t32*t30*t16*t31;
  t47 = 5.2347*t32*t33*t34;
  t48 = -5.2347*t36*t33*t34;
  t49 = t37 + t38 + t39 + t40 + t41 + t42 + t43 + t44 + t45 + t46 + t47 + t48;
  t50 = Power(t4,-7);
  t51 = Power(t14,6);
  t52 = -1.*t19*t14;
  t53 = t5 + t52;
  t54 = var[31];
  t55 = var[32];
  t56 = var[33];
  t57 = var[34];
  t58 = var[35];
  t59 = var[30];
  t60 = var[36];
  t61 = 5.2347*t59*t5*t17;
  t62 = -5.2347*t54*t5*t17;
  t63 = 26.1735*t54*t19*t20*t14;
  t64 = -26.1735*t55*t19*t20*t14;
  t65 = 52.347*t55*t22*t23*t24;
  t66 = -52.347*t56*t22*t23*t24;
  t67 = 52.347*t56*t26*t27*t28;
  t68 = -52.347*t57*t26*t27*t28;
  t69 = 26.1735*t57*t30*t16*t31;
  t70 = -26.1735*t58*t30*t16*t31;
  t71 = 5.2347*t58*t33*t34;
  t72 = -5.2347*t60*t33*t34;
  t73 = t61 + t62 + t63 + t64 + t65 + t66 + t67 + t68 + t69 + t70 + t71 + t72;
  t74 = Power(t16,6);
  t75 = -1.*t74;
  t76 = -6.*t5*t17*t14;
  t77 = -15.*t19*t20*t24;
  t78 = -20.*t22*t23*t28;
  t79 = -15.*t26*t27*t31;
  t80 = -6.*t30*t16*t34;
  t81 = -1.*t33*t51;
  t82 = var[38];
  t83 = var[39];
  t84 = var[40];
  t85 = var[41];
  t86 = var[42];
  t87 = var[37];
  t88 = var[43];
  t89 = 5.2347*t87*t5*t17;
  t90 = -5.2347*t82*t5*t17;
  t91 = 26.1735*t82*t19*t20*t14;
  t92 = -26.1735*t83*t19*t20*t14;
  t93 = 52.347*t83*t22*t23*t24;
  t94 = -52.347*t84*t22*t23*t24;
  t95 = 52.347*t84*t26*t27*t28;
  t96 = -52.347*t85*t26*t27*t28;
  t97 = 26.1735*t85*t30*t16*t31;
  t98 = -26.1735*t86*t30*t16*t31;
  t99 = 5.2347*t86*t33*t34;
  t100 = -5.2347*t88*t33*t34;
  t101 = var[45];
  t102 = var[46];
  t103 = var[47];
  t104 = var[48];
  t105 = var[49];
  t106 = var[44];
  t107 = var[50];
  t108 = 5.2347*t106*t5*t17;
  t109 = -5.2347*t101*t5*t17;
  t110 = 26.1735*t101*t19*t20*t14;
  t111 = -26.1735*t102*t19*t20*t14;
  t112 = 52.347*t102*t22*t23*t24;
  t113 = -52.347*t103*t22*t23*t24;
  t114 = 52.347*t103*t26*t27*t28;
  t115 = -52.347*t104*t26*t27*t28;
  t116 = 26.1735*t104*t30*t16*t31;
  t117 = -26.1735*t105*t30*t16*t31;
  t118 = 5.2347*t105*t33*t34;
  t119 = -5.2347*t107*t33*t34;
  t120 = t108 + t109 + t110 + t111 + t112 + t113 + t114 + t115 + t116 + t117 + t118 + t119;
  t121 = var[52];
  t122 = var[53];
  t123 = var[54];
  t124 = var[55];
  t125 = var[56];
  t126 = var[51];
  t127 = var[57];
  t128 = 5.2347*t126*t5*t17;
  t129 = -5.2347*t121*t5*t17;
  t130 = 26.1735*t121*t19*t20*t14;
  t131 = -26.1735*t122*t19*t20*t14;
  t132 = 52.347*t122*t22*t23*t24;
  t133 = -52.347*t123*t22*t23*t24;
  t134 = 52.347*t123*t26*t27*t28;
  t135 = -52.347*t124*t26*t27*t28;
  t136 = 26.1735*t124*t30*t16*t31;
  t137 = -26.1735*t125*t30*t16*t31;
  t138 = 5.2347*t125*t33*t34;
  t139 = -5.2347*t127*t33*t34;
  t140 = t128 + t129 + t130 + t131 + t132 + t133 + t134 + t135 + t136 + t137 + t138 + t139;
  t141 = var[59];
  t142 = var[60];
  t143 = var[61];
  t144 = var[62];
  t145 = var[63];
  t146 = var[58];
  t147 = var[64];
  t148 = 5.2347*t146*t5*t17;
  t149 = -5.2347*t141*t5*t17;
  t150 = 26.1735*t141*t19*t20*t14;
  t151 = -26.1735*t142*t19*t20*t14;
  t152 = 52.347*t142*t22*t23*t24;
  t153 = -52.347*t143*t22*t23*t24;
  t154 = 52.347*t143*t26*t27*t28;
  t155 = -52.347*t144*t26*t27*t28;
  t156 = 26.1735*t144*t30*t16*t31;
  t157 = -26.1735*t145*t30*t16*t31;
  t158 = 5.2347*t145*t33*t34;
  t159 = -5.2347*t147*t33*t34;
  t160 = t148 + t149 + t150 + t151 + t152 + t153 + t154 + t155 + t156 + t157 + t158 + t159;
  t161 = var[66];
  t162 = var[67];
  t163 = var[68];
  t164 = var[69];
  t165 = var[70];
  t166 = var[65];
  t167 = var[71];
  t168 = 5.2347*t166*t5*t17;
  t169 = -5.2347*t161*t5*t17;
  t170 = 26.1735*t161*t19*t20*t14;
  t171 = -26.1735*t162*t19*t20*t14;
  t172 = 52.347*t162*t22*t23*t24;
  t173 = -52.347*t163*t22*t23*t24;
  t174 = 52.347*t163*t26*t27*t28;
  t175 = -52.347*t164*t26*t27*t28;
  t176 = 26.1735*t164*t30*t16*t31;
  t177 = -26.1735*t165*t30*t16*t31;
  t178 = 5.2347*t165*t33*t34;
  t179 = -5.2347*t167*t33*t34;
  t180 = t168 + t169 + t170 + t171 + t172 + t173 + t174 + t175 + t176 + t177 + t178 + t179;
  p_output1[0]=t49;
  p_output1[1]=1. + 2.2935*t14*t18*t19*t20 - 2.2935*t14*t19*t20*t21 + 4.587*t21*t22*t23*t24 - 4.587*t22*t23*t24*t25 + 4.587*t25*t26*t27*t28 - 4.587*t26*t27*t28*t29 + 2.2935*t16*t29*t30*t31 - 2.2935*t16*t30*t31*t32 + 0.4587*t32*t33*t34 - 0.4587*t33*t34*t36 - 0.4587*t17*t18*t5 + 0.4587*t17*t35*t5;
  p_output1[2]=t49;
  p_output1[3]=14.9535*t14*t18*t19*t20 - 14.9535*t14*t19*t20*t21 + 29.907*t21*t22*t23*t24 - 29.907*t22*t23*t24*t25 + 29.907*t25*t26*t27*t28 - 29.907*t26*t27*t28*t29 + 14.9535*t16*t29*t30*t31 - 14.9535*t16*t30*t31*t32 + 2.9907*t32*t33*t34 - 2.9907*t33*t34*t36 - 2.9907*t17*t18*t5 + 2.9907*t17*t35*t5;
  p_output1[4]=6.*t14*t17*t18*t19 - 30.*t18*t20*t22*t24 + 30.*t20*t21*t22*t24 - 60.*t21*t23*t26*t28 + 60.*t23*t25*t26*t28 - 60.*t25*t27*t30*t31 + 60.*t27*t29*t30*t31 - 30.*t16*t29*t33*t34 + 30.*t16*t32*t33*t34 - 6.*t14*t17*t19*t35 - 6.*t32*t50*t51 + 6.*t36*t50*t51;
  p_output1[5]=-6.*t14*t17*t18*t19 + 30.*t14*t19*t20*t21 - 30.*t20*t21*t22*t24 + 60.*t22*t23*t24*t25 - 60.*t23*t25*t26*t28 + 60.*t26*t27*t28*t29 - 60.*t27*t29*t30*t31 + 30.*t16*t30*t31*t32 - 30.*t16*t32*t33*t34 + 6.*t33*t34*t36 + 6.*t17*t18*t5 - 6.*t36*t50*t51 - 60.*t19*t21*t23*t24*t53 - 60.*t22*t25*t27*t28*t53 - 30.*t16*t26*t29*t31*t53 - 6.*t30*t32*t34*t53 - 6.*t17*t35*t53 - 30.*t14*t18*t20*t5*t53;
  p_output1[6]=t75;
  p_output1[7]=t76;
  p_output1[8]=t77;
  p_output1[9]=t78;
  p_output1[10]=t79;
  p_output1[11]=t80;
  p_output1[12]=t81;
  p_output1[13]=t73;
  p_output1[14]=2.2935*t14*t19*t20*t54 - 0.4587*t17*t5*t54 - 2.2935*t14*t19*t20*t55 + 4.587*t22*t23*t24*t55 - 4.587*t22*t23*t24*t56 + 4.587*t26*t27*t28*t56 - 4.587*t26*t27*t28*t57 + 2.2935*t16*t30*t31*t57 - 2.2935*t16*t30*t31*t58 + 0.4587*t33*t34*t58 + 0.4587*t17*t5*t59 - 0.4587*t33*t34*t60;
  p_output1[15]=t73;
  p_output1[16]=1. + 14.9535*t14*t19*t20*t54 - 2.9907*t17*t5*t54 - 14.9535*t14*t19*t20*t55 + 29.907*t22*t23*t24*t55 - 29.907*t22*t23*t24*t56 + 29.907*t26*t27*t28*t56 - 29.907*t26*t27*t28*t57 + 14.9535*t16*t30*t31*t57 - 14.9535*t16*t30*t31*t58 + 2.9907*t33*t34*t58 + 2.9907*t17*t5*t59 - 2.9907*t33*t34*t60;
  p_output1[17]=6.*t14*t17*t19*t54 - 30.*t20*t22*t24*t54 + 30.*t20*t22*t24*t55 - 60.*t23*t26*t28*t55 + 60.*t23*t26*t28*t56 - 60.*t27*t30*t31*t56 + 60.*t27*t30*t31*t57 - 30.*t16*t33*t34*t57 + 30.*t16*t33*t34*t58 - 6.*t50*t51*t58 - 6.*t14*t17*t19*t59 + 6.*t50*t51*t60;
  p_output1[18]=-6.*t14*t17*t19*t54 + 6.*t17*t5*t54 - 30.*t14*t20*t5*t53*t54 + 30.*t14*t19*t20*t55 - 30.*t20*t22*t24*t55 - 60.*t19*t23*t24*t53*t55 + 60.*t22*t23*t24*t56 - 60.*t23*t26*t28*t56 - 60.*t22*t27*t28*t53*t56 + 60.*t26*t27*t28*t57 - 60.*t27*t30*t31*t57 - 30.*t16*t26*t31*t53*t57 + 30.*t16*t30*t31*t58 - 30.*t16*t33*t34*t58 - 6.*t30*t34*t53*t58 - 6.*t17*t53*t59 + 6.*t33*t34*t60 - 6.*t50*t51*t60;
  p_output1[19]=t75;
  p_output1[20]=t76;
  p_output1[21]=t77;
  p_output1[22]=t78;
  p_output1[23]=t79;
  p_output1[24]=t80;
  p_output1[25]=t81;
  p_output1[26]=t100 + t89 + t90 + t91 + t92 + t93 + t94 + t95 + t96 + t97 + t98 + t99;
  p_output1[27]=-1. + 2.2935*t14*t19*t20*t82 - 0.4587*t17*t5*t82 - 2.2935*t14*t19*t20*t83 + 4.587*t22*t23*t24*t83 - 4.587*t22*t23*t24*t84 + 4.587*t26*t27*t28*t84 - 4.587*t26*t27*t28*t85 + 2.2935*t16*t30*t31*t85 - 2.2935*t16*t30*t31*t86 + 0.4587*t33*t34*t86 + 0.4587*t17*t5*t87 - 0.4587*t33*t34*t88;
  p_output1[28]=-1. + t100 + t89 + t90 + t91 + t92 + t93 + t94 + t95 + t96 + t97 + t98 + t99;
  p_output1[29]=-1. + 14.9535*t14*t19*t20*t82 - 2.9907*t17*t5*t82 - 14.9535*t14*t19*t20*t83 + 29.907*t22*t23*t24*t83 - 29.907*t22*t23*t24*t84 + 29.907*t26*t27*t28*t84 - 29.907*t26*t27*t28*t85 + 14.9535*t16*t30*t31*t85 - 14.9535*t16*t30*t31*t86 + 2.9907*t33*t34*t86 + 2.9907*t17*t5*t87 - 2.9907*t33*t34*t88;
  p_output1[30]=6.*t14*t17*t19*t82 - 30.*t20*t22*t24*t82 + 30.*t20*t22*t24*t83 - 60.*t23*t26*t28*t83 + 60.*t23*t26*t28*t84 - 60.*t27*t30*t31*t84 + 60.*t27*t30*t31*t85 - 30.*t16*t33*t34*t85 + 30.*t16*t33*t34*t86 - 6.*t50*t51*t86 - 6.*t14*t17*t19*t87 + 6.*t50*t51*t88;
  p_output1[31]=-6.*t14*t17*t19*t82 + 6.*t17*t5*t82 - 30.*t14*t20*t5*t53*t82 + 30.*t14*t19*t20*t83 - 30.*t20*t22*t24*t83 - 60.*t19*t23*t24*t53*t83 + 60.*t22*t23*t24*t84 - 60.*t23*t26*t28*t84 - 60.*t22*t27*t28*t53*t84 + 60.*t26*t27*t28*t85 - 60.*t27*t30*t31*t85 - 30.*t16*t26*t31*t53*t85 + 30.*t16*t30*t31*t86 - 30.*t16*t33*t34*t86 - 6.*t30*t34*t53*t86 - 6.*t17*t53*t87 + 6.*t33*t34*t88 - 6.*t50*t51*t88;
  p_output1[32]=t75;
  p_output1[33]=t76;
  p_output1[34]=t77;
  p_output1[35]=t78;
  p_output1[36]=t79;
  p_output1[37]=t80;
  p_output1[38]=t81;
  p_output1[39]=t120;
  p_output1[40]=1.;
  p_output1[41]=2.2935*t101*t14*t19*t20 - 2.2935*t102*t14*t19*t20 + 4.587*t102*t22*t23*t24 - 4.587*t103*t22*t23*t24 + 4.587*t103*t26*t27*t28 - 4.587*t104*t26*t27*t28 + 2.2935*t104*t16*t30*t31 - 2.2935*t105*t16*t30*t31 + 0.4587*t105*t33*t34 - 0.4587*t107*t33*t34 - 0.4587*t101*t17*t5 + 0.4587*t106*t17*t5;
  p_output1[42]=t120;
  p_output1[43]=14.9535*t101*t14*t19*t20 - 14.9535*t102*t14*t19*t20 + 29.907*t102*t22*t23*t24 - 29.907*t103*t22*t23*t24 + 29.907*t103*t26*t27*t28 - 29.907*t104*t26*t27*t28 + 14.9535*t104*t16*t30*t31 - 14.9535*t105*t16*t30*t31 + 2.9907*t105*t33*t34 - 2.9907*t107*t33*t34 - 2.9907*t101*t17*t5 + 2.9907*t106*t17*t5;
  p_output1[44]=6.*t101*t14*t17*t19 - 6.*t106*t14*t17*t19 - 30.*t101*t20*t22*t24 + 30.*t102*t20*t22*t24 - 60.*t102*t23*t26*t28 + 60.*t103*t23*t26*t28 - 60.*t103*t27*t30*t31 + 60.*t104*t27*t30*t31 - 30.*t104*t16*t33*t34 + 30.*t105*t16*t33*t34 - 6.*t105*t50*t51 + 6.*t107*t50*t51;
  p_output1[45]=-6.*t101*t14*t17*t19 + 30.*t102*t14*t19*t20 - 30.*t102*t20*t22*t24 + 60.*t103*t22*t23*t24 - 60.*t103*t23*t26*t28 + 60.*t104*t26*t27*t28 + 30.*t105*t16*t30*t31 - 60.*t104*t27*t30*t31 + 6.*t107*t33*t34 - 30.*t105*t16*t33*t34 + 6.*t101*t17*t5 - 6.*t107*t50*t51 - 6.*t106*t17*t53 - 60.*t102*t19*t23*t24*t53 - 60.*t103*t22*t27*t28*t53 - 30.*t104*t16*t26*t31*t53 - 6.*t105*t30*t34*t53 - 30.*t101*t14*t20*t5*t53;
  p_output1[46]=t75;
  p_output1[47]=t76;
  p_output1[48]=t77;
  p_output1[49]=t78;
  p_output1[50]=t79;
  p_output1[51]=t80;
  p_output1[52]=t81;
  p_output1[53]=t140;
  p_output1[54]=-1.;
  p_output1[55]=2.2935*t121*t14*t19*t20 - 2.2935*t122*t14*t19*t20 + 4.587*t122*t22*t23*t24 - 4.587*t123*t22*t23*t24 + 4.587*t123*t26*t27*t28 - 4.587*t124*t26*t27*t28 + 2.2935*t124*t16*t30*t31 - 2.2935*t125*t16*t30*t31 + 0.4587*t125*t33*t34 - 0.4587*t127*t33*t34 - 0.4587*t121*t17*t5 + 0.4587*t126*t17*t5;
  p_output1[56]=-1.;
  p_output1[57]=t140;
  p_output1[58]=14.9535*t121*t14*t19*t20 - 14.9535*t122*t14*t19*t20 + 29.907*t122*t22*t23*t24 - 29.907*t123*t22*t23*t24 + 29.907*t123*t26*t27*t28 - 29.907*t124*t26*t27*t28 + 14.9535*t124*t16*t30*t31 - 14.9535*t125*t16*t30*t31 + 2.9907*t125*t33*t34 - 2.9907*t127*t33*t34 - 2.9907*t121*t17*t5 + 2.9907*t126*t17*t5;
  p_output1[59]=6.*t121*t14*t17*t19 - 6.*t126*t14*t17*t19 - 30.*t121*t20*t22*t24 + 30.*t122*t20*t22*t24 - 60.*t122*t23*t26*t28 + 60.*t123*t23*t26*t28 - 60.*t123*t27*t30*t31 + 60.*t124*t27*t30*t31 - 30.*t124*t16*t33*t34 + 30.*t125*t16*t33*t34 - 6.*t125*t50*t51 + 6.*t127*t50*t51;
  p_output1[60]=-6.*t121*t14*t17*t19 + 30.*t122*t14*t19*t20 - 30.*t122*t20*t22*t24 + 60.*t123*t22*t23*t24 - 60.*t123*t23*t26*t28 + 60.*t124*t26*t27*t28 + 30.*t125*t16*t30*t31 - 60.*t124*t27*t30*t31 + 6.*t127*t33*t34 - 30.*t125*t16*t33*t34 + 6.*t121*t17*t5 - 6.*t127*t50*t51 - 6.*t126*t17*t53 - 60.*t122*t19*t23*t24*t53 - 60.*t123*t22*t27*t28*t53 - 30.*t124*t16*t26*t31*t53 - 6.*t125*t30*t34*t53 - 30.*t121*t14*t20*t5*t53;
  p_output1[61]=t75;
  p_output1[62]=t76;
  p_output1[63]=t77;
  p_output1[64]=t78;
  p_output1[65]=t79;
  p_output1[66]=t80;
  p_output1[67]=t81;
  p_output1[68]=t160;
  p_output1[69]=2.2935*t14*t141*t19*t20 - 2.2935*t14*t142*t19*t20 + 4.587*t142*t22*t23*t24 - 4.587*t143*t22*t23*t24 + 4.587*t143*t26*t27*t28 - 4.587*t144*t26*t27*t28 + 2.2935*t144*t16*t30*t31 - 2.2935*t145*t16*t30*t31 + 0.4587*t145*t33*t34 - 0.4587*t147*t33*t34 - 0.4587*t141*t17*t5 + 0.4587*t146*t17*t5;
  p_output1[70]=t160;
  p_output1[71]=1.;
  p_output1[72]=14.9535*t14*t141*t19*t20 - 14.9535*t14*t142*t19*t20 + 29.907*t142*t22*t23*t24 - 29.907*t143*t22*t23*t24 + 29.907*t143*t26*t27*t28 - 29.907*t144*t26*t27*t28 + 14.9535*t144*t16*t30*t31 - 14.9535*t145*t16*t30*t31 + 2.9907*t145*t33*t34 - 2.9907*t147*t33*t34 - 2.9907*t141*t17*t5 + 2.9907*t146*t17*t5;
  p_output1[73]=6.*t14*t141*t17*t19 - 6.*t14*t146*t17*t19 - 30.*t141*t20*t22*t24 + 30.*t142*t20*t22*t24 - 60.*t142*t23*t26*t28 + 60.*t143*t23*t26*t28 - 60.*t143*t27*t30*t31 + 60.*t144*t27*t30*t31 - 30.*t144*t16*t33*t34 + 30.*t145*t16*t33*t34 - 6.*t145*t50*t51 + 6.*t147*t50*t51;
  p_output1[74]=-6.*t14*t141*t17*t19 + 30.*t14*t142*t19*t20 - 30.*t142*t20*t22*t24 + 60.*t143*t22*t23*t24 - 60.*t143*t23*t26*t28 + 60.*t144*t26*t27*t28 + 30.*t145*t16*t30*t31 - 60.*t144*t27*t30*t31 + 6.*t147*t33*t34 - 30.*t145*t16*t33*t34 + 6.*t141*t17*t5 - 6.*t147*t50*t51 - 6.*t146*t17*t53 - 60.*t142*t19*t23*t24*t53 - 60.*t143*t22*t27*t28*t53 - 30.*t144*t16*t26*t31*t53 - 6.*t145*t30*t34*t53 - 30.*t14*t141*t20*t5*t53;
  p_output1[75]=t75;
  p_output1[76]=t76;
  p_output1[77]=t77;
  p_output1[78]=t78;
  p_output1[79]=t79;
  p_output1[80]=t80;
  p_output1[81]=t81;
  p_output1[82]=t180;
  p_output1[83]=1.;
  p_output1[84]=2.2935*t14*t161*t19*t20 - 2.2935*t14*t162*t19*t20 + 4.587*t162*t22*t23*t24 - 4.587*t163*t22*t23*t24 + 4.587*t163*t26*t27*t28 - 4.587*t164*t26*t27*t28 + 2.2935*t16*t164*t30*t31 - 2.2935*t16*t165*t30*t31 + 0.4587*t165*t33*t34 - 0.4587*t167*t33*t34 - 0.4587*t161*t17*t5 + 0.4587*t166*t17*t5;
  p_output1[85]=t180;
  p_output1[86]=14.9535*t14*t161*t19*t20 - 14.9535*t14*t162*t19*t20 + 29.907*t162*t22*t23*t24 - 29.907*t163*t22*t23*t24 + 29.907*t163*t26*t27*t28 - 29.907*t164*t26*t27*t28 + 14.9535*t16*t164*t30*t31 - 14.9535*t16*t165*t30*t31 + 2.9907*t165*t33*t34 - 2.9907*t167*t33*t34 - 2.9907*t161*t17*t5 + 2.9907*t166*t17*t5;
  p_output1[87]=6.*t14*t161*t17*t19 - 6.*t14*t166*t17*t19 - 30.*t161*t20*t22*t24 + 30.*t162*t20*t22*t24 - 60.*t162*t23*t26*t28 + 60.*t163*t23*t26*t28 - 60.*t163*t27*t30*t31 + 60.*t164*t27*t30*t31 - 30.*t16*t164*t33*t34 + 30.*t16*t165*t33*t34 - 6.*t165*t50*t51 + 6.*t167*t50*t51;
  p_output1[88]=-6.*t14*t161*t17*t19 + 30.*t14*t162*t19*t20 - 30.*t162*t20*t22*t24 + 60.*t163*t22*t23*t24 - 60.*t163*t23*t26*t28 + 60.*t164*t26*t27*t28 + 30.*t16*t165*t30*t31 - 60.*t164*t27*t30*t31 - 30.*t16*t165*t33*t34 + 6.*t167*t33*t34 + 6.*t161*t17*t5 - 6.*t167*t50*t51 - 6.*t166*t17*t53 - 60.*t162*t19*t23*t24*t53 - 60.*t163*t22*t27*t28*t53 - 30.*t16*t164*t26*t31*t53 - 6.*t165*t30*t34*t53 - 30.*t14*t161*t20*t5*t53;
  p_output1[89]=t75;
  p_output1[90]=t76;
  p_output1[91]=t77;
  p_output1[92]=t78;
  p_output1[93]=t79;
  p_output1[94]=t80;
  p_output1[95]=t81;
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
    ( !(mrows == 72 && ncols == 1) && 
      !(mrows == 1 && ncols == 72))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 96, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "J_y2Pos_RightHS3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void J_y2Pos_RightHS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

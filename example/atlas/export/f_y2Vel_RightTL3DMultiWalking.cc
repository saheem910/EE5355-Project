/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:58:36 GMT-04:00
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
  t1 = var[42];
  t2 = var[43];
  t3 = -1.*t2;
  t4 = t1 + t3;
  t5 = 1/t4;
  t6 = var[41];
  t7 = var[16];
  t8 = 0.07645*t7;
  t9 = var[18];
  t10 = 0.87245*t9;
  t11 = var[20];
  t12 = 0.49845*t11;
  t13 = var[4];
  t14 = 0.87245*t13;
  t15 = t3 + t8 + t10 + t12 + t14;
  t16 = -1.*t5*t15;
  t17 = 1. + t16;
  t18 = Power(t17,5);
  t19 = var[37];
  t20 = 0.07645*t19;
  t21 = var[39];
  t22 = 0.87245*t21;
  t23 = 0.49845*t6;
  t24 = var[25];
  t25 = 0.87245*t24;
  t26 = t20 + t22 + t23 + t25;
  t27 = var[45];
  t28 = Power(t4,-2);
  t29 = Power(t17,4);
  t30 = var[46];
  t31 = Power(t4,-3);
  t32 = Power(t17,3);
  t33 = Power(t15,2);
  t34 = var[47];
  t35 = Power(t4,-4);
  t36 = Power(t17,2);
  t37 = Power(t15,3);
  t38 = var[48];
  t39 = Power(t4,-5);
  t40 = Power(t15,4);
  t41 = var[49];
  t42 = Power(t4,-6);
  t43 = Power(t15,5);
  t44 = var[52];
  t45 = var[53];
  t46 = var[54];
  t47 = var[55];
  t48 = var[56];
  t49 = var[59];
  t50 = var[60];
  t51 = var[61];
  t52 = var[62];
  t53 = var[63];
  t54 = var[36];
  t55 = var[66];
  t56 = var[67];
  t57 = var[68];
  t58 = var[69];
  t59 = var[70];
  t60 = var[73];
  t61 = var[74];
  t62 = var[75];
  t63 = var[76];
  t64 = var[77];
  t65 = var[80];
  t66 = var[81];
  t67 = var[82];
  t68 = var[83];
  t69 = var[84];
  t70 = var[35];
  t71 = var[87];
  t72 = var[88];
  t73 = var[89];
  t74 = var[90];
  t75 = var[91];
  t76 = var[94];
  t77 = var[95];
  t78 = var[96];
  t79 = var[97];
  t80 = var[98];
  t81 = var[38];
  t82 = var[101];
  t83 = var[102];
  t84 = var[103];
  t85 = var[104];
  t86 = var[105];
  t87 = var[108];
  t88 = var[109];
  t89 = var[110];
  t90 = var[111];
  t91 = var[112];
  t92 = var[11];
  t93 = var[3];
  t94 = Cos(t93);
  t95 = var[5];
  t96 = var[13];
  t97 = Cos(t95);
  t98 = Sin(t93);
  t99 = Sin(t13);
  t100 = Sin(t95);
  t101 = var[9];
  t102 = Cos(t96);
  t103 = -1.*t94*t97*t99;
  t104 = t98*t100;
  t105 = t103 + t104;
  t106 = Sin(t96);
  t107 = t97*t98;
  t108 = t94*t99*t100;
  t109 = t107 + t108;
  t110 = var[12];
  t111 = Cos(t92);
  t112 = Cos(t13);
  t113 = Sin(t92);
  t114 = -1.*t106*t105;
  t115 = t102*t109;
  t116 = t114 + t115;
  t117 = var[14];
  t118 = Cos(t110);
  t119 = t102*t105;
  t120 = t106*t109;
  t121 = t119 + t120;
  t122 = Sin(t110);
  t123 = t111*t94*t112;
  t124 = -1.*t113*t116;
  t125 = t123 + t124;
  t126 = var[10];
  t127 = Cos(t117);
  t128 = t122*t121;
  t129 = t118*t125;
  t130 = t128 + t129;
  t131 = Sin(t117);
  t132 = t118*t121;
  t133 = -1.*t122*t125;
  t134 = t132 + t133;
  t135 = var[30];
  t136 = Cos(t101);
  t137 = var[32];
  t138 = var[34];
  t139 = var[24];
  t140 = var[26];
  t141 = Sin(t101);
  t142 = Cos(t126);
  t143 = -1.*t131*t130;
  t144 = t127*t134;
  t145 = t143 + t144;
  t146 = var[31];
  t147 = Sin(t126);
  t148 = t127*t130;
  t149 = t131*t134;
  t150 = t148 + t149;
  t151 = var[33];
  t152 = t94*t97*t139;
  t153 = -1.*t98*t99*t100*t139;
  t154 = t94*t112*t100*t24;
  t155 = t94*t97*t99*t140;
  t156 = -1.*t98*t100*t140;
  t157 = t152 + t153 + t154 + t155 + t156;
  t158 = t97*t98*t99*t139;
  t159 = t94*t100*t139;
  t160 = -1.*t94*t112*t97*t24;
  t161 = t97*t98*t140;
  t162 = t94*t99*t100*t140;
  t163 = t158 + t159 + t160 + t161 + t162;
  t164 = -1.*t102*t105*t138;
  t165 = -1.*t106*t109*t138;
  t166 = t102*t157;
  t167 = -1.*t106*t163;
  t168 = t164 + t165 + t166 + t167;
  t169 = -1.*t106*t105*t138;
  t170 = t102*t109*t138;
  t171 = t106*t157;
  t172 = t102*t163;
  t173 = t169 + t170 + t171 + t172;
  t174 = -1.*t94*t112*t113*t137;
  t175 = -1.*t111*t116*t137;
  t176 = -1.*t111*t112*t98*t139;
  t177 = -1.*t111*t94*t99*t24;
  t178 = -1.*t113*t168;
  t179 = t174 + t175 + t176 + t177 + t178;
  t180 = t118*t121*t151;
  t181 = -1.*t122*t125*t151;
  t182 = t122*t173;
  t183 = t118*t179;
  t184 = t180 + t181 + t182 + t183;
  t185 = -1.*t122*t121*t151;
  t186 = -1.*t118*t125*t151;
  t187 = t118*t173;
  t188 = -1.*t122*t179;
  t189 = t185 + t186 + t187 + t188;
  t190 = var[115];
  t191 = var[116];
  t192 = var[117];
  t193 = var[118];
  t194 = var[119];
  t195 = t97*t98*t99;
  t196 = t94*t100;
  t197 = t195 + t196;
  t198 = t94*t97;
  t199 = -1.*t98*t99*t100;
  t200 = t198 + t199;
  t201 = t102*t197;
  t202 = t106*t200;
  t203 = t201 + t202;
  t204 = -1.*t111*t112*t98;
  t205 = -1.*t106*t197;
  t206 = t102*t200;
  t207 = t205 + t206;
  t208 = -1.*t113*t207;
  t209 = t204 + t208;
  t210 = t122*t203;
  t211 = t118*t209;
  t212 = t210 + t211;
  t213 = t118*t203;
  t214 = -1.*t122*t209;
  t215 = t213 + t214;
  t216 = -1.*t97*t98*t139;
  t217 = -1.*t94*t99*t100*t139;
  t218 = -1.*t112*t98*t100*t24;
  t219 = -1.*t97*t98*t99*t140;
  t220 = -1.*t94*t100*t140;
  t221 = t216 + t217 + t218 + t219 + t220;
  t222 = t94*t97*t99*t139;
  t223 = -1.*t98*t100*t139;
  t224 = t112*t97*t98*t24;
  t225 = t94*t97*t140;
  t226 = -1.*t98*t99*t100*t140;
  t227 = t222 + t223 + t224 + t225 + t226;
  t228 = -1.*t106*t197*t138;
  t229 = t102*t200*t138;
  t230 = t106*t221;
  t231 = t102*t227;
  t232 = t228 + t229 + t230 + t231;
  t233 = t112*t113*t98*t137;
  t234 = -1.*t111*t207*t137;
  t235 = -1.*t111*t94*t112*t139;
  t236 = t111*t98*t99*t24;
  t237 = -1.*t102*t197*t138;
  t238 = -1.*t106*t200*t138;
  t239 = t102*t221;
  t240 = -1.*t106*t227;
  t241 = t237 + t238 + t239 + t240;
  t242 = -1.*t113*t241;
  t243 = t233 + t234 + t235 + t236 + t242;
  t244 = t118*t203*t151;
  t245 = -1.*t122*t209*t151;
  t246 = t122*t232;
  t247 = t118*t243;
  t248 = t244 + t245 + t246 + t247;
  t249 = -1.*t122*t203*t151;
  t250 = -1.*t118*t209*t151;
  t251 = t118*t232;
  t252 = -1.*t122*t243;
  t253 = t249 + t250 + t251 + t252;
  p_output1[0]=30.*t15*t26*t27*t28*t29 - 30.*t15*t26*t28*t29*t30 + 60.*t26*t30*t31*t32*t33 - 60.*t26*t31*t32*t33*t34 + 60.*t26*t34*t35*t36*t37 - 60.*t26*t35*t36*t37*t38 + 30.*t17*t26*t38*t39*t40 - 30.*t17*t26*t39*t40*t41 + 6.*t26*t41*t42*t43 - 6.*t18*t26*t27*t5 + t6 + 6.*t18*t26*t5*var[44] - 6.*t26*t42*t43*var[50];
  p_output1[1]=-1.*t19 - 1.*t21 + 30.*t15*t26*t28*t29*t44 - 30.*t15*t26*t28*t29*t45 + 60.*t26*t31*t32*t33*t45 - 60.*t26*t31*t32*t33*t46 + 60.*t26*t35*t36*t37*t46 - 60.*t26*t35*t36*t37*t47 + 30.*t17*t26*t39*t40*t47 - 30.*t17*t26*t39*t40*t48 + 6.*t26*t42*t43*t48 - 6.*t18*t26*t44*t5 - 1.*t6 + 6.*t18*t26*t5*var[51] - 6.*t26*t42*t43*var[57];
  p_output1[2]=30.*t15*t26*t28*t29*t49 - 6.*t18*t26*t49*t5 - 30.*t15*t26*t28*t29*t50 + 60.*t26*t31*t32*t33*t50 - 60.*t26*t31*t32*t33*t51 + 60.*t26*t35*t36*t37*t51 - 60.*t26*t35*t36*t37*t52 + 30.*t17*t26*t39*t40*t52 - 30.*t17*t26*t39*t40*t53 + 6.*t26*t42*t43*t53 + t54 + 6.*t18*t26*t5*var[58] - 6.*t26*t42*t43*var[64];
  p_output1[3]=-1.*t54 + 30.*t15*t26*t28*t29*t55 - 6.*t18*t26*t5*t55 - 30.*t15*t26*t28*t29*t56 + 60.*t26*t31*t32*t33*t56 - 60.*t26*t31*t32*t33*t57 + 60.*t26*t35*t36*t37*t57 - 60.*t26*t35*t36*t37*t58 + 30.*t17*t26*t39*t40*t58 - 30.*t17*t26*t39*t40*t59 + 6.*t26*t42*t43*t59 - 1.*t81 + 6.*t18*t26*t5*var[65] - 6.*t26*t42*t43*var[71];
  p_output1[4]=30.*t15*t26*t28*t29*t60 - 6.*t18*t26*t5*t60 - 30.*t15*t26*t28*t29*t61 + 60.*t26*t31*t32*t33*t61 - 60.*t26*t31*t32*t33*t62 + 60.*t26*t35*t36*t37*t62 - 60.*t26*t35*t36*t37*t63 + 30.*t17*t26*t39*t40*t63 - 30.*t17*t26*t39*t40*t64 + 6.*t26*t42*t43*t64 + var[40] + 6.*t18*t26*t5*var[72] - 6.*t26*t42*t43*var[78];
  p_output1[5]=30.*t15*t26*t28*t29*t65 - 6.*t18*t26*t5*t65 - 30.*t15*t26*t28*t29*t66 + 60.*t26*t31*t32*t33*t66 - 60.*t26*t31*t32*t33*t67 + 60.*t26*t35*t36*t37*t67 - 60.*t26*t35*t36*t37*t68 + 30.*t17*t26*t39*t40*t68 - 30.*t17*t26*t39*t40*t69 + 6.*t26*t42*t43*t69 + t70 + 6.*t18*t26*t5*var[79] - 6.*t26*t42*t43*var[85];
  p_output1[6]=1.00394560743416*t151 + 1.00394560743416*t24 + 0.530150753768844*t70 + 30.*t15*t26*t28*t29*t71 - 6.*t18*t26*t5*t71 - 30.*t15*t26*t28*t29*t72 + 60.*t26*t31*t32*t33*t72 - 60.*t26*t31*t32*t33*t73 + 60.*t26*t35*t36*t37*t73 - 60.*t26*t35*t36*t37*t74 + 30.*t17*t26*t39*t40*t74 - 30.*t17*t26*t39*t40*t75 + 6.*t26*t42*t43*t75 + 6.*t18*t26*t5*var[86] - 6.*t26*t42*t43*var[92];
  p_output1[7]=t146 + 30.*t15*t26*t28*t29*t76 - 6.*t18*t26*t5*t76 - 30.*t15*t26*t28*t29*t77 + 60.*t26*t31*t32*t33*t77 - 60.*t26*t31*t32*t33*t78 + 60.*t26*t35*t36*t37*t78 - 60.*t26*t35*t36*t37*t79 + 30.*t17*t26*t39*t40*t79 - 30.*t17*t26*t39*t40*t80 + 6.*t26*t42*t43*t80 + 6.*t18*t26*t5*var[93] - 6.*t26*t42*t43*var[99];
  p_output1[8]=-1.*t137 + t81 + 30.*t15*t26*t28*t29*t82 - 6.*t18*t26*t5*t82 - 30.*t15*t26*t28*t29*t83 + 60.*t26*t31*t32*t33*t83 - 60.*t26*t31*t32*t33*t84 + 60.*t26*t35*t36*t37*t84 - 60.*t26*t35*t36*t37*t85 + 30.*t17*t26*t39*t40*t85 - 30.*t17*t26*t39*t40*t86 + 6.*t26*t42*t43*t86 + 6.*t18*t26*t5*var[100] - 6.*t26*t42*t43*var[106];
  p_output1[9]=30.*t15*t26*t28*t29*t87 - 6.*t18*t26*t5*t87 - 30.*t15*t26*t28*t29*t88 + 60.*t26*t31*t32*t33*t88 - 60.*t26*t31*t32*t33*t89 + 60.*t26*t35*t36*t37*t89 - 60.*t26*t35*t36*t37*t90 + 30.*t17*t26*t39*t40*t90 - 30.*t17*t26*t39*t40*t91 + 6.*t26*t42*t43*t91 - 0.15240000000000004*(t135*t136*(t145*t147 + t142*t150) + t141*(t142*t145*t146 - 1.*t146*t147*t150 + t142*(t127*t184 + t131*t189 - 1.*t130*t131*t70 + t127*t134*t70) + t147*(-1.*t131*t184 + t127*t189 - 1.*t127*t130*t70 - 1.*t131*t134*t70)) - 1.*t135*t141*(t111*t116 + t112*t113*t94) + t136*(-1.*t113*t116*t137 + t111*t168 + t111*t112*t137*t94 - 1.*t112*t113*t139*t98 - 1.*t113*t24*t94*t99)) + 6.*t18*t26*t5*var[107] - 6.*t26*t42*t43*var[113];
  p_output1[10]=30.*t15*t190*t26*t28*t29 - 30.*t15*t191*t26*t28*t29 + 60.*t191*t26*t31*t32*t33 - 60.*t192*t26*t31*t32*t33 + 60.*t192*t26*t35*t36*t37 - 60.*t193*t26*t35*t36*t37 + 30.*t17*t193*t26*t39*t40 - 30.*t17*t194*t26*t39*t40 + 6.*t194*t26*t42*t43 - 6.*t18*t190*t26*t5 - 0.2548*(-1.*t146*t147*(-1.*t131*t212 + t127*t215) - 1.*t142*t146*(t127*t212 + t131*t215) - 1.*t147*(t127*t248 + t131*t253 - 1.*t131*t212*t70 + t127*t215*t70) + t142*(-1.*t131*t248 + t127*t253 - 1.*t127*t212*t70 - 1.*t131*t215*t70)) + 6.*t18*t26*t5*var[114] - 6.*t26*t42*t43*var[120];
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
    ( !(mrows == 121 && ncols == 1) && 
      !(mrows == 1 && ncols == 121))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "f_y2Vel_RightTL3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void f_y2Vel_RightTL3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

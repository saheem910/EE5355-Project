/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:29:28 GMT-04:00
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
  t1 = q[10];
  t2 = q[14];
  t3 = q[12];
  t4 = Cos(t1);
  t5 = 0. + t4;
  t6 = Cos(t2);
  t7 = Sin(t1);
  t8 = -1.*t7;
  t9 = 0. + t8;
  t10 = Sin(t2);
  t11 = q[4];
  t12 = Sin(t3);
  t13 = t6*t9;
  t14 = -1.*t5*t10;
  t15 = 0. + t13 + t14;
  t16 = Cos(t3);
  t17 = t5*t6;
  t18 = t9*t10;
  t19 = 0. + t17 + t18;
  t20 = q[13];
  t21 = q[11];
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
  t33 = q[5];
  t34 = Cos(t21);
  t35 = q[9];
  t36 = Sin(t35);
  t37 = 0. + t36;
  t38 = t4*t37;
  t39 = 0. + t38;
  t40 = t37*t7;
  t41 = 0. + t40;
  t42 = Sin(t11);
  t43 = Cos(t11);
  t44 = Cos(t33);
  t45 = t6*t41;
  t46 = t39*t10;
  t47 = 0. + t45 + t46;
  t48 = t6*t39;
  t49 = -1.*t41*t10;
  t50 = 0. + t48 + t49;
  t51 = Cos(t35);
  t52 = 0. + t51;
  t53 = -1.*t12*t47;
  t54 = t16*t50;
  t55 = 0. + t53 + t54;
  t56 = t16*t47;
  t57 = t12*t50;
  t58 = 0. + t56 + t57;
  t59 = t52*t34;
  t60 = -1.*t30*t55;
  t61 = 0. + t59 + t60;
  t62 = Sin(t33);
  t63 = t52*t4;
  t64 = 0. + t63;
  t65 = t52*t7;
  t66 = 0. + t65;
  t67 = t6*t66;
  t68 = t64*t10;
  t69 = 0. + t67 + t68;
  t70 = t64*t6;
  t71 = -1.*t66*t10;
  t72 = 0. + t70 + t71;
  t73 = -1.*t36;
  t74 = 0. + t73;
  t75 = -1.*t12*t69;
  t76 = t16*t72;
  t77 = 0. + t75 + t76;
  t78 = t16*t69;
  t79 = t12*t72;
  t80 = 0. + t78 + t79;
  t81 = t34*t74;
  t82 = -1.*t30*t77;
  t83 = 0. + t81 + t82;
  t84 = t25*t28;
  t85 = t29*t32;
  t86 = 0. + t84 + t85;
  t87 = t29*t28;
  t88 = -1.*t25*t32;
  t89 = 0. + t87 + t88;
  t90 = q[3];
  t91 = t34*t24;
  t92 = 0. + t91;
  t93 = t44*t89;
  t94 = -1.*t86*t62;
  t95 = 0. + t93 + t94;
  t96 = Cos(t90);
  t97 = t25*t58;
  t98 = t29*t61;
  t99 = 0. + t97 + t98;
  t100 = t29*t58;
  t101 = -1.*t25*t61;
  t102 = 0. + t100 + t101;
  t103 = Sin(t90);
  t104 = t52*t30;
  t105 = t34*t55;
  t106 = 0. + t104 + t105;
  t107 = t44*t102;
  t108 = -1.*t99*t62;
  t109 = 0. + t107 + t108;
  t110 = t25*t80;
  t111 = t29*t83;
  t112 = 0. + t110 + t111;
  t113 = t29*t80;
  t114 = -1.*t25*t83;
  t115 = 0. + t113 + t114;
  t116 = t74*t30;
  t117 = t34*t77;
  t118 = 0. + t116 + t117;
  t119 = t44*t115;
  t120 = -1.*t112*t62;
  t121 = 0. + t119 + t120;
  t122 = t44*t86;
  t123 = t89*t62;
  t124 = 0. + t122 + t123;
  t125 = t43*t92;
  t126 = -1.*t42*t95;
  t127 = 0. + t125 + t126;
  t128 = t44*t99;
  t129 = t102*t62;
  t130 = 0. + t128 + t129;
  t131 = t43*t106;
  t132 = -1.*t42*t109;
  t133 = 0. + t131 + t132;
  t134 = t44*t112;
  t135 = t115*t62;
  t136 = 0. + t134 + t135;
  t137 = t43*t118;
  t138 = -1.*t42*t121;
  t139 = 0. + t137 + t138;
  t140 = t106*t42;
  t141 = t43*t109;
  t142 = 0. + t140 + t141;
  t143 = -1.*t51;
  t144 = 1. + t143;
  t145 = -0.846*t144;
  t146 = -0.92245*t51;
  t147 = 0. + t145 + t146;
  t148 = -1.*t4;
  t149 = 1. + t148;
  t150 = -0.846*t149;
  t151 = t147*t4;
  t152 = -0.1728*t7;
  t153 = t150 + t151 + t152;
  t154 = 0.1728*t4;
  t155 = 0.846*t7;
  t156 = t147*t7;
  t157 = t154 + t155 + t156;
  t158 = 0.05*t12;
  t159 = t6*t157;
  t160 = 0.424*t10;
  t161 = t153*t10;
  t162 = t159 + t160 + t161;
  t163 = -1.*t6;
  t164 = 1. + t163;
  t165 = -0.424*t164;
  t166 = t6*t153;
  t167 = -1.*t157*t10;
  t168 = t165 + t166 + t167;
  t169 = -1.*t16;
  t170 = 1. + t169;
  t171 = 0.05*t170;
  t172 = t16*t162;
  t173 = t12*t168;
  t174 = 0. + t171 + t158 + t172 + t173;
  t175 = -1.*t34;
  t176 = 1. + t175;
  t177 = 0.089*t176;
  t178 = 0.089*t144;
  t179 = 0.089*t51;
  t180 = 0.07645000000000002*t36;
  t181 = 0. + t178 + t179 + t180;
  t182 = t34*t181;
  t183 = -1. + t16;
  t184 = 0.05*t183;
  t185 = -1.*t12*t162;
  t186 = t16*t168;
  t187 = t184 + t158 + t185 + t186;
  t188 = -1.*t30*t187;
  t189 = t177 + t182 + t188;
  t190 = 0.089*t25;
  t191 = t29*t174;
  t192 = -1.*t25*t189;
  t193 = t190 + t191 + t192;
  t194 = -1.*t29;
  t195 = 1. + t194;
  t196 = 0.089*t195;
  t197 = t25*t174;
  t198 = t29*t189;
  t199 = t196 + t197 + t198;
  t200 = t118*t42;
  t201 = t43*t121;
  t202 = 0. + t200 + t201;
  t203 = -0.089*t30;
  t204 = t181*t30;
  t205 = t34*t187;
  t206 = 0. + t203 + t204 + t205;
  t207 = t44*t193;
  t208 = -1.*t199*t62;
  t209 = 0. + t207 + t208;
  t210 = t44*t199;
  t211 = t193*t62;
  t212 = 0. + t210 + t211;
  t213 = t206*t42;
  t214 = t43*t209;
  t215 = 0. + t213 + t214;
  t216 = t43*t206;
  t217 = -1.*t42*t209;
  t218 = 0. + t216 + t217;
  t219 = t92*t42;
  t220 = t43*t95;
  t221 = 0. + t219 + t220;
  t222 = t212*t136;
  t223 = -1.*t212*t130;
  t224 = t124*t212;
  t225 = -1.*t212*t136;
  t226 = -1.*t124*t212;
  t227 = t212*t130;
  t228 = t206*t118;
  t229 = -1.*t206*t106;
  t230 = t92*t206;
  t231 = -1.*t206*t118;
  t232 = -1.*t92*t206;
  t233 = t206*t106;
  t234 = t74*t181;
  t235 = -1.*t52*t181;
  t236 = t171 + t158 + t172 + t173;
  t237 = t203 + t204 + t205;
  p_output1[0]=t221;
  p_output1[1]=t142;
  p_output1[2]=t202;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0. - 1.*t103*t127 + t124*t96;
  p_output1[10]=0. - 1.*t103*t133 + t130*t96;
  p_output1[11]=0. - 1.*t103*t139 + t136*t96;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0. + t103*t124 + t127*t96;
  p_output1[19]=0. + t103*t130 + t133*t96;
  p_output1[20]=0. + t103*t136 + t139*t96;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t142*(t202*t215 + t139*t218 + t222) + t202*(-1.*t142*t215 - 1.*t133*t218 + t223);
  p_output1[28]=t202*(t127*t218 + t215*t221 + t224) + t221*(-1.*t202*t215 - 1.*t139*t218 + t225);
  p_output1[29]=t142*(-1.*t127*t218 - 1.*t215*t221 + t226) + t221*(t142*t215 + t133*t218 + t227);
  p_output1[30]=t221;
  p_output1[31]=t142;
  p_output1[32]=t202;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t130*(t121*t209 + t222 + t228) + t136*(-1.*t109*t209 + t223 + t229);
  p_output1[37]=t124*(-1.*t121*t209 + t225 + t231) + t136*(t224 + t230 + t209*t95);
  p_output1[38]=t124*(t109*t209 + t227 + t233) + t130*(t226 + t232 - 1.*t209*t95);
  p_output1[39]=t124;
  p_output1[40]=t130;
  p_output1[41]=t136;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=t106*(t115*t193 + t112*t199 + t228) + t118*(-1.*t102*t193 + t229 - 1.*t199*t99);
  p_output1[46]=t118*(t230 + t199*t86 + t193*t89) + (-1.*t115*t193 - 1.*t112*t199 + t231)*t92;
  p_output1[47]=t106*(t232 - 1.*t199*t86 - 1.*t193*t89) + t92*(t102*t193 + t233 + t199*t99);
  p_output1[48]=t92;
  p_output1[49]=t106;
  p_output1[50]=t118;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=1.;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=1.;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=1.;
  p_output1[81]=0.;
  p_output1[82]=0.07645000000000002;
  p_output1[83]=0.;
  p_output1[84]=1.;
  p_output1[85]=0.;
  p_output1[86]=0.;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0.846 + t52*(0. + t234 + t147*t52) + (0. + t235 - 1.*t147*t37)*t74;
  p_output1[91]=0. + 0.1728*t74;
  p_output1[92]=0. - 0.1728*t52;
  p_output1[93]=0.;
  p_output1[94]=t52;
  p_output1[95]=t74;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0. - 0.089*t24 + (t235 - 1.*t187*t55 - 1.*t236*t58)*t80 + t58*(t234 + t187*t77 + t236*t80);
  p_output1[100]=-0.089*t55 + (0. + t187*t24 + t236*t28)*t80 + t28*(-1.*t181*t74 - 1.*t187*t77 - 1.*t236*t80);
  p_output1[101]=(0. - 1.*t187*t24 - 1.*t236*t28)*t58 + t28*(t181*t52 + t187*t55 + t236*t58) - 0.089*t77;
  p_output1[102]=t28;
  p_output1[103]=t58;
  p_output1[104]=t80;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0. + 0.05*t15 + 0.05*t19 + t52*(t234 + t162*t69 + t168*t72) + (t235 - 1.*t162*t47 - 1.*t168*t50)*t74;
  p_output1[109]=0. + 0.05*t47 + 0.05*t50 + (0. + t15*t168 + t162*t19)*t74;
  p_output1[110]=0. + (0. - 1.*t15*t168 - 1.*t162*t19)*t52 + 0.05*t69 + 0.05*t72;
  p_output1[111]=0.;
  p_output1[112]=t52;
  p_output1[113]=t74;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0.089*t28 + t118*(-1.*t106*t237 - 1.*t174*t58 - 1.*t189*t61) + t106*(t118*t237 + t174*t80 + t189*t83);
  p_output1[118]=0.089*t58 + (-1.*t118*t237 - 1.*t174*t80 - 1.*t189*t83)*t92 + t118*(t174*t28 + t189*t32 + t237*t92);
  p_output1[119]=0.089*t80 + (t106*t237 + t174*t58 + t189*t61)*t92 + t106*(-1.*t174*t28 - 1.*t189*t32 - 1.*t237*t92);
  p_output1[120]=t92;
  p_output1[121]=t106;
  p_output1[122]=t118;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0. + 0.424*t5 + t52*(t234 + t153*t64 + t157*t66) + (t235 - 1.*t153*t39 - 1.*t157*t41)*t74;
  p_output1[127]=0. + 0.424*t41 + t74*(0. + t157*t5 + t153*t9);
  p_output1[128]=0. + 0.424*t66 + t52*(0. - 1.*t157*t5 - 1.*t153*t9);
  p_output1[129]=0.;
  p_output1[130]=t52;
  p_output1[131]=t74;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
  p_output1[168]=0;
  p_output1[169]=0;
  p_output1[170]=0;
  p_output1[171]=0;
  p_output1[172]=0;
  p_output1[173]=0;
  p_output1[174]=0;
  p_output1[175]=0;
  p_output1[176]=0;
  p_output1[177]=0;
  p_output1[178]=0;
  p_output1[179]=0;
  p_output1[180]=0;
  p_output1[181]=0;
  p_output1[182]=0;
  p_output1[183]=0;
  p_output1[184]=0;
  p_output1[185]=0;
  p_output1[186]=0;
  p_output1[187]=0;
  p_output1[188]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 21, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,q);


}

#else // MATLAB_MEX_FILE

#include "Jhol_LeftTL3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void Jhol_LeftTL3DMultiWalking_raw(double *p_output1, const double *q)
{
  // Call Subroutines
  output1(p_output1, q);

}

}
}

#endif // MATLAB_MEX_FILE

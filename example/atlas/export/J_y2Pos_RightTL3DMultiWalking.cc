/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:59:15 GMT-05:00
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
  double t287;
  double t288;
  double t289;
  double t290;
  double t291;
  double t292;
  double t293;
  double t294;
  double t295;
  double t296;
  double t297;
  double t298;
  double t299;
  double t300;
  double t301;
  double t302;
  double t303;
  double t304;
  double t305;
  double t306;
  double t307;
  double t308;
  double t309;
  double t310;
  double t311;
  double t312;
  double t313;
  double t314;
  double t315;
  double t316;
  double t317;
  double t318;
  double t319;
  double t320;
  double t321;
  double t322;
  double t323;
  double t324;
  double t325;
  double t326;
  double t327;
  double t328;
  double t329;
  double t330;
  double t331;
  double t332;
  double t333;
  double t334;
  double t335;
  double t336;
  double t337;
  double t338;
  double t339;
  double t340;
  double t341;
  double t342;
  double t343;
  double t344;
  double t345;
  double t346;
  double t347;
  double t348;
  double t349;
  double t350;
  double t351;
  double t352;
  double t353;
  double t354;
  double t355;
  double t356;
  double t357;
  double t358;
  double t359;
  double t360;
  double t361;
  double t362;
  double t363;
  double t364;
  double t365;
  double t366;
  double t367;
  double t368;
  double t369;
  double t370;
  double t371;
  double t372;
  double t373;
  double t374;
  double t375;
  double t376;
  double t377;
  double t378;
  double t379;
  double t380;
  double t381;
  double t382;
  double t383;
  double t384;
  double t385;
  double t386;
  double t387;
  double t388;
  double t389;
  double t390;
  double t391;
  double t392;
  double t393;
  double t394;
  double t395;
  double t396;
  double t397;
  double t398;
  double t399;
  double t400;
  double t401;
  double t402;
  double t403;
  double t404;
  double t405;
  double t406;
  double t407;
  double t408;
  double t409;
  double t410;
  double t411;
  double t412;
  double t413;
  double t414;
  double t415;
  double t416;
  double t417;
  double t418;
  double t419;
  double t420;
  double t421;
  double t422;
  double t423;
  double t424;
  double t425;
  double t426;
  double t427;
  double t428;
  double t429;
  double t430;
  double t431;
  double t432;
  double t433;
  double t434;
  double t435;
  double t436;
  double t437;
  double t438;
  double t439;
  double t440;
  double t441;
  double t442;
  double t443;
  double t444;
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
  t73 = Power(t16,6);
  t74 = -1.*t73;
  t75 = -6.*t5*t17*t14;
  t76 = -15.*t19*t20*t24;
  t77 = -20.*t22*t23*t28;
  t78 = -15.*t26*t27*t31;
  t79 = -6.*t30*t16*t34;
  t80 = -1.*t33*t51;
  t81 = var[38];
  t82 = var[39];
  t83 = var[40];
  t84 = var[41];
  t85 = var[42];
  t86 = var[37];
  t87 = var[43];
  t88 = 5.2347*t86*t5*t17;
  t89 = -5.2347*t81*t5*t17;
  t90 = 26.1735*t81*t19*t20*t14;
  t91 = -26.1735*t82*t19*t20*t14;
  t92 = 52.347*t82*t22*t23*t24;
  t93 = -52.347*t83*t22*t23*t24;
  t94 = 52.347*t83*t26*t27*t28;
  t95 = -52.347*t84*t26*t27*t28;
  t96 = 26.1735*t84*t30*t16*t31;
  t97 = -26.1735*t85*t30*t16*t31;
  t98 = 5.2347*t85*t33*t34;
  t99 = -5.2347*t87*t33*t34;
  t100 = t88 + t89 + t90 + t91 + t92 + t93 + t94 + t95 + t96 + t97 + t98 + t99;
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
  t180 = var[73];
  t181 = var[74];
  t182 = var[75];
  t183 = var[76];
  t184 = var[77];
  t185 = var[72];
  t186 = var[78];
  t187 = 5.2347*t185*t5*t17;
  t188 = -5.2347*t180*t5*t17;
  t189 = 26.1735*t180*t19*t20*t14;
  t190 = -26.1735*t181*t19*t20*t14;
  t191 = 52.347*t181*t22*t23*t24;
  t192 = -52.347*t182*t22*t23*t24;
  t193 = 52.347*t182*t26*t27*t28;
  t194 = -52.347*t183*t26*t27*t28;
  t195 = 26.1735*t183*t30*t16*t31;
  t196 = -26.1735*t184*t30*t16*t31;
  t197 = 5.2347*t184*t33*t34;
  t198 = -5.2347*t186*t33*t34;
  t199 = t187 + t188 + t189 + t190 + t191 + t192 + t193 + t194 + t195 + t196 + t197 + t198;
  t200 = var[80];
  t201 = var[81];
  t202 = var[82];
  t203 = var[83];
  t204 = var[84];
  t205 = var[79];
  t206 = var[85];
  t207 = 5.2347*t205*t5*t17;
  t208 = -5.2347*t200*t5*t17;
  t209 = 26.1735*t200*t19*t20*t14;
  t210 = -26.1735*t201*t19*t20*t14;
  t211 = 52.347*t201*t22*t23*t24;
  t212 = -52.347*t202*t22*t23*t24;
  t213 = 52.347*t202*t26*t27*t28;
  t214 = -52.347*t203*t26*t27*t28;
  t215 = 26.1735*t203*t30*t16*t31;
  t216 = -26.1735*t204*t30*t16*t31;
  t217 = 5.2347*t204*t33*t34;
  t218 = -5.2347*t206*t33*t34;
  t219 = t207 + t208 + t209 + t210 + t211 + t212 + t213 + t214 + t215 + t216 + t217 + t218;
  t220 = var[11];
  t221 = var[3];
  t222 = Sin(t221);
  t223 = var[5];
  t224 = var[13];
  t225 = Cos(t221);
  t226 = Cos(t223);
  t227 = Sin(t12);
  t228 = Sin(t223);
  t229 = var[9];
  t230 = Cos(t224);
  t231 = t226*t222*t227;
  t232 = t225*t228;
  t233 = t231 + t232;
  t234 = Sin(t224);
  t235 = t225*t226;
  t236 = -1.*t222*t227*t228;
  t237 = t235 + t236;
  t238 = var[12];
  t239 = Cos(t220);
  t240 = Cos(t12);
  t241 = Sin(t220);
  t242 = -1.*t234*t233;
  t243 = t230*t237;
  t244 = t242 + t243;
  t245 = var[14];
  t246 = Cos(t238);
  t247 = t230*t233;
  t248 = t234*t237;
  t249 = t247 + t248;
  t250 = Sin(t238);
  t251 = -1.*t239*t240*t222;
  t252 = -1.*t241*t244;
  t253 = t251 + t252;
  t254 = var[10];
  t255 = Cos(t245);
  t256 = t250*t249;
  t257 = t246*t253;
  t258 = t256 + t257;
  t259 = Sin(t245);
  t260 = t246*t249;
  t261 = -1.*t250*t253;
  t262 = t260 + t261;
  t263 = Cos(t229);
  t264 = Sin(t229);
  t265 = Sin(t254);
  t266 = t225*t240*t226*t234;
  t267 = t230*t225*t240*t228;
  t268 = t266 + t267;
  t269 = -1.*t230*t225*t240*t226;
  t270 = t225*t240*t234*t228;
  t271 = t269 + t270;
  t272 = -1.*t239*t225*t227;
  t273 = -1.*t241*t268;
  t274 = t272 + t273;
  t275 = Cos(t254);
  t276 = t250*t271;
  t277 = t246*t274;
  t278 = t276 + t277;
  t279 = t246*t271;
  t280 = -1.*t250*t274;
  t281 = t279 + t280;
  t282 = var[87];
  t283 = var[88];
  t284 = var[89];
  t285 = var[90];
  t286 = var[91];
  t287 = t225*t226*t227;
  t288 = -1.*t222*t228;
  t289 = t287 + t288;
  t290 = t226*t222;
  t291 = t225*t227*t228;
  t292 = t290 + t291;
  t293 = t230*t289;
  t294 = -1.*t234*t292;
  t295 = t293 + t294;
  t296 = t234*t289;
  t297 = t230*t292;
  t298 = t296 + t297;
  t299 = t250*t298;
  t300 = -1.*t246*t241*t295;
  t301 = t299 + t300;
  t302 = t246*t298;
  t303 = t241*t250*t295;
  t304 = t302 + t303;
  t305 = -1.*t225*t226*t227;
  t306 = t222*t228;
  t307 = t305 + t306;
  t308 = -1.*t234*t307;
  t309 = t308 + t297;
  t310 = t230*t307;
  t311 = t234*t292;
  t312 = t310 + t311;
  t313 = t239*t225*t240;
  t314 = -1.*t241*t309;
  t315 = t313 + t314;
  t316 = t250*t312;
  t317 = t246*t315;
  t318 = t316 + t317;
  t319 = t246*t312;
  t320 = -1.*t250*t315;
  t321 = t319 + t320;
  t322 = -1.*t259*t318;
  t323 = t255*t321;
  t324 = t322 + t323;
  t325 = t255*t318;
  t326 = t259*t321;
  t327 = t325 + t326;
  t328 = -1.*t225*t240*t241;
  t329 = -1.*t239*t309;
  t330 = t328 + t329;
  t331 = -1.*t250*t312;
  t332 = -1.*t246*t315;
  t333 = t331 + t332;
  t334 = -1.*t230*t307;
  t335 = t334 + t294;
  t336 = t250*t309;
  t337 = -1.*t246*t241*t335;
  t338 = t336 + t337;
  t339 = t246*t309;
  t340 = t241*t250*t335;
  t341 = t339 + t340;
  t342 = t275*t324;
  t343 = -1.*t259*t321;
  t344 = var[86];
  t345 = var[92];
  t346 = 5.2347*t344*t5*t17;
  t347 = -5.2347*t282*t5*t17;
  t348 = 26.1735*t282*t19*t20*t14;
  t349 = -26.1735*t283*t19*t20*t14;
  t350 = 52.347*t283*t22*t23*t24;
  t351 = -52.347*t284*t22*t23*t24;
  t352 = 52.347*t284*t26*t27*t28;
  t353 = -52.347*t285*t26*t27*t28;
  t354 = 26.1735*t285*t30*t16*t31;
  t355 = -26.1735*t286*t30*t16*t31;
  t356 = 5.2347*t286*t33*t34;
  t357 = -5.2347*t345*t33*t34;
  t358 = -1.*t226*t222;
  t359 = -1.*t225*t227*t228;
  t360 = t358 + t359;
  t361 = t234*t360;
  t362 = t293 + t361;
  t363 = -1.*t239*t225*t240;
  t364 = -1.*t234*t289;
  t365 = t230*t360;
  t366 = t364 + t365;
  t367 = -1.*t241*t366;
  t368 = t363 + t367;
  t369 = t250*t362;
  t370 = t246*t368;
  t371 = t369 + t370;
  t372 = t246*t362;
  t373 = -1.*t250*t368;
  t374 = t372 + t373;
  t375 = t230*t240*t226*t222;
  t376 = -1.*t240*t234*t222*t228;
  t377 = t375 + t376;
  t378 = t239*t222*t227;
  t379 = -1.*t240*t226*t234*t222;
  t380 = -1.*t230*t240*t222*t228;
  t381 = t379 + t380;
  t382 = -1.*t241*t381;
  t383 = t378 + t382;
  t384 = t250*t377;
  t385 = t246*t383;
  t386 = t384 + t385;
  t387 = t246*t377;
  t388 = -1.*t250*t383;
  t389 = t387 + t388;
  t390 = var[94];
  t391 = var[95];
  t392 = var[96];
  t393 = var[97];
  t394 = var[98];
  t395 = -1.*t226*t222*t227;
  t396 = -1.*t225*t228;
  t397 = t395 + t396;
  t398 = t234*t397;
  t399 = t398 + t243;
  t400 = t230*t397;
  t401 = -1.*t234*t237;
  t402 = t400 + t401;
  t403 = t250*t399;
  t404 = -1.*t246*t241*t402;
  t405 = t403 + t404;
  t406 = t246*t399;
  t407 = t241*t250*t402;
  t408 = t406 + t407;
  t409 = -1.*t259*t258;
  t410 = t255*t262;
  t411 = t409 + t410;
  t412 = t255*t258;
  t413 = t259*t262;
  t414 = t412 + t413;
  t415 = t240*t241*t222;
  t416 = -1.*t239*t244;
  t417 = t415 + t416;
  t418 = -1.*t250*t249;
  t419 = -1.*t246*t253;
  t420 = t418 + t419;
  t421 = -1.*t230*t233;
  t422 = t421 + t401;
  t423 = t250*t244;
  t424 = -1.*t246*t241*t422;
  t425 = t423 + t424;
  t426 = t246*t244;
  t427 = t241*t250*t422;
  t428 = t426 + t427;
  t429 = -1.*t265*t411;
  t430 = -1.*t259*t262;
  t431 = var[93];
  t432 = var[99];
  t433 = 5.2347*t431*t5*t17;
  t434 = -5.2347*t390*t5*t17;
  t435 = 26.1735*t390*t19*t20*t14;
  t436 = -26.1735*t391*t19*t20*t14;
  t437 = 52.347*t391*t22*t23*t24;
  t438 = -52.347*t392*t22*t23*t24;
  t439 = 52.347*t392*t26*t27*t28;
  t440 = -52.347*t393*t26*t27*t28;
  t441 = 26.1735*t393*t30*t16*t31;
  t442 = -26.1735*t394*t30*t16*t31;
  t443 = 5.2347*t394*t33*t34;
  t444 = -5.2347*t432*t33*t34;
  p_output1[0]=t49;
  p_output1[1]=2.2935*t14*t18*t19*t20 - 2.2935*t14*t19*t20*t21 + 4.587*t21*t22*t23*t24 - 4.587*t22*t23*t24*t25 + 4.587*t25*t26*t27*t28 - 4.587*t26*t27*t28*t29 + 2.2935*t16*t29*t30*t31 - 2.2935*t16*t30*t31*t32 + 0.4587*t32*t33*t34 - 0.4587*t33*t34*t36 - 0.4587*t17*t18*t5 + 0.4587*t17*t35*t5;
  p_output1[2]=t49;
  p_output1[3]=1. + 14.9535*t14*t18*t19*t20 - 14.9535*t14*t19*t20*t21 + 29.907*t21*t22*t23*t24 - 29.907*t22*t23*t24*t25 + 29.907*t25*t26*t27*t28 - 29.907*t26*t27*t28*t29 + 14.9535*t16*t29*t30*t31 - 14.9535*t16*t30*t31*t32 + 2.9907*t32*t33*t34 - 2.9907*t33*t34*t36 - 2.9907*t17*t18*t5 + 2.9907*t17*t35*t5;
  p_output1[4]=6.*t14*t17*t18*t19 - 30.*t18*t20*t22*t24 + 30.*t20*t21*t22*t24 - 60.*t21*t23*t26*t28 + 60.*t23*t25*t26*t28 - 60.*t25*t27*t30*t31 + 60.*t27*t29*t30*t31 - 30.*t16*t29*t33*t34 + 30.*t16*t32*t33*t34 - 6.*t14*t17*t19*t35 - 6.*t32*t50*t51 + 6.*t36*t50*t51;
  p_output1[5]=-6.*t14*t17*t18*t19 + 30.*t14*t19*t20*t21 - 30.*t20*t21*t22*t24 + 60.*t22*t23*t24*t25 - 60.*t23*t25*t26*t28 + 60.*t26*t27*t28*t29 - 60.*t27*t29*t30*t31 + 30.*t16*t30*t31*t32 - 30.*t16*t32*t33*t34 + 6.*t33*t34*t36 + 6.*t17*t18*t5 - 6.*t36*t50*t51 - 60.*t19*t21*t23*t24*t53 - 60.*t22*t25*t27*t28*t53 - 30.*t16*t26*t29*t31*t53 - 6.*t30*t32*t34*t53 - 6.*t17*t35*t53 - 30.*t14*t18*t20*t5*t53;
  p_output1[6]=t74;
  p_output1[7]=t75;
  p_output1[8]=t76;
  p_output1[9]=t77;
  p_output1[10]=t78;
  p_output1[11]=t79;
  p_output1[12]=t80;
  p_output1[13]=t61 + t62 + t63 + t64 + t65 + t66 + t67 + t68 + t69 + t70 + t71 + t72;
  p_output1[14]=-1. + 2.2935*t14*t19*t20*t54 - 0.4587*t17*t5*t54 - 2.2935*t14*t19*t20*t55 + 4.587*t22*t23*t24*t55 - 4.587*t22*t23*t24*t56 + 4.587*t26*t27*t28*t56 - 4.587*t26*t27*t28*t57 + 2.2935*t16*t30*t31*t57 - 2.2935*t16*t30*t31*t58 + 0.4587*t33*t34*t58 + 0.4587*t17*t5*t59 - 0.4587*t33*t34*t60;
  p_output1[15]=-1. + t61 + t62 + t63 + t64 + t65 + t66 + t67 + t68 + t69 + t70 + t71 + t72;
  p_output1[16]=-1. + 14.9535*t14*t19*t20*t54 - 2.9907*t17*t5*t54 - 14.9535*t14*t19*t20*t55 + 29.907*t22*t23*t24*t55 - 29.907*t22*t23*t24*t56 + 29.907*t26*t27*t28*t56 - 29.907*t26*t27*t28*t57 + 14.9535*t16*t30*t31*t57 - 14.9535*t16*t30*t31*t58 + 2.9907*t33*t34*t58 + 2.9907*t17*t5*t59 - 2.9907*t33*t34*t60;
  p_output1[17]=6.*t14*t17*t19*t54 - 30.*t20*t22*t24*t54 + 30.*t20*t22*t24*t55 - 60.*t23*t26*t28*t55 + 60.*t23*t26*t28*t56 - 60.*t27*t30*t31*t56 + 60.*t27*t30*t31*t57 - 30.*t16*t33*t34*t57 + 30.*t16*t33*t34*t58 - 6.*t50*t51*t58 - 6.*t14*t17*t19*t59 + 6.*t50*t51*t60;
  p_output1[18]=-6.*t14*t17*t19*t54 + 6.*t17*t5*t54 - 30.*t14*t20*t5*t53*t54 + 30.*t14*t19*t20*t55 - 30.*t20*t22*t24*t55 - 60.*t19*t23*t24*t53*t55 + 60.*t22*t23*t24*t56 - 60.*t23*t26*t28*t56 - 60.*t22*t27*t28*t53*t56 + 60.*t26*t27*t28*t57 - 60.*t27*t30*t31*t57 - 30.*t16*t26*t31*t53*t57 + 30.*t16*t30*t31*t58 - 30.*t16*t33*t34*t58 - 6.*t30*t34*t53*t58 - 6.*t17*t53*t59 + 6.*t33*t34*t60 - 6.*t50*t51*t60;
  p_output1[19]=t74;
  p_output1[20]=t75;
  p_output1[21]=t76;
  p_output1[22]=t77;
  p_output1[23]=t78;
  p_output1[24]=t79;
  p_output1[25]=t80;
  p_output1[26]=t100;
  p_output1[27]=1.;
  p_output1[28]=2.2935*t14*t19*t20*t81 - 0.4587*t17*t5*t81 - 2.2935*t14*t19*t20*t82 + 4.587*t22*t23*t24*t82 - 4.587*t22*t23*t24*t83 + 4.587*t26*t27*t28*t83 - 4.587*t26*t27*t28*t84 + 2.2935*t16*t30*t31*t84 - 2.2935*t16*t30*t31*t85 + 0.4587*t33*t34*t85 + 0.4587*t17*t5*t86 - 0.4587*t33*t34*t87;
  p_output1[29]=t100;
  p_output1[30]=14.9535*t14*t19*t20*t81 - 2.9907*t17*t5*t81 - 14.9535*t14*t19*t20*t82 + 29.907*t22*t23*t24*t82 - 29.907*t22*t23*t24*t83 + 29.907*t26*t27*t28*t83 - 29.907*t26*t27*t28*t84 + 14.9535*t16*t30*t31*t84 - 14.9535*t16*t30*t31*t85 + 2.9907*t33*t34*t85 + 2.9907*t17*t5*t86 - 2.9907*t33*t34*t87;
  p_output1[31]=6.*t14*t17*t19*t81 - 30.*t20*t22*t24*t81 + 30.*t20*t22*t24*t82 - 60.*t23*t26*t28*t82 + 60.*t23*t26*t28*t83 - 60.*t27*t30*t31*t83 + 60.*t27*t30*t31*t84 - 30.*t16*t33*t34*t84 + 30.*t16*t33*t34*t85 - 6.*t50*t51*t85 - 6.*t14*t17*t19*t86 + 6.*t50*t51*t87;
  p_output1[32]=-6.*t14*t17*t19*t81 + 6.*t17*t5*t81 - 30.*t14*t20*t5*t53*t81 + 30.*t14*t19*t20*t82 - 30.*t20*t22*t24*t82 - 60.*t19*t23*t24*t53*t82 + 60.*t22*t23*t24*t83 - 60.*t23*t26*t28*t83 - 60.*t22*t27*t28*t53*t83 + 60.*t26*t27*t28*t84 - 60.*t27*t30*t31*t84 - 30.*t16*t26*t31*t53*t84 + 30.*t16*t30*t31*t85 - 30.*t16*t33*t34*t85 - 6.*t30*t34*t53*t85 - 6.*t17*t53*t86 + 6.*t33*t34*t87 - 6.*t50*t51*t87;
  p_output1[33]=t74;
  p_output1[34]=t75;
  p_output1[35]=t76;
  p_output1[36]=t77;
  p_output1[37]=t78;
  p_output1[38]=t79;
  p_output1[39]=t80;
  p_output1[40]=t120;
  p_output1[41]=-1.;
  p_output1[42]=2.2935*t101*t14*t19*t20 - 2.2935*t102*t14*t19*t20 + 4.587*t102*t22*t23*t24 - 4.587*t103*t22*t23*t24 + 4.587*t103*t26*t27*t28 - 4.587*t104*t26*t27*t28 + 2.2935*t104*t16*t30*t31 - 2.2935*t105*t16*t30*t31 + 0.4587*t105*t33*t34 - 0.4587*t107*t33*t34 - 0.4587*t101*t17*t5 + 0.4587*t106*t17*t5;
  p_output1[43]=-1.;
  p_output1[44]=t120;
  p_output1[45]=14.9535*t101*t14*t19*t20 - 14.9535*t102*t14*t19*t20 + 29.907*t102*t22*t23*t24 - 29.907*t103*t22*t23*t24 + 29.907*t103*t26*t27*t28 - 29.907*t104*t26*t27*t28 + 14.9535*t104*t16*t30*t31 - 14.9535*t105*t16*t30*t31 + 2.9907*t105*t33*t34 - 2.9907*t107*t33*t34 - 2.9907*t101*t17*t5 + 2.9907*t106*t17*t5;
  p_output1[46]=6.*t101*t14*t17*t19 - 6.*t106*t14*t17*t19 - 30.*t101*t20*t22*t24 + 30.*t102*t20*t22*t24 - 60.*t102*t23*t26*t28 + 60.*t103*t23*t26*t28 - 60.*t103*t27*t30*t31 + 60.*t104*t27*t30*t31 - 30.*t104*t16*t33*t34 + 30.*t105*t16*t33*t34 - 6.*t105*t50*t51 + 6.*t107*t50*t51;
  p_output1[47]=-6.*t101*t14*t17*t19 + 30.*t102*t14*t19*t20 - 30.*t102*t20*t22*t24 + 60.*t103*t22*t23*t24 - 60.*t103*t23*t26*t28 + 60.*t104*t26*t27*t28 + 30.*t105*t16*t30*t31 - 60.*t104*t27*t30*t31 + 6.*t107*t33*t34 - 30.*t105*t16*t33*t34 + 6.*t101*t17*t5 - 6.*t107*t50*t51 - 6.*t106*t17*t53 - 60.*t102*t19*t23*t24*t53 - 60.*t103*t22*t27*t28*t53 - 30.*t104*t16*t26*t31*t53 - 6.*t105*t30*t34*t53 - 30.*t101*t14*t20*t5*t53;
  p_output1[48]=t74;
  p_output1[49]=t75;
  p_output1[50]=t76;
  p_output1[51]=t77;
  p_output1[52]=t78;
  p_output1[53]=t79;
  p_output1[54]=t80;
  p_output1[55]=t140;
  p_output1[56]=2.2935*t121*t14*t19*t20 - 2.2935*t122*t14*t19*t20 + 4.587*t122*t22*t23*t24 - 4.587*t123*t22*t23*t24 + 4.587*t123*t26*t27*t28 - 4.587*t124*t26*t27*t28 + 2.2935*t124*t16*t30*t31 - 2.2935*t125*t16*t30*t31 + 0.4587*t125*t33*t34 - 0.4587*t127*t33*t34 - 0.4587*t121*t17*t5 + 0.4587*t126*t17*t5;
  p_output1[57]=t140;
  p_output1[58]=1.;
  p_output1[59]=14.9535*t121*t14*t19*t20 - 14.9535*t122*t14*t19*t20 + 29.907*t122*t22*t23*t24 - 29.907*t123*t22*t23*t24 + 29.907*t123*t26*t27*t28 - 29.907*t124*t26*t27*t28 + 14.9535*t124*t16*t30*t31 - 14.9535*t125*t16*t30*t31 + 2.9907*t125*t33*t34 - 2.9907*t127*t33*t34 - 2.9907*t121*t17*t5 + 2.9907*t126*t17*t5;
  p_output1[60]=6.*t121*t14*t17*t19 - 6.*t126*t14*t17*t19 - 30.*t121*t20*t22*t24 + 30.*t122*t20*t22*t24 - 60.*t122*t23*t26*t28 + 60.*t123*t23*t26*t28 - 60.*t123*t27*t30*t31 + 60.*t124*t27*t30*t31 - 30.*t124*t16*t33*t34 + 30.*t125*t16*t33*t34 - 6.*t125*t50*t51 + 6.*t127*t50*t51;
  p_output1[61]=-6.*t121*t14*t17*t19 + 30.*t122*t14*t19*t20 - 30.*t122*t20*t22*t24 + 60.*t123*t22*t23*t24 - 60.*t123*t23*t26*t28 + 60.*t124*t26*t27*t28 + 30.*t125*t16*t30*t31 - 60.*t124*t27*t30*t31 + 6.*t127*t33*t34 - 30.*t125*t16*t33*t34 + 6.*t121*t17*t5 - 6.*t127*t50*t51 - 6.*t126*t17*t53 - 60.*t122*t19*t23*t24*t53 - 60.*t123*t22*t27*t28*t53 - 30.*t124*t16*t26*t31*t53 - 6.*t125*t30*t34*t53 - 30.*t121*t14*t20*t5*t53;
  p_output1[62]=t74;
  p_output1[63]=t75;
  p_output1[64]=t76;
  p_output1[65]=t77;
  p_output1[66]=t78;
  p_output1[67]=t79;
  p_output1[68]=t80;
  p_output1[69]=t160;
  p_output1[70]=1.;
  p_output1[71]=2.2935*t14*t141*t19*t20 - 2.2935*t14*t142*t19*t20 + 4.587*t142*t22*t23*t24 - 4.587*t143*t22*t23*t24 + 4.587*t143*t26*t27*t28 - 4.587*t144*t26*t27*t28 + 2.2935*t144*t16*t30*t31 - 2.2935*t145*t16*t30*t31 + 0.4587*t145*t33*t34 - 0.4587*t147*t33*t34 - 0.4587*t141*t17*t5 + 0.4587*t146*t17*t5;
  p_output1[72]=t160;
  p_output1[73]=14.9535*t14*t141*t19*t20 - 14.9535*t14*t142*t19*t20 + 29.907*t142*t22*t23*t24 - 29.907*t143*t22*t23*t24 + 29.907*t143*t26*t27*t28 - 29.907*t144*t26*t27*t28 + 14.9535*t144*t16*t30*t31 - 14.9535*t145*t16*t30*t31 + 2.9907*t145*t33*t34 - 2.9907*t147*t33*t34 - 2.9907*t141*t17*t5 + 2.9907*t146*t17*t5;
  p_output1[74]=6.*t14*t141*t17*t19 - 6.*t14*t146*t17*t19 - 30.*t141*t20*t22*t24 + 30.*t142*t20*t22*t24 - 60.*t142*t23*t26*t28 + 60.*t143*t23*t26*t28 - 60.*t143*t27*t30*t31 + 60.*t144*t27*t30*t31 - 30.*t144*t16*t33*t34 + 30.*t145*t16*t33*t34 - 6.*t145*t50*t51 + 6.*t147*t50*t51;
  p_output1[75]=-6.*t14*t141*t17*t19 + 30.*t14*t142*t19*t20 - 30.*t142*t20*t22*t24 + 60.*t143*t22*t23*t24 - 60.*t143*t23*t26*t28 + 60.*t144*t26*t27*t28 + 30.*t145*t16*t30*t31 - 60.*t144*t27*t30*t31 + 6.*t147*t33*t34 - 30.*t145*t16*t33*t34 + 6.*t141*t17*t5 - 6.*t147*t50*t51 - 6.*t146*t17*t53 - 60.*t142*t19*t23*t24*t53 - 60.*t143*t22*t27*t28*t53 - 30.*t144*t16*t26*t31*t53 - 6.*t145*t30*t34*t53 - 30.*t14*t141*t20*t5*t53;
  p_output1[76]=t74;
  p_output1[77]=t75;
  p_output1[78]=t76;
  p_output1[79]=t77;
  p_output1[80]=t78;
  p_output1[81]=t79;
  p_output1[82]=t80;
  p_output1[83]=1.00394560743416 + t168 + t169 + t170 + t171 + t172 + t173 + t174 + t175 + t176 + t177 + t178 + t179;
  p_output1[84]=1.00394560743416;
  p_output1[85]=0.530150753768844;
  p_output1[86]=2.2935*t14*t161*t19*t20 - 2.2935*t14*t162*t19*t20 + 4.587*t162*t22*t23*t24 - 4.587*t163*t22*t23*t24 + 4.587*t163*t26*t27*t28 - 4.587*t164*t26*t27*t28 + 2.2935*t16*t164*t30*t31 - 2.2935*t16*t165*t30*t31 + 0.4587*t165*t33*t34 - 0.4587*t167*t33*t34 - 0.4587*t161*t17*t5 + 0.4587*t166*t17*t5;
  p_output1[87]=t168 + t169 + t170 + t171 + t172 + t173 + t174 + t175 + t176 + t177 + t178 + t179;
  p_output1[88]=14.9535*t14*t161*t19*t20 - 14.9535*t14*t162*t19*t20 + 29.907*t162*t22*t23*t24 - 29.907*t163*t22*t23*t24 + 29.907*t163*t26*t27*t28 - 29.907*t164*t26*t27*t28 + 14.9535*t16*t164*t30*t31 - 14.9535*t16*t165*t30*t31 + 2.9907*t165*t33*t34 - 2.9907*t167*t33*t34 - 2.9907*t161*t17*t5 + 2.9907*t166*t17*t5;
  p_output1[89]=6.*t14*t161*t17*t19 - 6.*t14*t166*t17*t19 - 30.*t161*t20*t22*t24 + 30.*t162*t20*t22*t24 - 60.*t162*t23*t26*t28 + 60.*t163*t23*t26*t28 - 60.*t163*t27*t30*t31 + 60.*t164*t27*t30*t31 - 30.*t16*t164*t33*t34 + 30.*t16*t165*t33*t34 - 6.*t165*t50*t51 + 6.*t167*t50*t51;
  p_output1[90]=-6.*t14*t161*t17*t19 + 30.*t14*t162*t19*t20 - 30.*t162*t20*t22*t24 + 60.*t163*t22*t23*t24 - 60.*t163*t23*t26*t28 + 60.*t164*t26*t27*t28 + 30.*t16*t165*t30*t31 - 60.*t164*t27*t30*t31 - 30.*t16*t165*t33*t34 + 6.*t167*t33*t34 + 6.*t161*t17*t5 - 6.*t167*t50*t51 - 6.*t166*t17*t53 - 60.*t162*t19*t23*t24*t53 - 60.*t163*t22*t27*t28*t53 - 30.*t16*t164*t26*t31*t53 - 6.*t165*t30*t34*t53 - 30.*t14*t161*t20*t5*t53;
  p_output1[91]=t74;
  p_output1[92]=t75;
  p_output1[93]=t76;
  p_output1[94]=t77;
  p_output1[95]=t78;
  p_output1[96]=t79;
  p_output1[97]=t80;
  p_output1[98]=t199;
  p_output1[99]=1.;
  p_output1[100]=2.2935*t14*t180*t19*t20 - 2.2935*t14*t181*t19*t20 + 4.587*t181*t22*t23*t24 - 4.587*t182*t22*t23*t24 + 4.587*t182*t26*t27*t28 - 4.587*t183*t26*t27*t28 + 2.2935*t16*t183*t30*t31 - 2.2935*t16*t184*t30*t31 + 0.4587*t184*t33*t34 - 0.4587*t186*t33*t34 - 0.4587*t17*t180*t5 + 0.4587*t17*t185*t5;
  p_output1[101]=t199;
  p_output1[102]=14.9535*t14*t180*t19*t20 - 14.9535*t14*t181*t19*t20 + 29.907*t181*t22*t23*t24 - 29.907*t182*t22*t23*t24 + 29.907*t182*t26*t27*t28 - 29.907*t183*t26*t27*t28 + 14.9535*t16*t183*t30*t31 - 14.9535*t16*t184*t30*t31 + 2.9907*t184*t33*t34 - 2.9907*t186*t33*t34 - 2.9907*t17*t180*t5 + 2.9907*t17*t185*t5;
  p_output1[103]=6.*t14*t17*t180*t19 - 6.*t14*t17*t185*t19 - 30.*t180*t20*t22*t24 + 30.*t181*t20*t22*t24 - 60.*t181*t23*t26*t28 + 60.*t182*t23*t26*t28 - 60.*t182*t27*t30*t31 + 60.*t183*t27*t30*t31 - 30.*t16*t183*t33*t34 + 30.*t16*t184*t33*t34 - 6.*t184*t50*t51 + 6.*t186*t50*t51;
  p_output1[104]=-6.*t14*t17*t180*t19 + 30.*t14*t181*t19*t20 - 30.*t181*t20*t22*t24 + 60.*t182*t22*t23*t24 - 60.*t182*t23*t26*t28 + 60.*t183*t26*t27*t28 + 30.*t16*t184*t30*t31 - 60.*t183*t27*t30*t31 - 30.*t16*t184*t33*t34 + 6.*t186*t33*t34 + 6.*t17*t180*t5 - 6.*t186*t50*t51 - 6.*t17*t185*t53 - 60.*t181*t19*t23*t24*t53 - 60.*t182*t22*t27*t28*t53 - 30.*t16*t183*t26*t31*t53 - 6.*t184*t30*t34*t53 - 30.*t14*t180*t20*t5*t53;
  p_output1[105]=t74;
  p_output1[106]=t75;
  p_output1[107]=t76;
  p_output1[108]=t77;
  p_output1[109]=t78;
  p_output1[110]=t79;
  p_output1[111]=t80;
  p_output1[112]=t219;
  p_output1[113]=-1.;
  p_output1[114]=2.2935*t14*t19*t20*t200 - 2.2935*t14*t19*t20*t201 + 4.587*t201*t22*t23*t24 - 4.587*t202*t22*t23*t24 + 4.587*t202*t26*t27*t28 - 4.587*t203*t26*t27*t28 + 2.2935*t16*t203*t30*t31 - 2.2935*t16*t204*t30*t31 + 0.4587*t204*t33*t34 - 0.4587*t206*t33*t34 - 0.4587*t17*t200*t5 + 0.4587*t17*t205*t5;
  p_output1[115]=1.;
  p_output1[116]=t219;
  p_output1[117]=14.9535*t14*t19*t20*t200 - 14.9535*t14*t19*t20*t201 + 29.907*t201*t22*t23*t24 - 29.907*t202*t22*t23*t24 + 29.907*t202*t26*t27*t28 - 29.907*t203*t26*t27*t28 + 14.9535*t16*t203*t30*t31 - 14.9535*t16*t204*t30*t31 + 2.9907*t204*t33*t34 - 2.9907*t206*t33*t34 - 2.9907*t17*t200*t5 + 2.9907*t17*t205*t5;
  p_output1[118]=6.*t14*t17*t19*t200 - 6.*t14*t17*t19*t205 - 30.*t20*t200*t22*t24 + 30.*t20*t201*t22*t24 - 60.*t201*t23*t26*t28 + 60.*t202*t23*t26*t28 - 60.*t202*t27*t30*t31 + 60.*t203*t27*t30*t31 - 30.*t16*t203*t33*t34 + 30.*t16*t204*t33*t34 - 6.*t204*t50*t51 + 6.*t206*t50*t51;
  p_output1[119]=-6.*t14*t17*t19*t200 + 30.*t14*t19*t20*t201 - 30.*t20*t201*t22*t24 + 60.*t202*t22*t23*t24 - 60.*t202*t23*t26*t28 + 60.*t203*t26*t27*t28 + 30.*t16*t204*t30*t31 - 60.*t203*t27*t30*t31 - 30.*t16*t204*t33*t34 + 6.*t206*t33*t34 + 6.*t17*t200*t5 - 6.*t206*t50*t51 - 6.*t17*t205*t53 - 60.*t19*t201*t23*t24*t53 - 60.*t202*t22*t27*t28*t53 - 30.*t16*t203*t26*t31*t53 - 6.*t204*t30*t34*t53 - 30.*t14*t20*t200*t5*t53;
  p_output1[120]=t74;
  p_output1[121]=t75;
  p_output1[122]=t76;
  p_output1[123]=t77;
  p_output1[124]=t78;
  p_output1[125]=t79;
  p_output1[126]=t80;
  p_output1[127]=-0.15240000000000004*((-1.*t222*t240*t241 + t239*t244)*t263 + t264*(t265*t411 + t275*t414));
  p_output1[128]=-0.15240000000000004*(t263*(-1.*t225*t227*t241 + t239*t268) + t264*(t265*(-1.*t259*t278 + t255*t281) + t275*(t255*t278 + t259*t281))) + t346 + t347 + t348 + t349 + t350 + t351 + t352 + t353 + t354 + t355 + t356 + t357;
  p_output1[129]=-0.15240000000000004*(t239*t263*t295 + t264*(t265*(-1.*t259*t301 + t255*t304) + t275*(t255*t301 + t259*t304)));
  p_output1[130]=-0.15240000000000004*(-1.*t264*(t225*t240*t241 + t239*t309) + t263*(t265*t324 + t275*t327));
  p_output1[131]=-0.15240000000000004*t264*(-1.*t265*t327 + t342);
  p_output1[132]=-0.15240000000000004*(t263*t315 + t264*(t265*(-1.*t250*t255*t330 - 1.*t246*t259*t330) + t275*(t246*t255*t330 - 1.*t250*t259*t330)));
  p_output1[133]=-0.15240000000000004*t264*(t275*(t323 + t259*t333) + t265*(t255*t333 + t343));
  p_output1[134]=-0.15240000000000004*(t239*t263*t335 + t264*(t265*(-1.*t259*t338 + t255*t341) + t275*(t255*t338 + t259*t341)));
  p_output1[135]=-0.15240000000000004*t264*(t342 + t265*(-1.*t255*t318 + t343));
  p_output1[136]=2.2935*t14*t19*t20*t282 - 2.2935*t14*t19*t20*t283 + 4.587*t22*t23*t24*t283 - 4.587*t22*t23*t24*t284 + 4.587*t26*t27*t28*t284 - 4.587*t26*t27*t28*t285 + 2.2935*t16*t285*t30*t31 - 2.2935*t16*t286*t30*t31 + 0.4587*t286*t33*t34 - 0.4587*t33*t34*t345 - 0.4587*t17*t282*t5 + 0.4587*t17*t344*t5;
  p_output1[137]=t346 + t347 + t348 + t349 + t350 + t351 + t352 + t353 + t354 + t355 + t356 + t357;
  p_output1[138]=14.9535*t14*t19*t20*t282 - 14.9535*t14*t19*t20*t283 + 29.907*t22*t23*t24*t283 - 29.907*t22*t23*t24*t284 + 29.907*t26*t27*t28*t284 - 29.907*t26*t27*t28*t285 + 14.9535*t16*t285*t30*t31 - 14.9535*t16*t286*t30*t31 + 2.9907*t286*t33*t34 - 2.9907*t33*t34*t345 - 2.9907*t17*t282*t5 + 2.9907*t17*t344*t5;
  p_output1[139]=6.*t14*t17*t19*t282 - 30.*t20*t22*t24*t282 + 30.*t20*t22*t24*t283 - 60.*t23*t26*t28*t283 + 60.*t23*t26*t28*t284 - 60.*t27*t284*t30*t31 + 60.*t27*t285*t30*t31 - 30.*t16*t285*t33*t34 + 30.*t16*t286*t33*t34 - 6.*t14*t17*t19*t344 - 6.*t286*t50*t51 + 6.*t345*t50*t51;
  p_output1[140]=-6.*t14*t17*t19*t282 + 30.*t14*t19*t20*t283 - 30.*t20*t22*t24*t283 + 60.*t22*t23*t24*t284 - 60.*t23*t26*t28*t284 + 60.*t26*t27*t28*t285 - 60.*t27*t285*t30*t31 + 30.*t16*t286*t30*t31 - 30.*t16*t286*t33*t34 + 6.*t33*t34*t345 + 6.*t17*t282*t5 - 6.*t345*t50*t51 - 60.*t19*t23*t24*t283*t53 - 60.*t22*t27*t28*t284*t53 - 30.*t16*t26*t285*t31*t53 - 6.*t286*t30*t34*t53 - 6.*t17*t344*t53 - 30.*t14*t20*t282*t5*t53;
  p_output1[141]=t74;
  p_output1[142]=t75;
  p_output1[143]=t76;
  p_output1[144]=t77;
  p_output1[145]=t78;
  p_output1[146]=t79;
  p_output1[147]=t80;
  p_output1[148]=-0.2548*(t275*(-1.*t259*t371 + t255*t374) - 1.*t265*(t255*t371 + t259*t374));
  p_output1[149]=-0.2548*(t275*(-1.*t259*t386 + t255*t389) - 1.*t265*(t255*t386 + t259*t389)) + t433 + t434 + t435 + t436 + t437 + t438 + t439 + t440 + t441 + t442 + t443 + t444;
  p_output1[150]=-0.2548*(t275*(-1.*t259*t405 + t255*t408) - 1.*t265*(t255*t405 + t259*t408));
  p_output1[151]=-0.2548*(-1.*t275*t414 + t429);
  p_output1[152]=-0.2548*(t275*(-1.*t250*t255*t417 - 1.*t246*t259*t417) - 1.*t265*(t246*t255*t417 - 1.*t250*t259*t417));
  p_output1[153]=-0.2548*(-1.*t265*(t410 + t259*t420) + t275*(t255*t420 + t430));
  p_output1[154]=-0.2548*(t275*(-1.*t259*t425 + t255*t428) - 1.*t265*(t255*t425 + t259*t428));
  p_output1[155]=-0.2548*(t429 + t275*(-1.*t255*t258 + t430));
  p_output1[156]=2.2935*t14*t19*t20*t390 - 2.2935*t14*t19*t20*t391 + 4.587*t22*t23*t24*t391 - 4.587*t22*t23*t24*t392 + 4.587*t26*t27*t28*t392 - 4.587*t26*t27*t28*t393 + 2.2935*t16*t30*t31*t393 - 2.2935*t16*t30*t31*t394 + 0.4587*t33*t34*t394 - 0.4587*t33*t34*t432 - 0.4587*t17*t390*t5 + 0.4587*t17*t431*t5;
  p_output1[157]=t433 + t434 + t435 + t436 + t437 + t438 + t439 + t440 + t441 + t442 + t443 + t444;
  p_output1[158]=14.9535*t14*t19*t20*t390 - 14.9535*t14*t19*t20*t391 + 29.907*t22*t23*t24*t391 - 29.907*t22*t23*t24*t392 + 29.907*t26*t27*t28*t392 - 29.907*t26*t27*t28*t393 + 14.9535*t16*t30*t31*t393 - 14.9535*t16*t30*t31*t394 + 2.9907*t33*t34*t394 - 2.9907*t33*t34*t432 - 2.9907*t17*t390*t5 + 2.9907*t17*t431*t5;
  p_output1[159]=6.*t14*t17*t19*t390 - 30.*t20*t22*t24*t390 + 30.*t20*t22*t24*t391 - 60.*t23*t26*t28*t391 + 60.*t23*t26*t28*t392 - 60.*t27*t30*t31*t392 + 60.*t27*t30*t31*t393 - 30.*t16*t33*t34*t393 + 30.*t16*t33*t34*t394 - 6.*t14*t17*t19*t431 - 6.*t394*t50*t51 + 6.*t432*t50*t51;
  p_output1[160]=-6.*t14*t17*t19*t390 + 30.*t14*t19*t20*t391 - 30.*t20*t22*t24*t391 + 60.*t22*t23*t24*t392 - 60.*t23*t26*t28*t392 + 60.*t26*t27*t28*t393 - 60.*t27*t30*t31*t393 + 30.*t16*t30*t31*t394 - 30.*t16*t33*t34*t394 + 6.*t33*t34*t432 + 6.*t17*t390*t5 - 6.*t432*t50*t51 - 60.*t19*t23*t24*t391*t53 - 60.*t22*t27*t28*t392*t53 - 30.*t16*t26*t31*t393*t53 - 6.*t30*t34*t394*t53 - 6.*t17*t431*t53 - 30.*t14*t20*t390*t5*t53;
  p_output1[161]=t74;
  p_output1[162]=t75;
  p_output1[163]=t76;
  p_output1[164]=t77;
  p_output1[165]=t78;
  p_output1[166]=t79;
  p_output1[167]=t80;
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
    ( !(mrows == 100 && ncols == 1) && 
      !(mrows == 1 && ncols == 100))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 168, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "J_y2Pos_RightTL3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void J_y2Pos_RightTL3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE
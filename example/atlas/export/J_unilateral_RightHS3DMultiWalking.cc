/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 14:01:08 GMT-05:00
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
  t1 = var[3];
  t2 = Sin(t1);
  t3 = var[4];
  t4 = var[5];
  t5 = var[19];
  t6 = Cos(t1);
  t7 = Cos(t4);
  t8 = Sin(t3);
  t9 = Sin(t4);
  t10 = var[17];
  t11 = Sin(t5);
  t12 = t7*t2*t8;
  t13 = t6*t9;
  t14 = t12 + t13;
  t15 = Cos(t5);
  t16 = t6*t7;
  t17 = -1.*t2*t8*t9;
  t18 = t16 + t17;
  t19 = var[18];
  t20 = var[15];
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
  t36 = var[20];
  t37 = Sin(t36);
  t38 = t28*t32;
  t39 = t27*t35;
  t40 = t38 + t39;
  t41 = Cos(t36);
  t42 = t27*t32;
  t43 = -1.*t28*t35;
  t44 = t42 + t43;
  t45 = var[16];
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
  t72 = -0.089*t48;
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
  t98 = 0.089*t49;
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
  t195 = -0.089*t11*t117;
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
  t218 = var[13];
  t219 = var[11];
  t220 = Sin(t218);
  t221 = Cos(t218);
  t222 = var[12];
  t223 = var[9];
  t224 = Sin(t219);
  t225 = Cos(t219);
  t226 = -1.*t220*t14;
  t227 = t221*t18;
  t228 = t226 + t227;
  t229 = Cos(t222);
  t230 = Sin(t222);
  t231 = 0.05*t230;
  t232 = t221*t14;
  t233 = t220*t18;
  t234 = t232 + t233;
  t235 = -1.*t225*t21*t2;
  t236 = -1.*t224*t228;
  t237 = t235 + t236;
  t238 = var[14];
  t239 = Sin(t238);
  t240 = t230*t234;
  t241 = t229*t237;
  t242 = t240 + t241;
  t243 = Cos(t238);
  t244 = t229*t234;
  t245 = -1.*t230*t237;
  t246 = t244 + t245;
  t247 = var[10];
  t248 = Cos(t223);
  t249 = -1.*t248;
  t250 = 1. + t249;
  t251 = Sin(t223);
  t252 = Sin(t247);
  t253 = -1.*t239*t242;
  t254 = t243*t246;
  t255 = t253 + t254;
  t256 = Cos(t247);
  t257 = t243*t242;
  t258 = t239*t246;
  t259 = t257 + t258;
  t260 = -1.*t21*t224*t2;
  t261 = t225*t228;
  t262 = t260 + t261;
  t263 = t252*t255;
  t264 = t256*t259;
  t265 = t263 + t264;
  t266 = -1.*t221;
  t267 = 1. + t266;
  t268 = -1.*t225;
  t269 = 1. + t268;
  t270 = -1.*t229;
  t271 = 1. + t270;
  t272 = 0.05*t271;
  t273 = t272 + t231;
  t274 = 0.089*t250;
  t275 = -0.846*t251;
  t276 = t274 + t275;
  t277 = t6*t21*t7*t220;
  t278 = t221*t6*t21*t9;
  t279 = t277 + t278;
  t280 = -1. + t229;
  t281 = 0.05*t280;
  t282 = t281 + t231;
  t283 = -1.*t243;
  t284 = 1. + t283;
  t285 = -1.*t221*t6*t21*t7;
  t286 = t6*t21*t220*t9;
  t287 = t285 + t286;
  t288 = -1.*t225*t6*t8;
  t289 = -1.*t224*t279;
  t290 = t288 + t289;
  t291 = t230*t287;
  t292 = t229*t290;
  t293 = t291 + t292;
  t294 = t229*t287;
  t295 = -1.*t230*t290;
  t296 = t294 + t295;
  t297 = -1.*t256;
  t298 = 1. + t297;
  t299 = -0.846*t250;
  t300 = -0.089*t251;
  t301 = t299 + t300;
  t302 = -1.*t239*t293;
  t303 = t243*t296;
  t304 = t302 + t303;
  t305 = t243*t293;
  t306 = t239*t296;
  t307 = t305 + t306;
  t308 = -1.*t6*t224*t8;
  t309 = t225*t279;
  t310 = t308 + t309;
  t311 = t252*t304;
  t312 = t256*t307;
  t313 = t311 + t312;
  t314 = t221*t114;
  t315 = -1.*t220*t117;
  t316 = t314 + t315;
  t317 = t220*t114;
  t318 = t221*t117;
  t319 = t317 + t318;
  t320 = t230*t319;
  t321 = -1.*t229*t224*t316;
  t322 = t320 + t321;
  t323 = t229*t319;
  t324 = t224*t230*t316;
  t325 = t323 + t324;
  t326 = -1.*t239*t322;
  t327 = t243*t325;
  t328 = t326 + t327;
  t329 = t243*t322;
  t330 = t239*t325;
  t331 = t329 + t330;
  t332 = t252*t328;
  t333 = t256*t331;
  t334 = t332 + t333;
  t335 = -1.*t220*t141;
  t336 = t335 + t318;
  t337 = t221*t141;
  t338 = t220*t117;
  t339 = t337 + t338;
  t340 = t225*t6*t21;
  t341 = -1.*t224*t336;
  t342 = t340 + t341;
  t343 = t230*t339;
  t344 = t229*t342;
  t345 = t343 + t344;
  t346 = t229*t339;
  t347 = -1.*t230*t342;
  t348 = t346 + t347;
  t349 = t6*t21*t224;
  t350 = t225*t336;
  t351 = t349 + t350;
  t352 = -1.*t239*t345;
  t353 = t243*t348;
  t354 = t352 + t353;
  t355 = t252*t354;
  t356 = t243*t345;
  t357 = t239*t348;
  t358 = t356 + t357;
  t359 = t256*t358;
  t360 = t355 + t359;
  t361 = t256*t354;
  t362 = -1.*t252*t358;
  t363 = t361 + t362;
  t364 = -1.*t6*t21*t224;
  t365 = -1.*t225*t336;
  t366 = t364 + t365;
  t367 = -1.*t243*t230*t366;
  t368 = -1.*t229*t239*t366;
  t369 = t367 + t368;
  t370 = t229*t243*t366;
  t371 = -1.*t230*t239*t366;
  t372 = t370 + t371;
  t373 = t252*t369;
  t374 = t256*t372;
  t375 = t373 + t374;
  t376 = 0.05*t229;
  t377 = -1.*t230*t339;
  t378 = -1.*t229*t342;
  t379 = t377 + t378;
  t380 = t239*t379;
  t381 = t380 + t353;
  t382 = t243*t379;
  t383 = -1.*t239*t348;
  t384 = t382 + t383;
  t385 = t256*t381;
  t386 = t252*t384;
  t387 = t385 + t386;
  t388 = 0.089*t220*t117;
  t389 = -1.*t221*t141;
  t390 = t389 + t315;
  t391 = t230*t336;
  t392 = -1.*t229*t224*t390;
  t393 = t391 + t392;
  t394 = t229*t336;
  t395 = t224*t230*t390;
  t396 = t394 + t395;
  t397 = -1.*t239*t393;
  t398 = t243*t396;
  t399 = t397 + t398;
  t400 = t243*t393;
  t401 = t239*t396;
  t402 = t400 + t401;
  t403 = t252*t399;
  t404 = t256*t402;
  t405 = t403 + t404;
  t406 = -1.*t252*t354;
  t407 = -1.*t243*t345;
  t408 = t407 + t383;
  t409 = t252*t408;
  t410 = t361 + t409;
  p_output1[0]=1.;
  p_output1[1]=-0.089*t11*t14 - 0.089*t2*t21*t22 + 0.424*t37*t44 + 0.846*t50*t53 - 0.082*(t53*t54 - 1.*t50*t57) - 0.92245*(-1.*t49*t60 + t46*t63) - 0.089*(t46*t60 + t49*t63) - 0.089*t18*t65 - 0.089*t26*t67 + t32*t71 + t60*t74 + t35*t80 - 0.424*t40*t82 - 0.846*t57*t96 + t63*t99;
  p_output1[2]=-0.92245*(t111*t46 - 1.*t108*t49) - 0.089*(t108*t46 + t111*t49) + 0.846*t102*t50 - 0.082*(-1.*t105*t50 + t102*t54) + 0.089*t11*t21*t6*t7 + t108*t74 - 0.089*t67*t77 - 0.089*t22*t6*t8 + t71*t85 + t80*t88 - 0.089*t21*t6*t65*t9 - 0.424*t82*t91 + 0.424*t37*t94 - 0.846*t105*t96 + t111*t99;
  p_output1[3]=t195 + 0.424*t129*t37 - 0.089*(t120*t23*t46 + t138*t49) - 0.92245*(t138*t46 - 1.*t120*t23*t49) + 0.846*t132*t50 - 0.082*(-1.*t135*t50 + t132*t54) - 0.089*t114*t65 - 0.089*t120*t67 + t123*t71 + t120*t23*t74 - 1.*t120*t22*t80 - 0.424*t126*t82 - 0.846*t135*t96 + t138*t99;
  p_output1[4]=t158*(-0.846*t46 - 0.089*t49) - 0.089*(t167*t46 - 1.*t158*t49) - 0.92245*(-1.*t158*t46 - 1.*t167*t49) + t167*(0.089*t46 + t73);
  p_output1[5]=-0.92245*t170*t46 - 0.089*t170*t49 - 0.846*t165*t50 + 0.846*t161*t54 - 0.082*(t213 - 1.*t165*t54) + t170*t99;
  p_output1[6]=-0.089*t143*t22 - 0.424*t173*t28*t37 - 0.92245*(t182*t46 - 1.*t149*t49) - 0.089*(t149*t46 + t182*t49) + 0.846*t176*t50 - 0.082*(-1.*t179*t50 + t176*t54) + 0.089*t21*t23*t6 + t149*t74 + t173*t80 - 0.424*t173*t27*t82 - 0.846*t179*t96 + t182*t99;
  p_output1[7]=t149*(t183 - 0.05*t28) + t146*(t183 + t29) + 0.424*t186*t37 - 0.92245*t194*t46 - 0.089*t194*t49 + 0.846*t191*t50 - 0.082*(-1.*t188*t50 + t191*t54) - 0.424*t155*t82 - 0.846*t188*t96 + t194*t99;
  p_output1[8]=-0.089*t141*t15 + t195 + 0.424*t203*t37 - 0.089*(t197*t23*t46 + t212*t49) - 0.92245*(t212*t46 - 1.*t197*t23*t49) + 0.846*t206*t50 - 0.082*(-1.*t209*t50 + t206*t54) - 0.089*t197*t67 + t143*t71 + t197*t23*t74 - 1.*t197*t22*t80 - 0.424*t200*t82 - 0.846*t209*t96 + t212*t99;
  p_output1[9]=-0.424*t152*t37 + 0.424*t155*t41 - 0.92245*t217*t46 - 0.089*t217*t49 + 0.846*t215*t50 - 0.082*(t213 + t215*t54) - 0.846*t161*t96 + t217*t99;
  p_output1[10]=1.;
  p_output1[11]=0.089*t14*t220 + 0.089*t2*t21*t224 + 0.424*t239*t246 + 0.846*t252*t255 + 0.1728*(t255*t256 - 1.*t252*t259) - 0.92245*(-1.*t251*t262 + t248*t265) + 0.089*(t248*t262 + t251*t265) + 0.089*t18*t267 + 0.089*t228*t269 + t234*t273 + t262*t276 + t237*t282 - 0.424*t242*t284 - 0.846*t259*t298 + t265*t301;
  p_output1[12]=0.089*t269*t279 + t273*t287 + t282*t290 - 0.424*t284*t293 + 0.424*t239*t296 + 0.846*t252*t304 - 0.846*t298*t307 + 0.1728*(t256*t304 - 1.*t252*t307) + t276*t310 + t301*t313 - 0.92245*(-1.*t251*t310 + t248*t313) + 0.089*(t248*t310 + t251*t313) - 0.089*t21*t220*t6*t7 + 0.089*t224*t6*t8 + 0.089*t21*t267*t6*t9;
  p_output1[13]=0.089*t114*t267 + 0.089*t269*t316 + t225*t276*t316 - 1.*t224*t282*t316 + t273*t319 - 0.424*t284*t322 + 0.424*t239*t325 + 0.846*t252*t328 - 0.846*t298*t331 + 0.1728*(t256*t328 - 1.*t252*t331) + t301*t334 - 0.92245*(-1.*t225*t251*t316 + t248*t334) + 0.089*(t225*t248*t316 + t251*t334) + t388;
  p_output1[14]=(-0.846*t248 + 0.089*t251)*t351 + (-0.089*t248 + t275)*t360 + 0.089*(-1.*t251*t351 + t248*t360) - 0.92245*(-1.*t248*t351 - 1.*t251*t360);
  p_output1[15]=0.846*t256*t354 - 0.846*t252*t358 - 0.92245*t248*t363 + 0.089*t251*t363 + t301*t363 + 0.1728*(-1.*t256*t358 + t406);
  p_output1[16]=0.089*t224*t336 + t276*t342 - 0.424*t230*t239*t366 + t282*t366 - 0.424*t229*t284*t366 + 0.846*t252*t369 - 0.846*t298*t372 + 0.1728*(t256*t369 - 1.*t252*t372) + t301*t375 - 0.92245*(-1.*t251*t342 + t248*t375) + 0.089*(t248*t342 + t251*t375) - 0.089*t21*t225*t6;
  p_output1[17]=-0.424*t284*t348 + t342*(-0.05*t230 + t376) + t339*(t231 + t376) + 0.424*t239*t379 - 0.846*t298*t381 + 0.846*t252*t384 + 0.1728*(-1.*t252*t381 + t256*t384) - 0.92245*t248*t387 + 0.089*t251*t387 + t301*t387;
  p_output1[18]=0.089*t141*t221 + t273*t336 + t388 + 0.089*t269*t390 + t225*t276*t390 - 1.*t224*t282*t390 - 0.424*t284*t393 + 0.424*t239*t396 + 0.846*t252*t399 - 0.846*t298*t402 + 0.1728*(t256*t399 - 1.*t252*t402) + t301*t405 - 0.92245*(-1.*t225*t251*t390 + t248*t405) + 0.089*(t225*t248*t390 + t251*t405);
  p_output1[19]=-0.424*t239*t345 + 0.424*t243*t348 - 0.846*t298*t354 + 0.846*t252*t408 + 0.1728*(t406 + t256*t408) - 0.92245*t248*t410 + 0.089*t251*t410 + t301*t410;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "J_unilateral_RightHS3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void J_unilateral_RightHS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

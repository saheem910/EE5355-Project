/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:25:45 GMT-04:00
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
  t1 = q[4];
  t2 = Cos(t1);
  t3 = q[5];
  t4 = Cos(t3);
  t5 = Sin(t1);
  t6 = q[8];
  t7 = Sin(t6);
  t8 = Cos(t6);
  t9 = Sin(t3);
  t10 = q[0];
  t11 = q[13];
  t12 = Sin(t11);
  t13 = Cos(t11);
  t14 = 0.00313046*t5;
  t15 = q[19];
  t16 = Sin(t15);
  t17 = Cos(t15);
  t18 = 0.089*t2*t4*t12;
  t19 = -1.*t13;
  t20 = 1. + t19;
  t21 = -0.089*t20*t2*t9;
  t22 = q[11];
  t23 = -1.*t2*t4*t12;
  t24 = -1.*t13*t2*t9;
  t25 = t23 + t24;
  t26 = t13*t2*t4;
  t27 = -1.*t2*t12*t9;
  t28 = t26 + t27;
  t29 = Sin(t22);
  t30 = Cos(t22);
  t31 = -0.089*t2*t4*t16;
  t32 = -1.*t17;
  t33 = 1. + t32;
  t34 = 0.089*t33*t2*t9;
  t35 = q[17];
  t36 = -1.*t2*t4*t16;
  t37 = -1.*t17*t2*t9;
  t38 = t36 + t37;
  t39 = t17*t2*t4;
  t40 = -1.*t2*t16*t9;
  t41 = t39 + t40;
  t42 = Sin(t35);
  t43 = Cos(t35);
  t44 = -1. + t8;
  t45 = 0.0125*t44*t2*t4;
  t46 = q[7];
  t47 = -0.0125*t2*t7*t9;
  t48 = -1.*t2*t4*t7;
  t49 = -1.*t8*t2*t9;
  t50 = t48 + t49;
  t51 = Cos(t46);
  t52 = Sin(t46);
  t53 = t8*t2*t4;
  t54 = -1.*t2*t7*t9;
  t55 = t53 + t54;
  t56 = -0.089*t29*t5;
  t57 = -1.*t30;
  t58 = 1. + t57;
  t59 = 0.089*t58*t25;
  t60 = q[12];
  t61 = t29*t5;
  t62 = t30*t25;
  t63 = t61 + t62;
  t64 = Cos(t60);
  t65 = Sin(t60);
  t66 = 0.05*t65;
  t67 = t30*t5;
  t68 = -1.*t29*t25;
  t69 = t67 + t68;
  t70 = 0.089*t42*t5;
  t71 = -1.*t43;
  t72 = 1. + t71;
  t73 = -0.089*t72*t38;
  t74 = q[18];
  t75 = t42*t5;
  t76 = t43*t38;
  t77 = t75 + t76;
  t78 = Cos(t74);
  t79 = Sin(t74);
  t80 = 0.05*t79;
  t81 = t43*t5;
  t82 = -1.*t42*t38;
  t83 = t81 + t82;
  t84 = -1.*t51;
  t85 = 1. + t84;
  t86 = 0.16197*t85;
  t87 = -0.0125*t52;
  t88 = t86 + t87;
  t89 = t88*t5;
  t90 = -1. + t51;
  t91 = 0.0125*t90;
  t92 = -0.16197*t52;
  t93 = t91 + t92;
  t94 = t93*t55;
  t95 = -1.*t52*t5;
  t96 = t51*t55;
  t97 = t95 + t96;
  t98 = q[6];
  t99 = t51*t5;
  t100 = t52*t55;
  t101 = t99 + t100;
  t102 = Sin(t98);
  t103 = Cos(t98);
  t104 = -1.*t64;
  t105 = 1. + t104;
  t106 = 0.05*t105;
  t107 = t106 + t66;
  t108 = t107*t28;
  t109 = 0.089*t63;
  t110 = -1. + t64;
  t111 = 0.05*t110;
  t112 = t111 + t66;
  t113 = t112*t69;
  t114 = t65*t28;
  t115 = t64*t69;
  t116 = t114 + t115;
  t117 = q[14];
  t118 = t64*t28;
  t119 = -1.*t65*t69;
  t120 = t118 + t119;
  t121 = Sin(t117);
  t122 = Cos(t117);
  t123 = -1.*t78;
  t124 = 1. + t123;
  t125 = 0.05*t124;
  t126 = t125 + t80;
  t127 = t126*t41;
  t128 = -0.089*t77;
  t129 = -1. + t78;
  t130 = 0.05*t129;
  t131 = t130 + t80;
  t132 = t131*t83;
  t133 = t79*t41;
  t134 = t78*t83;
  t135 = t133 + t134;
  t136 = q[20];
  t137 = t78*t41;
  t138 = -1.*t79*t83;
  t139 = t137 + t138;
  t140 = Sin(t136);
  t141 = Cos(t136);
  t142 = -1.*t122;
  t143 = 1. + t142;
  t144 = -0.424*t143*t116;
  t145 = 0.424*t121*t120;
  t146 = -1.*t121*t116;
  t147 = t122*t120;
  t148 = t146 + t147;
  t149 = q[10];
  t150 = t122*t116;
  t151 = t121*t120;
  t152 = t150 + t151;
  t153 = Sin(t149);
  t154 = Cos(t149);
  t155 = -1.*t141;
  t156 = 1. + t155;
  t157 = -0.424*t156*t135;
  t158 = 0.424*t140*t139;
  t159 = -1.*t140*t135;
  t160 = t141*t139;
  t161 = t159 + t160;
  t162 = q[16];
  t163 = t141*t135;
  t164 = t140*t139;
  t165 = t163 + t164;
  t166 = Sin(t162);
  t167 = Cos(t162);
  t168 = q[9];
  t169 = 0.846*t153*t148;
  t170 = -1.*t154;
  t171 = 1. + t170;
  t172 = -0.846*t171*t152;
  t173 = Cos(t168);
  t174 = -1.*t173;
  t175 = 1. + t174;
  t176 = Sin(t168);
  t177 = t153*t148;
  t178 = t154*t152;
  t179 = t177 + t178;
  t180 = q[15];
  t181 = 0.846*t166*t161;
  t182 = -1.*t167;
  t183 = 1. + t182;
  t184 = -0.846*t183*t165;
  t185 = Cos(t180);
  t186 = -1.*t185;
  t187 = 1. + t186;
  t188 = Sin(t180);
  t189 = t166*t161;
  t190 = t167*t165;
  t191 = t189 + t190;
  t192 = q[3];
  t193 = Sin(t192);
  t194 = t4*t193*t5;
  t195 = Cos(t192);
  t196 = t195*t9;
  t197 = t194 + t196;
  t198 = t195*t4;
  t199 = -1.*t193*t5*t9;
  t200 = t198 + t199;
  t201 = q[1];
  t202 = -0.00313046*t2*t193;
  t203 = 0.089*t12*t197;
  t204 = 0.089*t20*t200;
  t205 = -1.*t12*t197;
  t206 = t13*t200;
  t207 = t205 + t206;
  t208 = t13*t197;
  t209 = t12*t200;
  t210 = t208 + t209;
  t211 = -0.089*t16*t197;
  t212 = -0.089*t33*t200;
  t213 = -1.*t16*t197;
  t214 = t17*t200;
  t215 = t213 + t214;
  t216 = t17*t197;
  t217 = t16*t200;
  t218 = t216 + t217;
  t219 = 0.0125*t44*t197;
  t220 = 0.0125*t7*t200;
  t221 = -1.*t7*t197;
  t222 = t8*t200;
  t223 = t221 + t222;
  t224 = t8*t197;
  t225 = t7*t200;
  t226 = t224 + t225;
  t227 = 0.089*t2*t29*t193;
  t228 = 0.089*t58*t207;
  t229 = -1.*t2*t29*t193;
  t230 = t30*t207;
  t231 = t229 + t230;
  t232 = -1.*t30*t2*t193;
  t233 = -1.*t29*t207;
  t234 = t232 + t233;
  t235 = -0.089*t2*t42*t193;
  t236 = -0.089*t72*t215;
  t237 = -1.*t2*t42*t193;
  t238 = t43*t215;
  t239 = t237 + t238;
  t240 = -1.*t43*t2*t193;
  t241 = -1.*t42*t215;
  t242 = t240 + t241;
  t243 = -1.*t2*t88*t193;
  t244 = t93*t226;
  t245 = t2*t52*t193;
  t246 = t51*t226;
  t247 = t245 + t246;
  t248 = -1.*t103;
  t249 = 1. + t248;
  t250 = -1.*t51*t2*t193;
  t251 = t52*t226;
  t252 = t250 + t251;
  t253 = t107*t210;
  t254 = 0.089*t231;
  t255 = t112*t234;
  t256 = t65*t210;
  t257 = t64*t234;
  t258 = t256 + t257;
  t259 = t64*t210;
  t260 = -1.*t65*t234;
  t261 = t259 + t260;
  t262 = t126*t218;
  t263 = -0.089*t239;
  t264 = t131*t242;
  t265 = t79*t218;
  t266 = t78*t242;
  t267 = t265 + t266;
  t268 = t78*t218;
  t269 = -1.*t79*t242;
  t270 = t268 + t269;
  t271 = -0.424*t143*t258;
  t272 = 0.424*t121*t261;
  t273 = -1.*t121*t258;
  t274 = t122*t261;
  t275 = t273 + t274;
  t276 = t122*t258;
  t277 = t121*t261;
  t278 = t276 + t277;
  t279 = -0.424*t156*t267;
  t280 = 0.424*t140*t270;
  t281 = -1.*t140*t267;
  t282 = t141*t270;
  t283 = t281 + t282;
  t284 = t141*t267;
  t285 = t140*t270;
  t286 = t284 + t285;
  t287 = 0.089*t175;
  t288 = -0.846*t176;
  t289 = t287 + t288;
  t290 = 0.846*t153*t275;
  t291 = -0.846*t171*t278;
  t292 = -0.846*t175;
  t293 = -0.089*t176;
  t294 = t292 + t293;
  t295 = t153*t275;
  t296 = t154*t278;
  t297 = t295 + t296;
  t298 = -0.089*t187;
  t299 = -0.846*t188;
  t300 = t298 + t299;
  t301 = 0.846*t166*t283;
  t302 = -0.846*t183*t286;
  t303 = -0.846*t187;
  t304 = 0.089*t188;
  t305 = t303 + t304;
  t306 = t166*t283;
  t307 = t167*t286;
  t308 = t306 + t307;
  t309 = -1.*t195*t4*t5;
  t310 = t193*t9;
  t311 = t309 + t310;
  t312 = t4*t193;
  t313 = t195*t5*t9;
  t314 = t312 + t313;
  t315 = q[2];
  t316 = 0.00313046*t195*t2;
  t317 = 0.089*t12*t311;
  t318 = 0.089*t20*t314;
  t319 = -1.*t12*t311;
  t320 = t13*t314;
  t321 = t319 + t320;
  t322 = t13*t311;
  t323 = t12*t314;
  t324 = t322 + t323;
  t325 = -0.089*t16*t311;
  t326 = -0.089*t33*t314;
  t327 = -1.*t16*t311;
  t328 = t17*t314;
  t329 = t327 + t328;
  t330 = t17*t311;
  t331 = t16*t314;
  t332 = t330 + t331;
  t333 = 0.0125*t44*t311;
  t334 = 0.0125*t7*t314;
  t335 = -1.*t7*t311;
  t336 = t8*t314;
  t337 = t335 + t336;
  t338 = t8*t311;
  t339 = t7*t314;
  t340 = t338 + t339;
  t341 = -0.089*t195*t2*t29;
  t342 = 0.089*t58*t321;
  t343 = t195*t2*t29;
  t344 = t30*t321;
  t345 = t343 + t344;
  t346 = t30*t195*t2;
  t347 = -1.*t29*t321;
  t348 = t346 + t347;
  t349 = 0.089*t195*t2*t42;
  t350 = -0.089*t72*t329;
  t351 = t195*t2*t42;
  t352 = t43*t329;
  t353 = t351 + t352;
  t354 = t43*t195*t2;
  t355 = -1.*t42*t329;
  t356 = t354 + t355;
  t357 = t195*t2*t88;
  t358 = t93*t340;
  t359 = -1.*t195*t2*t52;
  t360 = t51*t340;
  t361 = t359 + t360;
  t362 = t51*t195*t2;
  t363 = t52*t340;
  t364 = t362 + t363;
  t365 = t107*t324;
  t366 = 0.089*t345;
  t367 = t112*t348;
  t368 = t65*t324;
  t369 = t64*t348;
  t370 = t368 + t369;
  t371 = t64*t324;
  t372 = -1.*t65*t348;
  t373 = t371 + t372;
  t374 = t126*t332;
  t375 = -0.089*t353;
  t376 = t131*t356;
  t377 = t79*t332;
  t378 = t78*t356;
  t379 = t377 + t378;
  t380 = t78*t332;
  t381 = -1.*t79*t356;
  t382 = t380 + t381;
  t383 = -0.424*t143*t370;
  t384 = 0.424*t121*t373;
  t385 = -1.*t121*t370;
  t386 = t122*t373;
  t387 = t385 + t386;
  t388 = t122*t370;
  t389 = t121*t373;
  t390 = t388 + t389;
  t391 = -0.424*t156*t379;
  t392 = 0.424*t140*t382;
  t393 = -1.*t140*t379;
  t394 = t141*t382;
  t395 = t393 + t394;
  t396 = t141*t379;
  t397 = t140*t382;
  t398 = t396 + t397;
  t399 = 0.846*t153*t387;
  t400 = -0.846*t171*t390;
  t401 = t153*t387;
  t402 = t154*t390;
  t403 = t401 + t402;
  t404 = 0.846*t166*t395;
  t405 = -0.846*t183*t398;
  t406 = t166*t395;
  t407 = t167*t398;
  t408 = t406 + t407;
  p_output1[0]=0.00911286280585046*(0.648*(t10 + t14 + t18 + t21 + 0.08555268*t25 + 0.00529262*t28) + 0.648*(t10 + t14 + t31 + t34 - 0.08555268*t38 + 0.00529262*t41) + 17.882*(t10 + 0.0111*t2*t4 + 0.0271*t5) + 2.409*(t10 + t45 + t47 + 0.0746835*t5 - 3.15366e-6*t50 - 0.0237984*t55) + 9.209*(t10 + t108 + t109 + t113 - 0.26*t116 + 0.05*t120 + t18 + t21 + t56 + t59) + 5.479*(t10 + t108 + t109 + t113 + t144 + t145 + 0.001*t148 - 0.611*t152 + t18 + t21 + t56 + t59) + 0.125*(t10 + t108 + t109 + t113 + t144 + t145 + t169 + t172 - 0.846*t179 + t18 + t21 + t56 + t59) + 2.05*(t10 + t108 + t113 + t144 + t145 + 0.027*(-1.*t152*t153 + t148*t154) + t169 + t172 + t18 + t21 + t179*t294 + t56 + t59 + t289*t63 + 0.089*(t176*t179 + t173*t63) - 0.913*(t173*t179 - 1.*t176*t63)) + 0.866*(t10 + t18 + t21 + 0.0133341*t28 + t56 + t59 + 0.1060484*t63 - 0.0312052*t69) + 9.209*(t10 + t127 + t128 + t132 - 0.26*t135 + 0.05*t139 + t31 + t34 + t70 + t73) + 5.479*(t10 + t127 + t128 + t132 + t157 + t158 + 0.001*t161 - 0.611*t165 + t31 + t34 + t70 + t73) + 0.125*(t10 + t127 + t128 + t132 + t157 + t158 + t181 + t184 - 0.846*t191 + t31 + t34 + t70 + t73) + 2.05*(t10 + t127 + t132 + t157 + t158 + 0.027*(-1.*t165*t166 + t161*t167) + t181 + t184 + t191*t305 + t31 + t34 + t70 + t73 + t300*t77 - 0.089*(t188*t191 + t185*t77) - 0.913*(t185*t191 - 1.*t188*t77)) + 0.866*(t10 + t31 + t34 + 0.0133341*t41 + t70 + t73 - 0.1060484*t77 - 0.0312052*t83) + 52.*(t10 + 0.21197*t101*t249 + t45 + t47 + 0.21197*t102*t50 + 0.51197*(t101*t103 - 1.*t102*t50) + t89 + t94 - 0.1048*t97) + 0.69*(t10 + 0.1925674*t101 + t45 + t47 - 0.0131245*t50 + t89 + t94 - 0.02066266*t97));
  p_output1[1]=0.00911286280585046*(17.882*(0.0111*t197 - 0.0271*t193*t2 + t201) + 0.648*(t201 + t202 + t203 + t204 + 0.08555268*t207 + 0.00529262*t210) + 0.648*(t201 + t202 + t211 + t212 - 0.08555268*t215 + 0.00529262*t218) + 2.409*(-0.0746835*t193*t2 + t201 + t219 + t220 - 3.15366e-6*t223 - 0.0237984*t226) + 0.866*(t201 + t203 + t204 + 0.0133341*t210 + t227 + t228 + 0.1060484*t231 - 0.0312052*t234) + 0.866*(t201 + t211 + t212 + 0.0133341*t218 + t235 + t236 - 0.1060484*t239 - 0.0312052*t242) + 0.69*(t201 + t219 + t220 - 0.0131245*t223 + t243 + t244 - 0.02066266*t247 + 0.1925674*t252) + 52.*(t201 + t219 + t220 + 0.21197*t102*t223 + t243 + t244 - 0.1048*t247 + 0.21197*t249*t252 + 0.51197*(-1.*t102*t223 + t103*t252)) + 9.209*(t201 + t203 + t204 + t227 + t228 + t253 + t254 + t255 - 0.26*t258 + 0.05*t261) + 9.209*(t201 + t211 + t212 + t235 + t236 + t262 + t263 + t264 - 0.26*t267 + 0.05*t270) + 5.479*(t201 + t203 + t204 + t227 + t228 + t253 + t254 + t255 + t271 + t272 + 0.001*t275 - 0.611*t278) + 5.479*(t201 + t211 + t212 + t235 + t236 + t262 + t263 + t264 + t279 + t280 + 0.001*t283 - 0.611*t286) + 0.125*(t201 + t203 + t204 + t227 + t228 + t253 + t254 + t255 + t271 + t272 + t290 + t291 - 0.846*t297) + 2.05*(t201 + t203 + t204 + t227 + t228 + t253 + t255 + t271 + t272 + 0.027*(t154*t275 - 1.*t153*t278) + t231*t289 + t290 + t291 + t294*t297 - 0.913*(-1.*t176*t231 + t173*t297) + 0.089*(t173*t231 + t176*t297)) + 0.125*(t201 + t211 + t212 + t235 + t236 + t262 + t263 + t264 + t279 + t280 + t301 + t302 - 0.846*t308) + 2.05*(t201 + t211 + t212 + t235 + t236 + t262 + t264 + t279 + t280 + 0.027*(t167*t283 - 1.*t166*t286) + t239*t300 + t301 + t302 + t305*t308 - 0.913*(-1.*t188*t239 + t185*t308) - 0.089*(t185*t239 + t188*t308)));
  p_output1[2]=0.00911286280585046*(17.882*(0.0271*t195*t2 + 0.0111*t311 + t315) + 0.648*(t315 + t316 + t317 + t318 + 0.08555268*t321 + 0.00529262*t324) + 0.648*(t315 + t316 + t325 + t326 - 0.08555268*t329 + 0.00529262*t332) + 2.409*(0.0746835*t195*t2 + t315 + t333 + t334 - 3.15366e-6*t337 - 0.0237984*t340) + 0.866*(t315 + t317 + t318 + 0.0133341*t324 + t341 + t342 + 0.1060484*t345 - 0.0312052*t348) + 0.866*(t315 + t325 + t326 + 0.0133341*t332 + t349 + t350 - 0.1060484*t353 - 0.0312052*t356) + 0.69*(t315 + t333 + t334 - 0.0131245*t337 + t357 + t358 - 0.02066266*t361 + 0.1925674*t364) + 52.*(t315 + t333 + t334 + 0.21197*t102*t337 + t357 + t358 - 0.1048*t361 + 0.21197*t249*t364 + 0.51197*(-1.*t102*t337 + t103*t364)) + 9.209*(t315 + t317 + t318 + t341 + t342 + t365 + t366 + t367 - 0.26*t370 + 0.05*t373) + 9.209*(t315 + t325 + t326 + t349 + t350 + t374 + t375 + t376 - 0.26*t379 + 0.05*t382) + 5.479*(t315 + t317 + t318 + t341 + t342 + t365 + t366 + t367 + t383 + t384 + 0.001*t387 - 0.611*t390) + 5.479*(t315 + t325 + t326 + t349 + t350 + t374 + t375 + t376 + t391 + t392 + 0.001*t395 - 0.611*t398) + 0.125*(t315 + t317 + t318 + t341 + t342 + t365 + t366 + t367 + t383 + t384 + t399 + t400 - 0.846*t403) + 2.05*(t315 + t317 + t318 + t341 + t342 + t289*t345 + t365 + t367 + t383 + t384 + 0.027*(t154*t387 - 1.*t153*t390) + t399 + t400 + t294*t403 - 0.913*(-1.*t176*t345 + t173*t403) + 0.089*(t173*t345 + t176*t403)) + 0.125*(t315 + t325 + t326 + t349 + t350 + t374 + t375 + t376 + t391 + t392 + t404 + t405 - 0.846*t408) + 2.05*(t315 + t325 + t326 + t349 + t350 + t300*t353 + t374 + t376 + t391 + t392 + 0.027*(t167*t395 - 1.*t166*t398) + t404 + t405 + t305*t408 - 0.913*(-1.*t188*t353 + t185*t408) - 0.089*(t185*t353 + t188*t408)));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,q);


}

#else // MATLAB_MEX_FILE

#include "pe_com_vec.hh"

namespace atlas
{
namespace basic
{

void pe_com_vec_raw(double *p_output1, const double *q)
{
  // Call Subroutines
  output1(p_output1, q);

}

}
}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:29:37 GMT-04:00
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
  double t445;
  double t446;
  double t447;
  double t448;
  double t449;
  double t450;
  double t451;
  double t452;
  double t453;
  double t454;
  double t455;
  double t456;
  double t457;
  double t458;
  double t459;
  double t460;
  double t461;
  double t462;
  double t463;
  double t464;
  double t465;
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
  t84 = q[16];
  t85 = q[20];
  t86 = q[18];
  t87 = Cos(t84);
  t88 = 0. + t87;
  t89 = Cos(t85);
  t90 = Sin(t84);
  t91 = -1.*t90;
  t92 = 0. + t91;
  t93 = Sin(t85);
  t94 = Sin(t86);
  t95 = t89*t92;
  t96 = -1.*t88*t93;
  t97 = 0. + t95 + t96;
  t98 = Cos(t86);
  t99 = t88*t89;
  t100 = t92*t93;
  t101 = 0. + t99 + t100;
  t102 = q[19];
  t103 = q[17];
  t104 = t98*t97;
  t105 = -1.*t94*t101;
  t106 = 0. + t104 + t105;
  t107 = Sin(t102);
  t108 = t94*t97;
  t109 = t98*t101;
  t110 = 0. + t108 + t109;
  t111 = Cos(t102);
  t112 = Sin(t103);
  t113 = -1.*t112*t106;
  t114 = 0. + t113;
  t115 = Cos(t103);
  t116 = q[15];
  t117 = Sin(t116);
  t118 = 0. + t117;
  t119 = t87*t118;
  t120 = 0. + t119;
  t121 = t118*t90;
  t122 = 0. + t121;
  t123 = t89*t122;
  t124 = t120*t93;
  t125 = 0. + t123 + t124;
  t126 = t89*t120;
  t127 = -1.*t122*t93;
  t128 = 0. + t126 + t127;
  t129 = Cos(t116);
  t130 = 0. + t129;
  t131 = -1.*t94*t125;
  t132 = t98*t128;
  t133 = 0. + t131 + t132;
  t134 = t98*t125;
  t135 = t94*t128;
  t136 = 0. + t134 + t135;
  t137 = t130*t115;
  t138 = -1.*t112*t133;
  t139 = 0. + t137 + t138;
  t140 = t130*t87;
  t141 = 0. + t140;
  t142 = t130*t90;
  t143 = 0. + t142;
  t144 = t89*t143;
  t145 = t141*t93;
  t146 = 0. + t144 + t145;
  t147 = t141*t89;
  t148 = -1.*t143*t93;
  t149 = 0. + t147 + t148;
  t150 = -1.*t117;
  t151 = 0. + t150;
  t152 = -1.*t94*t146;
  t153 = t98*t149;
  t154 = 0. + t152 + t153;
  t155 = t98*t146;
  t156 = t94*t149;
  t157 = 0. + t155 + t156;
  t158 = t115*t151;
  t159 = -1.*t112*t154;
  t160 = 0. + t158 + t159;
  t161 = t25*t28;
  t162 = t29*t32;
  t163 = 0. + t161 + t162;
  t164 = t29*t28;
  t165 = -1.*t25*t32;
  t166 = 0. + t164 + t165;
  t167 = q[3];
  t168 = t34*t24;
  t169 = 0. + t168;
  t170 = t44*t166;
  t171 = -1.*t163*t62;
  t172 = 0. + t170 + t171;
  t173 = Cos(t167);
  t174 = t25*t58;
  t175 = t29*t61;
  t176 = 0. + t174 + t175;
  t177 = t29*t58;
  t178 = -1.*t25*t61;
  t179 = 0. + t177 + t178;
  t180 = Sin(t167);
  t181 = t52*t30;
  t182 = t34*t55;
  t183 = 0. + t181 + t182;
  t184 = t44*t179;
  t185 = -1.*t176*t62;
  t186 = 0. + t184 + t185;
  t187 = t25*t80;
  t188 = t29*t83;
  t189 = 0. + t187 + t188;
  t190 = t29*t80;
  t191 = -1.*t25*t83;
  t192 = 0. + t190 + t191;
  t193 = t74*t30;
  t194 = t34*t77;
  t195 = 0. + t193 + t194;
  t196 = t44*t192;
  t197 = -1.*t189*t62;
  t198 = 0. + t196 + t197;
  t199 = t107*t110;
  t200 = t111*t114;
  t201 = 0. + t199 + t200;
  t202 = t111*t110;
  t203 = -1.*t107*t114;
  t204 = 0. + t202 + t203;
  t205 = t115*t106;
  t206 = 0. + t205;
  t207 = t44*t204;
  t208 = -1.*t201*t62;
  t209 = 0. + t207 + t208;
  t210 = t107*t136;
  t211 = t111*t139;
  t212 = 0. + t210 + t211;
  t213 = t111*t136;
  t214 = -1.*t107*t139;
  t215 = 0. + t213 + t214;
  t216 = t130*t112;
  t217 = t115*t133;
  t218 = 0. + t216 + t217;
  t219 = t44*t215;
  t220 = -1.*t212*t62;
  t221 = 0. + t219 + t220;
  t222 = t107*t157;
  t223 = t111*t160;
  t224 = 0. + t222 + t223;
  t225 = t111*t157;
  t226 = -1.*t107*t160;
  t227 = 0. + t225 + t226;
  t228 = t151*t112;
  t229 = t115*t154;
  t230 = 0. + t228 + t229;
  t231 = t44*t227;
  t232 = -1.*t224*t62;
  t233 = 0. + t231 + t232;
  t234 = t44*t163;
  t235 = t166*t62;
  t236 = 0. + t234 + t235;
  t237 = t43*t169;
  t238 = -1.*t42*t172;
  t239 = 0. + t237 + t238;
  t240 = t44*t176;
  t241 = t179*t62;
  t242 = 0. + t240 + t241;
  t243 = t43*t183;
  t244 = -1.*t42*t186;
  t245 = 0. + t243 + t244;
  t246 = t44*t189;
  t247 = t192*t62;
  t248 = 0. + t246 + t247;
  t249 = t43*t195;
  t250 = -1.*t42*t198;
  t251 = 0. + t249 + t250;
  t252 = t44*t201;
  t253 = t204*t62;
  t254 = 0. + t252 + t253;
  t255 = t43*t206;
  t256 = -1.*t42*t209;
  t257 = 0. + t255 + t256;
  t258 = t44*t212;
  t259 = t215*t62;
  t260 = 0. + t258 + t259;
  t261 = t43*t218;
  t262 = -1.*t42*t221;
  t263 = 0. + t261 + t262;
  t264 = t44*t224;
  t265 = t227*t62;
  t266 = 0. + t264 + t265;
  t267 = t43*t230;
  t268 = -1.*t42*t233;
  t269 = 0. + t267 + t268;
  t270 = t183*t42;
  t271 = t43*t186;
  t272 = 0. + t270 + t271;
  t273 = -1.*t51;
  t274 = 1. + t273;
  t275 = -0.846*t274;
  t276 = -0.92245*t51;
  t277 = 0. + t275 + t276;
  t278 = -1.*t4;
  t279 = 1. + t278;
  t280 = -0.846*t279;
  t281 = t277*t4;
  t282 = -0.1728*t7;
  t283 = t280 + t281 + t282;
  t284 = 0.1728*t4;
  t285 = 0.846*t7;
  t286 = t277*t7;
  t287 = t284 + t285 + t286;
  t288 = 0.05*t12;
  t289 = t6*t287;
  t290 = 0.424*t10;
  t291 = t283*t10;
  t292 = t289 + t290 + t291;
  t293 = -1.*t6;
  t294 = 1. + t293;
  t295 = -0.424*t294;
  t296 = t6*t283;
  t297 = -1.*t287*t10;
  t298 = t295 + t296 + t297;
  t299 = -1.*t16;
  t300 = 1. + t299;
  t301 = 0.05*t300;
  t302 = t16*t292;
  t303 = t12*t298;
  t304 = 0. + t301 + t288 + t302 + t303;
  t305 = -1.*t34;
  t306 = 1. + t305;
  t307 = 0.089*t306;
  t308 = 0.089*t274;
  t309 = 0.089*t51;
  t310 = 0.07645000000000002*t36;
  t311 = 0. + t308 + t309 + t310;
  t312 = t34*t311;
  t313 = -1. + t16;
  t314 = 0.05*t313;
  t315 = -1.*t12*t292;
  t316 = t16*t298;
  t317 = t314 + t288 + t315 + t316;
  t318 = -1.*t30*t317;
  t319 = t307 + t312 + t318;
  t320 = 0.089*t25;
  t321 = t29*t304;
  t322 = -1.*t25*t319;
  t323 = t320 + t321 + t322;
  t324 = -1.*t29;
  t325 = 1. + t324;
  t326 = 0.089*t325;
  t327 = t25*t304;
  t328 = t29*t319;
  t329 = t326 + t327 + t328;
  t330 = t195*t42;
  t331 = t43*t198;
  t332 = 0. + t330 + t331;
  t333 = -0.089*t30;
  t334 = t311*t30;
  t335 = t34*t317;
  t336 = 0. + t333 + t334 + t335;
  t337 = t44*t323;
  t338 = -1.*t329*t62;
  t339 = 0. + t337 + t338;
  t340 = t44*t329;
  t341 = t323*t62;
  t342 = 0. + t340 + t341;
  t343 = t336*t42;
  t344 = t43*t339;
  t345 = 0. + t343 + t344;
  t346 = t43*t336;
  t347 = -1.*t42*t339;
  t348 = 0. + t346 + t347;
  t349 = t169*t42;
  t350 = t43*t172;
  t351 = 0. + t349 + t350;
  t352 = t218*t42;
  t353 = t43*t221;
  t354 = 0. + t352 + t353;
  t355 = -1.*t129;
  t356 = 1. + t355;
  t357 = -0.846*t356;
  t358 = -0.92245*t129;
  t359 = 0. + t357 + t358;
  t360 = -1.*t87;
  t361 = 1. + t360;
  t362 = -0.846*t361;
  t363 = t359*t87;
  t364 = 0.082*t90;
  t365 = t362 + t363 + t364;
  t366 = -0.082*t87;
  t367 = 0.846*t90;
  t368 = t359*t90;
  t369 = t366 + t367 + t368;
  t370 = 0.05*t94;
  t371 = t89*t369;
  t372 = 0.424*t93;
  t373 = t365*t93;
  t374 = t371 + t372 + t373;
  t375 = -1.*t89;
  t376 = 1. + t375;
  t377 = -0.424*t376;
  t378 = t89*t365;
  t379 = -1.*t369*t93;
  t380 = t377 + t378 + t379;
  t381 = -1.*t98;
  t382 = 1. + t381;
  t383 = 0.05*t382;
  t384 = t98*t374;
  t385 = t94*t380;
  t386 = 0. + t383 + t370 + t384 + t385;
  t387 = -1.*t115;
  t388 = 1. + t387;
  t389 = -0.089*t388;
  t390 = -0.089*t356;
  t391 = -0.089*t129;
  t392 = 0.07645000000000002*t117;
  t393 = 0. + t390 + t391 + t392;
  t394 = t115*t393;
  t395 = -1. + t98;
  t396 = 0.05*t395;
  t397 = -1.*t94*t374;
  t398 = t98*t380;
  t399 = t396 + t370 + t397 + t398;
  t400 = -1.*t112*t399;
  t401 = t389 + t394 + t400;
  t402 = -0.089*t107;
  t403 = t111*t386;
  t404 = -1.*t107*t401;
  t405 = t402 + t403 + t404;
  t406 = -1.*t111;
  t407 = 1. + t406;
  t408 = -0.089*t407;
  t409 = t107*t386;
  t410 = t111*t401;
  t411 = t408 + t409 + t410;
  t412 = t230*t42;
  t413 = t43*t233;
  t414 = 0. + t412 + t413;
  t415 = 0.089*t112;
  t416 = t393*t112;
  t417 = t115*t399;
  t418 = 0. + t415 + t416 + t417;
  t419 = t44*t405;
  t420 = -1.*t411*t62;
  t421 = 0. + t419 + t420;
  t422 = t44*t411;
  t423 = t405*t62;
  t424 = 0. + t422 + t423;
  t425 = t418*t42;
  t426 = t43*t421;
  t427 = 0. + t425 + t426;
  t428 = t43*t418;
  t429 = -1.*t42*t421;
  t430 = 0. + t428 + t429;
  t431 = t206*t42;
  t432 = t43*t209;
  t433 = 0. + t431 + t432;
  t434 = t342*t248;
  t435 = -1.*t342*t242;
  t436 = t236*t342;
  t437 = -1.*t342*t248;
  t438 = -1.*t236*t342;
  t439 = t342*t242;
  t440 = t424*t266;
  t441 = -1.*t424*t260;
  t442 = t254*t424;
  t443 = -1.*t424*t266;
  t444 = -1.*t254*t424;
  t445 = t424*t260;
  t446 = t336*t195;
  t447 = -1.*t336*t183;
  t448 = t169*t336;
  t449 = -1.*t336*t195;
  t450 = -1.*t169*t336;
  t451 = t336*t183;
  t452 = t418*t230;
  t453 = -1.*t418*t218;
  t454 = t206*t418;
  t455 = -1.*t418*t230;
  t456 = -1.*t206*t418;
  t457 = t418*t218;
  t458 = t74*t311;
  t459 = -1.*t52*t311;
  t460 = t301 + t288 + t302 + t303;
  t461 = t333 + t334 + t335;
  t462 = t151*t393;
  t463 = -1.*t130*t393;
  t464 = t383 + t370 + t384 + t385;
  t465 = t415 + t416 + t417;
  p_output1[0]=t351;
  p_output1[1]=t272;
  p_output1[2]=t332;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=t433;
  p_output1[6]=t354;
  p_output1[7]=t414;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0. + t173*t236 - 1.*t180*t239;
  p_output1[14]=0. + t173*t242 - 1.*t180*t245;
  p_output1[15]=0. + t173*t248 - 1.*t180*t251;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0. + t173*t254 - 1.*t180*t257;
  p_output1[19]=0. + t173*t260 - 1.*t180*t263;
  p_output1[20]=0. + t173*t266 - 1.*t180*t269;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0. + t180*t236 + t173*t239;
  p_output1[27]=0. + t180*t242 + t173*t245;
  p_output1[28]=0. + t180*t248 + t173*t251;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0. + t180*t254 + t173*t257;
  p_output1[32]=0. + t180*t260 + t173*t263;
  p_output1[33]=0. + t180*t266 + t173*t269;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=t272*(t332*t345 + t251*t348 + t434) + t332*(-1.*t272*t345 - 1.*t245*t348 + t435);
  p_output1[40]=t332*(t239*t348 + t345*t351 + t436) + t351*(-1.*t332*t345 - 1.*t251*t348 + t437);
  p_output1[41]=t272*(-1.*t239*t348 - 1.*t345*t351 + t438) + t351*(t272*t345 + t245*t348 + t439);
  p_output1[42]=t351;
  p_output1[43]=t332;
  p_output1[44]=t354*(t414*t427 + t269*t430 + t440) + t414*(-1.*t354*t427 - 1.*t263*t430 + t441);
  p_output1[45]=t414*(t257*t430 + t427*t433 + t442) + t433*(-1.*t414*t427 - 1.*t269*t430 + t443);
  p_output1[46]=t354*(-1.*t257*t430 - 1.*t427*t433 + t444) + t433*(t354*t427 + t263*t430 + t445);
  p_output1[47]=t433;
  p_output1[48]=t414;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=t242*(t198*t339 + t434 + t446) + t248*(-1.*t186*t339 + t435 + t447);
  p_output1[53]=t248*(t172*t339 + t436 + t448) + t236*(-1.*t198*t339 + t437 + t449);
  p_output1[54]=t242*(-1.*t172*t339 + t438 + t450) + t236*(t186*t339 + t439 + t451);
  p_output1[55]=t236;
  p_output1[56]=t248;
  p_output1[57]=t260*(t233*t421 + t440 + t452) + t266*(-1.*t221*t421 + t441 + t453);
  p_output1[58]=t266*(t209*t421 + t442 + t454) + t254*(-1.*t233*t421 + t443 + t455);
  p_output1[59]=t260*(-1.*t209*t421 + t444 + t456) + t254*(t221*t421 + t445 + t457);
  p_output1[60]=t254;
  p_output1[61]=t266;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=t183*(t192*t323 + t189*t329 + t446) + t195*(-1.*t179*t323 - 1.*t176*t329 + t447);
  p_output1[66]=t195*(t166*t323 + t163*t329 + t448) + t169*(-1.*t192*t323 - 1.*t189*t329 + t449);
  p_output1[67]=t183*(-1.*t166*t323 - 1.*t163*t329 + t450) + t169*(t179*t323 + t176*t329 + t451);
  p_output1[68]=t169;
  p_output1[69]=t195;
  p_output1[70]=t218*(t227*t405 + t224*t411 + t452) + t230*(-1.*t215*t405 - 1.*t212*t411 + t453);
  p_output1[71]=t230*(t204*t405 + t201*t411 + t454) + t206*(-1.*t227*t405 - 1.*t224*t411 + t455);
  p_output1[72]=t218*(-1.*t204*t405 - 1.*t201*t411 + t456) + t206*(t215*t405 + t212*t411 + t457);
  p_output1[73]=t206;
  p_output1[74]=t230;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=1.;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=1.;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=1.;
  p_output1[117]=0.;
  p_output1[118]=0.07645000000000002;
  p_output1[119]=0.;
  p_output1[120]=1.;
  p_output1[121]=0.;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0.846 + t52*(0. + t458 + t277*t52) + (0. - 1.*t277*t37 + t459)*t74;
  p_output1[131]=0. + 0.1728*t74;
  p_output1[132]=0. - 0.1728*t52;
  p_output1[133]=0.;
  p_output1[134]=t74;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0. - 0.089*t24 + (t459 - 1.*t317*t55 - 1.*t460*t58)*t80 + t58*(t458 + t317*t77 + t460*t80);
  p_output1[144]=-0.089*t55 + (0. + t24*t317 + t28*t460)*t80 + t28*(-1.*t311*t74 - 1.*t317*t77 - 1.*t460*t80);
  p_output1[145]=(0. - 1.*t24*t317 - 1.*t28*t460)*t58 + t28*(t311*t52 + t317*t55 + t460*t58) - 0.089*t77;
  p_output1[146]=t28;
  p_output1[147]=t80;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0. + 0.05*t15 + 0.05*t19 + t52*(t458 + t292*t69 + t298*t72) + (t459 - 1.*t292*t47 - 1.*t298*t50)*t74;
  p_output1[157]=0. + 0.05*t47 + 0.05*t50 + (0. + t19*t292 + t15*t298)*t74;
  p_output1[158]=0. + (0. - 1.*t19*t292 - 1.*t15*t298)*t52 + 0.05*t69 + 0.05*t72;
  p_output1[159]=0.;
  p_output1[160]=t74;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
  p_output1[168]=0;
  p_output1[169]=0.089*t28 + t195*(-1.*t183*t461 - 1.*t304*t58 - 1.*t319*t61) + t183*(t195*t461 + t304*t80 + t319*t83);
  p_output1[170]=t195*(t28*t304 + t319*t32 + t169*t461) + 0.089*t58 + t169*(-1.*t195*t461 - 1.*t304*t80 - 1.*t319*t83);
  p_output1[171]=t183*(-1.*t28*t304 - 1.*t319*t32 - 1.*t169*t461) + t169*(t183*t461 + t304*t58 + t319*t61) + 0.089*t80;
  p_output1[172]=t169;
  p_output1[173]=t195;
  p_output1[174]=0;
  p_output1[175]=0;
  p_output1[176]=0;
  p_output1[177]=0;
  p_output1[178]=0;
  p_output1[179]=0;
  p_output1[180]=0;
  p_output1[181]=0;
  p_output1[182]=0. + 0.424*t5 + t52*(t458 + t283*t64 + t287*t66) + (-1.*t283*t39 - 1.*t287*t41 + t459)*t74;
  p_output1[183]=0. + 0.424*t41 + t74*(0. + t287*t5 + t283*t9);
  p_output1[184]=0. + 0.424*t66 + t52*(0. - 1.*t287*t5 - 1.*t283*t9);
  p_output1[185]=0.;
  p_output1[186]=t74;
  p_output1[187]=0;
  p_output1[188]=0;
  p_output1[189]=0;
  p_output1[190]=0;
  p_output1[191]=0;
  p_output1[192]=0;
  p_output1[193]=0;
  p_output1[194]=0;
  p_output1[195]=0;
  p_output1[196]=0;
  p_output1[197]=0;
  p_output1[198]=0;
  p_output1[199]=0;
  p_output1[200]=0.;
  p_output1[201]=0.07645000000000002;
  p_output1[202]=0.;
  p_output1[203]=1.;
  p_output1[204]=0.;
  p_output1[205]=0;
  p_output1[206]=0;
  p_output1[207]=0;
  p_output1[208]=0;
  p_output1[209]=0;
  p_output1[210]=0;
  p_output1[211]=0;
  p_output1[212]=0;
  p_output1[213]=0.846 + t130*(0. + t130*t359 + t462) + t151*(0. - 1.*t118*t359 + t463);
  p_output1[214]=0. - 0.082*t151;
  p_output1[215]=0. + 0.082*t130;
  p_output1[216]=0.;
  p_output1[217]=t151;
  p_output1[218]=0;
  p_output1[219]=0;
  p_output1[220]=0;
  p_output1[221]=0;
  p_output1[222]=0;
  p_output1[223]=0;
  p_output1[224]=0;
  p_output1[225]=0;
  p_output1[226]=0. + 0.089*t106 + t157*(-1.*t133*t399 + t463 - 1.*t136*t464) + t136*(t154*t399 + t462 + t157*t464);
  p_output1[227]=0.089*t133 + t157*(0. + t106*t399 + t110*t464) + t110*(-1.*t151*t393 - 1.*t154*t399 - 1.*t157*t464);
  p_output1[228]=0.089*t154 + t136*(0. - 1.*t106*t399 - 1.*t110*t464) + t110*(t130*t393 + t133*t399 + t136*t464);
  p_output1[229]=t110;
  p_output1[230]=t157;
  p_output1[231]=0;
  p_output1[232]=0;
  p_output1[233]=0;
  p_output1[234]=0;
  p_output1[235]=0;
  p_output1[236]=0;
  p_output1[237]=0;
  p_output1[238]=0;
  p_output1[239]=0. + 0.05*t101 + t130*(t146*t374 + t149*t380 + t462) + t151*(-1.*t125*t374 - 1.*t128*t380 + t463) + 0.05*t97;
  p_output1[240]=0. + 0.05*t125 + 0.05*t128 + t151*(0. + t101*t374 + t380*t97);
  p_output1[241]=0. + 0.05*t146 + 0.05*t149 + t130*(0. - 1.*t101*t374 - 1.*t380*t97);
  p_output1[242]=0.;
  p_output1[243]=t151;
  p_output1[244]=0;
  p_output1[245]=0;
  p_output1[246]=0;
  p_output1[247]=0;
  p_output1[248]=0;
  p_output1[249]=0;
  p_output1[250]=0;
  p_output1[251]=0;
  p_output1[252]=-0.089*t110 + t230*(-1.*t136*t386 - 1.*t139*t401 - 1.*t218*t465) + t218*(t157*t386 + t160*t401 + t230*t465);
  p_output1[253]=-0.089*t136 + t230*(t110*t386 + t114*t401 + t206*t465) + t206*(-1.*t157*t386 - 1.*t160*t401 - 1.*t230*t465);
  p_output1[254]=-0.089*t157 + t218*(-1.*t110*t386 - 1.*t114*t401 - 1.*t206*t465) + t206*(t136*t386 + t139*t401 + t218*t465);
  p_output1[255]=t206;
  p_output1[256]=t230;
  p_output1[257]=0;
  p_output1[258]=0;
  p_output1[259]=0;
  p_output1[260]=0;
  p_output1[261]=0;
  p_output1[262]=0;
  p_output1[263]=0;
  p_output1[264]=0;
  p_output1[265]=0. + t130*(t141*t365 + t143*t369 + t462) + t151*(-1.*t120*t365 - 1.*t122*t369 + t463) + 0.424*t88;
  p_output1[266]=0. + 0.424*t122 + t151*(0. + t369*t88 + t365*t92);
  p_output1[267]=0. + 0.424*t143 + t130*(0. - 1.*t369*t88 - 1.*t365*t92);
  p_output1[268]=0.;
  p_output1[269]=t151;
  p_output1[270]=0;
  p_output1[271]=0;
  p_output1[272]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 13, (mwSize) 21, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,q);


}

#else // MATLAB_MEX_FILE

#include "Jhol_LeftHS3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void Jhol_LeftHS3DMultiWalking_raw(double *p_output1, const double *q)
{
  // Call Subroutines
  output1(p_output1, q);

}

}
}

#endif // MATLAB_MEX_FILE

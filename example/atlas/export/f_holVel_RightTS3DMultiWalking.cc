/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:57:29 GMT-05:00
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
  double t466;
  double t467;
  double t468;
  double t469;
  double t470;
  double t471;
  double t472;
  double t473;
  double t474;
  double t475;
  double t476;
  double t477;
  double t478;
  double t479;
  double t480;
  double t481;
  double t482;
  double t483;
  t1 = var[15];
  t2 = Cos(t1);
  t3 = 0. + t2;
  t4 = -1.*t2;
  t5 = 1. + t4;
  t6 = Sin(t1);
  t7 = -1.*t6;
  t8 = 0. + t7;
  t9 = -0.089*t5;
  t10 = -0.089*t2;
  t11 = 0.07645000000000002*t6;
  t12 = 0. + t9 + t10 + t11;
  t13 = -0.846*t5;
  t14 = -0.92245*t2;
  t15 = 0. + t13 + t14;
  t16 = var[16];
  t17 = var[20];
  t18 = var[18];
  t19 = Cos(t16);
  t20 = 0. + t19;
  t21 = Cos(t17);
  t22 = Sin(t16);
  t23 = -1.*t22;
  t24 = 0. + t23;
  t25 = Sin(t17);
  t26 = Cos(t18);
  t27 = 0. + t6;
  t28 = Sin(t18);
  t29 = t19*t27;
  t30 = 0. + t29;
  t31 = t27*t22;
  t32 = 0. + t31;
  t33 = t8*t12;
  t34 = -1.*t19;
  t35 = 1. + t34;
  t36 = -0.846*t35;
  t37 = t15*t19;
  t38 = -0.1728*t22;
  t39 = t36 + t37 + t38;
  t40 = 0.1728*t19;
  t41 = 0.846*t22;
  t42 = t15*t22;
  t43 = t40 + t41 + t42;
  t44 = t3*t19;
  t45 = 0. + t44;
  t46 = t3*t22;
  t47 = 0. + t46;
  t48 = 0.05*t28;
  t49 = t21*t43;
  t50 = 0.424*t25;
  t51 = t39*t25;
  t52 = t49 + t50 + t51;
  t53 = -1.*t21;
  t54 = 1. + t53;
  t55 = -0.424*t54;
  t56 = t21*t39;
  t57 = -1.*t43*t25;
  t58 = t55 + t56 + t57;
  t59 = t21*t47;
  t60 = t45*t25;
  t61 = 0. + t59 + t60;
  t62 = t45*t21;
  t63 = -1.*t47*t25;
  t64 = 0. + t62 + t63;
  t65 = t26*t61;
  t66 = t28*t64;
  t67 = 0. + t65 + t66;
  t68 = -1.*t3*t12;
  t69 = -1. + t26;
  t70 = 0.05*t69;
  t71 = -1.*t28*t52;
  t72 = t26*t58;
  t73 = t70 + t48 + t71 + t72;
  t74 = t21*t32;
  t75 = t30*t25;
  t76 = 0. + t74 + t75;
  t77 = t21*t30;
  t78 = -1.*t32*t25;
  t79 = 0. + t77 + t78;
  t80 = -1.*t26;
  t81 = 1. + t80;
  t82 = 0.05*t81;
  t83 = t26*t52;
  t84 = t28*t58;
  t85 = t82 + t48 + t83 + t84;
  t86 = t26*t76;
  t87 = t28*t79;
  t88 = 0. + t86 + t87;
  t89 = t21*t24;
  t90 = -1.*t20*t25;
  t91 = 0. + t89 + t90;
  t92 = t20*t21;
  t93 = t24*t25;
  t94 = 0. + t92 + t93;
  t95 = var[17];
  t96 = -1.*t28*t76;
  t97 = t26*t79;
  t98 = 0. + t96 + t97;
  t99 = Sin(t95);
  t100 = Cos(t95);
  t101 = -1.*t28*t61;
  t102 = t26*t64;
  t103 = 0. + t101 + t102;
  t104 = t8*t99;
  t105 = t100*t103;
  t106 = 0. + t104 + t105;
  t107 = 0. + t82 + t48 + t83 + t84;
  t108 = 0.089*t99;
  t109 = t12*t99;
  t110 = t100*t73;
  t111 = t108 + t109 + t110;
  t112 = t3*t99;
  t113 = t100*t98;
  t114 = 0. + t112 + t113;
  t115 = -1.*t100;
  t116 = 1. + t115;
  t117 = -0.089*t116;
  t118 = t100*t12;
  t119 = -1.*t99*t73;
  t120 = t117 + t118 + t119;
  t121 = t26*t91;
  t122 = -1.*t28*t94;
  t123 = 0. + t121 + t122;
  t124 = var[4];
  t125 = t28*t91;
  t126 = t26*t94;
  t127 = 0. + t125 + t126;
  t128 = var[19];
  t129 = Sin(t128);
  t130 = Cos(t128);
  t131 = -1.*t99*t123;
  t132 = 0. + t131;
  t133 = var[5];
  t134 = Cos(t133);
  t135 = t129*t127;
  t136 = t130*t132;
  t137 = 0. + t135 + t136;
  t138 = t130*t127;
  t139 = -1.*t129*t132;
  t140 = 0. + t138 + t139;
  t141 = Sin(t133);
  t142 = var[3];
  t143 = Cos(t124);
  t144 = t100*t123;
  t145 = 0. + t144;
  t146 = Sin(t124);
  t147 = t134*t140;
  t148 = -1.*t137*t141;
  t149 = 0. + t147 + t148;
  t150 = Sin(t142);
  t151 = t134*t137;
  t152 = t140*t141;
  t153 = 0. + t151 + t152;
  t154 = Cos(t142);
  t155 = t143*t145;
  t156 = -1.*t146*t149;
  t157 = 0. + t155 + t156;
  t158 = t3*t100;
  t159 = -1.*t99*t98;
  t160 = 0. + t158 + t159;
  t161 = t100*t8;
  t162 = -1.*t99*t103;
  t163 = 0. + t161 + t162;
  t164 = -0.089*t129;
  t165 = t130*t107;
  t166 = -1.*t129*t120;
  t167 = t164 + t165 + t166;
  t168 = -1.*t130;
  t169 = 1. + t168;
  t170 = -0.089*t169;
  t171 = t129*t107;
  t172 = t130*t120;
  t173 = t170 + t171 + t172;
  t174 = t130*t67;
  t175 = -1.*t129*t163;
  t176 = 0. + t174 + t175;
  t177 = t129*t67;
  t178 = t130*t163;
  t179 = 0. + t177 + t178;
  t180 = 0. + t108 + t109 + t110;
  t181 = t134*t167;
  t182 = -1.*t173*t141;
  t183 = 0. + t181 + t182;
  t184 = t134*t176;
  t185 = -1.*t179*t141;
  t186 = 0. + t184 + t185;
  t187 = t106*t146;
  t188 = t143*t186;
  t189 = 0. + t187 + t188;
  t190 = t134*t173;
  t191 = t167*t141;
  t192 = 0. + t190 + t191;
  t193 = t129*t88;
  t194 = t130*t160;
  t195 = 0. + t193 + t194;
  t196 = t130*t88;
  t197 = -1.*t129*t160;
  t198 = 0. + t196 + t197;
  t199 = t180*t146;
  t200 = t143*t183;
  t201 = 0. + t199 + t200;
  t202 = t114*t146;
  t203 = t134*t198;
  t204 = -1.*t195*t141;
  t205 = 0. + t203 + t204;
  t206 = t143*t205;
  t207 = 0. + t202 + t206;
  t208 = t143*t180;
  t209 = -1.*t146*t183;
  t210 = 0. + t208 + t209;
  t211 = t134*t195;
  t212 = t198*t141;
  t213 = 0. + t211 + t212;
  t214 = t134*t179;
  t215 = t176*t141;
  t216 = 0. + t214 + t215;
  t217 = t192*t216;
  t218 = -1.*t192*t213;
  t219 = t180*t106;
  t220 = -1.*t180*t114;
  t221 = var[37];
  t222 = var[38];
  t223 = var[39];
  t224 = var[40];
  t225 = var[41];
  t226 = var[21];
  t227 = t143*t114;
  t228 = -1.*t146*t205;
  t229 = 0. + t227 + t228;
  t230 = var[22];
  t231 = var[23];
  t232 = t145*t146;
  t233 = t143*t149;
  t234 = 0. + t232 + t233;
  t235 = t143*t106;
  t236 = -1.*t146*t186;
  t237 = 0. + t235 + t236;
  t238 = var[24];
  t239 = t153*t192;
  t240 = -1.*t192*t216;
  t241 = var[25];
  t242 = t145*t180;
  t243 = -1.*t180*t106;
  t244 = var[26];
  t245 = -1.*t153*t192;
  t246 = t192*t213;
  t247 = -1.*t145*t180;
  t248 = t180*t114;
  t249 = var[36];
  t250 = var[9];
  t251 = Cos(t250);
  t252 = 0. + t251;
  t253 = -1.*t251;
  t254 = 1. + t253;
  t255 = Sin(t250);
  t256 = -1.*t255;
  t257 = 0. + t256;
  t258 = 0.089*t254;
  t259 = 0.089*t251;
  t260 = 0.07645000000000002*t255;
  t261 = 0. + t258 + t259 + t260;
  t262 = -0.846*t254;
  t263 = -0.92245*t251;
  t264 = 0. + t262 + t263;
  t265 = var[10];
  t266 = var[14];
  t267 = var[12];
  t268 = Cos(t265);
  t269 = 0. + t268;
  t270 = Cos(t266);
  t271 = Sin(t265);
  t272 = -1.*t271;
  t273 = 0. + t272;
  t274 = Sin(t266);
  t275 = Cos(t267);
  t276 = 0. + t255;
  t277 = Sin(t267);
  t278 = t268*t276;
  t279 = 0. + t278;
  t280 = t276*t271;
  t281 = 0. + t280;
  t282 = t257*t261;
  t283 = -1.*t268;
  t284 = 1. + t283;
  t285 = -0.846*t284;
  t286 = t264*t268;
  t287 = -0.1728*t271;
  t288 = t285 + t286 + t287;
  t289 = 0.1728*t268;
  t290 = 0.846*t271;
  t291 = t264*t271;
  t292 = t289 + t290 + t291;
  t293 = t252*t268;
  t294 = 0. + t293;
  t295 = t252*t271;
  t296 = 0. + t295;
  t297 = 0.05*t277;
  t298 = t270*t292;
  t299 = 0.424*t274;
  t300 = t288*t274;
  t301 = t298 + t299 + t300;
  t302 = -1.*t270;
  t303 = 1. + t302;
  t304 = -0.424*t303;
  t305 = t270*t288;
  t306 = -1.*t292*t274;
  t307 = t304 + t305 + t306;
  t308 = t270*t296;
  t309 = t294*t274;
  t310 = 0. + t308 + t309;
  t311 = t294*t270;
  t312 = -1.*t296*t274;
  t313 = 0. + t311 + t312;
  t314 = t275*t310;
  t315 = t277*t313;
  t316 = 0. + t314 + t315;
  t317 = -1.*t252*t261;
  t318 = -1. + t275;
  t319 = 0.05*t318;
  t320 = -1.*t277*t301;
  t321 = t275*t307;
  t322 = t319 + t297 + t320 + t321;
  t323 = t270*t281;
  t324 = t279*t274;
  t325 = 0. + t323 + t324;
  t326 = t270*t279;
  t327 = -1.*t281*t274;
  t328 = 0. + t326 + t327;
  t329 = -1.*t275;
  t330 = 1. + t329;
  t331 = 0.05*t330;
  t332 = t275*t301;
  t333 = t277*t307;
  t334 = t331 + t297 + t332 + t333;
  t335 = t275*t325;
  t336 = t277*t328;
  t337 = 0. + t335 + t336;
  t338 = t270*t273;
  t339 = -1.*t269*t274;
  t340 = 0. + t338 + t339;
  t341 = t269*t270;
  t342 = t273*t274;
  t343 = 0. + t341 + t342;
  t344 = var[11];
  t345 = -1.*t277*t325;
  t346 = t275*t328;
  t347 = 0. + t345 + t346;
  t348 = Sin(t344);
  t349 = Cos(t344);
  t350 = -1.*t277*t310;
  t351 = t275*t313;
  t352 = 0. + t350 + t351;
  t353 = t257*t348;
  t354 = t349*t352;
  t355 = 0. + t353 + t354;
  t356 = 0. + t331 + t297 + t332 + t333;
  t357 = -0.089*t348;
  t358 = t261*t348;
  t359 = t349*t322;
  t360 = t357 + t358 + t359;
  t361 = t252*t348;
  t362 = t349*t347;
  t363 = 0. + t361 + t362;
  t364 = -1.*t349;
  t365 = 1. + t364;
  t366 = 0.089*t365;
  t367 = t349*t261;
  t368 = -1.*t348*t322;
  t369 = t366 + t367 + t368;
  t370 = t275*t340;
  t371 = -1.*t277*t343;
  t372 = 0. + t370 + t371;
  t373 = t277*t340;
  t374 = t275*t343;
  t375 = 0. + t373 + t374;
  t376 = var[13];
  t377 = Sin(t376);
  t378 = Cos(t376);
  t379 = -1.*t348*t372;
  t380 = 0. + t379;
  t381 = t377*t375;
  t382 = t378*t380;
  t383 = 0. + t381 + t382;
  t384 = t378*t375;
  t385 = -1.*t377*t380;
  t386 = 0. + t384 + t385;
  t387 = t349*t372;
  t388 = 0. + t387;
  t389 = t134*t386;
  t390 = -1.*t383*t141;
  t391 = 0. + t389 + t390;
  t392 = t134*t383;
  t393 = t386*t141;
  t394 = 0. + t392 + t393;
  t395 = t143*t388;
  t396 = -1.*t146*t391;
  t397 = 0. + t395 + t396;
  t398 = t252*t349;
  t399 = -1.*t348*t347;
  t400 = 0. + t398 + t399;
  t401 = t349*t257;
  t402 = -1.*t348*t352;
  t403 = 0. + t401 + t402;
  t404 = 0.089*t377;
  t405 = t378*t356;
  t406 = -1.*t377*t369;
  t407 = t404 + t405 + t406;
  t408 = -1.*t378;
  t409 = 1. + t408;
  t410 = 0.089*t409;
  t411 = t377*t356;
  t412 = t378*t369;
  t413 = t410 + t411 + t412;
  t414 = t378*t316;
  t415 = -1.*t377*t403;
  t416 = 0. + t414 + t415;
  t417 = t377*t316;
  t418 = t378*t403;
  t419 = 0. + t417 + t418;
  t420 = 0. + t357 + t358 + t359;
  t421 = t134*t407;
  t422 = -1.*t413*t141;
  t423 = 0. + t421 + t422;
  t424 = t134*t416;
  t425 = -1.*t419*t141;
  t426 = 0. + t424 + t425;
  t427 = t355*t146;
  t428 = t143*t426;
  t429 = 0. + t427 + t428;
  t430 = t134*t413;
  t431 = t407*t141;
  t432 = 0. + t430 + t431;
  t433 = t377*t337;
  t434 = t378*t400;
  t435 = 0. + t433 + t434;
  t436 = t378*t337;
  t437 = -1.*t377*t400;
  t438 = 0. + t436 + t437;
  t439 = t420*t146;
  t440 = t143*t423;
  t441 = 0. + t439 + t440;
  t442 = t363*t146;
  t443 = t134*t438;
  t444 = -1.*t435*t141;
  t445 = 0. + t443 + t444;
  t446 = t143*t445;
  t447 = 0. + t442 + t446;
  t448 = t143*t420;
  t449 = -1.*t146*t423;
  t450 = 0. + t448 + t449;
  t451 = t134*t435;
  t452 = t438*t141;
  t453 = 0. + t451 + t452;
  t454 = t134*t419;
  t455 = t416*t141;
  t456 = 0. + t454 + t455;
  t457 = t432*t456;
  t458 = -1.*t432*t453;
  t459 = t420*t355;
  t460 = -1.*t420*t363;
  t461 = var[31];
  t462 = var[32];
  t463 = var[33];
  t464 = var[34];
  t465 = var[35];
  t466 = t143*t363;
  t467 = -1.*t146*t445;
  t468 = 0. + t466 + t467;
  t469 = t388*t146;
  t470 = t143*t391;
  t471 = 0. + t469 + t470;
  t472 = t143*t355;
  t473 = -1.*t146*t426;
  t474 = 0. + t472 + t473;
  t475 = t394*t432;
  t476 = -1.*t432*t456;
  t477 = t388*t420;
  t478 = -1.*t420*t355;
  t479 = -1.*t394*t432;
  t480 = t432*t453;
  t481 = -1.*t388*t420;
  t482 = t420*t363;
  t483 = var[30];
  p_output1[0]=0. + (0. + t153*t154 - 1.*t150*t157)*t230 + (0. + t150*t153 + t154*t157)*t231 + t226*t234 + (t189*(-1.*t201*t207 + t218 - 1.*t210*t229) + t207*(t189*t201 + t217 + t210*t237))*t238 + (t213*(t183*t186 + t217 + t219) + t216*(-1.*t183*t205 + t218 + t220))*t241 + (t114*(t167*t176 + t173*t179 + t219) + t106*(-1.*t173*t195 - 1.*t167*t198 + t220))*t244 + t221*(0.846 + t3*(0. + t15*t3 + t33) + (0. - 1.*t15*t27 + t68)*t8) + t225*(0. + 0.424*t20 + t3*(t33 + t39*t45 + t43*t47) + (-1.*t30*t39 - 1.*t32*t43 + t68)*t8) + t224*(-0.089*t127 + t114*(t106*t111 + t120*t163 + t107*t67) + t106*(-1.*t111*t114 - 1.*t120*t160 - 1.*t107*t88)) + t223*(0. + t3*(t33 + t52*t61 + t58*t64) + (t68 - 1.*t52*t76 - 1.*t58*t79)*t8 + 0.05*t91 + 0.05*t94) + t222*(0. + 0.089*t123 + (t33 + t103*t73 + t67*t85)*t88 + t67*(t68 - 1.*t85*t88 - 1.*t73*t98));
  p_output1[1]=t207*t226 + (0. + t154*t213 - 1.*t150*t229)*t230 + (0. + t150*t213 + t154*t229)*t231 + t238*(t189*(t157*t210 + t201*t234 + t239) + t234*(-1.*t189*t201 - 1.*t210*t237 + t240)) + t241*(t216*(t149*t183 + t239 + t242) + t153*(-1.*t183*t186 + t240 + t243)) + (t106*(t140*t167 + t137*t173 + t242) + t145*(-1.*t167*t176 - 1.*t173*t179 + t243))*t244 + 0.07645000000000002*t249 + t221*(0. + 0.1728*t8) + t225*(0. + 0.424*t32 + (0. + t24*t39 + t20*t43)*t8) + t224*(t106*(t107*t127 + t120*t132 + t111*t145) + t145*(-1.*t106*t111 - 1.*t120*t163 - 1.*t107*t67) - 0.089*t88) + t223*(0. + 0.05*t76 + 0.05*t79 + t8*(0. + t58*t91 + t52*t94)) + t222*(t67*(0. + t123*t73 + t127*t85) + t127*(-1.*t103*t73 - 1.*t12*t8 - 1.*t67*t85) + 0.089*t98);
  p_output1[2]=0. + t189*t226 + t230*(0. + t154*t216 - 1.*t150*t237) + t231*(0. + t150*t216 + t154*t237) + t238*(t207*(-1.*t157*t210 - 1.*t201*t234 + t245) + t234*(t201*t207 + t210*t229 + t246)) + t244*(t114*(-1.*t140*t167 - 1.*t137*t173 + t247) + t145*(t173*t195 + t167*t198 + t248)) + t241*(t213*(-1.*t149*t183 + t245 + t247) + t153*(t183*t205 + t246 + t248)) + t221*(0. - 0.1728*t3) + t225*(0. + t3*(0. - 1.*t24*t39 - 1.*t20*t43) + 0.424*t47) + t224*(t114*(-1.*t107*t127 - 1.*t120*t132 - 1.*t111*t145) - 0.089*t67 + t145*(t111*t114 + t120*t160 + t107*t88)) + t223*(0. + 0.05*t61 + 0.05*t64 + t3*(0. - 1.*t58*t91 - 1.*t52*t94)) + t222*(0.089*t103 + (0. - 1.*t123*t73 - 1.*t127*t85)*t88 + t127*(t12*t3 + t85*t88 + t73*t98));
  p_output1[3]=0. + t127*t222 + t145*t224 + t234*t238 + t153*t241 + t145*t244 + t249;
  p_output1[4]=0. + t114*t224 + t207*t238 + t213*t241 + t114*t244 + t221*t3 + t223*t3 + t225*t3 + t222*t88;
  p_output1[5]=0. + t106*t224 + t189*t238 + t216*t241 + t106*t244 + t222*t67 + t221*t8 + t223*t8 + t225*t8;
  p_output1[6]=0. + t230*(0. + t154*t394 - 1.*t150*t397) + t231*(0. + t150*t394 + t154*t397) + t244*(t363*(t407*t416 + t413*t419 + t459) + t355*(-1.*t413*t435 - 1.*t407*t438 + t460)) + t241*(t453*(t423*t426 + t457 + t459) + t456*(-1.*t423*t445 + t458 + t460)) + (0.846 + t252*(0. + t252*t264 + t282) + t257*(0. - 1.*t264*t276 + t317))*t461 + (0. + t316*(t317 - 1.*t334*t337 - 1.*t322*t347) + t337*(t282 + t316*t334 + t322*t352) - 0.089*t372)*t462 + (0. + t252*(t282 + t301*t310 + t307*t313) + t257*(t317 - 1.*t301*t325 - 1.*t307*t328) + 0.05*t340 + 0.05*t343)*t463 + (0.089*t375 + t355*(-1.*t337*t356 - 1.*t360*t363 - 1.*t369*t400) + t363*(t316*t356 + t355*t360 + t369*t403))*t464 + (0. + 0.424*t269 + t252*(t282 + t288*t294 + t292*t296) + t257*(-1.*t279*t288 - 1.*t281*t292 + t317))*t465 + t226*t471 + t238*(t429*(-1.*t441*t447 + t458 - 1.*t450*t468) + t447*(t429*t441 + t457 + t450*t474));
  p_output1[7]=t226*t447 + (0. + 0.1728*t257)*t461 + (-0.089*t347 + (-1.*t257*t261 - 1.*t316*t334 - 1.*t322*t352)*t375 + t316*(0. + t322*t372 + t334*t375))*t462 + (0. + 0.05*t325 + 0.05*t328 + t257*(0. + t307*t340 + t301*t343))*t463 + (0.089*t337 + t355*(t356*t375 + t369*t380 + t360*t388) + t388*(-1.*t316*t356 - 1.*t355*t360 - 1.*t369*t403))*t464 + (0. + 0.424*t281 + t257*(0. + t273*t288 + t269*t292))*t465 + t230*(0. + t154*t453 - 1.*t150*t468) + t231*(0. + t150*t453 + t154*t468) + t238*(t429*(t397*t450 + t441*t471 + t475) + t471*(-1.*t429*t441 - 1.*t450*t474 + t476)) + t244*(t355*(t386*t407 + t383*t413 + t477) + t388*(-1.*t407*t416 - 1.*t413*t419 + t478)) + t241*(t456*(t391*t423 + t475 + t477) + t394*(-1.*t423*t426 + t476 + t478)) + 0.07645000000000002*t483;
  p_output1[8]=0. + t226*t429 + (0. - 0.1728*t252)*t461 + (-0.089*t352 + (t252*t261 + t334*t337 + t322*t347)*t375 + t337*(0. - 1.*t322*t372 - 1.*t334*t375))*t462 + (0. + 0.05*t310 + 0.05*t313 + t252*(0. - 1.*t307*t340 - 1.*t301*t343))*t463 + (0.089*t316 + t363*(-1.*t356*t375 - 1.*t369*t380 - 1.*t360*t388) + t388*(t337*t356 + t360*t363 + t369*t400))*t464 + (0. + t252*(0. - 1.*t273*t288 - 1.*t269*t292) + 0.424*t296)*t465 + t230*(0. + t154*t456 - 1.*t150*t474) + t231*(0. + t150*t456 + t154*t474) + t238*(t447*(-1.*t397*t450 - 1.*t441*t471 + t479) + t471*(t441*t447 + t450*t468 + t480)) + t244*(t363*(-1.*t386*t407 - 1.*t383*t413 + t481) + t388*(t413*t435 + t407*t438 + t482)) + t241*(t453*(-1.*t391*t423 + t479 + t481) + t394*(t423*t445 + t480 + t482));
  p_output1[9]=0. + t244*t388 + t241*t394 + t375*t462 + t388*t464 + t238*t471 + t483;
  p_output1[10]=0. + t244*t355 + t238*t429 + t241*t456 + t257*t461 + t316*t462 + t257*t463 + t355*t464 + t257*t465;
  p_output1[11]=var[27];
  p_output1[12]=var[28];
  p_output1[13]=var[29];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "f_holVel_RightTS3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void f_holVel_RightTS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE
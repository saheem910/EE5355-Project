/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:58:18 GMT-05:00
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
  double t484;
  double t485;
  double t486;
  double t487;
  double t488;
  double t489;
  double t490;
  double t491;
  double t492;
  double t493;
  double t494;
  double t495;
  double t496;
  double t497;
  double t498;
  double t499;
  double t500;
  double t501;
  double t502;
  double t503;
  double t504;
  double t505;
  double t506;
  double t507;
  double t508;
  double t509;
  double t510;
  double t511;
  double t512;
  double t513;
  double t514;
  double t515;
  double t516;
  double t517;
  double t518;
  double t519;
  double t520;
  double t521;
  double t522;
  double t523;
  double t524;
  double t525;
  double t526;
  double t527;
  double t528;
  double t529;
  double t530;
  double t531;
  double t532;
  double t533;
  double t534;
  double t535;
  double t536;
  double t537;
  double t538;
  double t539;
  double t540;
  double t541;
  double t542;
  double t543;
  double t544;
  double t545;
  double t546;
  double t547;
  double t548;
  double t549;
  double t550;
  double t551;
  double t552;
  double t553;
  double t554;
  double t555;
  double t556;
  double t557;
  double t558;
  double t559;
  double t560;
  double t561;
  double t562;
  double t563;
  double t564;
  double t565;
  double t566;
  double t567;
  double t568;
  double t569;
  double t570;
  double t571;
  double t572;
  double t573;
  double t574;
  double t575;
  double t576;
  double t577;
  double t578;
  double t579;
  double t580;
  double t581;
  double t582;
  double t583;
  double t584;
  double t585;
  double t586;
  double t587;
  double t588;
  double t589;
  double t590;
  double t591;
  double t592;
  double t593;
  t1 = var[4];
  t2 = var[19];
  t3 = Sin(t1);
  t4 = var[5];
  t5 = var[17];
  t6 = Cos(t4);
  t7 = Sin(t2);
  t8 = Cos(t2);
  t9 = Sin(t4);
  t10 = var[18];
  t11 = var[15];
  t12 = Cos(t1);
  t13 = Sin(t5);
  t14 = Cos(t5);
  t15 = t6*t7*t3;
  t16 = t8*t3*t9;
  t17 = t15 + t16;
  t18 = Cos(t10);
  t19 = Sin(t10);
  t20 = 0.05*t19;
  t21 = -1.*t8*t6*t3;
  t22 = t7*t3*t9;
  t23 = t21 + t22;
  t24 = t14*t12;
  t25 = -1.*t13*t17;
  t26 = t24 + t25;
  t27 = var[20];
  t28 = Sin(t27);
  t29 = t19*t23;
  t30 = t18*t26;
  t31 = t29 + t30;
  t32 = Cos(t27);
  t33 = t18*t23;
  t34 = -1.*t19*t26;
  t35 = t33 + t34;
  t36 = var[16];
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
  t55 = -1.*t8;
  t56 = 1. + t55;
  t57 = -1.*t18;
  t58 = 1. + t57;
  t59 = 0.05*t58;
  t60 = t59 + t20;
  t61 = -1.*t14;
  t62 = 1. + t61;
  t63 = -0.089*t39;
  t64 = -0.846*t40;
  t65 = t63 + t64;
  t66 = -1.*t8*t12*t6;
  t67 = t12*t7*t9;
  t68 = t66 + t67;
  t69 = -1. + t18;
  t70 = 0.05*t69;
  t71 = t70 + t20;
  t72 = -1.*t32;
  t73 = 1. + t72;
  t74 = -1.*t12*t6*t7;
  t75 = -1.*t8*t12*t9;
  t76 = t74 + t75;
  t77 = t19*t76;
  t78 = -1.*t18*t13*t68;
  t79 = t77 + t78;
  t80 = t18*t76;
  t81 = t13*t19*t68;
  t82 = t80 + t81;
  t83 = -1.*t45;
  t84 = 1. + t83;
  t85 = -0.846*t39;
  t86 = 0.089*t40;
  t87 = t85 + t86;
  t88 = -1.*t28*t79;
  t89 = t32*t82;
  t90 = t88 + t89;
  t91 = t32*t79;
  t92 = t28*t82;
  t93 = t91 + t92;
  t94 = t41*t90;
  t95 = t45*t93;
  t96 = t94 + t95;
  t97 = t8*t12*t6;
  t98 = -1.*t12*t7*t9;
  t99 = t97 + t98;
  t100 = t14*t3;
  t101 = -1.*t13*t76;
  t102 = t100 + t101;
  t103 = t19*t99;
  t104 = t18*t102;
  t105 = t103 + t104;
  t106 = t18*t99;
  t107 = -1.*t19*t102;
  t108 = t106 + t107;
  t109 = t13*t3;
  t110 = t14*t76;
  t111 = t109 + t110;
  t112 = -1.*t28*t105;
  t113 = t32*t108;
  t114 = t112 + t113;
  t115 = t41*t114;
  t116 = t32*t105;
  t117 = t28*t108;
  t118 = t116 + t117;
  t119 = t45*t118;
  t120 = t115 + t119;
  t121 = t45*t114;
  t122 = -1.*t41*t118;
  t123 = t121 + t122;
  t124 = -1.*t13*t3;
  t125 = -1.*t14*t76;
  t126 = t124 + t125;
  t127 = -1.*t32*t19*t126;
  t128 = -1.*t18*t28*t126;
  t129 = t127 + t128;
  t130 = t18*t32*t126;
  t131 = -1.*t19*t28*t126;
  t132 = t130 + t131;
  t133 = t41*t129;
  t134 = t45*t132;
  t135 = t133 + t134;
  t136 = 0.05*t18;
  t137 = -1.*t19*t99;
  t138 = -1.*t18*t102;
  t139 = t137 + t138;
  t140 = t28*t139;
  t141 = t140 + t113;
  t142 = t32*t139;
  t143 = -1.*t28*t108;
  t144 = t142 + t143;
  t145 = t45*t141;
  t146 = t41*t144;
  t147 = t145 + t146;
  t148 = 0.089*t12*t7*t9;
  t149 = t60*t76;
  t150 = -0.089*t62*t68;
  t151 = t14*t65*t68;
  t152 = -1.*t13*t71*t68;
  t153 = -0.424*t73*t79;
  t154 = 0.424*t28*t82;
  t155 = 0.846*t41*t90;
  t156 = -0.846*t84*t93;
  t157 = t87*t96;
  t158 = t45*t90;
  t159 = -1.*t41*t93;
  t160 = t158 + t159;
  t161 = 0.1728*t160;
  t162 = -1.*t14*t40*t68;
  t163 = t37*t96;
  t164 = t162 + t163;
  t165 = -0.92245*t164;
  t166 = t37*t14*t68;
  t167 = t40*t96;
  t168 = t166 + t167;
  t169 = -0.089*t168;
  t170 = -1.*t41*t114;
  t171 = -1.*t32*t105;
  t172 = t171 + t143;
  t173 = t41*t172;
  t174 = t121 + t173;
  t175 = var[3];
  t176 = Cos(t175);
  t177 = Sin(t175);
  t178 = t176*t6*t3;
  t179 = -1.*t177*t9;
  t180 = t178 + t179;
  t181 = -1.*t6*t177;
  t182 = -1.*t176*t3*t9;
  t183 = t181 + t182;
  t184 = -1.*t7*t180;
  t185 = t8*t183;
  t186 = t184 + t185;
  t187 = t8*t180;
  t188 = t7*t183;
  t189 = t187 + t188;
  t190 = -1.*t14*t176*t12;
  t191 = -1.*t13*t186;
  t192 = t190 + t191;
  t193 = t19*t189;
  t194 = t18*t192;
  t195 = t193 + t194;
  t196 = t18*t189;
  t197 = -1.*t19*t192;
  t198 = t196 + t197;
  t199 = -1.*t28*t195;
  t200 = t32*t198;
  t201 = t199 + t200;
  t202 = t32*t195;
  t203 = t28*t198;
  t204 = t202 + t203;
  t205 = -1.*t176*t12*t13;
  t206 = t14*t186;
  t207 = t205 + t206;
  t208 = t41*t201;
  t209 = t45*t204;
  t210 = t208 + t209;
  t211 = -1.*t12*t6*t7*t177;
  t212 = -1.*t8*t12*t177*t9;
  t213 = t211 + t212;
  t214 = t8*t12*t6*t177;
  t215 = -1.*t12*t7*t177*t9;
  t216 = t214 + t215;
  t217 = t14*t177*t3;
  t218 = -1.*t13*t213;
  t219 = t217 + t218;
  t220 = t19*t216;
  t221 = t18*t219;
  t222 = t220 + t221;
  t223 = t18*t216;
  t224 = -1.*t19*t219;
  t225 = t223 + t224;
  t226 = -1.*t28*t222;
  t227 = t32*t225;
  t228 = t226 + t227;
  t229 = t32*t222;
  t230 = t28*t225;
  t231 = t229 + t230;
  t232 = t13*t177*t3;
  t233 = t14*t213;
  t234 = t232 + t233;
  t235 = t41*t228;
  t236 = t45*t231;
  t237 = t235 + t236;
  t238 = -1.*t6*t177*t3;
  t239 = -1.*t176*t9;
  t240 = t238 + t239;
  t241 = t176*t6;
  t242 = -1.*t177*t3*t9;
  t243 = t241 + t242;
  t244 = t8*t240;
  t245 = -1.*t7*t243;
  t246 = t244 + t245;
  t247 = t7*t240;
  t248 = t8*t243;
  t249 = t247 + t248;
  t250 = t19*t249;
  t251 = -1.*t18*t13*t246;
  t252 = t250 + t251;
  t253 = t18*t249;
  t254 = t13*t19*t246;
  t255 = t253 + t254;
  t256 = -1.*t28*t252;
  t257 = t32*t255;
  t258 = t256 + t257;
  t259 = t32*t252;
  t260 = t28*t255;
  t261 = t259 + t260;
  t262 = t41*t258;
  t263 = t45*t261;
  t264 = t262 + t263;
  t265 = -0.846*t37;
  t266 = -0.089*t40;
  t267 = t265 + t266;
  t268 = 0.089*t37;
  t269 = t268 + t64;
  t270 = t6*t177*t3;
  t271 = t176*t9;
  t272 = t270 + t271;
  t273 = -1.*t7*t272;
  t274 = t273 + t248;
  t275 = t8*t272;
  t276 = t7*t243;
  t277 = t275 + t276;
  t278 = -1.*t14*t12*t177;
  t279 = -1.*t13*t274;
  t280 = t278 + t279;
  t281 = t19*t277;
  t282 = t18*t280;
  t283 = t281 + t282;
  t284 = t18*t277;
  t285 = -1.*t19*t280;
  t286 = t284 + t285;
  t287 = -1.*t12*t13*t177;
  t288 = t14*t274;
  t289 = t287 + t288;
  t290 = -1.*t28*t283;
  t291 = t32*t286;
  t292 = t290 + t291;
  t293 = t41*t292;
  t294 = t32*t283;
  t295 = t28*t286;
  t296 = t294 + t295;
  t297 = t45*t296;
  t298 = t293 + t297;
  t299 = t45*t292;
  t300 = -1.*t41*t296;
  t301 = t299 + t300;
  t302 = t12*t13*t177;
  t303 = -1.*t14*t274;
  t304 = t302 + t303;
  t305 = -1.*t32*t19*t304;
  t306 = -1.*t18*t28*t304;
  t307 = t305 + t306;
  t308 = t18*t32*t304;
  t309 = -1.*t19*t28*t304;
  t310 = t308 + t309;
  t311 = t41*t307;
  t312 = t45*t310;
  t313 = t311 + t312;
  t314 = t136 + t20;
  t315 = -0.05*t19;
  t316 = t136 + t315;
  t317 = -1.*t19*t277;
  t318 = -1.*t18*t280;
  t319 = t317 + t318;
  t320 = t28*t319;
  t321 = t320 + t291;
  t322 = t32*t319;
  t323 = -1.*t28*t286;
  t324 = t322 + t323;
  t325 = t45*t321;
  t326 = t41*t324;
  t327 = t325 + t326;
  t328 = -0.089*t7*t243;
  t329 = -1.*t8*t272;
  t330 = t329 + t245;
  t331 = t19*t274;
  t332 = -1.*t18*t13*t330;
  t333 = t331 + t332;
  t334 = t18*t274;
  t335 = t13*t19*t330;
  t336 = t334 + t335;
  t337 = -1.*t28*t333;
  t338 = t32*t336;
  t339 = t337 + t338;
  t340 = t32*t333;
  t341 = t28*t336;
  t342 = t340 + t341;
  t343 = t41*t339;
  t344 = t45*t342;
  t345 = t343 + t344;
  t346 = -1.*t41*t292;
  t347 = -1.*t32*t283;
  t348 = t347 + t323;
  t349 = t41*t348;
  t350 = t299 + t349;
  t351 = -1.*t40*t289;
  t352 = t37*t298;
  t353 = t351 + t352;
  t354 = t176*t12*t6*t7;
  t355 = t8*t176*t12*t9;
  t356 = t354 + t355;
  t357 = -1.*t8*t176*t12*t6;
  t358 = t176*t12*t7*t9;
  t359 = t357 + t358;
  t360 = -1.*t14*t176*t3;
  t361 = -1.*t13*t356;
  t362 = t360 + t361;
  t363 = t19*t359;
  t364 = t18*t362;
  t365 = t363 + t364;
  t366 = t18*t359;
  t367 = -1.*t19*t362;
  t368 = t366 + t367;
  t369 = -1.*t28*t365;
  t370 = t32*t368;
  t371 = t369 + t370;
  t372 = t32*t365;
  t373 = t28*t368;
  t374 = t372 + t373;
  t375 = -1.*t176*t13*t3;
  t376 = t14*t356;
  t377 = t375 + t376;
  t378 = t41*t371;
  t379 = t45*t374;
  t380 = t378 + t379;
  t381 = t6*t177;
  t382 = t176*t3*t9;
  t383 = t381 + t382;
  t384 = -1.*t7*t383;
  t385 = t187 + t384;
  t386 = t7*t180;
  t387 = t8*t383;
  t388 = t386 + t387;
  t389 = t19*t388;
  t390 = -1.*t18*t13*t385;
  t391 = t389 + t390;
  t392 = t18*t388;
  t393 = t13*t19*t385;
  t394 = t392 + t393;
  t395 = -1.*t28*t391;
  t396 = t32*t394;
  t397 = t395 + t396;
  t398 = t32*t391;
  t399 = t28*t394;
  t400 = t398 + t399;
  t401 = t41*t397;
  t402 = t45*t400;
  t403 = t401 + t402;
  t404 = -1.*t176*t6*t3;
  t405 = t177*t9;
  t406 = t404 + t405;
  t407 = -1.*t7*t406;
  t408 = t407 + t387;
  t409 = t8*t406;
  t410 = t7*t383;
  t411 = t409 + t410;
  t412 = t14*t176*t12;
  t413 = -1.*t13*t408;
  t414 = t412 + t413;
  t415 = t19*t411;
  t416 = t18*t414;
  t417 = t415 + t416;
  t418 = t18*t411;
  t419 = -1.*t19*t414;
  t420 = t418 + t419;
  t421 = t176*t12*t13;
  t422 = t14*t408;
  t423 = t421 + t422;
  t424 = -1.*t28*t417;
  t425 = t32*t420;
  t426 = t424 + t425;
  t427 = t41*t426;
  t428 = t32*t417;
  t429 = t28*t420;
  t430 = t428 + t429;
  t431 = t45*t430;
  t432 = t427 + t431;
  t433 = t45*t426;
  t434 = -1.*t41*t430;
  t435 = t433 + t434;
  t436 = -1.*t14*t408;
  t437 = t205 + t436;
  t438 = -1.*t32*t19*t437;
  t439 = -1.*t18*t28*t437;
  t440 = t438 + t439;
  t441 = t18*t32*t437;
  t442 = -1.*t19*t28*t437;
  t443 = t441 + t442;
  t444 = t41*t440;
  t445 = t45*t443;
  t446 = t444 + t445;
  t447 = -1.*t19*t411;
  t448 = -1.*t18*t414;
  t449 = t447 + t448;
  t450 = t28*t449;
  t451 = t450 + t425;
  t452 = t32*t449;
  t453 = -1.*t28*t420;
  t454 = t452 + t453;
  t455 = t45*t451;
  t456 = t41*t454;
  t457 = t455 + t456;
  t458 = -0.089*t7*t383;
  t459 = -1.*t8*t406;
  t460 = t459 + t384;
  t461 = t19*t408;
  t462 = -1.*t18*t13*t460;
  t463 = t461 + t462;
  t464 = t18*t408;
  t465 = t13*t19*t460;
  t466 = t464 + t465;
  t467 = -1.*t28*t463;
  t468 = t32*t466;
  t469 = t467 + t468;
  t470 = t32*t463;
  t471 = t28*t466;
  t472 = t470 + t471;
  t473 = t41*t469;
  t474 = t45*t472;
  t475 = t473 + t474;
  t476 = -1.*t41*t426;
  t477 = -1.*t32*t417;
  t478 = t477 + t453;
  t479 = t41*t478;
  t480 = t433 + t479;
  t481 = -1.*t37*t423;
  t482 = -1.*t40*t432;
  t483 = -1.*t40*t423;
  t484 = t37*t432;
  t485 = 0. + t483 + t484;
  t486 = t37*t289;
  t487 = t40*t298;
  t488 = t486 + t487;
  t489 = Power(t485,2);
  t490 = t37*t423;
  t491 = t40*t432;
  t492 = 0. + t490 + t491;
  t493 = Power(t492,2);
  t494 = t489 + t493;
  t495 = 1/t494;
  t496 = t37*t377;
  t497 = t40*t380;
  t498 = t496 + t497;
  t499 = -1.*t40*t377;
  t500 = t37*t380;
  t501 = t499 + t500;
  t502 = 0. + t481 + t482;
  t503 = t37*t14*t385;
  t504 = t40*t403;
  t505 = t503 + t504;
  t506 = -1.*t14*t40*t385;
  t507 = t37*t403;
  t508 = t506 + t507;
  t509 = t483 + t484;
  t510 = t481 + t482;
  t511 = t37*t414;
  t512 = t40*t446;
  t513 = t511 + t512;
  t514 = -1.*t40*t414;
  t515 = t37*t446;
  t516 = t514 + t515;
  t517 = t37*t14*t460;
  t518 = t40*t475;
  t519 = t517 + t518;
  t520 = -1.*t14*t40*t460;
  t521 = t37*t475;
  t522 = t520 + t521;
  t523 = 0. + t433 + t434;
  t524 = Power(t523,2);
  t525 = t524*t489*t495;
  t526 = t489 + t525;
  t527 = 1/t526;
  t528 = 1/Sqrt(t494);
  t529 = Power(t494,-1.5);
  t530 = t45*t371;
  t531 = -1.*t41*t374;
  t532 = t530 + t531;
  t533 = t45*t397;
  t534 = -1.*t41*t400;
  t535 = t533 + t534;
  t536 = -1.*t45*t430;
  t537 = t476 + t536;
  t538 = t45*t440;
  t539 = -1.*t41*t443;
  t540 = t538 + t539;
  t541 = -1.*t41*t451;
  t542 = t45*t454;
  t543 = t541 + t542;
  t544 = t45*t469;
  t545 = -1.*t41*t472;
  t546 = t544 + t545;
  t547 = t45*t478;
  t548 = t476 + t547;
  t549 = t45*t201;
  t550 = -1.*t41*t204;
  t551 = t549 + t550;
  t552 = 0. + t121 + t122;
  t553 = t45*t228;
  t554 = -1.*t41*t231;
  t555 = t553 + t554;
  t556 = Power(t552,2);
  t557 = 0. + t299 + t300;
  t558 = Power(t557,2);
  t559 = t556 + t558;
  t560 = 1/t559;
  t561 = t45*t44;
  t562 = -1.*t41*t48;
  t563 = t561 + t562;
  t564 = t45*t258;
  t565 = -1.*t41*t261;
  t566 = t564 + t565;
  t567 = -1.*t45*t292;
  t568 = t41*t296;
  t569 = 0. + t567 + t568;
  t570 = -1.*t45*t296;
  t571 = t346 + t570;
  t572 = -1.*t45*t118;
  t573 = t170 + t572;
  t574 = t45*t307;
  t575 = -1.*t41*t310;
  t576 = t574 + t575;
  t577 = t45*t129;
  t578 = -1.*t41*t132;
  t579 = t577 + t578;
  t580 = -1.*t41*t321;
  t581 = t45*t324;
  t582 = t580 + t581;
  t583 = -1.*t41*t141;
  t584 = t45*t144;
  t585 = t583 + t584;
  t586 = t45*t339;
  t587 = -1.*t41*t342;
  t588 = t586 + t587;
  t589 = t160*t569*t560;
  t590 = t45*t348;
  t591 = t346 + t590;
  t592 = t45*t172;
  t593 = t170 + t592;
  p_output1[0]=1.;
  p_output1[1]=0.089*t12*t13 + 0.424*t28*t35 + 0.846*t41*t44 - 0.92245*(-1.*t40*t51 + t37*t54) - 0.089*(t37*t51 + t40*t54) + 0.1728*t563 + t23*t60 - 0.089*t17*t62 + t51*t65 + 0.089*t3*t6*t7 + t26*t71 - 0.424*t31*t73 - 0.846*t48*t84 + t54*t87 - 0.089*t3*t56*t9;
  p_output1[2]=t148 + t149 + t150 + t151 + t152 + t153 + t154 + t155 + t156 + t157 + t161 + t165 + t169 + 0.089*t12*t56*t6;
  p_output1[3]=t111*t267 + t120*t269 - 0.089*(t120*t37 - 1.*t111*t40) - 0.92245*(-1.*t111*t37 - 1.*t120*t40);
  p_output1[4]=-0.92245*t123*t37 - 0.089*t123*t40 - 0.846*t118*t41 + 0.846*t114*t45 + 0.1728*t573 + t123*t87;
  p_output1[5]=-0.424*t126*t19*t28 + 0.089*t14*t3 - 0.92245*(t135*t37 - 1.*t102*t40) - 0.089*(t102*t37 + t135*t40) + 0.846*t129*t41 + 0.1728*t579 + t102*t65 + t126*t71 - 0.424*t126*t18*t73 - 0.089*t13*t76 - 0.846*t132*t84 + t135*t87;
  p_output1[6]=0.424*t139*t28 + t102*t316 - 0.92245*t147*t37 - 0.089*t147*t40 + 0.846*t144*t41 + 0.1728*t585 - 0.424*t108*t73 - 0.846*t141*t84 + t147*t87 + t314*t99;
  p_output1[7]=t148 + t149 + t150 + t151 + t152 + t153 + t154 + t155 + t156 + t157 + t161 + t165 + t169 - 0.089*t12*t6*t8;
  p_output1[8]=-0.424*t105*t28 + 0.424*t108*t32 - 0.92245*t174*t37 - 0.089*t174*t40 + 0.846*t172*t41 + 0.1728*t593 - 0.846*t114*t84 + t174*t87;
  p_output1[9]=-1.;
  p_output1[10]=1.;
  p_output1[11]=-0.089*t12*t13*t176 + 0.424*t198*t28 - 0.92245*(t210*t37 - 1.*t207*t40) - 0.089*(t207*t37 + t210*t40) + 0.846*t201*t41 + 0.1728*t551 - 0.089*t183*t56 + t189*t60 - 0.089*t186*t62 + t207*t65 - 0.089*t180*t7 + t192*t71 - 0.424*t195*t73 - 0.846*t204*t84 + t210*t87;
  p_output1[12]=0.424*t225*t28 + 0.089*t13*t177*t3 - 0.92245*(t237*t37 - 1.*t234*t40) - 0.089*(t234*t37 + t237*t40) + 0.846*t228*t41 + 0.1728*t555 + t216*t60 - 0.089*t213*t62 + t234*t65 - 0.089*t12*t177*t6*t7 + t219*t71 - 0.424*t222*t73 - 0.846*t231*t84 + t237*t87 + 0.089*t12*t177*t56*t9;
  p_output1[13]=0.424*t255*t28 + t328 - 0.92245*(t264*t37 - 1.*t14*t246*t40) - 0.089*(t14*t246*t37 + t264*t40) + 0.846*t258*t41 - 0.089*t240*t56 + 0.1728*t566 + t249*t60 - 0.089*t246*t62 + t14*t246*t65 - 1.*t13*t246*t71 - 0.424*t252*t73 - 0.846*t261*t84 + t264*t87;
  p_output1[14]=t267*t289 + t269*t298 - 0.089*t353 - 0.92245*(-1.*t289*t37 - 1.*t298*t40);
  p_output1[15]=-0.92245*t301*t37 - 0.089*t301*t40 - 0.846*t296*t41 + 0.846*t292*t45 + 0.1728*t571 + t301*t87;
  p_output1[16]=-0.089*t12*t14*t177 - 0.089*t13*t274 - 0.424*t19*t28*t304 - 0.92245*(t313*t37 - 1.*t280*t40) - 0.089*(t280*t37 + t313*t40) + 0.846*t307*t41 + 0.1728*t576 + t280*t65 + t304*t71 - 0.424*t18*t304*t73 - 0.846*t310*t84 + t313*t87;
  p_output1[17]=t277*t314 + t280*t316 + 0.424*t28*t319 - 0.92245*t327*t37 - 0.089*t327*t40 + 0.846*t324*t41 + 0.1728*t582 - 0.424*t286*t73 - 0.846*t321*t84 + t327*t87;
  p_output1[18]=t328 + 0.424*t28*t336 - 0.92245*(t345*t37 - 1.*t14*t330*t40) - 0.089*(t14*t330*t37 + t345*t40) + 0.846*t339*t41 + 0.1728*t588 + t274*t60 - 0.089*t330*t62 + t14*t330*t65 - 1.*t13*t330*t71 - 0.424*t333*t73 - 0.089*t272*t8 - 0.846*t342*t84 + t345*t87;
  p_output1[19]=-0.424*t28*t283 + 0.424*t286*t32 - 0.92245*t350*t37 - 0.089*t350*t40 + 0.846*t348*t41 + 0.1728*t591 - 0.846*t292*t84 + t350*t87;
  p_output1[20]=-1.;
  p_output1[21]=1.;
  p_output1[22]=-0.089*t12*t13*t177 + 0.424*t28*t286 + 0.1728*t301 - 0.92245*t353 + 0.846*t292*t41 - 0.089*t488 - 0.089*t243*t56 + t277*t60 - 0.089*t274*t62 + t289*t65 - 0.089*t272*t7 + t280*t71 - 0.424*t283*t73 - 0.846*t296*t84 + t298*t87;
  p_output1[23]=-0.089*t13*t176*t3 + 0.424*t28*t368 + 0.846*t371*t41 - 0.089*t498 - 0.92245*t501 + 0.1728*t532 + t359*t60 - 0.089*t356*t62 + t377*t65 + 0.089*t12*t176*t6*t7 + t362*t71 - 0.424*t365*t73 - 0.846*t374*t84 + t380*t87 - 0.089*t12*t176*t56*t9;
  p_output1[24]=0.424*t28*t394 + 0.846*t397*t41 + t458 - 0.089*t505 - 0.92245*t508 + 0.1728*t535 - 0.089*t180*t56 + t388*t60 - 0.089*t385*t62 + t14*t385*t65 - 1.*t13*t385*t71 - 0.424*t391*t73 - 0.846*t400*t84 + t403*t87;
  p_output1[25]=t267*t423 + t269*t432 - 0.089*t509 - 0.92245*t510;
  p_output1[26]=-0.846*t41*t430 - 0.92245*t37*t435 - 0.089*t40*t435 + 0.846*t426*t45 + 0.1728*t537 + t435*t87;
  p_output1[27]=0.089*t12*t14*t176 - 0.089*t13*t408 - 0.424*t19*t28*t437 + 0.846*t41*t440 - 0.089*t513 - 0.92245*t516 + 0.1728*t540 + t414*t65 + t437*t71 - 0.424*t18*t437*t73 - 0.846*t443*t84 + t446*t87;
  p_output1[28]=t314*t411 + t316*t414 + 0.424*t28*t449 + 0.846*t41*t454 - 0.92245*t37*t457 - 0.089*t40*t457 + 0.1728*t543 - 0.424*t420*t73 - 0.846*t451*t84 + t457*t87;
  p_output1[29]=t458 + 0.424*t28*t466 + 0.846*t41*t469 - 0.089*t519 - 0.92245*t522 + 0.1728*t546 + t408*t60 - 0.089*t460*t62 + t14*t460*t65 - 1.*t13*t460*t71 - 0.424*t463*t73 - 0.089*t406*t8 - 0.846*t472*t84 + t475*t87;
  p_output1[30]=-0.424*t28*t417 + 0.424*t32*t420 + 0.846*t41*t478 - 0.92245*t37*t480 - 0.089*t40*t480 + 0.1728*t548 - 0.846*t426*t84 + t480*t87;
  p_output1[31]=-1.;
  p_output1[32]=t485*t488*t495 + t353*t495*t502;
  p_output1[33]=t485*t495*t498 + t495*t501*t502;
  p_output1[34]=t485*t495*t505 + t495*t502*t508;
  p_output1[35]=t485*t495*t509 + t495*t502*t510;
  p_output1[36]=t40*t435*t485*t495 + t37*t435*t495*t502;
  p_output1[37]=t485*t495*t513 + t495*t502*t516;
  p_output1[38]=t40*t457*t485*t495 + t37*t457*t495*t502;
  p_output1[39]=t485*t495*t519 + t495*t502*t522;
  p_output1[40]=t40*t480*t485*t495 + t37*t480*t495*t502;
  p_output1[41]=-1.;
  p_output1[42]=t353*t485*t523*t527*t528 + t485*t527*(-1.*t301*t485*t528 - 1.*t353*t523*t528 + 0.5*t485*(2.*t353*t485 + 2.*t488*t492)*t523*t529);
  p_output1[43]=t485*t501*t523*t527*t528 + t485*t527*(-1.*t501*t523*t528 + 0.5*t485*(2.*t492*t498 + 2.*t485*t501)*t523*t529 - 1.*t485*t528*t532);
  p_output1[44]=t485*t508*t523*t527*t528 + t485*t527*(-1.*t508*t523*t528 + 0.5*t485*(2.*t492*t505 + 2.*t485*t508)*t523*t529 - 1.*t485*t528*t535);
  p_output1[45]=t485*t510*t523*t527*t528 + t485*t527*(-1.*t510*t523*t528 + 0.5*t485*(2.*t492*t509 + 2.*t485*t510)*t523*t529);
  p_output1[46]=t37*t435*t485*t523*t527*t528 + t485*t527*(-1.*t37*t435*t523*t528 + 0.5*t485*(2.*t37*t435*t485 + 2.*t40*t435*t492)*t523*t529 - 1.*t485*t528*t537);
  p_output1[47]=t485*t516*t523*t527*t528 + t485*t527*(-1.*t516*t523*t528 + 0.5*t485*(2.*t492*t513 + 2.*t485*t516)*t523*t529 - 1.*t485*t528*t540);
  p_output1[48]=t37*t457*t485*t523*t527*t528 + t485*t527*(-1.*t37*t457*t523*t528 + 0.5*t485*(2.*t37*t457*t485 + 2.*t40*t457*t492)*t523*t529 - 1.*t485*t528*t543);
  p_output1[49]=t485*t522*t523*t527*t528 + t485*t527*(-1.*t522*t523*t528 + 0.5*t485*(2.*t492*t519 + 2.*t485*t522)*t523*t529 - 1.*t485*t528*t546);
  p_output1[50]=t37*t480*t485*t523*t527*t528 + t485*t527*(-1.*t37*t480*t523*t528 + 0.5*t485*(2.*t37*t480*t485 + 2.*t40*t480*t492)*t523*t529 - 1.*t485*t528*t548);
  p_output1[51]=-1.;
  p_output1[52]=t551*t552*t560;
  p_output1[53]=t552*t555*t560 + t560*t563*t569;
  p_output1[54]=t552*t560*t566 + t589;
  p_output1[55]=t552*t560*t571 + t560*t569*t573;
  p_output1[56]=t552*t560*t576 + t560*t569*t579;
  p_output1[57]=t552*t560*t582 + t560*t569*t585;
  p_output1[58]=t552*t560*t588 + t589;
  p_output1[59]=t552*t560*t591 + t560*t569*t593;
  p_output1[60]=-1.;
  p_output1[61]=1.;
  p_output1[62]=-1.;
  p_output1[63]=1.;
  p_output1[64]=-1.;
  p_output1[65]=1.;
  p_output1[66]=-1.;
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
    ( !(mrows == 30 && ncols == 1) && 
      !(mrows == 1 && ncols == 30))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 67, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "J_holPos_RightTL3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void J_holPos_RightTL3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

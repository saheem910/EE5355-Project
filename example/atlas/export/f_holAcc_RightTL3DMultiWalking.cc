/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:58:23 GMT-05:00
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
  double t594;
  double t595;
  double t596;
  double t597;
  double t598;
  double t599;
  double t600;
  double t601;
  double t602;
  double t603;
  double t604;
  double t605;
  double t606;
  double t607;
  double t608;
  double t609;
  double t610;
  double t611;
  double t612;
  double t613;
  double t614;
  double t615;
  double t616;
  double t617;
  double t618;
  double t619;
  double t620;
  double t621;
  double t622;
  double t623;
  double t624;
  double t625;
  double t626;
  double t627;
  double t628;
  double t629;
  double t630;
  double t631;
  double t632;
  double t633;
  double t634;
  double t635;
  double t636;
  double t637;
  double t638;
  double t639;
  double t640;
  double t641;
  double t642;
  double t643;
  double t644;
  double t645;
  double t646;
  double t647;
  double t648;
  double t649;
  double t650;
  double t651;
  double t652;
  double t653;
  double t654;
  double t655;
  double t656;
  double t657;
  double t658;
  double t659;
  double t660;
  double t661;
  double t662;
  double t663;
  double t664;
  double t665;
  double t666;
  double t667;
  double t668;
  double t669;
  double t670;
  double t671;
  double t672;
  double t673;
  double t674;
  double t675;
  double t676;
  double t677;
  double t678;
  double t679;
  double t680;
  double t681;
  double t682;
  double t683;
  double t684;
  t1 = var[15];
  t2 = Cos(t1);
  t3 = -1.*t2;
  t4 = 1. + t3;
  t5 = Sin(t1);
  t6 = 0. + t2;
  t7 = -0.089*t4;
  t8 = -0.089*t2;
  t9 = 0.07645000000000002*t5;
  t10 = 0. + t7 + t8 + t9;
  t11 = -0.846*t4;
  t12 = -0.92245*t2;
  t13 = 0. + t11 + t12;
  t14 = var[36];
  t15 = -1.*t5;
  t16 = 0. + t15;
  t17 = 0. + t5;
  t18 = 0.07645000000000002*t2*t14;
  t19 = 0. + t18;
  t20 = t16*t10;
  t21 = var[16];
  t22 = Cos(t21);
  t23 = Sin(t21);
  t24 = -1.*t6*t10;
  t25 = -1.*t22;
  t26 = 1. + t25;
  t27 = -0.846*t26;
  t28 = t13*t22;
  t29 = -0.1728*t23;
  t30 = t27 + t28 + t29;
  t31 = 0.1728*t22;
  t32 = 0.846*t23;
  t33 = t13*t23;
  t34 = t31 + t32 + t33;
  t35 = var[37];
  t36 = -1.*t2*t10*t14;
  t37 = t16*t19;
  t38 = t6*t23;
  t39 = 0. + t38;
  t40 = t6*t22;
  t41 = 0. + t40;
  t42 = t10*t5*t14;
  t43 = -1.*t6*t19;
  t44 = t17*t23;
  t45 = 0. + t44;
  t46 = 0.07645000000000002*t5*t23*t14;
  t47 = 0.846*t22*t35;
  t48 = t13*t22*t35;
  t49 = -0.1728*t23*t35;
  t50 = t46 + t47 + t48 + t49;
  t51 = t22*t17;
  t52 = 0. + t51;
  t53 = 0.07645000000000002*t22*t5*t14;
  t54 = -0.1728*t22*t35;
  t55 = -0.846*t23*t35;
  t56 = -1.*t13*t23*t35;
  t57 = t53 + t54 + t55 + t56;
  t58 = var[20];
  t59 = Cos(t58);
  t60 = Sin(t58);
  t61 = t59*t34;
  t62 = 0.424*t60;
  t63 = t30*t60;
  t64 = t61 + t62 + t63;
  t65 = -1.*t59;
  t66 = 1. + t65;
  t67 = -0.424*t66;
  t68 = t59*t30;
  t69 = -1.*t34*t60;
  t70 = t67 + t68 + t69;
  t71 = var[41];
  t72 = 0. + t22;
  t73 = -1.*t23;
  t74 = 0. + t73;
  t75 = -1.*t5*t23*t14;
  t76 = t6*t22*t35;
  t77 = t75 + t76;
  t78 = -1.*t22*t5*t14;
  t79 = -1.*t6*t23*t35;
  t80 = t78 + t79;
  t81 = t41*t59;
  t82 = -1.*t39*t60;
  t83 = 0. + t81 + t82;
  t84 = t59*t39;
  t85 = t41*t60;
  t86 = 0. + t84 + t85;
  t87 = t2*t23*t14;
  t88 = t22*t17*t35;
  t89 = t87 + t88;
  t90 = t2*t22*t14;
  t91 = -1.*t17*t23*t35;
  t92 = t90 + t91;
  t93 = t59*t52;
  t94 = -1.*t45*t60;
  t95 = 0. + t93 + t94;
  t96 = -1.*t60*t50;
  t97 = t59*t57;
  t98 = -1.*t59*t34*t71;
  t99 = -0.424*t60*t71;
  t100 = -1.*t30*t60*t71;
  t101 = t96 + t97 + t98 + t99 + t100;
  t102 = t59*t45;
  t103 = t52*t60;
  t104 = 0. + t102 + t103;
  t105 = t59*t50;
  t106 = t60*t57;
  t107 = 0.424*t59*t71;
  t108 = t59*t30*t71;
  t109 = -1.*t34*t60*t71;
  t110 = t105 + t106 + t107 + t108 + t109;
  t111 = var[39];
  t112 = var[18];
  t113 = Sin(t112);
  t114 = -1.*t59*t23*t35;
  t115 = -1.*t22*t60*t35;
  t116 = t59*t74*t71;
  t117 = -1.*t72*t60*t71;
  t118 = t114 + t115 + t116 + t117;
  t119 = Cos(t112);
  t120 = -1.*t22*t59*t35;
  t121 = t23*t60*t35;
  t122 = -1.*t72*t59*t71;
  t123 = -1.*t74*t60*t71;
  t124 = t120 + t121 + t122 + t123;
  t125 = 0.05*t113;
  t126 = -1.*t60*t77;
  t127 = t59*t80;
  t128 = -1.*t59*t39*t71;
  t129 = -1.*t41*t60*t71;
  t130 = t126 + t127 + t128 + t129;
  t131 = t59*t77;
  t132 = t60*t80;
  t133 = t41*t59*t71;
  t134 = -1.*t39*t60*t71;
  t135 = t131 + t132 + t133 + t134;
  t136 = -1. + t119;
  t137 = 0.05*t136;
  t138 = -1.*t113*t64;
  t139 = t119*t70;
  t140 = t137 + t125 + t138 + t139;
  t141 = -1.*t119;
  t142 = 1. + t141;
  t143 = 0.05*t142;
  t144 = t119*t64;
  t145 = t113*t70;
  t146 = t143 + t125 + t144 + t145;
  t147 = -1.*t60*t89;
  t148 = t59*t92;
  t149 = -1.*t59*t45*t71;
  t150 = -1.*t52*t60*t71;
  t151 = t147 + t148 + t149 + t150;
  t152 = t59*t89;
  t153 = t60*t92;
  t154 = t59*t52*t71;
  t155 = -1.*t45*t60*t71;
  t156 = t152 + t153 + t154 + t155;
  t157 = t119*t104;
  t158 = t113*t95;
  t159 = 0. + t157 + t158;
  t160 = t119*t86;
  t161 = t113*t83;
  t162 = 0. + t160 + t161;
  t163 = -1.*t113*t86;
  t164 = t119*t83;
  t165 = 0. + t163 + t164;
  t166 = 0.05*t119*t111;
  t167 = -1.*t113*t86*t111;
  t168 = t119*t83*t111;
  t169 = t113*t130;
  t170 = t119*t135;
  t171 = t167 + t168 + t169 + t170;
  t172 = 0.05*t113*t111;
  t173 = -1.*t113*t64*t111;
  t174 = t119*t70*t111;
  t175 = t113*t101;
  t176 = t119*t110;
  t177 = t166 + t172 + t173 + t174 + t175 + t176;
  t178 = -1.*t113*t104;
  t179 = t119*t95;
  t180 = 0. + t178 + t179;
  t181 = -0.05*t113*t111;
  t182 = -1.*t119*t64*t111;
  t183 = -1.*t113*t70*t111;
  t184 = t119*t101;
  t185 = -1.*t113*t110;
  t186 = t166 + t181 + t182 + t183 + t184 + t185;
  t187 = -1.*t113*t104*t111;
  t188 = t119*t95*t111;
  t189 = t113*t151;
  t190 = t119*t156;
  t191 = t187 + t188 + t189 + t190;
  t192 = t59*t74;
  t193 = -1.*t72*t60;
  t194 = 0. + t192 + t193;
  t195 = t72*t59;
  t196 = t74*t60;
  t197 = 0. + t195 + t196;
  t198 = var[17];
  t199 = Sin(t198);
  t200 = Cos(t198);
  t201 = var[38];
  t202 = -1.*t119*t86*t111;
  t203 = -1.*t113*t83*t111;
  t204 = t119*t130;
  t205 = -1.*t113*t135;
  t206 = t202 + t203 + t204 + t205;
  t207 = 0. + t143 + t125 + t144 + t145;
  t208 = 0.089*t199;
  t209 = t10*t199;
  t210 = t200*t140;
  t211 = t208 + t209 + t210;
  t212 = -1.*t200;
  t213 = 1. + t212;
  t214 = -0.089*t213;
  t215 = t200*t10;
  t216 = -1.*t199*t140;
  t217 = t214 + t215 + t216;
  t218 = -1.*t119*t104*t111;
  t219 = -1.*t113*t95*t111;
  t220 = t119*t151;
  t221 = -1.*t113*t156;
  t222 = t218 + t219 + t220 + t221;
  t223 = t6*t199;
  t224 = t200*t180;
  t225 = 0. + t223 + t224;
  t226 = t162*t177;
  t227 = t16*t199;
  t228 = t200*t165;
  t229 = 0. + t227 + t228;
  t230 = t200*t16;
  t231 = -1.*t199*t165;
  t232 = 0. + t230 + t231;
  t233 = -1.*t2*t199*t14;
  t234 = t200*t16*t201;
  t235 = -1.*t199*t165*t201;
  t236 = t200*t206;
  t237 = t233 + t234 + t235 + t236;
  t238 = -1.*t159*t177;
  t239 = t199*t19;
  t240 = 0.089*t200*t201;
  t241 = t200*t10*t201;
  t242 = -1.*t199*t140*t201;
  t243 = t200*t186;
  t244 = t239 + t240 + t241 + t242 + t243;
  t245 = t6*t200;
  t246 = -1.*t199*t180;
  t247 = 0. + t245 + t246;
  t248 = t200*t19;
  t249 = -0.089*t199*t201;
  t250 = -1.*t10*t199*t201;
  t251 = -1.*t200*t140*t201;
  t252 = -1.*t199*t186;
  t253 = t248 + t249 + t250 + t251 + t252;
  t254 = -1.*t5*t199*t14;
  t255 = t6*t200*t201;
  t256 = -1.*t199*t180*t201;
  t257 = t200*t222;
  t258 = t254 + t255 + t256 + t257;
  t259 = var[19];
  t260 = Cos(t259);
  t261 = Sin(t259);
  t262 = 0. + t208 + t209 + t210;
  t263 = -1.*t260;
  t264 = 1. + t263;
  t265 = -0.089*t264;
  t266 = t261*t207;
  t267 = t260*t217;
  t268 = t265 + t266 + t267;
  t269 = -0.089*t261;
  t270 = t260*t207;
  t271 = -1.*t261*t217;
  t272 = t269 + t270 + t271;
  t273 = t229*t244;
  t274 = t261*t162;
  t275 = t260*t232;
  t276 = 0. + t274 + t275;
  t277 = var[40];
  t278 = t260*t162;
  t279 = -1.*t261*t232;
  t280 = 0. + t278 + t279;
  t281 = -1.*t2*t200*t14;
  t282 = -1.*t16*t199*t201;
  t283 = -1.*t200*t165*t201;
  t284 = -1.*t199*t206;
  t285 = t281 + t282 + t283 + t284;
  t286 = -1.*t225*t244;
  t287 = t261*t159;
  t288 = t260*t247;
  t289 = 0. + t287 + t288;
  t290 = -0.089*t261*t277;
  t291 = t260*t207*t277;
  t292 = -1.*t261*t217*t277;
  t293 = t261*t177;
  t294 = t260*t253;
  t295 = t290 + t291 + t292 + t293 + t294;
  t296 = t260*t159;
  t297 = -1.*t261*t247;
  t298 = 0. + t296 + t297;
  t299 = -0.089*t260*t277;
  t300 = -1.*t261*t207*t277;
  t301 = -1.*t260*t217*t277;
  t302 = t260*t177;
  t303 = -1.*t261*t253;
  t304 = t299 + t300 + t301 + t302 + t303;
  t305 = -1.*t200*t5*t14;
  t306 = -1.*t6*t199*t201;
  t307 = -1.*t200*t180*t201;
  t308 = -1.*t199*t222;
  t309 = t305 + t306 + t307 + t308;
  t310 = -1.*t113*t194*t111;
  t311 = -1.*t119*t197*t111;
  t312 = -1.*t113*t118;
  t313 = t119*t124;
  t314 = t310 + t311 + t312 + t313;
  t315 = var[4];
  t316 = t119*t194;
  t317 = -1.*t113*t197;
  t318 = 0. + t316 + t317;
  t319 = Sin(t315);
  t320 = t113*t194;
  t321 = t119*t197;
  t322 = 0. + t320 + t321;
  t323 = -1.*t199*t318;
  t324 = 0. + t323;
  t325 = var[5];
  t326 = var[25];
  t327 = Cos(t315);
  t328 = Sin(t325);
  t329 = t119*t194*t111;
  t330 = -1.*t113*t197*t111;
  t331 = t119*t118;
  t332 = t113*t124;
  t333 = t329 + t330 + t331 + t332;
  t334 = Cos(t325);
  t335 = -1.*t200*t318*t201;
  t336 = -1.*t199*t314;
  t337 = t335 + t336;
  t338 = t261*t322;
  t339 = t260*t324;
  t340 = 0. + t338 + t339;
  t341 = var[26];
  t342 = t260*t322;
  t343 = -1.*t261*t324;
  t344 = 0. + t342 + t343;
  t345 = var[3];
  t346 = t200*t318;
  t347 = 0. + t346;
  t348 = t334*t344;
  t349 = -1.*t340*t328;
  t350 = 0. + t348 + t349;
  t351 = var[24];
  t352 = Sin(t345);
  t353 = t260*t322*t277;
  t354 = -1.*t261*t324*t277;
  t355 = t261*t333;
  t356 = t260*t337;
  t357 = t353 + t354 + t355 + t356;
  t358 = -1.*t261*t322*t277;
  t359 = -1.*t260*t324*t277;
  t360 = t260*t333;
  t361 = -1.*t261*t337;
  t362 = t358 + t359 + t360 + t361;
  t363 = Cos(t345);
  t364 = -1.*t199*t318*t201;
  t365 = t200*t314;
  t366 = t364 + t365;
  t367 = -1.*t328*t357;
  t368 = t334*t362;
  t369 = -1.*t334*t340*t341;
  t370 = -1.*t344*t328*t341;
  t371 = t367 + t368 + t369 + t370;
  t372 = t334*t340;
  t373 = t344*t328;
  t374 = 0. + t372 + t373;
  t375 = t327*t347;
  t376 = -1.*t319*t350;
  t377 = 0. + t375 + t376;
  t378 = t334*t357;
  t379 = t328*t362;
  t380 = t334*t344*t341;
  t381 = -1.*t340*t328*t341;
  t382 = t378 + t379 + t380 + t381;
  t383 = t327*t366;
  t384 = -1.*t347*t319*t326;
  t385 = -1.*t327*t350*t326;
  t386 = -1.*t319*t371;
  t387 = t383 + t384 + t385 + t386;
  t388 = -1.*t262*t225;
  t389 = t260*t162*t277;
  t390 = -1.*t261*t232*t277;
  t391 = t261*t171;
  t392 = t260*t285;
  t393 = t389 + t390 + t391 + t392;
  t394 = -1.*t261*t162*t277;
  t395 = -1.*t260*t232*t277;
  t396 = t260*t171;
  t397 = -1.*t261*t285;
  t398 = t394 + t395 + t396 + t397;
  t399 = t262*t229;
  t400 = t334*t272;
  t401 = -1.*t268*t328;
  t402 = 0. + t400 + t401;
  t403 = t334*t268;
  t404 = t272*t328;
  t405 = 0. + t403 + t404;
  t406 = t260*t159*t277;
  t407 = -1.*t261*t247*t277;
  t408 = t261*t191;
  t409 = t260*t309;
  t410 = t406 + t407 + t408 + t409;
  t411 = -1.*t261*t159*t277;
  t412 = -1.*t260*t247*t277;
  t413 = t260*t191;
  t414 = -1.*t261*t309;
  t415 = t411 + t412 + t413 + t414;
  t416 = t334*t289;
  t417 = t298*t328;
  t418 = 0. + t416 + t417;
  t419 = t262*t237;
  t420 = t334*t276;
  t421 = t280*t328;
  t422 = 0. + t420 + t421;
  t423 = t334*t280;
  t424 = -1.*t276*t328;
  t425 = 0. + t423 + t424;
  t426 = t334*t393;
  t427 = t328*t398;
  t428 = t334*t280*t341;
  t429 = -1.*t276*t328*t341;
  t430 = t426 + t427 + t428 + t429;
  t431 = -1.*t262*t258;
  t432 = t334*t295;
  t433 = t328*t304;
  t434 = t334*t272*t341;
  t435 = -1.*t268*t328*t341;
  t436 = t432 + t433 + t434 + t435;
  t437 = t334*t298;
  t438 = -1.*t289*t328;
  t439 = 0. + t437 + t438;
  t440 = -1.*t328*t295;
  t441 = t334*t304;
  t442 = -1.*t334*t268*t341;
  t443 = -1.*t272*t328*t341;
  t444 = t440 + t441 + t442 + t443;
  t445 = t334*t410;
  t446 = t328*t415;
  t447 = t334*t298*t341;
  t448 = -1.*t289*t328*t341;
  t449 = t445 + t446 + t447 + t448;
  t450 = -1.*t405*t418;
  t451 = -1.*t328*t393;
  t452 = t334*t398;
  t453 = -1.*t334*t276*t341;
  t454 = -1.*t280*t328*t341;
  t455 = t451 + t452 + t453 + t454;
  t456 = t405*t422;
  t457 = t262*t319;
  t458 = t327*t402;
  t459 = 0. + t457 + t458;
  t460 = t327*t262;
  t461 = -1.*t319*t402;
  t462 = 0. + t460 + t461;
  t463 = -1.*t328*t410;
  t464 = t334*t415;
  t465 = -1.*t334*t289*t341;
  t466 = -1.*t298*t328*t341;
  t467 = t463 + t464 + t465 + t466;
  t468 = t225*t319;
  t469 = t327*t439;
  t470 = 0. + t468 + t469;
  t471 = t422*t436;
  t472 = t405*t430;
  t473 = t229*t319;
  t474 = t327*t425;
  t475 = 0. + t473 + t474;
  t476 = t327*t229;
  t477 = -1.*t319*t425;
  t478 = 0. + t476 + t477;
  t479 = t319*t237;
  t480 = t327*t229*t326;
  t481 = -1.*t319*t425*t326;
  t482 = t327*t455;
  t483 = t479 + t480 + t481 + t482;
  t484 = -1.*t418*t436;
  t485 = -1.*t405*t449;
  t486 = t319*t244;
  t487 = t327*t262*t326;
  t488 = -1.*t319*t402*t326;
  t489 = t327*t444;
  t490 = t486 + t487 + t488 + t489;
  t491 = t327*t225;
  t492 = -1.*t319*t439;
  t493 = 0. + t491 + t492;
  t494 = t327*t244;
  t495 = -1.*t262*t319*t326;
  t496 = -1.*t327*t402*t326;
  t497 = -1.*t319*t444;
  t498 = t494 + t495 + t496 + t497;
  t499 = t319*t258;
  t500 = t327*t225*t326;
  t501 = -1.*t319*t439*t326;
  t502 = t327*t467;
  t503 = t499 + t500 + t501 + t502;
  t504 = t13*t6;
  t505 = 0. + t504 + t20;
  t506 = -1.*t13*t17;
  t507 = 0. + t24 + t506;
  t508 = t140*t165;
  t509 = t146*t162;
  t510 = t20 + t508 + t509;
  t511 = -1.*t140*t180;
  t512 = -1.*t146*t159;
  t513 = t24 + t511 + t512;
  t514 = t86*t64;
  t515 = t70*t83;
  t516 = t20 + t514 + t515;
  t517 = -1.*t104*t64;
  t518 = -1.*t70*t95;
  t519 = t24 + t517 + t518;
  t520 = t207*t162;
  t521 = t211*t229;
  t522 = t217*t232;
  t523 = t520 + t521 + t522;
  t524 = -1.*t207*t159;
  t525 = -1.*t211*t225;
  t526 = -1.*t217*t247;
  t527 = t524 + t525 + t526;
  t528 = t41*t30;
  t529 = t34*t39;
  t530 = t20 + t528 + t529;
  t531 = -1.*t52*t30;
  t532 = -1.*t34*t45;
  t533 = t24 + t531 + t532;
  t534 = t459*t475;
  t535 = t462*t478;
  t536 = t456 + t534 + t535;
  t537 = -1.*t459*t470;
  t538 = -1.*t462*t493;
  t539 = t450 + t537 + t538;
  t540 = t402*t425;
  t541 = t399 + t540 + t456;
  t542 = -1.*t402*t439;
  t543 = t388 + t542 + t450;
  t544 = t268*t276;
  t545 = t272*t280;
  t546 = t399 + t544 + t545;
  t547 = -1.*t268*t289;
  t548 = -1.*t272*t298;
  t549 = t388 + t547 + t548;
  t550 = t322*t177;
  t551 = -1.*t162*t177;
  t552 = t347*t244;
  t553 = -1.*t229*t244;
  t554 = var[21];
  t555 = -1.*t262*t229;
  t556 = t347*t262;
  t557 = t262*t366;
  t558 = -1.*t262*t237;
  t559 = var[23];
  t560 = t327*t258;
  t561 = -1.*t225*t319*t326;
  t562 = -1.*t327*t439*t326;
  t563 = -1.*t319*t467;
  t564 = t560 + t561 + t562 + t563;
  t565 = var[22];
  t566 = -1.*t405*t422;
  t567 = t319*t366;
  t568 = t327*t347*t326;
  t569 = -1.*t319*t350*t326;
  t570 = t327*t371;
  t571 = t567 + t568 + t569 + t570;
  t572 = t374*t405;
  t573 = t347*t319;
  t574 = t327*t350;
  t575 = 0. + t573 + t574;
  t576 = t405*t382;
  t577 = t374*t436;
  t578 = -1.*t422*t436;
  t579 = -1.*t405*t430;
  t580 = t327*t237;
  t581 = -1.*t229*t319*t326;
  t582 = -1.*t327*t425*t326;
  t583 = -1.*t319*t455;
  t584 = t580 + t581 + t582 + t583;
  t585 = var[58];
  t586 = t318*t140;
  t587 = t322*t146;
  t588 = 0. + t586 + t587;
  t589 = -1.*t16*t10;
  t590 = -1.*t140*t165;
  t591 = -1.*t146*t162;
  t592 = t589 + t590 + t591;
  t593 = var[59];
  t594 = t197*t64;
  t595 = t194*t70;
  t596 = 0. + t594 + t595;
  t597 = var[60];
  t598 = t322*t207;
  t599 = t347*t211;
  t600 = t324*t217;
  t601 = t598 + t599 + t600;
  t602 = -1.*t207*t162;
  t603 = -1.*t211*t229;
  t604 = -1.*t217*t232;
  t605 = t602 + t603 + t604;
  t606 = var[61];
  t607 = t74*t30;
  t608 = t72*t34;
  t609 = 0. + t607 + t608;
  t610 = var[62];
  t611 = var[42];
  t612 = var[43];
  t613 = var[44];
  t614 = t575*t459;
  t615 = t377*t462;
  t616 = t572 + t614 + t615;
  t617 = -1.*t459*t475;
  t618 = -1.*t462*t478;
  t619 = t566 + t617 + t618;
  t620 = var[45];
  t621 = t350*t402;
  t622 = t556 + t621 + t572;
  t623 = -1.*t402*t425;
  t624 = t555 + t623 + t566;
  t625 = var[46];
  t626 = t340*t268;
  t627 = t344*t272;
  t628 = t556 + t626 + t627;
  t629 = -1.*t268*t276;
  t630 = -1.*t272*t280;
  t631 = t555 + t629 + t630;
  t632 = var[47];
  t633 = -1.*t322*t177;
  t634 = t159*t177;
  t635 = -1.*t347*t244;
  t636 = t225*t244;
  t637 = t262*t225;
  t638 = -1.*t347*t262;
  t639 = -1.*t262*t366;
  t640 = t262*t258;
  t641 = t405*t418;
  t642 = -1.*t374*t405;
  t643 = -1.*t405*t382;
  t644 = -1.*t374*t436;
  t645 = t418*t436;
  t646 = t405*t449;
  t647 = -1.*t318*t140;
  t648 = -1.*t322*t146;
  t649 = 0. + t647 + t648;
  t650 = t6*t10;
  t651 = t140*t180;
  t652 = t146*t159;
  t653 = t650 + t651 + t652;
  t654 = -1.*t197*t64;
  t655 = -1.*t194*t70;
  t656 = 0. + t654 + t655;
  t657 = -1.*t322*t207;
  t658 = -1.*t347*t211;
  t659 = -1.*t324*t217;
  t660 = t657 + t658 + t659;
  t661 = t207*t159;
  t662 = t211*t225;
  t663 = t217*t247;
  t664 = t661 + t662 + t663;
  t665 = -1.*t74*t30;
  t666 = -1.*t72*t34;
  t667 = 0. + t665 + t666;
  t668 = -1.*t575*t459;
  t669 = -1.*t377*t462;
  t670 = t642 + t668 + t669;
  t671 = t459*t470;
  t672 = t462*t493;
  t673 = t641 + t671 + t672;
  t674 = -1.*t350*t402;
  t675 = t638 + t674 + t642;
  t676 = t402*t439;
  t677 = t637 + t676 + t641;
  t678 = -1.*t340*t268;
  t679 = -1.*t344*t272;
  t680 = t638 + t678 + t679;
  t681 = t268*t289;
  t682 = t272*t298;
  t683 = t637 + t681 + t682;
  t684 = var[57];
  p_output1[0]=0. + t201*(0.089*t314 + t159*(t146*t171 + t165*t186 + t140*t206 + t226 + t36 + t37) + t162*(-1.*t180*t186 - 1.*t146*t191 - 1.*t140*t222 + t238 + t42 + t43) + t191*t510 + t171*t513) + t277*(t225*(t171*t207 + t226 + t211*t237 + t232*t253 + t273 + t217*t285) + t229*(-1.*t191*t207 + t238 - 1.*t247*t253 - 1.*t211*t258 + t286 - 1.*t217*t309) - 0.089*t333 + t258*t523 + t237*t527) + t326*(t418*(t273 + t419 + t425*t444 + t402*t455 + t471 + t472) + t422*(t286 + t431 - 1.*t439*t444 - 1.*t402*t467 + t484 + t485) + t449*t541 + t430*t543) + t341*(t225*(t273 + t276*t295 + t280*t304 + t268*t393 + t272*t398 + t419) + t229*(t286 - 1.*t289*t295 - 1.*t298*t304 - 1.*t268*t410 - 1.*t272*t415 + t431) + t258*t546 + t237*t549) + (t351*t363*t374 - 1.*t351*t352*t377 + t352*t382 + t363*t387)*t559 + (-1.*t351*t352*t374 - 1.*t351*t363*t377 + t363*t382 - 1.*t352*t387)*t565 + t554*t571 + t351*(t503*t536 + t483*t539 + t475*(t484 + t485 - 1.*t470*t490 - 1.*t493*t498 - 1.*t459*t503 - 1.*t462*t564) + t470*(t471 + t472 + t459*t483 + t475*t490 + t478*t498 + t462*t584)) + (0. + 0.089*t318 + t159*t510 + t162*t513)*t593 + t585*(0.846 + t16*t507 + t505*t6) + t597*(0. + 0.05*t194 + 0.05*t197 + t16*t519 + t516*t6) + t35*(t16*(-1.*t13*t14*t2 + t42 + t43 - 0.07645000000000002*t14*t17*t5) - 1.*t14*t5*t505 - 1.*t14*t2*t507 + t6*(t36 + t37 - 1.*t13*t14*t5 + 0.07645000000000002*t14*t5*t6)) + (-0.089*t322 + t225*t523 + t229*t527)*t606 + t575*t611 + (0. + t363*t374 - 1.*t352*t377)*t612 + (0. + t352*t374 + t363*t377)*t613 + (t470*t536 + t475*t539)*t620 + (t418*t541 + t422*t543)*t625 + (t225*t546 + t229*t549)*t632 + t610*(0. + t16*t533 + t530*t6 + 0.424*t72) + t71*(-0.424*t23*t35 - 1.*t14*t5*t530 - 1.*t14*t2*t533 + t6*(t36 + t37 + t39*t50 + t41*t57 + t34*t77 + t30*t80) + t16*(t42 + t43 - 1.*t45*t50 - 1.*t52*t57 - 1.*t34*t89 - 1.*t30*t92)) + t111*(0.05*t118 + 0.05*t124 - 1.*t14*t5*t516 - 1.*t14*t2*t519 + t6*(t36 + t37 + t135*t64 + t130*t70 + t101*t83 + t110*t86) + t16*(-1.*t104*t110 + t42 + t43 - 1.*t156*t64 - 1.*t151*t70 - 1.*t101*t95));
  p_output1[1]=-0.1728*t14*t2*t35 + t503*t554 + t559*(t351*t363*t418 + t352*t449 - 1.*t351*t352*t493 + t363*t564) + (-1.*t351*t352*t418 + t363*t449 - 1.*t351*t363*t493 - 1.*t352*t564)*t565 + (0. + 0.1728*t16)*t585 + t201*(0.089*t222 + t162*(t140*t314 + t186*t318 + t146*t333 + t550) + t322*(-1.*t146*t171 - 1.*t165*t186 - 1.*t16*t19 + t10*t14*t2 - 1.*t140*t206 + t551) + t171*t588 + t333*t592) + (0.089*t180 + t162*t588 + t322*t592)*t593 + t277*(-0.089*t191 + t229*(t253*t324 + t207*t333 + t217*t337 + t211*t366 + t550 + t552) + t347*(-1.*t171*t207 - 1.*t211*t237 - 1.*t232*t253 - 1.*t217*t285 + t551 + t553) + t237*t601 + t366*t605) + (-0.089*t159 + t229*t601 + t347*t605)*t606 + (0. + 0.424*t45 + t16*t609)*t610 + t470*t611 + (0. + t363*t418 - 1.*t352*t493)*t612 + (0. + t352*t418 + t363*t493)*t613 + t351*(t475*(t387*t462 + t377*t498 + t459*t571 + t490*t575 + t576 + t577) + t575*(-1.*t459*t483 - 1.*t475*t490 - 1.*t478*t498 + t578 + t579 - 1.*t462*t584) + t483*t616 + t571*t619) + (t475*t616 + t575*t619)*t620 + t326*(t422*(t371*t402 + t350*t444 + t552 + t557 + t576 + t577) + t374*(-1.*t425*t444 - 1.*t402*t455 + t553 + t558 + t578 + t579) + t430*t622 + t382*t624) + (t422*t622 + t374*t624)*t625 + t341*(t229*(t295*t340 + t304*t344 + t268*t357 + t272*t362 + t552 + t557) + t347*(-1.*t276*t295 - 1.*t280*t304 - 1.*t268*t393 - 1.*t272*t398 + t553 + t558) + t237*t628 + t366*t631) + (t229*t628 + t347*t631)*t632 + 0.07645000000000002*t684 + t111*(0.05*t151 + 0.05*t156 - 1.*t14*t2*t596 + t16*(t101*t194 + t110*t197 + t118*t64 + t124*t70)) + t71*(-1.*t14*t2*t609 + t16*(-1.*t22*t30*t35 - 1.*t23*t34*t35 + t50*t72 + t57*t74) + 0.424*t89) + t597*(0. + 0.05*t104 + t16*t596 + 0.05*t95);
  p_output1[2]=0. + 0.1728*t14*t35*t5 + t483*t554 + t565*(-1.*t351*t352*t422 + t363*t430 - 1.*t351*t363*t478 - 1.*t352*t584) + t559*(t351*t363*t422 + t352*t430 - 1.*t351*t352*t478 + t363*t584) + t585*(0. - 0.1728*t6) + t475*t611 + (0. + t363*t422 - 1.*t352*t478)*t612 + (0. + t352*t422 + t363*t478)*t613 + t593*(0.089*t165 + t159*t649 + t322*t653) + t201*(0.089*t206 + t159*(-1.*t140*t314 - 1.*t186*t318 - 1.*t146*t333 + t633) + t322*(t180*t186 + t146*t191 + t140*t222 - 1.*t10*t14*t5 + t19*t6 + t634) + t191*t649 + t333*t653) + t606*(-0.089*t162 + t225*t660 + t347*t664) + t277*(-0.089*t171 + t225*(-1.*t253*t324 - 1.*t207*t333 - 1.*t217*t337 - 1.*t211*t366 + t633 + t635) + t347*(t191*t207 + t247*t253 + t211*t258 + t217*t309 + t634 + t636) + t258*t660 + t366*t664) + t610*(0. + 0.424*t39 + t6*t667) + t351*(t470*(-1.*t387*t462 - 1.*t377*t498 - 1.*t459*t571 - 1.*t490*t575 + t643 + t644) + t575*(t470*t490 + t493*t498 + t459*t503 + t462*t564 + t645 + t646) + t503*t670 + t571*t673) + t620*(t470*t670 + t575*t673) + t625*(t418*t675 + t374*t677) + t326*(t418*(-1.*t371*t402 - 1.*t350*t444 + t635 + t639 + t643 + t644) + t374*(t439*t444 + t402*t467 + t636 + t640 + t645 + t646) + t449*t675 + t382*t677) + t632*(t225*t680 + t347*t683) + t341*(t225*(-1.*t295*t340 - 1.*t304*t344 - 1.*t268*t357 - 1.*t272*t362 + t635 + t639) + t347*(t289*t295 + t298*t304 + t268*t410 + t272*t415 + t636 + t640) + t258*t680 + t366*t683) + t111*(0.05*t130 + 0.05*t135 - 1.*t14*t5*t656 + t6*(-1.*t101*t194 - 1.*t110*t197 - 1.*t118*t64 - 1.*t124*t70)) + t71*(-1.*t14*t5*t667 + t6*(t22*t30*t35 + t23*t34*t35 - 1.*t50*t72 - 1.*t57*t74) + 0.424*t77) + t597*(0. + t6*t656 + 0.05*t83 + 0.05*t86);
  p_output1[3]=0. + t201*t333 + t277*t366 + t341*t366 + t326*t382 + t351*t571 + t322*t593 + t347*t606 + t575*t620 + t374*t625 + t347*t632 + t684;
  p_output1[4]=0. + t191*t201 + t258*t277 + t258*t341 + t326*t449 - 1.*t111*t14*t5 - 1.*t14*t35*t5 + t351*t503 + t159*t593 + t585*t6 + t597*t6 + t225*t606 + t6*t610 + t470*t620 + t418*t625 + t225*t632 - 1.*t14*t5*t71;
  p_output1[5]=0. - 1.*t111*t14*t2 + t171*t201 + t237*t277 + t237*t341 - 1.*t14*t2*t35 + t326*t430 + t351*t483 + t16*t585 + t162*t593 + t16*t597 + t229*t606 + t16*t610 + t475*t620 + t422*t625 + t229*t632 - 1.*t14*t2*t71;
  p_output1[6]=var[48];
  p_output1[7]=var[49];
  p_output1[8]=var[50];
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
    ( !(mrows == 63 && ncols == 1) && 
      !(mrows == 1 && ncols == 63))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "f_holAcc_RightTL3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void f_holAcc_RightTL3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE
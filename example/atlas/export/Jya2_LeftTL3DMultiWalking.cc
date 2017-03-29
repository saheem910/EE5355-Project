/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:29:34 GMT-04:00
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
  t1 = q[17];
  t2 = q[3];
  t3 = Sin(t2);
  t4 = q[4];
  t5 = q[5];
  t6 = q[19];
  t7 = Cos(t2);
  t8 = Cos(t5);
  t9 = Sin(t4);
  t10 = Sin(t5);
  t11 = q[15];
  t12 = Cos(t6);
  t13 = t8*t3*t9;
  t14 = t7*t10;
  t15 = t13 + t14;
  t16 = Sin(t6);
  t17 = t7*t8;
  t18 = -1.*t3*t9*t10;
  t19 = t17 + t18;
  t20 = q[18];
  t21 = Cos(t1);
  t22 = Cos(t4);
  t23 = Sin(t1);
  t24 = -1.*t16*t15;
  t25 = t12*t19;
  t26 = t24 + t25;
  t27 = q[20];
  t28 = Cos(t20);
  t29 = t12*t15;
  t30 = t16*t19;
  t31 = t29 + t30;
  t32 = Sin(t20);
  t33 = -1.*t21*t22*t3;
  t34 = -1.*t23*t26;
  t35 = t33 + t34;
  t36 = q[16];
  t37 = Cos(t27);
  t38 = t32*t31;
  t39 = t28*t35;
  t40 = t38 + t39;
  t41 = Sin(t27);
  t42 = t28*t31;
  t43 = -1.*t32*t35;
  t44 = t42 + t43;
  t45 = Cos(t36);
  t46 = t7*t8*t9;
  t47 = -1.*t3*t10;
  t48 = t46 + t47;
  t49 = -1.*t8*t3;
  t50 = -1.*t7*t9*t10;
  t51 = t49 + t50;
  t52 = t12*t48;
  t53 = t16*t51;
  t54 = t52 + t53;
  t55 = -1.*t21*t7*t22;
  t56 = -1.*t16*t48;
  t57 = t12*t51;
  t58 = t56 + t57;
  t59 = -1.*t23*t58;
  t60 = t55 + t59;
  t61 = Sin(t36);
  t62 = t32*t54;
  t63 = t28*t60;
  t64 = t62 + t63;
  t65 = t28*t54;
  t66 = -1.*t32*t60;
  t67 = t65 + t66;
  t68 = Cos(t11);
  t69 = Sin(t11);
  t70 = t7*t22*t8*t16;
  t71 = t12*t7*t22*t10;
  t72 = t70 + t71;
  t73 = -1.*t12*t7*t22*t8;
  t74 = t7*t22*t16*t10;
  t75 = t73 + t74;
  t76 = -1.*t21*t7*t9;
  t77 = -1.*t23*t72;
  t78 = t76 + t77;
  t79 = t32*t75;
  t80 = t28*t78;
  t81 = t79 + t80;
  t82 = t28*t75;
  t83 = -1.*t32*t78;
  t84 = t82 + t83;
  t85 = t12*t22*t8*t3;
  t86 = -1.*t22*t16*t3*t10;
  t87 = t85 + t86;
  t88 = t21*t3*t9;
  t89 = -1.*t22*t8*t16*t3;
  t90 = -1.*t12*t22*t3*t10;
  t91 = t89 + t90;
  t92 = -1.*t23*t91;
  t93 = t88 + t92;
  t94 = t32*t87;
  t95 = t28*t93;
  t96 = t94 + t95;
  t97 = t28*t87;
  t98 = -1.*t32*t93;
  t99 = t97 + t98;
  t100 = t8*t3;
  t101 = t7*t9*t10;
  t102 = t100 + t101;
  t103 = -1.*t16*t102;
  t104 = t52 + t103;
  t105 = t16*t48;
  t106 = t12*t102;
  t107 = t105 + t106;
  t108 = t32*t107;
  t109 = -1.*t28*t23*t104;
  t110 = t108 + t109;
  t111 = t28*t107;
  t112 = t23*t32*t104;
  t113 = t111 + t112;
  t114 = -1.*t8*t3*t9;
  t115 = -1.*t7*t10;
  t116 = t114 + t115;
  t117 = t16*t116;
  t118 = t117 + t25;
  t119 = t12*t116;
  t120 = -1.*t16*t19;
  t121 = t119 + t120;
  t122 = t32*t118;
  t123 = -1.*t28*t23*t121;
  t124 = t122 + t123;
  t125 = t28*t118;
  t126 = t23*t32*t121;
  t127 = t125 + t126;
  t128 = -1.*t7*t8*t9;
  t129 = t3*t10;
  t130 = t128 + t129;
  t131 = -1.*t16*t130;
  t132 = t131 + t106;
  t133 = t12*t130;
  t134 = t16*t102;
  t135 = t133 + t134;
  t136 = t21*t7*t22;
  t137 = -1.*t23*t132;
  t138 = t136 + t137;
  t139 = t32*t135;
  t140 = t28*t138;
  t141 = t139 + t140;
  t142 = t28*t135;
  t143 = -1.*t32*t138;
  t144 = t142 + t143;
  t145 = -1.*t41*t141;
  t146 = t37*t144;
  t147 = t145 + t146;
  t148 = t37*t141;
  t149 = t41*t144;
  t150 = t148 + t149;
  t151 = -1.*t41*t40;
  t152 = t37*t44;
  t153 = t151 + t152;
  t154 = t37*t40;
  t155 = t41*t44;
  t156 = t154 + t155;
  t157 = -1.*t7*t22*t23;
  t158 = -1.*t21*t132;
  t159 = t157 + t158;
  t160 = t22*t23*t3;
  t161 = -1.*t21*t26;
  t162 = t160 + t161;
  t163 = -1.*t32*t135;
  t164 = -1.*t28*t138;
  t165 = t163 + t164;
  t166 = -1.*t32*t31;
  t167 = -1.*t28*t35;
  t168 = t166 + t167;
  t169 = -1.*t12*t130;
  t170 = t169 + t103;
  t171 = t32*t132;
  t172 = -1.*t28*t23*t170;
  t173 = t171 + t172;
  t174 = t28*t132;
  t175 = t23*t32*t170;
  t176 = t174 + t175;
  t177 = -1.*t12*t15;
  t178 = t177 + t120;
  t179 = t32*t26;
  t180 = -1.*t28*t23*t178;
  t181 = t179 + t180;
  t182 = t28*t26;
  t183 = t23*t32*t178;
  t184 = t182 + t183;
  t185 = t45*t147;
  t186 = -1.*t41*t144;
  t187 = -1.*t61*t153;
  t188 = -1.*t41*t44;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0. + 0.15240000000000004*((t21*t26 - 1.*t22*t23*t3)*t68 + (t156*t45 + t153*t61)*t69);
  p_output1[43]=0. - 0.2548*(t45*(-1.*t41*t64 + t37*t67) - 1.*t61*(t37*t64 + t41*t67));
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=1.00394560743416;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0. + 0.15240000000000004*(t69*(t61*(-1.*t41*t81 + t37*t84) + t45*(t37*t81 + t41*t84)) + t68*(t21*t72 - 1.*t23*t7*t9));
  p_output1[54]=0. - 0.2548*(t45*(-1.*t41*t96 + t37*t99) - 1.*t61*(t37*t96 + t41*t99));
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0. + 0.15240000000000004*(t104*t21*t68 + ((t110*t37 + t113*t41)*t45 + (t113*t37 - 1.*t110*t41)*t61)*t69);
  p_output1[65]=0. - 0.2548*((t127*t37 - 1.*t124*t41)*t45 - 1.*(t124*t37 + t127*t41)*t61);
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
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
  p_output1[88]=0;
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
  p_output1[101]=1.;
  p_output1[102]=-1.;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=-1.;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=-1.;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=1.;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=-1.;
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
  p_output1[147]=1.;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=1.;
  p_output1[155]=-1.;
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
  p_output1[174]=0. + 0.15240000000000004*((t150*t45 + t147*t61)*t68 - 1.*t69*(t132*t21 + t22*t23*t7));
  p_output1[175]=0.;
  p_output1[176]=0;
  p_output1[177]=0;
  p_output1[178]=0;
  p_output1[179]=0;
  p_output1[180]=0;
  p_output1[181]=0;
  p_output1[182]=0;
  p_output1[183]=1.;
  p_output1[184]=0;
  p_output1[185]=0. + 0.15240000000000004*(t185 - 1.*t150*t61)*t69;
  p_output1[186]=0. - 0.2548*(t187 - 1.*t156*t45);
  p_output1[187]=0;
  p_output1[188]=0;
  p_output1[189]=0;
  p_output1[190]=0;
  p_output1[191]=0;
  p_output1[192]=0;
  p_output1[193]=0;
  p_output1[194]=0;
  p_output1[195]=-1.;
  p_output1[196]=0. + 0.15240000000000004*(t138*t68 + ((t159*t28*t37 - 1.*t159*t32*t41)*t45 + (-1.*t159*t32*t37 - 1.*t159*t28*t41)*t61)*t69);
  p_output1[197]=0. - 0.2548*((-1.*t162*t32*t37 - 1.*t162*t28*t41)*t45 - 1.*(t162*t28*t37 - 1.*t162*t32*t41)*t61);
  p_output1[198]=0;
  p_output1[199]=0;
  p_output1[200]=0;
  p_output1[201]=0;
  p_output1[202]=0;
  p_output1[203]=0;
  p_output1[204]=1.00394560743416;
  p_output1[205]=0;
  p_output1[206]=0;
  p_output1[207]=0. + 0.15240000000000004*((t146 + t165*t41)*t45 + (t186 + t165*t37)*t61)*t69;
  p_output1[208]=0. - 0.2548*((t188 + t168*t37)*t45 - 1.*(t152 + t168*t41)*t61);
  p_output1[209]=0;
  p_output1[210]=0;
  p_output1[211]=0;
  p_output1[212]=0;
  p_output1[213]=0;
  p_output1[214]=0;
  p_output1[215]=0;
  p_output1[216]=0;
  p_output1[217]=0;
  p_output1[218]=0. + 0.15240000000000004*(t170*t21*t68 + ((t173*t37 + t176*t41)*t45 + (t176*t37 - 1.*t173*t41)*t61)*t69);
  p_output1[219]=0. - 0.2548*((t184*t37 - 1.*t181*t41)*t45 - 1.*(t181*t37 + t184*t41)*t61);
  p_output1[220]=0;
  p_output1[221]=0;
  p_output1[222]=0;
  p_output1[223]=0;
  p_output1[224]=0;
  p_output1[225]=1.;
  p_output1[226]=0.530150753768844;
  p_output1[227]=0;
  p_output1[228]=0;
  p_output1[229]=0. + 0.15240000000000004*(t185 + (t186 - 1.*t141*t37)*t61)*t69;
  p_output1[230]=0. - 0.2548*(t187 + (t188 - 1.*t37*t40)*t45);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 21, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,q);


}

#else // MATLAB_MEX_FILE

#include "Jya2_LeftTL3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void Jya2_LeftTL3DMultiWalking_raw(double *p_output1, const double *q)
{
  // Call Subroutines
  output1(p_output1, q);

}

}
}

#endif // MATLAB_MEX_FILE

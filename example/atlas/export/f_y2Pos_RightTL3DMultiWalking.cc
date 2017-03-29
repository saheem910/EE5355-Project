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
  t1 = var[22];
  t2 = -1.*t1;
  t3 = var[20];
  t4 = var[21];
  t5 = t4 + t2;
  t6 = 1/t5;
  t7 = var[16];
  t8 = 0.07645*t7;
  t9 = var[18];
  t10 = 0.87245*t9;
  t11 = 0.49845*t3;
  t12 = var[4];
  t13 = 0.87245*t12;
  t14 = t2 + t8 + t10 + t11 + t13;
  t15 = -1.*t6*t14;
  t16 = 1. + t15;
  t17 = Power(t16,6);
  t18 = Power(t16,5);
  t19 = Power(t5,-2);
  t20 = Power(t16,4);
  t21 = Power(t14,2);
  t22 = Power(t5,-3);
  t23 = Power(t16,3);
  t24 = Power(t14,3);
  t25 = Power(t5,-4);
  t26 = Power(t16,2);
  t27 = Power(t14,4);
  t28 = Power(t5,-5);
  t29 = Power(t14,5);
  t30 = Power(t5,-6);
  t31 = Power(t14,6);
  t32 = var[15];
  t33 = var[14];
  t34 = var[17];
  t35 = var[11];
  t36 = var[3];
  t37 = Cos(t36);
  t38 = var[5];
  t39 = var[13];
  t40 = Cos(t38);
  t41 = Sin(t36);
  t42 = Sin(t12);
  t43 = Sin(t38);
  t44 = var[9];
  t45 = var[10];
  t46 = var[12];
  t47 = Cos(t39);
  t48 = -1.*t37*t40*t42;
  t49 = t41*t43;
  t50 = t48 + t49;
  t51 = Sin(t39);
  t52 = t40*t41;
  t53 = t37*t42*t43;
  t54 = t52 + t53;
  t55 = Cos(t35);
  t56 = Cos(t12);
  t57 = Sin(t35);
  t58 = -1.*t51*t50;
  t59 = t47*t54;
  t60 = t58 + t59;
  t61 = Cos(t46);
  t62 = t47*t50;
  t63 = t51*t54;
  t64 = t62 + t63;
  t65 = Sin(t46);
  t66 = t55*t37*t56;
  t67 = -1.*t57*t60;
  t68 = t66 + t67;
  t69 = Cos(t33);
  t70 = t65*t64;
  t71 = t61*t68;
  t72 = t70 + t71;
  t73 = Sin(t33);
  t74 = t61*t64;
  t75 = -1.*t65*t68;
  t76 = t74 + t75;
  t77 = Cos(t45);
  t78 = t40*t41*t42;
  t79 = t37*t43;
  t80 = t78 + t79;
  t81 = t37*t40;
  t82 = -1.*t41*t42*t43;
  t83 = t81 + t82;
  t84 = t47*t80;
  t85 = t51*t83;
  t86 = t84 + t85;
  t87 = -1.*t55*t56*t41;
  t88 = -1.*t51*t80;
  t89 = t47*t83;
  t90 = t88 + t89;
  t91 = -1.*t57*t90;
  t92 = t87 + t91;
  t93 = Sin(t45);
  t94 = t65*t86;
  t95 = t61*t92;
  t96 = t94 + t95;
  t97 = t61*t86;
  t98 = -1.*t65*t92;
  t99 = t97 + t98;
  p_output1[0]=t3 - 1.*t17*var[23] - 6.*t14*t18*t6*var[24] - 15.*t19*t20*t21*var[25] - 20.*t22*t23*t24*var[26] - 15.*t25*t26*t27*var[27] - 6.*t16*t28*t29*var[28] - 1.*t30*t31*var[29];
  p_output1[1]=-1.*t3 - 1.*t7 - 1.*t9 - 1.*t17*var[30] - 6.*t14*t18*t6*var[31] - 15.*t19*t20*t21*var[32] - 20.*t22*t23*t24*var[33] - 15.*t25*t26*t27*var[34] - 6.*t16*t28*t29*var[35] - 1.*t30*t31*var[36];
  p_output1[2]=t32 - 1.*t17*var[37] - 6.*t14*t18*t6*var[38] - 15.*t19*t20*t21*var[39] - 20.*t22*t23*t24*var[40] - 15.*t25*t26*t27*var[41] - 6.*t16*t28*t29*var[42] - 1.*t30*t31*var[43];
  p_output1[3]=-1.*t32 - 1.*t34 - 1.*t17*var[44] - 6.*t14*t18*t6*var[45] - 15.*t19*t20*t21*var[46] - 20.*t22*t23*t24*var[47] - 15.*t25*t26*t27*var[48] - 6.*t16*t28*t29*var[49] - 1.*t30*t31*var[50];
  p_output1[4]=var[19] - 1.*t17*var[51] - 6.*t14*t18*t6*var[52] - 15.*t19*t20*t21*var[53] - 20.*t22*t23*t24*var[54] - 15.*t25*t26*t27*var[55] - 6.*t16*t28*t29*var[56] - 1.*t30*t31*var[57];
  p_output1[5]=t33 - 1.*t17*var[58] - 6.*t14*t18*t6*var[59] - 15.*t19*t20*t21*var[60] - 20.*t22*t23*t24*var[61] - 15.*t25*t26*t27*var[62] - 6.*t16*t28*t29*var[63] - 1.*t30*t31*var[64];
  p_output1[6]=1.00394560743416*t12 + 0.530150753768844*t33 + 1.00394560743416*t46 - 1.*t17*var[65] - 6.*t14*t18*t6*var[66] - 15.*t19*t20*t21*var[67] - 20.*t22*t23*t24*var[68] - 15.*t25*t26*t27*var[69] - 6.*t16*t28*t29*var[70] - 1.*t30*t31*var[71];
  p_output1[7]=t45 - 1.*t17*var[72] - 6.*t14*t18*t6*var[73] - 15.*t19*t20*t21*var[74] - 20.*t22*t23*t24*var[75] - 15.*t25*t26*t27*var[76] - 6.*t16*t28*t29*var[77] - 1.*t30*t31*var[78];
  p_output1[8]=t34 - 1.*t35 - 1.*t17*var[79] - 6.*t14*t18*t6*var[80] - 15.*t19*t20*t21*var[81] - 20.*t22*t23*t24*var[82] - 15.*t25*t26*t27*var[83] - 6.*t16*t28*t29*var[84] - 1.*t30*t31*var[85];
  p_output1[9]=0. - 1.*t17*var[86] - 6.*t14*t18*t6*var[87] - 15.*t19*t20*t21*var[88] - 20.*t22*t23*t24*var[89] - 15.*t25*t26*t27*var[90] - 6.*t16*t28*t29*var[91] - 1.*t30*t31*var[92] - 0.15240000000000004*((t37*t56*t57 + t55*t60)*Cos(t44) + ((t69*t72 + t73*t76)*t77 + (-1.*t72*t73 + t69*t76)*t93)*Sin(t44));
  p_output1[10]=0. - 0.2548*(t77*(-1.*t73*t96 + t69*t99) - 1.*t93*(t69*t96 + t73*t99)) - 1.*t17*var[93] - 6.*t14*t18*t6*var[94] - 15.*t19*t20*t21*var[95] - 20.*t22*t23*t24*var[96] - 15.*t25*t26*t27*var[97] - 6.*t16*t28*t29*var[98] - 1.*t30*t31*var[99];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "f_y2Pos_RightTL3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void f_y2Pos_RightTL3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

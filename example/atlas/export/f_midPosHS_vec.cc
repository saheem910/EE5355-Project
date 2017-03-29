/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:57:15 GMT-05:00
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
static void output1(double *p_output1,const double *var,const double *auxdata)
{
  double t1;
  double t2;
  t1 = -1. + auxdata[0];
  t2 = 1/t1;
  p_output1[0]=var[43] + 0.5*(-1.*var[1] - 1.*var[64]) - 0.125*t2*var[0]*(var[22] - 1.*var[85]);
  p_output1[1]=var[44] + 0.5*(-1.*var[2] - 1.*var[65]) - 0.125*t2*var[0]*(var[23] - 1.*var[86]);
  p_output1[2]=var[45] + 0.5*(-1.*var[3] - 1.*var[66]) - 0.125*t2*var[0]*(var[24] - 1.*var[87]);
  p_output1[3]=var[46] + 0.5*(-1.*var[4] - 1.*var[67]) - 0.125*t2*var[0]*(var[25] - 1.*var[88]);
  p_output1[4]=var[47] + 0.5*(-1.*var[5] - 1.*var[68]) - 0.125*t2*var[0]*(var[26] - 1.*var[89]);
  p_output1[5]=var[48] + 0.5*(-1.*var[6] - 1.*var[69]) - 0.125*t2*var[0]*(var[27] - 1.*var[90]);
  p_output1[6]=var[49] + 0.5*(-1.*var[7] - 1.*var[70]) - 0.125*t2*var[0]*(var[28] - 1.*var[91]);
  p_output1[7]=var[50] + 0.5*(-1.*var[8] - 1.*var[71]) - 0.125*t2*var[0]*(var[29] - 1.*var[92]);
  p_output1[8]=var[51] + 0.5*(-1.*var[9] - 1.*var[72]) - 0.125*t2*var[0]*(var[30] - 1.*var[93]);
  p_output1[9]=var[52] + 0.5*(-1.*var[10] - 1.*var[73]) - 0.125*t2*var[0]*(var[31] - 1.*var[94]);
  p_output1[10]=var[53] + 0.5*(-1.*var[11] - 1.*var[74]) - 0.125*t2*var[0]*(var[32] - 1.*var[95]);
  p_output1[11]=var[54] + 0.5*(-1.*var[12] - 1.*var[75]) - 0.125*t2*var[0]*(var[33] - 1.*var[96]);
  p_output1[12]=var[55] + 0.5*(-1.*var[13] - 1.*var[76]) - 0.125*t2*var[0]*(var[34] - 1.*var[97]);
  p_output1[13]=var[56] + 0.5*(-1.*var[14] - 1.*var[77]) - 0.125*t2*var[0]*(var[35] - 1.*var[98]);
  p_output1[14]=var[57] + 0.5*(-1.*var[15] - 1.*var[78]) - 0.125*t2*var[0]*(var[36] - 1.*var[99]);
  p_output1[15]=var[58] + 0.5*(-1.*var[16] - 1.*var[79]) - 0.125*t2*var[0]*(var[37] - 1.*var[100]);
  p_output1[16]=var[59] + 0.5*(-1.*var[17] - 1.*var[80]) - 0.125*t2*var[0]*(var[38] - 1.*var[101]);
  p_output1[17]=var[60] + 0.5*(-1.*var[18] - 1.*var[81]) - 0.125*t2*var[0]*(var[39] - 1.*var[102]);
  p_output1[18]=var[61] + 0.5*(-1.*var[19] - 1.*var[82]) - 0.125*t2*var[0]*(var[40] - 1.*var[103]);
  p_output1[19]=var[62] + 0.5*(-1.*var[20] - 1.*var[83]) - 0.125*t2*var[0]*(var[41] - 1.*var[104]);
  p_output1[20]=var[63] + 0.5*(-1.*var[21] - 1.*var[84]) - 0.125*t2*var[0]*(var[42] - 1.*var[105]);
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

  double *var,*auxdata;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var,auxdata).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 106 && ncols == 1) && 
      !(mrows == 1 && ncols == 106))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "auxdata is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
  auxdata = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var,auxdata);


}

#else // MATLAB_MEX_FILE

#include "f_midPosHS_vec.hh"

namespace symbolic
{
namespace basic
{

void f_midPosHS_vec_raw(double *p_output1, const double *var,const double *auxdata)
{
  // Call Subroutines
  output1(p_output1, var, auxdata);

}

}
}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:57:12 GMT-05:00
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
  double t3;
  double t4;
  t1 = -1. + auxdata[0];
  t2 = 1/t1;
  t3 = -0.166666666666667*t2*var[0];
  t4 = -0.666666666666667*t2*var[0];
  p_output1[0]=-0.166666666666667*t2*(var[22] + 4.*var[43] + var[85]);
  p_output1[1]=-1.;
  p_output1[2]=t3;
  p_output1[3]=t4;
  p_output1[4]=1.;
  p_output1[5]=t3;
  p_output1[6]=-0.166666666666667*t2*(var[23] + 4.*var[44] + var[86]);
  p_output1[7]=-1.;
  p_output1[8]=t3;
  p_output1[9]=t4;
  p_output1[10]=1.;
  p_output1[11]=t3;
  p_output1[12]=-0.166666666666667*t2*(var[24] + 4.*var[45] + var[87]);
  p_output1[13]=-1.;
  p_output1[14]=t3;
  p_output1[15]=t4;
  p_output1[16]=1.;
  p_output1[17]=t3;
  p_output1[18]=-0.166666666666667*t2*(var[25] + 4.*var[46] + var[88]);
  p_output1[19]=-1.;
  p_output1[20]=t3;
  p_output1[21]=t4;
  p_output1[22]=1.;
  p_output1[23]=t3;
  p_output1[24]=-0.166666666666667*t2*(var[26] + 4.*var[47] + var[89]);
  p_output1[25]=-1.;
  p_output1[26]=t3;
  p_output1[27]=t4;
  p_output1[28]=1.;
  p_output1[29]=t3;
  p_output1[30]=-0.166666666666667*t2*(var[27] + 4.*var[48] + var[90]);
  p_output1[31]=-1.;
  p_output1[32]=t3;
  p_output1[33]=t4;
  p_output1[34]=1.;
  p_output1[35]=t3;
  p_output1[36]=-0.166666666666667*t2*(var[28] + 4.*var[49] + var[91]);
  p_output1[37]=-1.;
  p_output1[38]=t3;
  p_output1[39]=t4;
  p_output1[40]=1.;
  p_output1[41]=t3;
  p_output1[42]=-0.166666666666667*t2*(var[29] + 4.*var[50] + var[92]);
  p_output1[43]=-1.;
  p_output1[44]=t3;
  p_output1[45]=t4;
  p_output1[46]=1.;
  p_output1[47]=t3;
  p_output1[48]=-0.166666666666667*t2*(var[30] + 4.*var[51] + var[93]);
  p_output1[49]=-1.;
  p_output1[50]=t3;
  p_output1[51]=t4;
  p_output1[52]=1.;
  p_output1[53]=t3;
  p_output1[54]=-0.166666666666667*t2*(var[31] + 4.*var[52] + var[94]);
  p_output1[55]=-1.;
  p_output1[56]=t3;
  p_output1[57]=t4;
  p_output1[58]=1.;
  p_output1[59]=t3;
  p_output1[60]=-0.166666666666667*t2*(var[32] + 4.*var[53] + var[95]);
  p_output1[61]=-1.;
  p_output1[62]=t3;
  p_output1[63]=t4;
  p_output1[64]=1.;
  p_output1[65]=t3;
  p_output1[66]=-0.166666666666667*t2*(var[33] + 4.*var[54] + var[96]);
  p_output1[67]=-1.;
  p_output1[68]=t3;
  p_output1[69]=t4;
  p_output1[70]=1.;
  p_output1[71]=t3;
  p_output1[72]=-0.166666666666667*t2*(var[34] + 4.*var[55] + var[97]);
  p_output1[73]=-1.;
  p_output1[74]=t3;
  p_output1[75]=t4;
  p_output1[76]=1.;
  p_output1[77]=t3;
  p_output1[78]=-0.166666666666667*t2*(var[35] + 4.*var[56] + var[98]);
  p_output1[79]=-1.;
  p_output1[80]=t3;
  p_output1[81]=t4;
  p_output1[82]=1.;
  p_output1[83]=t3;
  p_output1[84]=-0.166666666666667*t2*(var[36] + 4.*var[57] + var[99]);
  p_output1[85]=-1.;
  p_output1[86]=t3;
  p_output1[87]=t4;
  p_output1[88]=1.;
  p_output1[89]=t3;
  p_output1[90]=-0.166666666666667*t2*(var[37] + 4.*var[58] + var[100]);
  p_output1[91]=-1.;
  p_output1[92]=t3;
  p_output1[93]=t4;
  p_output1[94]=1.;
  p_output1[95]=t3;
  p_output1[96]=-0.166666666666667*t2*(var[38] + 4.*var[59] + var[101]);
  p_output1[97]=-1.;
  p_output1[98]=t3;
  p_output1[99]=t4;
  p_output1[100]=1.;
  p_output1[101]=t3;
  p_output1[102]=-0.166666666666667*t2*(var[39] + 4.*var[60] + var[102]);
  p_output1[103]=-1.;
  p_output1[104]=t3;
  p_output1[105]=t4;
  p_output1[106]=1.;
  p_output1[107]=t3;
  p_output1[108]=-0.166666666666667*t2*(var[40] + 4.*var[61] + var[103]);
  p_output1[109]=-1.;
  p_output1[110]=t3;
  p_output1[111]=t4;
  p_output1[112]=1.;
  p_output1[113]=t3;
  p_output1[114]=-0.166666666666667*t2*(var[41] + 4.*var[62] + var[104]);
  p_output1[115]=-1.;
  p_output1[116]=t3;
  p_output1[117]=t4;
  p_output1[118]=1.;
  p_output1[119]=t3;
  p_output1[120]=-0.166666666666667*t2*(var[42] + 4.*var[63] + var[105]);
  p_output1[121]=-1.;
  p_output1[122]=t3;
  p_output1[123]=t4;
  p_output1[124]=1.;
  p_output1[125]=t3;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 126, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var,auxdata);


}

#else // MATLAB_MEX_FILE

#include "J_intPosHS_vec.hh"

namespace symbolic
{
namespace basic
{

void J_intPosHS_vec_raw(double *p_output1, const double *var,const double *auxdata)
{
  // Call Subroutines
  output1(p_output1, var, auxdata);

}

}
}

#endif // MATLAB_MEX_FILE

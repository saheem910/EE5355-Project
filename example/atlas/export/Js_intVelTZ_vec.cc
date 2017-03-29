/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:57:20 GMT-05:00
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
  double _NotUsed;
  NULL;
  p_output1[0]=1;
  p_output1[1]=1;
  p_output1[2]=1;
  p_output1[3]=1;
  p_output1[4]=1;
  p_output1[5]=2;
  p_output1[6]=2;
  p_output1[7]=2;
  p_output1[8]=2;
  p_output1[9]=2;
  p_output1[10]=3;
  p_output1[11]=3;
  p_output1[12]=3;
  p_output1[13]=3;
  p_output1[14]=3;
  p_output1[15]=4;
  p_output1[16]=4;
  p_output1[17]=4;
  p_output1[18]=4;
  p_output1[19]=4;
  p_output1[20]=5;
  p_output1[21]=5;
  p_output1[22]=5;
  p_output1[23]=5;
  p_output1[24]=5;
  p_output1[25]=6;
  p_output1[26]=6;
  p_output1[27]=6;
  p_output1[28]=6;
  p_output1[29]=6;
  p_output1[30]=7;
  p_output1[31]=7;
  p_output1[32]=7;
  p_output1[33]=7;
  p_output1[34]=7;
  p_output1[35]=8;
  p_output1[36]=8;
  p_output1[37]=8;
  p_output1[38]=8;
  p_output1[39]=8;
  p_output1[40]=9;
  p_output1[41]=9;
  p_output1[42]=9;
  p_output1[43]=9;
  p_output1[44]=9;
  p_output1[45]=10;
  p_output1[46]=10;
  p_output1[47]=10;
  p_output1[48]=10;
  p_output1[49]=10;
  p_output1[50]=11;
  p_output1[51]=11;
  p_output1[52]=11;
  p_output1[53]=11;
  p_output1[54]=11;
  p_output1[55]=12;
  p_output1[56]=12;
  p_output1[57]=12;
  p_output1[58]=12;
  p_output1[59]=12;
  p_output1[60]=13;
  p_output1[61]=13;
  p_output1[62]=13;
  p_output1[63]=13;
  p_output1[64]=13;
  p_output1[65]=14;
  p_output1[66]=14;
  p_output1[67]=14;
  p_output1[68]=14;
  p_output1[69]=14;
  p_output1[70]=15;
  p_output1[71]=15;
  p_output1[72]=15;
  p_output1[73]=15;
  p_output1[74]=15;
  p_output1[75]=16;
  p_output1[76]=16;
  p_output1[77]=16;
  p_output1[78]=16;
  p_output1[79]=16;
  p_output1[80]=17;
  p_output1[81]=17;
  p_output1[82]=17;
  p_output1[83]=17;
  p_output1[84]=17;
  p_output1[85]=18;
  p_output1[86]=18;
  p_output1[87]=18;
  p_output1[88]=18;
  p_output1[89]=18;
  p_output1[90]=19;
  p_output1[91]=19;
  p_output1[92]=19;
  p_output1[93]=19;
  p_output1[94]=19;
  p_output1[95]=20;
  p_output1[96]=20;
  p_output1[97]=20;
  p_output1[98]=20;
  p_output1[99]=20;
  p_output1[100]=21;
  p_output1[101]=21;
  p_output1[102]=21;
  p_output1[103]=21;
  p_output1[104]=21;
  p_output1[105]=1;
  p_output1[106]=2;
  p_output1[107]=23;
  p_output1[108]=44;
  p_output1[109]=65;
  p_output1[110]=1;
  p_output1[111]=3;
  p_output1[112]=24;
  p_output1[113]=45;
  p_output1[114]=66;
  p_output1[115]=1;
  p_output1[116]=4;
  p_output1[117]=25;
  p_output1[118]=46;
  p_output1[119]=67;
  p_output1[120]=1;
  p_output1[121]=5;
  p_output1[122]=26;
  p_output1[123]=47;
  p_output1[124]=68;
  p_output1[125]=1;
  p_output1[126]=6;
  p_output1[127]=27;
  p_output1[128]=48;
  p_output1[129]=69;
  p_output1[130]=1;
  p_output1[131]=7;
  p_output1[132]=28;
  p_output1[133]=49;
  p_output1[134]=70;
  p_output1[135]=1;
  p_output1[136]=8;
  p_output1[137]=29;
  p_output1[138]=50;
  p_output1[139]=71;
  p_output1[140]=1;
  p_output1[141]=9;
  p_output1[142]=30;
  p_output1[143]=51;
  p_output1[144]=72;
  p_output1[145]=1;
  p_output1[146]=10;
  p_output1[147]=31;
  p_output1[148]=52;
  p_output1[149]=73;
  p_output1[150]=1;
  p_output1[151]=11;
  p_output1[152]=32;
  p_output1[153]=53;
  p_output1[154]=74;
  p_output1[155]=1;
  p_output1[156]=12;
  p_output1[157]=33;
  p_output1[158]=54;
  p_output1[159]=75;
  p_output1[160]=1;
  p_output1[161]=13;
  p_output1[162]=34;
  p_output1[163]=55;
  p_output1[164]=76;
  p_output1[165]=1;
  p_output1[166]=14;
  p_output1[167]=35;
  p_output1[168]=56;
  p_output1[169]=77;
  p_output1[170]=1;
  p_output1[171]=15;
  p_output1[172]=36;
  p_output1[173]=57;
  p_output1[174]=78;
  p_output1[175]=1;
  p_output1[176]=16;
  p_output1[177]=37;
  p_output1[178]=58;
  p_output1[179]=79;
  p_output1[180]=1;
  p_output1[181]=17;
  p_output1[182]=38;
  p_output1[183]=59;
  p_output1[184]=80;
  p_output1[185]=1;
  p_output1[186]=18;
  p_output1[187]=39;
  p_output1[188]=60;
  p_output1[189]=81;
  p_output1[190]=1;
  p_output1[191]=19;
  p_output1[192]=40;
  p_output1[193]=61;
  p_output1[194]=82;
  p_output1[195]=1;
  p_output1[196]=20;
  p_output1[197]=41;
  p_output1[198]=62;
  p_output1[199]=83;
  p_output1[200]=1;
  p_output1[201]=21;
  p_output1[202]=42;
  p_output1[203]=63;
  p_output1[204]=84;
  p_output1[205]=1;
  p_output1[206]=22;
  p_output1[207]=43;
  p_output1[208]=64;
  p_output1[209]=85;
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 105, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_intVelTZ_vec.hh"

namespace symbolic
{
namespace basic
{

void Js_intVelTZ_vec_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

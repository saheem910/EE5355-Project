/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 14:00:54 GMT-05:00
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
  p_output1[5]=1;
  p_output1[6]=1;
  p_output1[7]=1;
  p_output1[8]=1;
  p_output1[9]=1;
  p_output1[10]=1;
  p_output1[11]=1;
  p_output1[12]=1;
  p_output1[13]=1;
  p_output1[14]=1;
  p_output1[15]=1;
  p_output1[16]=1;
  p_output1[17]=2;
  p_output1[18]=2;
  p_output1[19]=2;
  p_output1[20]=2;
  p_output1[21]=2;
  p_output1[22]=2;
  p_output1[23]=2;
  p_output1[24]=2;
  p_output1[25]=2;
  p_output1[26]=2;
  p_output1[27]=2;
  p_output1[28]=2;
  p_output1[29]=2;
  p_output1[30]=2;
  p_output1[31]=2;
  p_output1[32]=2;
  p_output1[33]=2;
  p_output1[34]=3;
  p_output1[35]=3;
  p_output1[36]=3;
  p_output1[37]=3;
  p_output1[38]=3;
  p_output1[39]=3;
  p_output1[40]=3;
  p_output1[41]=3;
  p_output1[42]=3;
  p_output1[43]=3;
  p_output1[44]=3;
  p_output1[45]=3;
  p_output1[46]=3;
  p_output1[47]=3;
  p_output1[48]=3;
  p_output1[49]=3;
  p_output1[50]=3;
  p_output1[51]=4;
  p_output1[52]=4;
  p_output1[53]=4;
  p_output1[54]=4;
  p_output1[55]=4;
  p_output1[56]=4;
  p_output1[57]=4;
  p_output1[58]=4;
  p_output1[59]=4;
  p_output1[60]=4;
  p_output1[61]=4;
  p_output1[62]=4;
  p_output1[63]=4;
  p_output1[64]=4;
  p_output1[65]=4;
  p_output1[66]=4;
  p_output1[67]=4;
  p_output1[68]=4;
  p_output1[69]=5;
  p_output1[70]=5;
  p_output1[71]=5;
  p_output1[72]=5;
  p_output1[73]=5;
  p_output1[74]=5;
  p_output1[75]=5;
  p_output1[76]=5;
  p_output1[77]=5;
  p_output1[78]=5;
  p_output1[79]=5;
  p_output1[80]=5;
  p_output1[81]=5;
  p_output1[82]=5;
  p_output1[83]=5;
  p_output1[84]=5;
  p_output1[85]=5;
  p_output1[86]=5;
  p_output1[87]=5;
  p_output1[88]=6;
  p_output1[89]=6;
  p_output1[90]=6;
  p_output1[91]=6;
  p_output1[92]=6;
  p_output1[93]=6;
  p_output1[94]=6;
  p_output1[95]=6;
  p_output1[96]=6;
  p_output1[97]=6;
  p_output1[98]=6;
  p_output1[99]=6;
  p_output1[100]=6;
  p_output1[101]=6;
  p_output1[102]=6;
  p_output1[103]=6;
  p_output1[104]=6;
  p_output1[105]=6;
  p_output1[106]=7;
  p_output1[107]=7;
  p_output1[108]=7;
  p_output1[109]=7;
  p_output1[110]=7;
  p_output1[111]=7;
  p_output1[112]=7;
  p_output1[113]=7;
  p_output1[114]=7;
  p_output1[115]=7;
  p_output1[116]=7;
  p_output1[117]=7;
  p_output1[118]=7;
  p_output1[119]=7;
  p_output1[120]=7;
  p_output1[121]=7;
  p_output1[122]=7;
  p_output1[123]=7;
  p_output1[124]=5;
  p_output1[125]=17;
  p_output1[126]=19;
  p_output1[127]=21;
  p_output1[128]=26;
  p_output1[129]=38;
  p_output1[130]=40;
  p_output1[131]=42;
  p_output1[132]=43;
  p_output1[133]=44;
  p_output1[134]=45;
  p_output1[135]=46;
  p_output1[136]=47;
  p_output1[137]=48;
  p_output1[138]=49;
  p_output1[139]=50;
  p_output1[140]=51;
  p_output1[141]=5;
  p_output1[142]=17;
  p_output1[143]=19;
  p_output1[144]=21;
  p_output1[145]=26;
  p_output1[146]=38;
  p_output1[147]=40;
  p_output1[148]=42;
  p_output1[149]=43;
  p_output1[150]=44;
  p_output1[151]=52;
  p_output1[152]=53;
  p_output1[153]=54;
  p_output1[154]=55;
  p_output1[155]=56;
  p_output1[156]=57;
  p_output1[157]=58;
  p_output1[158]=5;
  p_output1[159]=17;
  p_output1[160]=19;
  p_output1[161]=21;
  p_output1[162]=26;
  p_output1[163]=38;
  p_output1[164]=40;
  p_output1[165]=42;
  p_output1[166]=43;
  p_output1[167]=44;
  p_output1[168]=59;
  p_output1[169]=60;
  p_output1[170]=61;
  p_output1[171]=62;
  p_output1[172]=63;
  p_output1[173]=64;
  p_output1[174]=65;
  p_output1[175]=5;
  p_output1[176]=17;
  p_output1[177]=19;
  p_output1[178]=21;
  p_output1[179]=26;
  p_output1[180]=37;
  p_output1[181]=38;
  p_output1[182]=40;
  p_output1[183]=42;
  p_output1[184]=43;
  p_output1[185]=44;
  p_output1[186]=66;
  p_output1[187]=67;
  p_output1[188]=68;
  p_output1[189]=69;
  p_output1[190]=70;
  p_output1[191]=71;
  p_output1[192]=72;
  p_output1[193]=5;
  p_output1[194]=17;
  p_output1[195]=19;
  p_output1[196]=21;
  p_output1[197]=26;
  p_output1[198]=37;
  p_output1[199]=38;
  p_output1[200]=39;
  p_output1[201]=40;
  p_output1[202]=42;
  p_output1[203]=43;
  p_output1[204]=44;
  p_output1[205]=73;
  p_output1[206]=74;
  p_output1[207]=75;
  p_output1[208]=76;
  p_output1[209]=77;
  p_output1[210]=78;
  p_output1[211]=79;
  p_output1[212]=5;
  p_output1[213]=17;
  p_output1[214]=19;
  p_output1[215]=21;
  p_output1[216]=26;
  p_output1[217]=38;
  p_output1[218]=40;
  p_output1[219]=41;
  p_output1[220]=42;
  p_output1[221]=43;
  p_output1[222]=44;
  p_output1[223]=80;
  p_output1[224]=81;
  p_output1[225]=82;
  p_output1[226]=83;
  p_output1[227]=84;
  p_output1[228]=85;
  p_output1[229]=86;
  p_output1[230]=5;
  p_output1[231]=17;
  p_output1[232]=19;
  p_output1[233]=21;
  p_output1[234]=26;
  p_output1[235]=32;
  p_output1[236]=38;
  p_output1[237]=40;
  p_output1[238]=42;
  p_output1[239]=43;
  p_output1[240]=44;
  p_output1[241]=87;
  p_output1[242]=88;
  p_output1[243]=89;
  p_output1[244]=90;
  p_output1[245]=91;
  p_output1[246]=92;
  p_output1[247]=93;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 124, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_y2Vel_RightHS3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void Js_y2Vel_RightHS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

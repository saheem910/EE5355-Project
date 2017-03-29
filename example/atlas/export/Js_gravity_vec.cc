/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:56:58 GMT-05:00
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
  p_output1[0]=4;
  p_output1[1]=4;
  p_output1[2]=4;
  p_output1[3]=4;
  p_output1[4]=4;
  p_output1[5]=4;
  p_output1[6]=4;
  p_output1[7]=4;
  p_output1[8]=4;
  p_output1[9]=4;
  p_output1[10]=4;
  p_output1[11]=4;
  p_output1[12]=4;
  p_output1[13]=4;
  p_output1[14]=4;
  p_output1[15]=4;
  p_output1[16]=4;
  p_output1[17]=4;
  p_output1[18]=5;
  p_output1[19]=5;
  p_output1[20]=5;
  p_output1[21]=5;
  p_output1[22]=5;
  p_output1[23]=5;
  p_output1[24]=5;
  p_output1[25]=5;
  p_output1[26]=5;
  p_output1[27]=5;
  p_output1[28]=5;
  p_output1[29]=5;
  p_output1[30]=5;
  p_output1[31]=5;
  p_output1[32]=5;
  p_output1[33]=5;
  p_output1[34]=5;
  p_output1[35]=5;
  p_output1[36]=6;
  p_output1[37]=6;
  p_output1[38]=6;
  p_output1[39]=6;
  p_output1[40]=6;
  p_output1[41]=6;
  p_output1[42]=6;
  p_output1[43]=6;
  p_output1[44]=6;
  p_output1[45]=6;
  p_output1[46]=6;
  p_output1[47]=6;
  p_output1[48]=6;
  p_output1[49]=6;
  p_output1[50]=6;
  p_output1[51]=6;
  p_output1[52]=6;
  p_output1[53]=6;
  p_output1[54]=7;
  p_output1[55]=7;
  p_output1[56]=7;
  p_output1[57]=7;
  p_output1[58]=7;
  p_output1[59]=7;
  p_output1[60]=8;
  p_output1[61]=8;
  p_output1[62]=8;
  p_output1[63]=8;
  p_output1[64]=8;
  p_output1[65]=8;
  p_output1[66]=9;
  p_output1[67]=9;
  p_output1[68]=9;
  p_output1[69]=9;
  p_output1[70]=9;
  p_output1[71]=9;
  p_output1[72]=10;
  p_output1[73]=10;
  p_output1[74]=10;
  p_output1[75]=10;
  p_output1[76]=10;
  p_output1[77]=10;
  p_output1[78]=10;
  p_output1[79]=10;
  p_output1[80]=10;
  p_output1[81]=11;
  p_output1[82]=11;
  p_output1[83]=11;
  p_output1[84]=11;
  p_output1[85]=11;
  p_output1[86]=11;
  p_output1[87]=11;
  p_output1[88]=11;
  p_output1[89]=11;
  p_output1[90]=12;
  p_output1[91]=12;
  p_output1[92]=12;
  p_output1[93]=12;
  p_output1[94]=12;
  p_output1[95]=12;
  p_output1[96]=12;
  p_output1[97]=12;
  p_output1[98]=12;
  p_output1[99]=13;
  p_output1[100]=13;
  p_output1[101]=13;
  p_output1[102]=13;
  p_output1[103]=13;
  p_output1[104]=13;
  p_output1[105]=13;
  p_output1[106]=13;
  p_output1[107]=13;
  p_output1[108]=14;
  p_output1[109]=14;
  p_output1[110]=14;
  p_output1[111]=14;
  p_output1[112]=14;
  p_output1[113]=14;
  p_output1[114]=14;
  p_output1[115]=14;
  p_output1[116]=14;
  p_output1[117]=15;
  p_output1[118]=15;
  p_output1[119]=15;
  p_output1[120]=15;
  p_output1[121]=15;
  p_output1[122]=15;
  p_output1[123]=15;
  p_output1[124]=15;
  p_output1[125]=15;
  p_output1[126]=16;
  p_output1[127]=16;
  p_output1[128]=16;
  p_output1[129]=16;
  p_output1[130]=16;
  p_output1[131]=16;
  p_output1[132]=16;
  p_output1[133]=16;
  p_output1[134]=16;
  p_output1[135]=17;
  p_output1[136]=17;
  p_output1[137]=17;
  p_output1[138]=17;
  p_output1[139]=17;
  p_output1[140]=17;
  p_output1[141]=17;
  p_output1[142]=17;
  p_output1[143]=17;
  p_output1[144]=18;
  p_output1[145]=18;
  p_output1[146]=18;
  p_output1[147]=18;
  p_output1[148]=18;
  p_output1[149]=18;
  p_output1[150]=18;
  p_output1[151]=18;
  p_output1[152]=18;
  p_output1[153]=19;
  p_output1[154]=19;
  p_output1[155]=19;
  p_output1[156]=19;
  p_output1[157]=19;
  p_output1[158]=19;
  p_output1[159]=19;
  p_output1[160]=19;
  p_output1[161]=19;
  p_output1[162]=20;
  p_output1[163]=20;
  p_output1[164]=20;
  p_output1[165]=20;
  p_output1[166]=20;
  p_output1[167]=20;
  p_output1[168]=20;
  p_output1[169]=20;
  p_output1[170]=20;
  p_output1[171]=21;
  p_output1[172]=21;
  p_output1[173]=21;
  p_output1[174]=21;
  p_output1[175]=21;
  p_output1[176]=21;
  p_output1[177]=21;
  p_output1[178]=21;
  p_output1[179]=21;
  p_output1[180]=4;
  p_output1[181]=5;
  p_output1[182]=6;
  p_output1[183]=7;
  p_output1[184]=8;
  p_output1[185]=9;
  p_output1[186]=10;
  p_output1[187]=11;
  p_output1[188]=12;
  p_output1[189]=13;
  p_output1[190]=14;
  p_output1[191]=15;
  p_output1[192]=16;
  p_output1[193]=17;
  p_output1[194]=18;
  p_output1[195]=19;
  p_output1[196]=20;
  p_output1[197]=21;
  p_output1[198]=4;
  p_output1[199]=5;
  p_output1[200]=6;
  p_output1[201]=7;
  p_output1[202]=8;
  p_output1[203]=9;
  p_output1[204]=10;
  p_output1[205]=11;
  p_output1[206]=12;
  p_output1[207]=13;
  p_output1[208]=14;
  p_output1[209]=15;
  p_output1[210]=16;
  p_output1[211]=17;
  p_output1[212]=18;
  p_output1[213]=19;
  p_output1[214]=20;
  p_output1[215]=21;
  p_output1[216]=4;
  p_output1[217]=5;
  p_output1[218]=6;
  p_output1[219]=7;
  p_output1[220]=8;
  p_output1[221]=9;
  p_output1[222]=10;
  p_output1[223]=11;
  p_output1[224]=12;
  p_output1[225]=13;
  p_output1[226]=14;
  p_output1[227]=15;
  p_output1[228]=16;
  p_output1[229]=17;
  p_output1[230]=18;
  p_output1[231]=19;
  p_output1[232]=20;
  p_output1[233]=21;
  p_output1[234]=4;
  p_output1[235]=5;
  p_output1[236]=6;
  p_output1[237]=7;
  p_output1[238]=8;
  p_output1[239]=9;
  p_output1[240]=4;
  p_output1[241]=5;
  p_output1[242]=6;
  p_output1[243]=7;
  p_output1[244]=8;
  p_output1[245]=9;
  p_output1[246]=4;
  p_output1[247]=5;
  p_output1[248]=6;
  p_output1[249]=7;
  p_output1[250]=8;
  p_output1[251]=9;
  p_output1[252]=4;
  p_output1[253]=5;
  p_output1[254]=6;
  p_output1[255]=10;
  p_output1[256]=11;
  p_output1[257]=12;
  p_output1[258]=13;
  p_output1[259]=14;
  p_output1[260]=15;
  p_output1[261]=4;
  p_output1[262]=5;
  p_output1[263]=6;
  p_output1[264]=10;
  p_output1[265]=11;
  p_output1[266]=12;
  p_output1[267]=13;
  p_output1[268]=14;
  p_output1[269]=15;
  p_output1[270]=4;
  p_output1[271]=5;
  p_output1[272]=6;
  p_output1[273]=10;
  p_output1[274]=11;
  p_output1[275]=12;
  p_output1[276]=13;
  p_output1[277]=14;
  p_output1[278]=15;
  p_output1[279]=4;
  p_output1[280]=5;
  p_output1[281]=6;
  p_output1[282]=10;
  p_output1[283]=11;
  p_output1[284]=12;
  p_output1[285]=13;
  p_output1[286]=14;
  p_output1[287]=15;
  p_output1[288]=4;
  p_output1[289]=5;
  p_output1[290]=6;
  p_output1[291]=10;
  p_output1[292]=11;
  p_output1[293]=12;
  p_output1[294]=13;
  p_output1[295]=14;
  p_output1[296]=15;
  p_output1[297]=4;
  p_output1[298]=5;
  p_output1[299]=6;
  p_output1[300]=10;
  p_output1[301]=11;
  p_output1[302]=12;
  p_output1[303]=13;
  p_output1[304]=14;
  p_output1[305]=15;
  p_output1[306]=4;
  p_output1[307]=5;
  p_output1[308]=6;
  p_output1[309]=16;
  p_output1[310]=17;
  p_output1[311]=18;
  p_output1[312]=19;
  p_output1[313]=20;
  p_output1[314]=21;
  p_output1[315]=4;
  p_output1[316]=5;
  p_output1[317]=6;
  p_output1[318]=16;
  p_output1[319]=17;
  p_output1[320]=18;
  p_output1[321]=19;
  p_output1[322]=20;
  p_output1[323]=21;
  p_output1[324]=4;
  p_output1[325]=5;
  p_output1[326]=6;
  p_output1[327]=16;
  p_output1[328]=17;
  p_output1[329]=18;
  p_output1[330]=19;
  p_output1[331]=20;
  p_output1[332]=21;
  p_output1[333]=4;
  p_output1[334]=5;
  p_output1[335]=6;
  p_output1[336]=16;
  p_output1[337]=17;
  p_output1[338]=18;
  p_output1[339]=19;
  p_output1[340]=20;
  p_output1[341]=21;
  p_output1[342]=4;
  p_output1[343]=5;
  p_output1[344]=6;
  p_output1[345]=16;
  p_output1[346]=17;
  p_output1[347]=18;
  p_output1[348]=19;
  p_output1[349]=20;
  p_output1[350]=21;
  p_output1[351]=4;
  p_output1[352]=5;
  p_output1[353]=6;
  p_output1[354]=16;
  p_output1[355]=17;
  p_output1[356]=18;
  p_output1[357]=19;
  p_output1[358]=20;
  p_output1[359]=21;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 180, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_gravity_vec.hh"

namespace symbolic
{
namespace basic
{

void Js_gravity_vec_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

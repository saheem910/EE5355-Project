/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:23:31 GMT-05:00
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
  p_output1[17]=1;
  p_output1[18]=1;
  p_output1[19]=1;
  p_output1[20]=1;
  p_output1[21]=1;
  p_output1[22]=1;
  p_output1[23]=1;
  p_output1[24]=1;
  p_output1[25]=1;
  p_output1[26]=1;
  p_output1[27]=1;
  p_output1[28]=1;
  p_output1[29]=1;
  p_output1[30]=1;
  p_output1[31]=1;
  p_output1[32]=1;
  p_output1[33]=1;
  p_output1[34]=1;
  p_output1[35]=1;
  p_output1[36]=1;
  p_output1[37]=1;
  p_output1[38]=1;
  p_output1[39]=2;
  p_output1[40]=2;
  p_output1[41]=2;
  p_output1[42]=2;
  p_output1[43]=2;
  p_output1[44]=2;
  p_output1[45]=2;
  p_output1[46]=2;
  p_output1[47]=2;
  p_output1[48]=2;
  p_output1[49]=2;
  p_output1[50]=2;
  p_output1[51]=2;
  p_output1[52]=2;
  p_output1[53]=2;
  p_output1[54]=2;
  p_output1[55]=2;
  p_output1[56]=2;
  p_output1[57]=2;
  p_output1[58]=2;
  p_output1[59]=2;
  p_output1[60]=2;
  p_output1[61]=2;
  p_output1[62]=2;
  p_output1[63]=2;
  p_output1[64]=2;
  p_output1[65]=2;
  p_output1[66]=2;
  p_output1[67]=2;
  p_output1[68]=2;
  p_output1[69]=2;
  p_output1[70]=2;
  p_output1[71]=2;
  p_output1[72]=2;
  p_output1[73]=2;
  p_output1[74]=2;
  p_output1[75]=2;
  p_output1[76]=2;
  p_output1[77]=2;
  p_output1[78]=3;
  p_output1[79]=3;
  p_output1[80]=3;
  p_output1[81]=3;
  p_output1[82]=3;
  p_output1[83]=3;
  p_output1[84]=3;
  p_output1[85]=3;
  p_output1[86]=3;
  p_output1[87]=3;
  p_output1[88]=3;
  p_output1[89]=3;
  p_output1[90]=3;
  p_output1[91]=3;
  p_output1[92]=3;
  p_output1[93]=3;
  p_output1[94]=3;
  p_output1[95]=3;
  p_output1[96]=3;
  p_output1[97]=3;
  p_output1[98]=3;
  p_output1[99]=3;
  p_output1[100]=3;
  p_output1[101]=3;
  p_output1[102]=3;
  p_output1[103]=3;
  p_output1[104]=3;
  p_output1[105]=3;
  p_output1[106]=3;
  p_output1[107]=3;
  p_output1[108]=3;
  p_output1[109]=3;
  p_output1[110]=3;
  p_output1[111]=3;
  p_output1[112]=3;
  p_output1[113]=3;
  p_output1[114]=3;
  p_output1[115]=3;
  p_output1[116]=3;
  p_output1[117]=4;
  p_output1[118]=4;
  p_output1[119]=4;
  p_output1[120]=4;
  p_output1[121]=4;
  p_output1[122]=4;
  p_output1[123]=4;
  p_output1[124]=4;
  p_output1[125]=4;
  p_output1[126]=4;
  p_output1[127]=4;
  p_output1[128]=4;
  p_output1[129]=4;
  p_output1[130]=4;
  p_output1[131]=4;
  p_output1[132]=4;
  p_output1[133]=4;
  p_output1[134]=4;
  p_output1[135]=4;
  p_output1[136]=4;
  p_output1[137]=4;
  p_output1[138]=4;
  p_output1[139]=4;
  p_output1[140]=4;
  p_output1[141]=4;
  p_output1[142]=4;
  p_output1[143]=4;
  p_output1[144]=4;
  p_output1[145]=4;
  p_output1[146]=4;
  p_output1[147]=4;
  p_output1[148]=4;
  p_output1[149]=4;
  p_output1[150]=4;
  p_output1[151]=4;
  p_output1[152]=4;
  p_output1[153]=4;
  p_output1[154]=4;
  p_output1[155]=4;
  p_output1[156]=5;
  p_output1[157]=5;
  p_output1[158]=5;
  p_output1[159]=5;
  p_output1[160]=5;
  p_output1[161]=5;
  p_output1[162]=5;
  p_output1[163]=5;
  p_output1[164]=5;
  p_output1[165]=5;
  p_output1[166]=5;
  p_output1[167]=5;
  p_output1[168]=5;
  p_output1[169]=5;
  p_output1[170]=5;
  p_output1[171]=5;
  p_output1[172]=5;
  p_output1[173]=5;
  p_output1[174]=5;
  p_output1[175]=5;
  p_output1[176]=5;
  p_output1[177]=5;
  p_output1[178]=5;
  p_output1[179]=5;
  p_output1[180]=5;
  p_output1[181]=5;
  p_output1[182]=5;
  p_output1[183]=5;
  p_output1[184]=5;
  p_output1[185]=5;
  p_output1[186]=5;
  p_output1[187]=5;
  p_output1[188]=5;
  p_output1[189]=5;
  p_output1[190]=5;
  p_output1[191]=5;
  p_output1[192]=5;
  p_output1[193]=5;
  p_output1[194]=5;
  p_output1[195]=6;
  p_output1[196]=6;
  p_output1[197]=6;
  p_output1[198]=6;
  p_output1[199]=6;
  p_output1[200]=6;
  p_output1[201]=6;
  p_output1[202]=6;
  p_output1[203]=6;
  p_output1[204]=6;
  p_output1[205]=6;
  p_output1[206]=6;
  p_output1[207]=6;
  p_output1[208]=6;
  p_output1[209]=6;
  p_output1[210]=6;
  p_output1[211]=6;
  p_output1[212]=6;
  p_output1[213]=6;
  p_output1[214]=6;
  p_output1[215]=6;
  p_output1[216]=6;
  p_output1[217]=6;
  p_output1[218]=6;
  p_output1[219]=6;
  p_output1[220]=6;
  p_output1[221]=6;
  p_output1[222]=6;
  p_output1[223]=6;
  p_output1[224]=6;
  p_output1[225]=6;
  p_output1[226]=6;
  p_output1[227]=6;
  p_output1[228]=6;
  p_output1[229]=6;
  p_output1[230]=6;
  p_output1[231]=6;
  p_output1[232]=6;
  p_output1[233]=6;
  p_output1[234]=7;
  p_output1[235]=7;
  p_output1[236]=7;
  p_output1[237]=7;
  p_output1[238]=7;
  p_output1[239]=7;
  p_output1[240]=7;
  p_output1[241]=7;
  p_output1[242]=7;
  p_output1[243]=7;
  p_output1[244]=7;
  p_output1[245]=7;
  p_output1[246]=7;
  p_output1[247]=7;
  p_output1[248]=7;
  p_output1[249]=8;
  p_output1[250]=8;
  p_output1[251]=8;
  p_output1[252]=8;
  p_output1[253]=8;
  p_output1[254]=8;
  p_output1[255]=8;
  p_output1[256]=8;
  p_output1[257]=8;
  p_output1[258]=8;
  p_output1[259]=8;
  p_output1[260]=8;
  p_output1[261]=8;
  p_output1[262]=8;
  p_output1[263]=8;
  p_output1[264]=9;
  p_output1[265]=9;
  p_output1[266]=9;
  p_output1[267]=9;
  p_output1[268]=9;
  p_output1[269]=9;
  p_output1[270]=9;
  p_output1[271]=9;
  p_output1[272]=9;
  p_output1[273]=9;
  p_output1[274]=9;
  p_output1[275]=9;
  p_output1[276]=9;
  p_output1[277]=9;
  p_output1[278]=9;
  p_output1[279]=10;
  p_output1[280]=10;
  p_output1[281]=10;
  p_output1[282]=10;
  p_output1[283]=10;
  p_output1[284]=10;
  p_output1[285]=10;
  p_output1[286]=10;
  p_output1[287]=10;
  p_output1[288]=10;
  p_output1[289]=10;
  p_output1[290]=10;
  p_output1[291]=10;
  p_output1[292]=10;
  p_output1[293]=10;
  p_output1[294]=10;
  p_output1[295]=10;
  p_output1[296]=10;
  p_output1[297]=10;
  p_output1[298]=10;
  p_output1[299]=10;
  p_output1[300]=11;
  p_output1[301]=11;
  p_output1[302]=11;
  p_output1[303]=11;
  p_output1[304]=11;
  p_output1[305]=11;
  p_output1[306]=11;
  p_output1[307]=11;
  p_output1[308]=11;
  p_output1[309]=11;
  p_output1[310]=11;
  p_output1[311]=11;
  p_output1[312]=11;
  p_output1[313]=11;
  p_output1[314]=11;
  p_output1[315]=11;
  p_output1[316]=11;
  p_output1[317]=11;
  p_output1[318]=11;
  p_output1[319]=11;
  p_output1[320]=11;
  p_output1[321]=12;
  p_output1[322]=12;
  p_output1[323]=12;
  p_output1[324]=12;
  p_output1[325]=12;
  p_output1[326]=12;
  p_output1[327]=12;
  p_output1[328]=12;
  p_output1[329]=12;
  p_output1[330]=12;
  p_output1[331]=12;
  p_output1[332]=12;
  p_output1[333]=12;
  p_output1[334]=12;
  p_output1[335]=12;
  p_output1[336]=12;
  p_output1[337]=12;
  p_output1[338]=12;
  p_output1[339]=12;
  p_output1[340]=12;
  p_output1[341]=12;
  p_output1[342]=13;
  p_output1[343]=13;
  p_output1[344]=13;
  p_output1[345]=13;
  p_output1[346]=13;
  p_output1[347]=13;
  p_output1[348]=13;
  p_output1[349]=13;
  p_output1[350]=13;
  p_output1[351]=13;
  p_output1[352]=13;
  p_output1[353]=13;
  p_output1[354]=13;
  p_output1[355]=13;
  p_output1[356]=13;
  p_output1[357]=13;
  p_output1[358]=13;
  p_output1[359]=13;
  p_output1[360]=13;
  p_output1[361]=13;
  p_output1[362]=13;
  p_output1[363]=14;
  p_output1[364]=14;
  p_output1[365]=14;
  p_output1[366]=14;
  p_output1[367]=14;
  p_output1[368]=14;
  p_output1[369]=14;
  p_output1[370]=14;
  p_output1[371]=14;
  p_output1[372]=14;
  p_output1[373]=14;
  p_output1[374]=14;
  p_output1[375]=14;
  p_output1[376]=14;
  p_output1[377]=14;
  p_output1[378]=14;
  p_output1[379]=14;
  p_output1[380]=14;
  p_output1[381]=14;
  p_output1[382]=14;
  p_output1[383]=14;
  p_output1[384]=15;
  p_output1[385]=15;
  p_output1[386]=15;
  p_output1[387]=15;
  p_output1[388]=15;
  p_output1[389]=15;
  p_output1[390]=15;
  p_output1[391]=15;
  p_output1[392]=15;
  p_output1[393]=15;
  p_output1[394]=15;
  p_output1[395]=15;
  p_output1[396]=15;
  p_output1[397]=15;
  p_output1[398]=15;
  p_output1[399]=15;
  p_output1[400]=15;
  p_output1[401]=15;
  p_output1[402]=15;
  p_output1[403]=15;
  p_output1[404]=15;
  p_output1[405]=16;
  p_output1[406]=16;
  p_output1[407]=16;
  p_output1[408]=16;
  p_output1[409]=16;
  p_output1[410]=16;
  p_output1[411]=16;
  p_output1[412]=16;
  p_output1[413]=16;
  p_output1[414]=16;
  p_output1[415]=16;
  p_output1[416]=16;
  p_output1[417]=16;
  p_output1[418]=16;
  p_output1[419]=16;
  p_output1[420]=16;
  p_output1[421]=16;
  p_output1[422]=16;
  p_output1[423]=16;
  p_output1[424]=16;
  p_output1[425]=16;
  p_output1[426]=17;
  p_output1[427]=17;
  p_output1[428]=17;
  p_output1[429]=17;
  p_output1[430]=17;
  p_output1[431]=17;
  p_output1[432]=17;
  p_output1[433]=17;
  p_output1[434]=17;
  p_output1[435]=17;
  p_output1[436]=17;
  p_output1[437]=17;
  p_output1[438]=17;
  p_output1[439]=17;
  p_output1[440]=17;
  p_output1[441]=17;
  p_output1[442]=17;
  p_output1[443]=17;
  p_output1[444]=17;
  p_output1[445]=17;
  p_output1[446]=17;
  p_output1[447]=18;
  p_output1[448]=18;
  p_output1[449]=18;
  p_output1[450]=18;
  p_output1[451]=18;
  p_output1[452]=18;
  p_output1[453]=18;
  p_output1[454]=18;
  p_output1[455]=18;
  p_output1[456]=18;
  p_output1[457]=18;
  p_output1[458]=18;
  p_output1[459]=18;
  p_output1[460]=18;
  p_output1[461]=18;
  p_output1[462]=18;
  p_output1[463]=18;
  p_output1[464]=18;
  p_output1[465]=18;
  p_output1[466]=18;
  p_output1[467]=18;
  p_output1[468]=19;
  p_output1[469]=19;
  p_output1[470]=19;
  p_output1[471]=19;
  p_output1[472]=19;
  p_output1[473]=19;
  p_output1[474]=19;
  p_output1[475]=19;
  p_output1[476]=19;
  p_output1[477]=19;
  p_output1[478]=19;
  p_output1[479]=19;
  p_output1[480]=19;
  p_output1[481]=19;
  p_output1[482]=19;
  p_output1[483]=19;
  p_output1[484]=19;
  p_output1[485]=19;
  p_output1[486]=19;
  p_output1[487]=19;
  p_output1[488]=19;
  p_output1[489]=20;
  p_output1[490]=20;
  p_output1[491]=20;
  p_output1[492]=20;
  p_output1[493]=20;
  p_output1[494]=20;
  p_output1[495]=20;
  p_output1[496]=20;
  p_output1[497]=20;
  p_output1[498]=20;
  p_output1[499]=20;
  p_output1[500]=20;
  p_output1[501]=20;
  p_output1[502]=20;
  p_output1[503]=20;
  p_output1[504]=20;
  p_output1[505]=20;
  p_output1[506]=20;
  p_output1[507]=20;
  p_output1[508]=20;
  p_output1[509]=20;
  p_output1[510]=21;
  p_output1[511]=21;
  p_output1[512]=21;
  p_output1[513]=21;
  p_output1[514]=21;
  p_output1[515]=21;
  p_output1[516]=21;
  p_output1[517]=21;
  p_output1[518]=21;
  p_output1[519]=21;
  p_output1[520]=21;
  p_output1[521]=21;
  p_output1[522]=21;
  p_output1[523]=21;
  p_output1[524]=21;
  p_output1[525]=21;
  p_output1[526]=21;
  p_output1[527]=21;
  p_output1[528]=21;
  p_output1[529]=21;
  p_output1[530]=21;
  p_output1[531]=4;
  p_output1[532]=5;
  p_output1[533]=6;
  p_output1[534]=7;
  p_output1[535]=8;
  p_output1[536]=9;
  p_output1[537]=10;
  p_output1[538]=11;
  p_output1[539]=12;
  p_output1[540]=13;
  p_output1[541]=14;
  p_output1[542]=15;
  p_output1[543]=16;
  p_output1[544]=17;
  p_output1[545]=18;
  p_output1[546]=19;
  p_output1[547]=20;
  p_output1[548]=21;
  p_output1[549]=22;
  p_output1[550]=23;
  p_output1[551]=24;
  p_output1[552]=25;
  p_output1[553]=26;
  p_output1[554]=27;
  p_output1[555]=28;
  p_output1[556]=29;
  p_output1[557]=30;
  p_output1[558]=31;
  p_output1[559]=32;
  p_output1[560]=33;
  p_output1[561]=34;
  p_output1[562]=35;
  p_output1[563]=36;
  p_output1[564]=37;
  p_output1[565]=38;
  p_output1[566]=39;
  p_output1[567]=40;
  p_output1[568]=41;
  p_output1[569]=42;
  p_output1[570]=4;
  p_output1[571]=5;
  p_output1[572]=6;
  p_output1[573]=7;
  p_output1[574]=8;
  p_output1[575]=9;
  p_output1[576]=10;
  p_output1[577]=11;
  p_output1[578]=12;
  p_output1[579]=13;
  p_output1[580]=14;
  p_output1[581]=15;
  p_output1[582]=16;
  p_output1[583]=17;
  p_output1[584]=18;
  p_output1[585]=19;
  p_output1[586]=20;
  p_output1[587]=21;
  p_output1[588]=22;
  p_output1[589]=23;
  p_output1[590]=24;
  p_output1[591]=25;
  p_output1[592]=26;
  p_output1[593]=27;
  p_output1[594]=28;
  p_output1[595]=29;
  p_output1[596]=30;
  p_output1[597]=31;
  p_output1[598]=32;
  p_output1[599]=33;
  p_output1[600]=34;
  p_output1[601]=35;
  p_output1[602]=36;
  p_output1[603]=37;
  p_output1[604]=38;
  p_output1[605]=39;
  p_output1[606]=40;
  p_output1[607]=41;
  p_output1[608]=42;
  p_output1[609]=4;
  p_output1[610]=5;
  p_output1[611]=6;
  p_output1[612]=7;
  p_output1[613]=8;
  p_output1[614]=9;
  p_output1[615]=10;
  p_output1[616]=11;
  p_output1[617]=12;
  p_output1[618]=13;
  p_output1[619]=14;
  p_output1[620]=15;
  p_output1[621]=16;
  p_output1[622]=17;
  p_output1[623]=18;
  p_output1[624]=19;
  p_output1[625]=20;
  p_output1[626]=21;
  p_output1[627]=22;
  p_output1[628]=23;
  p_output1[629]=24;
  p_output1[630]=25;
  p_output1[631]=26;
  p_output1[632]=27;
  p_output1[633]=28;
  p_output1[634]=29;
  p_output1[635]=30;
  p_output1[636]=31;
  p_output1[637]=32;
  p_output1[638]=33;
  p_output1[639]=34;
  p_output1[640]=35;
  p_output1[641]=36;
  p_output1[642]=37;
  p_output1[643]=38;
  p_output1[644]=39;
  p_output1[645]=40;
  p_output1[646]=41;
  p_output1[647]=42;
  p_output1[648]=4;
  p_output1[649]=5;
  p_output1[650]=6;
  p_output1[651]=7;
  p_output1[652]=8;
  p_output1[653]=9;
  p_output1[654]=10;
  p_output1[655]=11;
  p_output1[656]=12;
  p_output1[657]=13;
  p_output1[658]=14;
  p_output1[659]=15;
  p_output1[660]=16;
  p_output1[661]=17;
  p_output1[662]=18;
  p_output1[663]=19;
  p_output1[664]=20;
  p_output1[665]=21;
  p_output1[666]=22;
  p_output1[667]=23;
  p_output1[668]=24;
  p_output1[669]=25;
  p_output1[670]=26;
  p_output1[671]=27;
  p_output1[672]=28;
  p_output1[673]=29;
  p_output1[674]=30;
  p_output1[675]=31;
  p_output1[676]=32;
  p_output1[677]=33;
  p_output1[678]=34;
  p_output1[679]=35;
  p_output1[680]=36;
  p_output1[681]=37;
  p_output1[682]=38;
  p_output1[683]=39;
  p_output1[684]=40;
  p_output1[685]=41;
  p_output1[686]=42;
  p_output1[687]=4;
  p_output1[688]=5;
  p_output1[689]=6;
  p_output1[690]=7;
  p_output1[691]=8;
  p_output1[692]=9;
  p_output1[693]=10;
  p_output1[694]=11;
  p_output1[695]=12;
  p_output1[696]=13;
  p_output1[697]=14;
  p_output1[698]=15;
  p_output1[699]=16;
  p_output1[700]=17;
  p_output1[701]=18;
  p_output1[702]=19;
  p_output1[703]=20;
  p_output1[704]=21;
  p_output1[705]=22;
  p_output1[706]=23;
  p_output1[707]=24;
  p_output1[708]=25;
  p_output1[709]=26;
  p_output1[710]=27;
  p_output1[711]=28;
  p_output1[712]=29;
  p_output1[713]=30;
  p_output1[714]=31;
  p_output1[715]=32;
  p_output1[716]=33;
  p_output1[717]=34;
  p_output1[718]=35;
  p_output1[719]=36;
  p_output1[720]=37;
  p_output1[721]=38;
  p_output1[722]=39;
  p_output1[723]=40;
  p_output1[724]=41;
  p_output1[725]=42;
  p_output1[726]=4;
  p_output1[727]=5;
  p_output1[728]=6;
  p_output1[729]=7;
  p_output1[730]=8;
  p_output1[731]=9;
  p_output1[732]=10;
  p_output1[733]=11;
  p_output1[734]=12;
  p_output1[735]=13;
  p_output1[736]=14;
  p_output1[737]=15;
  p_output1[738]=16;
  p_output1[739]=17;
  p_output1[740]=18;
  p_output1[741]=19;
  p_output1[742]=20;
  p_output1[743]=21;
  p_output1[744]=22;
  p_output1[745]=23;
  p_output1[746]=24;
  p_output1[747]=25;
  p_output1[748]=26;
  p_output1[749]=27;
  p_output1[750]=28;
  p_output1[751]=29;
  p_output1[752]=30;
  p_output1[753]=31;
  p_output1[754]=32;
  p_output1[755]=33;
  p_output1[756]=34;
  p_output1[757]=35;
  p_output1[758]=36;
  p_output1[759]=37;
  p_output1[760]=38;
  p_output1[761]=39;
  p_output1[762]=40;
  p_output1[763]=41;
  p_output1[764]=42;
  p_output1[765]=4;
  p_output1[766]=5;
  p_output1[767]=6;
  p_output1[768]=7;
  p_output1[769]=8;
  p_output1[770]=9;
  p_output1[771]=22;
  p_output1[772]=23;
  p_output1[773]=24;
  p_output1[774]=25;
  p_output1[775]=26;
  p_output1[776]=27;
  p_output1[777]=28;
  p_output1[778]=29;
  p_output1[779]=30;
  p_output1[780]=4;
  p_output1[781]=5;
  p_output1[782]=6;
  p_output1[783]=7;
  p_output1[784]=8;
  p_output1[785]=9;
  p_output1[786]=22;
  p_output1[787]=23;
  p_output1[788]=24;
  p_output1[789]=25;
  p_output1[790]=26;
  p_output1[791]=27;
  p_output1[792]=28;
  p_output1[793]=29;
  p_output1[794]=30;
  p_output1[795]=4;
  p_output1[796]=5;
  p_output1[797]=6;
  p_output1[798]=7;
  p_output1[799]=8;
  p_output1[800]=9;
  p_output1[801]=22;
  p_output1[802]=23;
  p_output1[803]=24;
  p_output1[804]=25;
  p_output1[805]=26;
  p_output1[806]=27;
  p_output1[807]=28;
  p_output1[808]=29;
  p_output1[809]=30;
  p_output1[810]=4;
  p_output1[811]=5;
  p_output1[812]=6;
  p_output1[813]=10;
  p_output1[814]=11;
  p_output1[815]=12;
  p_output1[816]=13;
  p_output1[817]=14;
  p_output1[818]=15;
  p_output1[819]=22;
  p_output1[820]=23;
  p_output1[821]=24;
  p_output1[822]=25;
  p_output1[823]=26;
  p_output1[824]=27;
  p_output1[825]=31;
  p_output1[826]=32;
  p_output1[827]=33;
  p_output1[828]=34;
  p_output1[829]=35;
  p_output1[830]=36;
  p_output1[831]=4;
  p_output1[832]=5;
  p_output1[833]=6;
  p_output1[834]=10;
  p_output1[835]=11;
  p_output1[836]=12;
  p_output1[837]=13;
  p_output1[838]=14;
  p_output1[839]=15;
  p_output1[840]=22;
  p_output1[841]=23;
  p_output1[842]=24;
  p_output1[843]=25;
  p_output1[844]=26;
  p_output1[845]=27;
  p_output1[846]=31;
  p_output1[847]=32;
  p_output1[848]=33;
  p_output1[849]=34;
  p_output1[850]=35;
  p_output1[851]=36;
  p_output1[852]=4;
  p_output1[853]=5;
  p_output1[854]=6;
  p_output1[855]=10;
  p_output1[856]=11;
  p_output1[857]=12;
  p_output1[858]=13;
  p_output1[859]=14;
  p_output1[860]=15;
  p_output1[861]=22;
  p_output1[862]=23;
  p_output1[863]=24;
  p_output1[864]=25;
  p_output1[865]=26;
  p_output1[866]=27;
  p_output1[867]=31;
  p_output1[868]=32;
  p_output1[869]=33;
  p_output1[870]=34;
  p_output1[871]=35;
  p_output1[872]=36;
  p_output1[873]=4;
  p_output1[874]=5;
  p_output1[875]=6;
  p_output1[876]=10;
  p_output1[877]=11;
  p_output1[878]=12;
  p_output1[879]=13;
  p_output1[880]=14;
  p_output1[881]=15;
  p_output1[882]=22;
  p_output1[883]=23;
  p_output1[884]=24;
  p_output1[885]=25;
  p_output1[886]=26;
  p_output1[887]=27;
  p_output1[888]=31;
  p_output1[889]=32;
  p_output1[890]=33;
  p_output1[891]=34;
  p_output1[892]=35;
  p_output1[893]=36;
  p_output1[894]=4;
  p_output1[895]=5;
  p_output1[896]=6;
  p_output1[897]=10;
  p_output1[898]=11;
  p_output1[899]=12;
  p_output1[900]=13;
  p_output1[901]=14;
  p_output1[902]=15;
  p_output1[903]=22;
  p_output1[904]=23;
  p_output1[905]=24;
  p_output1[906]=25;
  p_output1[907]=26;
  p_output1[908]=27;
  p_output1[909]=31;
  p_output1[910]=32;
  p_output1[911]=33;
  p_output1[912]=34;
  p_output1[913]=35;
  p_output1[914]=36;
  p_output1[915]=4;
  p_output1[916]=5;
  p_output1[917]=6;
  p_output1[918]=10;
  p_output1[919]=11;
  p_output1[920]=12;
  p_output1[921]=13;
  p_output1[922]=14;
  p_output1[923]=15;
  p_output1[924]=22;
  p_output1[925]=23;
  p_output1[926]=24;
  p_output1[927]=25;
  p_output1[928]=26;
  p_output1[929]=27;
  p_output1[930]=31;
  p_output1[931]=32;
  p_output1[932]=33;
  p_output1[933]=34;
  p_output1[934]=35;
  p_output1[935]=36;
  p_output1[936]=4;
  p_output1[937]=5;
  p_output1[938]=6;
  p_output1[939]=16;
  p_output1[940]=17;
  p_output1[941]=18;
  p_output1[942]=19;
  p_output1[943]=20;
  p_output1[944]=21;
  p_output1[945]=22;
  p_output1[946]=23;
  p_output1[947]=24;
  p_output1[948]=25;
  p_output1[949]=26;
  p_output1[950]=27;
  p_output1[951]=37;
  p_output1[952]=38;
  p_output1[953]=39;
  p_output1[954]=40;
  p_output1[955]=41;
  p_output1[956]=42;
  p_output1[957]=4;
  p_output1[958]=5;
  p_output1[959]=6;
  p_output1[960]=16;
  p_output1[961]=17;
  p_output1[962]=18;
  p_output1[963]=19;
  p_output1[964]=20;
  p_output1[965]=21;
  p_output1[966]=22;
  p_output1[967]=23;
  p_output1[968]=24;
  p_output1[969]=25;
  p_output1[970]=26;
  p_output1[971]=27;
  p_output1[972]=37;
  p_output1[973]=38;
  p_output1[974]=39;
  p_output1[975]=40;
  p_output1[976]=41;
  p_output1[977]=42;
  p_output1[978]=4;
  p_output1[979]=5;
  p_output1[980]=6;
  p_output1[981]=16;
  p_output1[982]=17;
  p_output1[983]=18;
  p_output1[984]=19;
  p_output1[985]=20;
  p_output1[986]=21;
  p_output1[987]=22;
  p_output1[988]=23;
  p_output1[989]=24;
  p_output1[990]=25;
  p_output1[991]=26;
  p_output1[992]=27;
  p_output1[993]=37;
  p_output1[994]=38;
  p_output1[995]=39;
  p_output1[996]=40;
  p_output1[997]=41;
  p_output1[998]=42;
  p_output1[999]=4;
  p_output1[1000]=5;
  p_output1[1001]=6;
  p_output1[1002]=16;
  p_output1[1003]=17;
  p_output1[1004]=18;
  p_output1[1005]=19;
  p_output1[1006]=20;
  p_output1[1007]=21;
  p_output1[1008]=22;
  p_output1[1009]=23;
  p_output1[1010]=24;
  p_output1[1011]=25;
  p_output1[1012]=26;
  p_output1[1013]=27;
  p_output1[1014]=37;
  p_output1[1015]=38;
  p_output1[1016]=39;
  p_output1[1017]=40;
  p_output1[1018]=41;
  p_output1[1019]=42;
  p_output1[1020]=4;
  p_output1[1021]=5;
  p_output1[1022]=6;
  p_output1[1023]=16;
  p_output1[1024]=17;
  p_output1[1025]=18;
  p_output1[1026]=19;
  p_output1[1027]=20;
  p_output1[1028]=21;
  p_output1[1029]=22;
  p_output1[1030]=23;
  p_output1[1031]=24;
  p_output1[1032]=25;
  p_output1[1033]=26;
  p_output1[1034]=27;
  p_output1[1035]=37;
  p_output1[1036]=38;
  p_output1[1037]=39;
  p_output1[1038]=40;
  p_output1[1039]=41;
  p_output1[1040]=42;
  p_output1[1041]=4;
  p_output1[1042]=5;
  p_output1[1043]=6;
  p_output1[1044]=16;
  p_output1[1045]=17;
  p_output1[1046]=18;
  p_output1[1047]=19;
  p_output1[1048]=20;
  p_output1[1049]=21;
  p_output1[1050]=22;
  p_output1[1051]=23;
  p_output1[1052]=24;
  p_output1[1053]=25;
  p_output1[1054]=26;
  p_output1[1055]=27;
  p_output1[1056]=37;
  p_output1[1057]=38;
  p_output1[1058]=39;
  p_output1[1059]=40;
  p_output1[1060]=41;
  p_output1[1061]=42;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 531, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_inertia_vec.hh"

namespace symbolic
{
namespace basic
{

void Js_inertia_vec_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#define RBAT_PULL_DOWN_R		   27000	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#define RBAT_PULL_DOWN_R		  100000	
#endif
#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,68237},
        {-15,53650},
        {-10,42506},
        { -5,33892},
        {  0,27219},
        {  5,22021},
        { 10,17926},
        { 15,14674},
        { 20,12081},
        { 25,10000},
        { 30,8315},
        { 35,6948},
        { 40,5834},
        { 45,4917},
        { 50,4161},
        { 55,3535},
        { 60,3014}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
	{0   , 4111},         
	{3   , 4091},         
	{6   , 4077},         
	{9   , 4065},         
	{12  , 4058},         
	{16  , 4050},         
	{19  , 4043},         
	{22  , 4035},         
	{25  , 4028},         
	{28  , 4020},         
	{31  , 4011},         
	{34  , 4005},         
	{37  , 3998},         
	{40  , 3990},         
	{44  , 3984},         
	{47  , 3977},         
	{50  , 3969},         
	{53  , 3964},         
	{56  , 3957},         
	{59  , 3951},         
	{62  , 3944},         
	{65  , 3937},         
	{68  , 3928},         
	{72  , 3919},         
	{75  , 3910},         
	{78  , 3891},         
	{81  , 3833},         
	{84  , 3762},         
	{86  , 3748},         
	{88  , 3737},         
	{89  , 3731},         
	{90  , 3724},         
	{91  , 3720},         
	{92  , 3714},         
	{93  , 3710},         
	{93  , 3706},         
	{94  , 3703},         
	{95  , 3699},         
	{95  , 3694},         
	{95  , 3692},         
	{96  , 3688},         
	{96  , 3687},         
	{97  , 3683},         
	{97  , 3681},         
	{97  , 3679},         
	{97  , 3677},         
	{98  , 3674},         
	{98  , 3673},         
	{98  , 3671},         
	{98  , 3669},         
	{98  , 3667},         
	{99  , 3666},         
	{99  , 3664},         
	{99  , 3663},         
	{99  , 3661},         
	{99  , 3660},         
	{99  , 3657},         
	{99  , 3658},         
	{99  , 3654},         
	{100 , 3655},         
	{100 , 3653},          
  {100 , 3653},
  {100 , 3651},
  {100 , 3650},
  {100 , 3649},
  {100 , 3647},
  {100 , 3647},
  {100 , 3647},
  {100 , 3647},
  {100 , 3647},
	{100 , 3647}, 
	{100 , 3647},
	{100 , 3647},
	{100 , 3647},
	{100 , 3647},
	{100 , 3647}, 
	{100 , 3647}	       
};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{  
	{0   , 4153},         
	{2   , 4131},         
	{4   , 4113},         
	{6   , 4098},         
	{8   , 4085},         
	{10  , 4075},         
	{13  , 4067},         
	{15  , 4059},         
	{17  , 4051},         
	{19  , 4044},         
	{21  , 4038},         
	{23  , 4030},         
	{25  , 4022},         
	{27  , 4014},         
	{29  , 4007},         
	{31  , 4001},         
	{33  , 3994},         
	{36  , 3986},         
	{38  , 3981},         
	{40  , 3974},         
	{42  , 3968},         
	{44  , 3960},         
	{46  , 3950},         
	{48  , 3939},         
	{50  , 3923},         
	{52  , 3891},         
	{54  , 3835},         
	{57  , 3821},         
	{59  , 3811},         
	{61  , 3803},         
	{63  , 3797},         
	{65  , 3790},         
	{67  , 3781},         
	{69  , 3775},         
	{71  , 3766},         
	{73  , 3758},         
	{75  , 3747},         
	{77  , 3737},         
	{80  , 3727},         
	{82  , 3718},         
	{84  , 3711},         
	{86  , 3700},         
	{88  , 3690},         
	{90  , 3674},         
	{92  , 3649},         
	{94  , 3615},         
	{96  , 3561},         
	{98  , 3517},         
	{98  , 3485},         
	{99  , 3460},         
	{99  , 3441},         
	{100 , 3424},         
	{100 , 3412},         
	{100 , 3402},         
	{100 , 3396},         
	{100 , 3391},         
	{100 , 3386},         
	{100 , 3382},         
  {100 , 3377},
	{100 , 3377},         
	{100 , 3377},          
  {100 , 3377},
  {100 , 3377},
  {100 , 3377},
  {100 , 3377},
  {100 , 3377},
  {100 , 3377},
  {100 , 3377},
  {100 , 3377},
  {100 , 3377},
	{100 , 3377}, 
	{100 , 3377},
	{100 , 3377},
	{100 , 3377},
	{100 , 3377},
	{100 , 3377}, 
	{100 , 3377}	       
};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
	{0   , 4167},         
	{1   , 4148},         
	{3   , 4131},         
	{4   , 4116},         
	{6   , 4103},         
	{7   , 4089},         
	{8   , 4075},         
	{10  , 4063},         
	{11  , 4051},         
	{13  , 4041},         
	{14  , 4029},         
	{15  , 4017},         
	{17  , 4008},         
	{18  , 3998},         
	{19  , 3987},         
	{21  , 3978},         
	{22  , 3970},         
	{24  , 3960},         
	{25  , 3952},         
	{26  , 3945},         
	{28  , 3935},         
	{29  , 3928},         
	{31  , 3920},         
	{32  , 3912},         
	{33  , 3905},         
	{35  , 3896},         
	{36  , 3889},         
	{37  , 3878},         
	{39  , 3866},         
	{40  , 3855},         
	{42  , 3844},         
	{43  , 3836},         
	{44  , 3830},         
	{46  , 3823},         
	{47  , 3818},         
	{49  , 3814},         
	{50  , 3807},         
	{51  , 3804},         
	{53  , 3801},         
	{54  , 3797},         
	{55  , 3793},         
	{57  , 3791},         
	{58  , 3787},         
	{60  , 3785},         
	{61  , 3782},         
	{62  , 3781},         
	{64  , 3777},         
	{65  , 3777},         
	{67  , 3775},         
	{68  , 3773},         
	{69  , 3772},         
	{71  , 3769},         
	{72  , 3766},         
	{74  , 3761},         
	{75  , 3757},         
	{76  , 3753},         
	{78  , 3746},         
	{79  , 3741},         
	{81  , 3736},         
	{82  , 3728},         
	{83  , 3719},          
  {85  , 3712},
  {86  , 3701},
  {87  , 3689},
  {89  , 3684},
  {90  , 3681},
  {92  , 3675},
  {93  , 3671},
  {94  , 3665},
  {96  , 3650},
	{97  , 3599}, 
	{99  , 3526},
	{100 , 3416},
	{100 , 3205},
	{100 , 3078},
	{100 , 3031},
	{100 , 3013}	       
};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
	{0   , 4173},         
	{1   , 4155},         
	{3   , 4142},         
	{4   , 4127},         
	{5   , 4115},         
	{7   , 4102},         
	{8   , 4091},         
	{9   , 4078},         
	{11  , 4066},         
	{12  , 4055},         
	{13  , 4045},         
	{15  , 4034},         
	{16  , 4023},         
	{17  , 4012},         
	{19  , 4002},         
	{20  , 3992},         
	{22  , 3984},         
	{23  , 3975},         
	{24  , 3966},         
	{26  , 3957},         
	{27  , 3949},         
	{28  , 3940},         
	{30  , 3932},         
	{31  , 3924},         
	{32  , 3917},         
	{34  , 3910},         
	{35  , 3903},         
	{36  , 3896},         
	{38  , 3888},         
	{39  , 3880},         
	{40  , 3870},         
	{42  , 3857},         
	{43  , 3845},         
	{44  , 3836},         
	{46  , 3830},         
	{47  , 3822},         
	{49  , 3818},         
	{50  , 3813},         
	{51  , 3809},         
	{52  , 3805},         
	{54  , 3801},         
	{55  , 3797},         
	{57  , 3792},         
	{58  , 3789},         
	{59  , 3787},         
	{61  , 3784},         
	{62  , 3781},         
	{63  , 3780},         
	{65  , 3776},         
	{66  , 3774},         
	{67  , 3772},         
	{69  , 3768},         
	{70  , 3764},         
	{71  , 3759},         
	{73  , 3751},         
	{74  , 3749},         
	{75  , 3745},         
	{77  , 3741},         
	{78  , 3735},         
	{79  , 3731},         
	{81  , 3725},          
  {82  , 3720},
  {83  , 3712},
  {85  , 3703},
  {86  , 3697},
  {88  , 3685},
  {89  , 3677},
  {90  , 3675},
  {92  , 3675},
  {93  , 3672},
	{94  , 3669}, 
	{96  , 3655},
	{97  , 3612},
	{98  , 3545},
	{100 , 3449},
	{100 , 3279},
	{100 , 3091}	       
};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
	{680  , 4111},         
	{680  , 4091},         
	{680  , 4077},         
	{683  , 4065},         
	{698  , 4058},         
	{705  , 4050},         
	{718  , 4043},         
	{735  , 4035},         
	{748  , 4028},         
	{763  , 4020},         
	{758  , 4011},         
	{775  , 4005},         
	{778  , 3998},         
	{783  , 3990},         
	{795  , 3984},         
	{800  , 3977},         
	{813  , 3969},         
	{843  , 3964},         
	{870  , 3957},         
	{928  , 3951},         
	{1003 , 3944},         
	{1093 , 3937},         
	{1220 , 3928},         
	{1450 , 3919},         
	{1745 , 3910},         
	{2063 , 3891},         
	{2283 , 3833},         
	{2383 , 3762},         
	{2373 , 3748},         
	{2345 , 3737},         
	{2330 , 3731},         
	{2315 , 3724},         
	{2303 , 3720},         
	{2288 , 3714},         
	{2280 , 3710},         
	{2268 , 3706},         
	{2260 , 3703},         
	{2250 , 3699},         
	{2238 , 3694},         
	{2238 , 3692},         
	{2228 , 3688},         
	{2225 , 3687},         
	{2210 , 3683},         
	{2208 , 3681},         
	{2203 , 3679},         
	{2195 , 3677},         
	{2188 , 3674},         
	{2185 , 3673},         
	{2178 , 3671},         
	{2180 , 3669},         
	{2175 , 3667},         
	{2173 , 3666},         
	{2160 , 3664},         
	{2158 , 3663},         
	{2155 , 3661},         
	{2163 , 3660},         
	{2150 , 3657},         
	{2150 , 3658},         
	{2143 , 3654},         
	{2145 , 3655},         
	{2140 , 3653},          
  {2148 , 3653},
  {2128 , 3651},
  {2148 , 3650},
  {2128 , 3649},
  {2130 , 3647},
  {2130 , 3647},
  {2130 , 3647},
  {2130 , 3647},
  {2130 , 3647},
	{2130 , 3647}, 
	{2130 , 3647},
	{2130 , 3647},
	{2130 , 3647},
	{2130 , 3647},
	{2130 , 3647}, 
	{2130 , 3647}	       
};      

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
	{340  , 4153},         
	{340  , 4131},         
	{340  , 4113},         
	{335  , 4098},         
	{333  , 4085},         
	{328  , 4075},         
	{330  , 4067},         
	{338  , 4059},         
	{343  , 4051},         
	{348  , 4044},         
	{350  , 4038},         
	{353  , 4030},         
	{350  , 4022},         
	{353  , 4014},         
	{355  , 4007},         
	{363  , 4001},         
	{363  , 3994},         
	{365  , 3986},         
	{383  , 3981},         
	{390  , 3974},         
	{413  , 3968},         
	{448  , 3960},         
	{503  , 3950},         
	{598  , 3939},         
	{800  , 3923},         
	{1085 , 3891},         
	{1328 , 3835},         
	{1365 , 3821},         
	{1378 , 3811},         
	{1360 , 3803},         
	{1383 , 3797},         
	{1373 , 3790},         
	{1383 , 3781},         
	{1383 , 3775},         
	{1395 , 3766},         
	{1390 , 3758},         
	{1410 , 3747},         
	{1418 , 3737},         
	{1433 , 3727},         
	{1463 , 3718},         
	{1478 , 3711},         
	{1520 , 3700},         
	{1565 , 3690},         
	{1605 , 3674},         
	{1678 , 3649},         
	{1738 , 3615},         
	{1823 , 3561},         
	{1795 , 3517},         
	{1715 , 3485},         
	{1658 , 3460},         
	{1610 , 3441},         
	{1568 , 3424},         
	{1545 , 3412},         
	{1513 , 3402},         
	{1498 , 3396},         
	{1490 , 3391},         
	{1473 , 3386},         
	{1463 , 3382},         
	{1448 , 3377},         
	{1448 , 3377},         
	{1448 , 3377},          
  {1448 , 3377},
  {1448 , 3377},
  {1448 , 3377},
  {1448 , 3377},
  {1448 , 3377},
  {1448 , 3377},
  {1448 , 3377},
  {1448 , 3377},
  {1448 , 3377},
	{1448 , 3377}, 
	{1448 , 3377},
	{1448 , 3377},
	{1448 , 3377},
	{1448 , 3377},
	{1448 , 3377}, 
	{1448 , 3377}	       
};     

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
	{208 , 4167},         
	{208 , 4148},         
	{215 , 4131},         
	{215 , 4116},         
	{220 , 4103},         
	{223 , 4089},         
	{223 , 4075},         
	{223 , 4063},         
	{225 , 4051},         
	{238 , 4041},         
	{233 , 4029},         
	{230 , 4017},         
	{238 , 4008},         
	{243 , 3998},         
	{240 , 3987},         
	{248 , 3978},         
	{253 , 3970},         
	{253 , 3960},         
	{260 , 3952},         
	{263 , 3945},         
	{263 , 3935},         
	{268 , 3928},         
	{265 , 3920},         
	{265 , 3912},         
	{273 , 3905},         
	{268 , 3896},         
	{268 , 3889},         
	{263 , 3878},         
	{250 , 3866},         
	{240 , 3855},         
	{233 , 3844},         
	{225 , 3836},         
	{223 , 3830},         
	{220 , 3823},         
	{218 , 3818},         
	{220 , 3814},         
	{218 , 3807},         
	{223 , 3804},         
	{225 , 3801},         
	{225 , 3797},         
	{223 , 3793},         
	{225 , 3791},         
	{225 , 3787},         
	{228 , 3785},         
	{228 , 3782},         
	{233 , 3781},         
	{233 , 3777},         
	{240 , 3777},         
	{238 , 3775},         
	{238 , 3773},         
	{243 , 3772},         
	{240 , 3769},         
	{238 , 3766},         
	{235 , 3761},         
	{235 , 3757},         
	{235 , 3753},         
	{230 , 3746},         
	{233 , 3741},         
	{238 , 3736},         
	{235 , 3728},         
	{233 , 3719},          
  {240 , 3712},
  {240 , 3701},
  {233 , 3689},
  {233 , 3684},
  {238 , 3681},
  {240 , 3675},
  {258 , 3671},
  {275 , 3665},
  {298 , 3650},
	{298 , 3599}, 
	{325 , 3526},
	{375 , 3416},
	{585 , 3205},
	{710 , 3078},
	{625 , 3031}, 
	{545 , 3013}	       
}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
	{188 , 4173},         
	{188 , 4155},         
	{195 , 4142},         
	{195 , 4127},         
	{198 , 4115},         
	{198 , 4102},         
	{200 , 4091},         
	{203 , 4078},         
	{200 , 4066},         
	{203 , 4055},         
	{208 , 4045},         
	{208 , 4034},         
	{208 , 4023},         
	{210 , 4012},         
	{210 , 4002},         
	{213 , 3992},         
	{215 , 3984},         
	{220 , 3975},         
	{220 , 3966},         
	{223 , 3957},         
	{228 , 3949},         
	{225 , 3940},         
	{228 , 3932},         
	{230 , 3924},         
	{233 , 3917},         
	{235 , 3910},         
	{235 , 3903},         
	{240 , 3896},         
	{243 , 3888},         
	{238 , 3880},         
	{230 , 3870},         
	{220 , 3857},         
	{208 , 3845},         
	{203 , 3836},         
	{200 , 3830},         
	{198 , 3822},         
	{198 , 3818},         
	{203 , 3813},         
	{203 , 3809},         
	{205 , 3805},         
	{203 , 3801},         
	{208 , 3797},         
	{203 , 3792},         
	{203 , 3789},         
	{208 , 3787},         
	{210 , 3784},         
	{213 , 3781},         
	{218 , 3780},         
	{210 , 3776},         
	{213 , 3774},         
	{215 , 3772},         
	{210 , 3768},         
	{208 , 3764},         
	{205 , 3759},         
	{195 , 3751},         
	{203 , 3749},         
	{200 , 3745},         
	{205 , 3741},         
	{203 , 3735},         
	{203 , 3731},         
	{203 , 3725},          
  {208 , 3720},
  {205 , 3712},
  {205 , 3703},
  {213 , 3697},
  {205 , 3685},
  {203 , 3677},
  {208 , 3675},
  {215 , 3675},
  {223 , 3672},
	{238 , 3669}, 
	{240 , 3655},
	{233 , 3612},
	{240 , 3545},
	{265 , 3449},
	{325 , 3279}, 
	{788 , 3091}	       
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

// 函数: sub_4a7050
// 地址: 0x4a7050
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_907ee0

if (data_907edc == 0)
    ecx = data_1313290

if (ecx s< 0 || ecx s>= 8)
    ecx = 0

int16_t x87control
uint64_t xmm6[0x2]
x87control, xmm6 = sub_4a64e0(ecx)

if (data_1372c24.b == 0)
    return 

int32_t eax_1 = data_1372c20
data_1372c24:1.b = 0
data_1372da4 = 0

if (eax_1 u> 7)
    return 

char edx_1 = data_1374088
int32_t edi_1 = data_131310c
int32_t ecx_1 = data_1374094
int32_t eax_4
int32_t ecx_2

if (edx_1 != 1)
    int32_t eax_6 = data_1374090 - edi_1
    data_1374090 = edi_1
    ecx_2 = ecx_1 + eax_6
    bool cond:0_1 = data_13130bc != 0
    eax_4 = data_137408c
    data_1374094 = ecx_2
    
    if (cond:0_1 || eax_4 == 0 || ecx_2 s< 0)
        ecx_2 = 0
        data_1374094 = ecx_2
else
    ecx_2 = ecx_1 + edi_1 - data_1374090
    data_1374090 = edi_1
    bool cond:1_1 = data_13130bc != 0
    eax_4 = data_137408c
    data_1374094 = ecx_2
    
    if (cond:1_1 || eax_4 == 0 || ecx_2 u> eax_4)
        ecx_2 = eax_4
        data_1374094 = ecx_2

int32_t var_c_1 = 0xff
int32_t var_40
char eax_7

if (eax_4 == 0)
    eax_7 = 0
    
    if (edx_1 == 1)
        eax_7 = -1
else
    int32_t var_28_1 = edi_1
    int32_t var_34_1 = 0
    var_40 = 0xff
    char var_3c_1 = 0
    int32_t var_1c_1 = 0
    
    if (eax_4 s< 0)
        eax_4 = neg.d(eax_4)
    
    int32_t var_24_1 = ecx_2
    int32_t var_20_1 = eax_4
    int32_t var_30_1 = 0xff
    int32_t var_2c_1 = 0
    char var_38_1 = 0
    sub_4d1fd0(&var_40, ecx_2)
    eax_7 = var_3c_1

edx_1 = data_907ee4
int32_t ecx_4 = data_907ef0
int32_t eax_10
int32_t ecx_5

if (edx_1 != 1)
    int32_t eax_12 = data_907eec - edi_1
    data_907eec = edi_1
    ecx_5 = ecx_4 + eax_12
    bool cond:3_1 = data_13130bc != 0
    eax_10 = data_907ee8
    data_907ef0 = ecx_5
    
    if (cond:3_1 || eax_10 == 0 || ecx_5 s< 0)
        ecx_5 = 0
        data_907ef0 = ecx_5
else
    ecx_5 = ecx_4 + edi_1 - data_907eec
    data_907eec = edi_1
    bool cond:4_1 = data_13130bc != 0
    eax_10 = data_907ee8
    data_907ef0 = ecx_5
    
    if (cond:4_1 || eax_10 == 0 || ecx_5 u> eax_10)
        ecx_5 = eax_10
        data_907ef0 = ecx_5

int32_t eax_13

if (eax_10 == 0)
    eax_13 = 0
    
    if (edx_1 == 1)
        eax_13 = var_c_1
else
    int32_t var_28_2 = edi_1
    int32_t var_34_2 = 0
    var_40 = 0xff
    int32_t var_3c_2 = 0
    int32_t var_1c_2 = 0
    
    if (eax_10 s< 0)
        eax_10 = neg.d(eax_10)
    
    int32_t var_24_2 = ecx_5
    int32_t var_20_2 = eax_10
    int32_t var_30_2 = 0xff
    int32_t var_2c_2 = 0
    char var_38_2 = 0
    sub_4d1fd0(&var_40, ecx_5)
    eax_13 = var_3c_2

int32_t edx_7 = data_137409c
int32_t eax_18 = *(eax_1 * 0xfcc + 0x129aae0)
int32_t var_c_2 = edx_7
int32_t ecx_9
int32_t esi_3

if (edx_7 == eax_18)
    esi_3 = data_13740a4
    ecx_9.b = data_1374098
else if (eax_18 s<= 0)
    esi_3 = 0
label_4a7301:
    ecx_9.b = data_1374098
    edx_7 = eax_18
    var_c_2 = edx_7
    data_137409c = edx_7
else
    if (edx_7 != 0)
        double xmm1_3 = _mm_cvtepi32_pd(zx.q(edx_7)) f+ *((edx_7 u>> 0x1f << 3) + &data_624a10)
        double xmm0_2 = _mm_cvtepi32_pd(zx.q(eax_18))
        int32_t eax_19 = data_13740a4
        int32_t eax_21
        int80_t st0_1
        st0_1, eax_21, ecx_9 = sub_603c71(x87control, 
            xmm0_2 / xmm1_3
                * (_mm_cvtepi32_pd(zx.q(eax_19)) f+ *((eax_19 u>> 0x1f << 3) + &data_624a10)), 
            xmm6)
        esi_3 = eax_21
        goto label_4a7301
    
    ecx_9.b = data_1374098
    esi_3 = 0
    edx_7 = eax_18
    var_c_2 = edx_7
    
    if (ecx_9.b == 1)
        esi_3 = eax_18
    
    data_137409c = edx_7

int32_t eax_22
int32_t eax_23

if (data_129a988 != 0 && data_13132e4 != 0 && data_70373c != 0 && data_13740a8 == 0)
    eax_22 = data_131d2cc
    
    if (eax_22 s>= data_1374078 && eax_22 s<= data_1374080)
        eax_23 = data_1320e58

int32_t eax_25
int32_t esi_4

if (data_129a988 != 0 && data_13132e4 != 0 && data_70373c != 0 && data_13740a8 == 0 && (
        eax_22 s< data_1374078 || eax_22 s> data_1374080 || eax_23 s< data_137407c
        || eax_23 s> data_1374084))
    int32_t eax_24 = data_13740a0
    data_13740a0 = edi_1
    
    if (ecx_9.b == 1)
        eax_24 = edi_1
    
    esi_4 = esi_3 + eax_24 - edi_1
    eax_25.b = 0
    bool cond:12_1 = data_13130bc != 0
    data_13740a4 = esi_4
    data_1374098 = 0
    
    if (cond:12_1 || edx_7 == 0 || esi_4 s< 0)
        esi_4 = 0
        data_13740a4 = esi_4
else
    int32_t ecx_10 = data_13740a0
    
    if (data_1374098 == 0)
        ecx_10 = edi_1
    
    data_13740a0 = edi_1
    esi_4 = esi_3 + edi_1 - ecx_10
    bool cond:7_1 = data_13130bc != 0
    eax_25.b = 1
    data_13740a4 = esi_4
    data_1374098 = 1
    
    if (cond:7_1 || edx_7 == 0 || esi_4 u> edx_7)
        esi_4 = edx_7
        data_13740a4 = esi_4

uint32_t eax_36
int32_t edx_12
int32_t esi_5

if (edx_7 != 0)
    int32_t var_28_3 = edi_1
    var_40 = 0
    int32_t var_1c_3 = 0
    int32_t eax_28 = *(eax_1 * 0xfcc + 0x129aae4)
    int32_t var_34_3 = eax_28
    
    if (edx_7 s< 0)
        edx_7 = neg.d(edx_7)
    
    int32_t var_20_3 = edx_7
    int32_t var_30_3 = 0
    int32_t var_2c_3 = 0
    char var_38_3 = 4
    int32_t var_24_3 = esi_4
    sub_4d1fd0(&var_40, esi_4)
    int32_t ecx_12 = var_c_2
    int32_t var_28_4 = edi_1
    var_40 = 0
    int32_t var_1c_4 = 0
    int32_t eax_31 = *(eax_1 * 0xfcc + 0x129aae8)
    int32_t var_34_4 = eax_31
    
    if (ecx_12 s< 0)
        ecx_12 = neg.d(ecx_12)
    
    int32_t var_20_4 = ecx_12
    int32_t var_30_4 = 0
    int32_t var_2c_4 = 0
    char var_38_4 = 4
    int32_t var_24_4 = esi_4
    sub_4d1fd0(&var_40, esi_4)
    int32_t var_28_5 = edi_1
    var_40 = 0xff
    int32_t var_1c_5 = 0
    uint32_t eax_34 = zx.d(*(eax_1 * 0xfcc + 0x129aaec))
    uint32_t var_34_5 = eax_34
    int32_t eax_35 = var_c_2
    
    if (eax_35 s< 0)
        eax_35 = neg.d(eax_35)
    
    int32_t var_20_5 = eax_35
    int32_t var_30_5 = 0xff
    int32_t var_2c_5 = 0
    char var_38_5 = 0
    int32_t var_24_5 = esi_4
    sub_4d1fd0(&var_40, esi_4)
    eax_36 = eax_34
    edx_12 = eax_31
    esi_5 = eax_28
else if (eax_25.b != 1)
    esi_5 = *(eax_1 * 0xfcc + 0x129aae4)
    edx_12 = *(eax_1 * 0xfcc + 0x129aae8)
    eax_36 = zx.d(*(eax_1 * 0xfcc + 0x129aaec))
else
    edx_12 = 0
    eax_36 = 0xff
    esi_5 = 0

data_1372d5c = data_1374070 + esi_5
data_1372d60 = data_1374074 + edx_12
bool cond:10_1 = data_131256c != 0
data_1372da0 = (zx.d((zx.d(eax_7) * eax_13 s/ 0xff).b) * eax_36 s/ 0xff).b

if (cond:10_1 || data_13125b4 != 0 || data_1311174 != 0 || (data_1311178 != 0 && data_1b8be8c != 0))
    return 

char eax_41

if (data_1374088 != 0)
    eax_41 = data_907ee4
    
    if (eax_41 != 0)
        data_1372c24:1.b = 1
        goto label_4a7589
    
    if (data_907ef0 u> 0)
        data_1372da4 = 1
else if (data_1374094 u> 0)
    eax_41 = data_907ee4
label_4a7589:
    
    if (eax_41 != 0 || data_907ef0 u> 0)
        data_1372da4 = 1

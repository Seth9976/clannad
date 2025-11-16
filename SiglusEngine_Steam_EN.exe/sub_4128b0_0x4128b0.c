// 函数: sub_4128b0
// 地址: 0x4128b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_30 = arg3
int32_t var_34 = arg2

if (arg6 s>= 0x21 || arg9 u> 0x20)
    return 

int32_t eax_1 = arg6 << 5

if ((&data_976b50)[arg6 * 8] == 0)
    sub_411500(eax_1, data_70300c, arg6, data_7030dc)

int32_t eax_3 = arg9 << 5

if ((&data_976b50)[arg9 * 8] == 0)
    sub_411500(eax_3, data_70300c, arg9, data_7030dc)

int32_t esi_1
int32_t edi_1

if (arg16 u> 6)
    esi_1 = eax_3
    edi_1 = eax_3
else
    switch (arg16)
        case 0
            esi_1 = 0
            edi_1 = 0
        case 1
            esi_1 = 1
            edi_1 = 0
        case 2
            esi_1 = 1
            edi_1 = 3
        case 3
            esi_1 = 0
            edi_1 = 1
        case 4
            esi_1 = 1
            edi_1 = 1
        case 5
            esi_1 = 0
            edi_1 = 2
        case 6
            esi_1 = 1
            edi_1 = 2

int32_t var_1c_1 = 0
int32_t var_28_1 = 0
int32_t var_2c_1 = 0
int32_t eax_6

if (arg10 u<= 3)
    eax_6 = arg10 * 5

int32_t var_24_1
int32_t var_20_1

if (arg10 u> 3 || *((eax_6 << 3) + &data_7030e0) == 0)
    var_24_1 = arg15
    var_20_1 = arg12
else
    var_1c_1 = *((eax_6 << 3) + &data_7030e0:4)
    var_2c_1 = *((eax_6 << 3) + &data_7030e0:0xc)
    int32_t eax_8 = arg12
    var_28_1 = *((eax_6 << 3) + &data_7030e0:8)
    
    if (eax_8 s< 0)
        eax_8 = 0
    else if (eax_8 s> 8)
        eax_8 = 8
    
    int32_t eax_9 = arg15
    var_20_1 = 8 - eax_8
    
    if (eax_9 s< 0xffffff01)
        eax_9 = 0xffffff01
    else if (eax_9 s> 0xff)
        eax_9 = 0xff
    
    int32_t edx_2 = 0xff << (8 - eax_8).b
    var_24_1 = (edx_2 + 0xff) * (eax_9 + 0xff) s/ 0x1fe - edx_2

void* ecx_7 = arg4
void* eax_18 = var_30

if (eax_18 s> ecx_7)
    var_30 = ecx_7
    ecx_7 = eax_18

int32_t edx_6 = arg5
int32_t eax_19 = var_34

if (eax_19 s> edx_6)
    var_34 = edx_6
    edx_6 = eax_19

if (var_30 s>= (&data_976b58)[arg6 * 8] || ecx_7 s< 0)
    return 

int32_t ebx_4 = arg9

if (var_34 s>= (&data_976b5c)[arg6 * 8] || edx_6 s< 0)
    return 

void* eax_22 = ecx_7 - var_30 + arg7
int32_t eax_25 = edx_6 - var_34 + arg8
int32_t edi_2

if (arg6 != ebx_4)
label_412bc8:
    int32_t var_44_5 = edi_1
    int32_t var_48_3 = arg21
    edi_2 = arg7
    int32_t var_4c_3 = 0
    int32_t var_50_3 = 0
    int32_t var_54_2 = 0
    sub_584980(eax_1, (&data_976b58)[arg9 * 8], (&data_976b54)[arg9 * 8], (&data_976b5c)[arg9 * 8], 
        (&data_976b54)[arg6 * 8], (&data_976b58)[arg6 * 8], (&data_976b5c)[arg6 * 8], var_30, 
        var_34, esi_1, edi_2, arg8, edi_2, arg8.b, eax_22, eax_25, ecx_7, var_1c_1, var_20_1, 
        var_24_1, var_28_1, var_2c_1, arg13, arg14, arg11, 0, 0, arg17, arg18, arg19, arg20, 
        nullptr)
else
    ebx_4 = arg9
    
    if (arg7 s< var_30 || arg7 s> ecx_7)
        goto label_412bc8
    
    ebx_4 = arg9
    
    if (arg8 s< var_34 || arg8 s> edx_6)
        goto label_412bc8
    
    int32_t ecx_8 = sub_411a20(eax_1, arg6, 0x1d, var_30, var_34, ecx_7, edx_6)
    int32_t var_44_4 = edi_1
    int32_t var_48_2 = arg21
    edi_2 = arg7
    int32_t var_4c_2 = 0
    int32_t var_50_2 = 0
    int32_t var_54_1 = 0
    sub_584980(arg8, (&data_976b58)[arg9 * 8], (&data_976b54)[arg9 * 8], (&data_976b5c)[arg9 * 8], 
        data_976ef4, data_976ef8, data_976efc, 0, 0, esi_1, edi_2, arg8, edi_2, arg8.b, eax_22, 
        eax_25, ecx_8, var_1c_1, var_20_1, var_24_1, var_28_1, var_2c_1, arg13, arg14, arg11, 0, 0, 
        arg17, arg18, arg19, arg20, nullptr)
    sub_4d6c40(0x976ef0, &data_976ef4)
    data_976ef8 = 0
    data_976efc = 0

if (ebx_4 == 0)
    int32_t var_44_6 = eax_25
    void* var_48_4 = eax_22
    sub_494c90(edi_2, arg8)
    data_703004 = 1

sub_564200(ebx_4)

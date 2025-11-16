// 函数: sub_4142f0
// 地址: 0x4142f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg2

if (arg21 != 0 && arg22 != 0 && arg23 != 0)
    arg1 = arg24
    
    if (arg1 != 0)
        *arg21 = 0xffffffff
        *arg22 = 0xffffffff
        *arg23 = 0xffffffff
        *arg1 = 0xffffffff

if (arg19 == 0 || arg17 == 0 || arg18 == 0 || arg3 u> 0x20 || arg9 u> 0x20)
    return 

if ((&data_976b50)[arg3 * 8] == 0)
    sub_411500(arg1, data_70300c, arg3, data_7030dc)

int32_t eax = (&data_976b54)[arg3 * 8]
int32_t* eax_1 = (&data_976b58)[arg3 * 8]
int32_t eax_2 = (&data_976b5c)[arg3 * 8]

if ((&data_976b50)[arg9 * 8] == 0)
    sub_411500(eax_2, data_70300c, arg9, data_7030dc)

void* eax_3 = (&data_976b54)[arg9 * 8]
int32_t edi_1 = (&data_976b58)[arg9 * 8]
int32_t ecx_1 = arg12
int32_t ebx_3 = arg13
int32_t eax_4 = (&data_976b5c)[arg9 * 8]
int32_t esi_5 = arg14
int32_t edx_3

if (ecx_1 != 0xffffffff || ebx_3 != 0xffffffff || esi_5 != ebx_3)
    edx_3 = arg15
    
    if (ecx_1 s> esi_5)
        int32_t eax_5 = ecx_1
        ecx_1 = esi_5
        esi_5 = eax_5
        arg12 = ecx_1
        arg14 = esi_5
    
    goto label_414422

edx_3 = arg15

if (edx_3 != ebx_3)
label_414422:
    
    if (ebx_3 s> edx_3)
        int32_t eax_6 = ebx_3
        ebx_3 = edx_3
        edx_3 = eax_6
        arg15 = edx_3
else
    ecx_1 = 0
    esi_5 = edi_1 - 1
    arg12 = 0
    edx_3 = eax_4 - 1
    ebx_3 = 0
    arg14 = esi_5
    arg15 = edx_3

void* eax_7 = var_8
int32_t eax_8

if (eax_7 != 0xffffffff || arg4 != eax_7 || arg5 != eax_7)
    if (eax_7 s<= arg5)
        goto label_41446e
    
    var_8 = arg5
    arg5 = eax_7
label_41446e:
    eax_8 = arg4
    int32_t edi_7 = arg6
    
    if (eax_8 s> edi_7)
        arg6 = eax_8
        eax_8 = edi_7
        arg4 = edi_7
else
    if (arg6 != eax_7)
        goto label_41446e
    
    eax_8 = 0
    var_8 = nullptr
    arg5 = eax_1 - 1
    arg4 = 0
    arg6 = eax_2 - 1

int32_t edi_8 = arg10

if (edi_8 == 0xffffd8f8)
    edi_8 = esi_5
else if (edi_8 == 0xffffd8f9)
    edi_8 = ((esi_5 - ecx_1) s>> 1) + ecx_1
else if (edi_8 == 0xffffd8fa)
    edi_8 = ecx_1

int32_t esi_6 = arg11

if (esi_6 == 0xffffd8f8)
    esi_6 = edx_3
else if (esi_6 == 0xffffd8f9)
    esi_6 = ((edx_3 - ebx_3) s>> 1) + ebx_3
else if (esi_6 == 0xffffd8fa)
    esi_6 = ebx_3

void* edx_4 = arg7

if (edx_4 == 0xffffd8f8)
    edx_4 = arg5
else if (edx_4 == 0xffffd8f9)
    edx_4 = ((arg5 - var_8) s>> 1) + var_8
else if (edx_4 == 0xffffd8fa)
    edx_4 = var_8

int32_t ecx_2 = arg8

if (ecx_2 == 0xffffd8f8)
    ecx_2 = arg6
else if (ecx_2 == 0xffffd8f9)
    ecx_2 = ((arg6 - eax_8) s>> 1) + eax_8
else if (ecx_2 == 0xffffd8fa)
    ecx_2 = eax_8

int32_t eax_9 = arg12
int32_t* var_1c = nullptr

if (eax_9 s< 0)
    eax_9 = var_1c

if (ebx_3 s< 0)
    ebx_3 = 0

if (arg14 s>= edi_1)
    arg14 = edi_1 - 1

if (arg15 s>= eax_4)
    arg15 = eax_4 - 1

int32_t var_44_3 = 1
int32_t eax_19 = arg17 * 0xa
int32_t var_30
int32_t var_2c
int32_t var_28
sub_429860(eax_19, eax_1, eax, eax_2, var_8, arg4, arg5, arg6, edx_4, ecx_2, ecx_2, eax_3, edi_1, 
    eax_4, edi_8, esi_6, eax_9, ebx_3, arg14, arg15, arg16, eax_19, (arg18.b + (arg18 << 2).b) * 2, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0, arg19.d, arg20, &var_30, &var_2c, 
    &var_28, &var_1c, arg25.b)
arg1 = var_1c
int32_t esi_10 = var_28
int32_t edx_9 = var_2c
int32_t ecx_7 = var_30

if (arg21 != 0 && arg22 != 0 && arg23 != 0 && arg24 != 0)
    *arg21 = ecx_7
    *arg22 = edx_9
    arg1 = var_1c
    *arg23 = esi_10
    *arg24 = arg1

if (arg25 != 0)
    return 

if (arg9 == 0)
    int32_t* var_44_4 = arg1
    int32_t var_48_2 = esi_10
    sub_494c90(ecx_7, edx_9)
    data_703004 = 1

sub_564200(arg9)

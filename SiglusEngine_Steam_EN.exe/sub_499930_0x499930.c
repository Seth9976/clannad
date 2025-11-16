// 函数: sub_499930
// 地址: 0x499930
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edx_1 = arg3 * 0x2c + &data_8c52b4
char* ecx = *arg8
void* ebx

if (arg6 != 0)
    ebx = arg3 * 0x34 + 0xf2e710
    sub_4cea50(arg3 * 0x34 + 0xf2e70c, arg3 * 0x34 + 0xf2e708, ecx, arg3 * 0x34 + 0xf2e70c, ebx)
    *(arg3 * 0x34 + 0xf2e704) = 1
else
    if (ecx != 0)
        *(arg3 * 0x34 + 0xf2e710) = zx.d(*ecx)
        *(arg3 * 0x34 + 0xf2e708) = zx.d(*(ecx + 1))
        *(arg3 * 0x34 + 0xf2e70c) = zx.d(*(ecx + 3))
    
    int32_t eax_3 = *(arg3 * 0x34 + 0xf2e710)
    ebx = arg3 * 0x34 + 0xf2e710
    
    if (eax_3 != 1)
        if (eax_3 == 2)
            *ebx = 1
        
        *(arg3 * 0x34 + 0xf2e704) = 0
    else
        *ebx = 3
        *(arg3 * 0x34 + 0xf2e704) = 0

int32_t ecx_1 = 0
bool cond:3

if (arg5 == 0)
    cond:3 = *edx_1 == 0
else
    if (arg4 != 0)
        ecx_1 = 1
    
    *edx_1 = arg4
    *(edx_1 + 0x28) = 1
    sub_4cfdf0(arg4, arg2, edx_1 + 4, 0x24)
    cond:3 = ecx_1 == 0

if (cond:3)
    *(arg3 * 0x34 + &data_f2e6f8) = *arg7
    *(arg3 * 0x34 + &data_f2e6fc) = *arg8
    *(arg3 * 0x34 + 0xf2e700) = arg9
    return arg9

sub_4d6c40(arg3 * 0x34 + &data_f2e6f8, arg3 * 0x34 + &data_f2e6fc)
char* ecx_4 = *arg8

if (arg6 != 0)
    sub_4cf1e0(arg3 * 0x34 + &data_f2e6fc, arg3 * 0x34 + &data_f2e6f8, ecx_4, 
        arg3 * 0x34 + &data_f2e6fc, arg3 * 0x34 + 0xf2e708, arg3 * 0x34 + 0xf2e70c, ebx, 1)
    return sub_4d6c40(arg7, arg8)

sub_427180(arg3 * 0x34 + &data_f2e6fc, arg9, ecx_4, arg3 * 0x34 + &data_f2e6f8, 
    arg3 * 0x34 + &data_f2e6fc, 0, nullptr, arg3 * 0x34 + 0xf2e708, arg3 * 0x34 + 0xf2e70c, ebx, 
    "SERIALPDT_EXPAND", 1, arg10)
return sub_4d6c40(arg7, arg8)

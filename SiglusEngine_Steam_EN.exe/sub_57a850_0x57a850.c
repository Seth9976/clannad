// 函数: sub_57a850
// 地址: 0x57a850
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg4

if (esi[1] != 5 && esi[4] != 1)
    int32_t var_c
    int32_t ecx_5
    int32_t edx_2
    int32_t ebx_1
    
    if (*(arg3 + 0x88) != 0xffffffff)
        ebx_1 = *(arg2 + 0x2c58) + *(arg2 + 0x2a4)
        ecx_5 = *(arg2 + 0x2ac) - 1 + ebx_1
        edx_2 = *(arg2 + 0x2c5c) + *(arg2 + 0x2a8)
        var_c = *(arg2 + 0x2b0) - 1 + edx_2
    else
        int32_t ecx_1 = *(arg2 + 0x2c58)
        ebx_1 = *(arg3 + 0x94) + ecx_1
        int32_t eax = *(arg2 + 0x2c5c)
        edx_2 = *(arg3 + 0x98) + eax
        esi = arg4
        var_c = *(arg3 + 0xa0) + eax
        ecx_5 = *(arg3 + 0x9c) + ecx_1
    
    uint32_t eax_4 = zx.d(*(arg2 + 0xa4))
    uint32_t var_a8_1 = eax_4
    int32_t var_ac_1 = esi[6]
    sub_57a710(eax_4, edx_2, ebx_1, ecx_5, var_c, esi[8], esi[9], esi[0xa], esi[0xb], esi[0xc])
    return 

if (*(arg3 + 0x88) == 0xffffffff)
    return 

arg1 = esi[3]

if (arg1 s< 0 || arg1 s>= 8)
    return 

void var_98
sub_4d1c30(arg1, arg2 + 0x5c, &var_98, 0x8c)
int32_t eax_6 = *(arg3 + 0x88)
int32_t edx_6 = *(arg2 + 0x2c58) + *(arg2 + 0x294)
int32_t* ecx_11 = *(arg2 + 0x2c5c) + *(arg2 + 0x298)
int32_t var_54_1 = 0
void* ebx_6 = (esi[3] + (eax_6 << 3)) * 0x374 + 0x1b1bd90
uint32_t eax_9 = zx.d(*(arg2 + 0xa4))
int32_t var_b0_2 = esi[0xc]
int32_t var_b4_2 = esi[0xb]
int32_t var_b8_2 = esi[0xa]
int32_t var_bc_2 = esi[9]
int32_t var_c0_2 = esi[8]

if (esi[1] == 5)
    sub_57a5a0(eax_9, &var_98, ebx_6 + 0x20, edx_6, ecx_11, var_c0_2, var_bc_2, var_b8_2, var_b4_2, 
        var_b0_2, esi[6], eax_9)
    return 

sub_57a630(arg2 + 0x398, ebx_6 + 0x26c, ebx_6 + 0x20, arg2 + 0x398, ecx_11, eax_6, esi[3], &var_98, 
    edx_6, ecx_11, *(arg2 + 0x29c), ecx_11, *(arg2 + 0x28c), *(arg2 + 0x290), var_c0_2, var_bc_2, 
    var_b8_2, var_b4_2, var_b0_2)

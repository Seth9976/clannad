// 函数: sub_57aa20
// 地址: 0x57aa20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg2 + 0x44) == 0 || *(arg3 + 0x88) == 0xffffffff
        || (*(arg4 + 4) == 5 && *(arg4 + 8) == 0xffffffff))
    return 

if (*(arg4 + 8) != 5 && *(arg4 + 0x14) != 1)
    int32_t edx_1 = *(arg2 + 0x2c5c) + *(arg2 + 0x4a0)
    uint32_t __saved_ebx = zx.d(*(arg2 + 0xa4))
    int32_t var_a8_1 = *(arg4 + 0x18)
    int32_t ecx_2 = *(arg2 + 0x2c58) + *(arg2 + 0x49c)
    int32_t eax_6 = *(arg2 + 0x4a4) - 1 + ecx_2
    sub_57a710(eax_6, edx_1, ecx_2, eax_6, *(arg2 + 0x4a8) - 1 + edx_1, *(arg4 + 0x20), 
        *(arg4 + 0x24), *(arg4 + 0x28), *(arg4 + 0x2c), *(arg4 + 0x30))
    return 

if (*(arg3 + 0x74) == 0xffffffff)
    return 

int32_t ecx_3 = *(arg4 + 0xc)

if (ecx_3 s< 0 || ecx_3 s>= 8)
    return 

void var_98
sub_4d1c30(arg3, arg2 + 0x174, &var_98, 0x8c)
int32_t eax_8 = *(arg3 + 0x74)
int32_t edx_4 = *(arg2 + 0x2c58) + *(arg2 + 0x484)
int32_t* ecx_6 = *(arg2 + 0x2c5c) + *(arg2 + 0x488)
int32_t var_54_1 = 0
void* ebx_3 = (*(arg4 + 0xc) + (eax_8 << 3)) * 0x374 + 0x1b1bd90
uint32_t eax_11 = zx.d(*(arg2 + 0xa4))
int32_t var_b0_2 = *(arg4 + 0x30)
int32_t var_b4_2 = *(arg4 + 0x2c)
int32_t var_b8_2 = *(arg4 + 0x28)
int32_t var_bc_2 = *(arg4 + 0x24)
int32_t var_c0_2 = *(arg4 + 0x20)

if (*(arg4 + 8) == 5)
    sub_57a5a0(eax_11, &var_98, ebx_3 + 0x20, edx_4, ecx_6, var_c0_2, var_bc_2, var_b8_2, var_b4_2, 
        var_b0_2, *(arg4 + 0x18), eax_11)
    return 

sub_57a630(arg2 + 0x588, ebx_3 + 0x26c, ebx_3 + 0x20, arg2 + 0x588, ecx_6, eax_8, *(arg4 + 0xc), 
    &var_98, edx_4, ecx_6, *(arg2 + 0x48c), ecx_6, *(arg2 + 0x47c), *(arg2 + 0x480), var_c0_2, 
    var_bc_2, var_b8_2, var_b4_2, var_b0_2)

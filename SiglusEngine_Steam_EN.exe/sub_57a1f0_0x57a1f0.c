// 函数: sub_57a1f0
// 地址: 0x57a1f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x2c68) != 0 && data_12a2988 s< 1)
    int32_t ecx_1 = *(arg1 + 0x2c5c)
    int32_t edx_1 = *(arg1 + 0x2c58)
    int32_t __saved_ebx = 0
    int32_t var_100 = *(arg1 + 0xcc) + ecx_1
    sub_5918b0(ecx_1, *(arg1 + 0xc0) + edx_1, *(arg1 + 0xc4) + ecx_1, *(arg1 + 0xc8) + edx_1)
    return 

if (*(arg2 + 0x88) == 0xffffffff)
    return 

void* eax = *(arg3 + 0xc)

if (eax s< 0 || eax s>= 8)
    return 

int32_t var_94
sub_4d1c30(eax, arg1 + 0x5c, &var_94, 0x8c)
void* eax_11 = *(arg1 + 0x2c5c) + *(arg1 + 0x298)
int32_t ebx_1 = *(arg2 + 0x88)
int32_t edx_4 = *(arg1 + 0x2c58) + *(arg1 + 0x294)
void* eax_15 = (*(arg3 + 0xc) + (ebx_1 << 3)) * 0x374 + 0x1b1bd90

if (*(arg3 + 4) != 5)
    int32_t var_a4_1 = *(arg1 + 0x290)
    int32_t var_a8_1 = *(arg1 + 0x28c)
    sub_57a190(arg1 + 0x2bc, eax_15 + 0x164, eax_15 + 8, arg1 + 0x2bc, eax_15 + 8, ebx_1, 
        *(arg3 + 0xc), &var_94, edx_4, eax_11, *(arg1 + 0x29c), eax_15 + 8)
else if (*(eax_15 + 8) != 0)
    int32_t var_90 = edx_4
    var_94 = 0
    void* var_8c = eax_11
    sub_579920()

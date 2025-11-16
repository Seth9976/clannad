// 函数: sub_4a7ee0
// 地址: 0x4a7ee0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0xffffffff || *(arg2 + 4) == 0)
    return arg1

char ecx = (arg1 s>> 0x10).b
uint32_t eax
eax.b = ecx
eax.b &= 1
int32_t ebx_1 = sx.d(eax.b)
int32_t ebx_2 = neg.d(ebx_1)
int32_t esi_1 = sx.d(ecx & 2)
int32_t esi_2 = neg.d(esi_1)
void* var_14
void* var_10
void* var_c
void* var_8
return sub_4242c0(sub_4a7dc0(&var_10, &var_14, zx.d(arg1.w), &var_10, &var_c, &var_8), var_14, 
    arg2, var_10, var_c, zx.d((sbb.d(ebx_2, ebx_2, ebx_1 != 0)).b), 
    zx.d((sbb.d(esi_2, esi_2, esi_1 != 0)).b), var_8)

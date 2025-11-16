// 函数: sub_587ba0
// 地址: 0x587ba0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi

if (arg2[5] u< 8)
    esi = arg2
else
    esi = *arg2

void* eax_1 = esi + (arg2[4] << 1)

if (arg2[5] u>= 8)
    arg2 = *arg2

int32_t* var_8 = arg2
int32_t edx_1 = 0
int32_t var_c

if (sub_6af490(eax_1, &var_c, &var_8, eax_1) != 0)
    edx_1 = var_c

int32_t result = *(arg4 + 0xa4)
*(result + arg3 * 0x2c + 4) = edx_1
return result

// 函数: sub_587c00
// 地址: 0x587c00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg3 - 1

if (result != 0)
    return result

int32_t ecx = arg2[5]
void** esi_1

if (ecx u< 8)
    esi_1 = arg2
else
    esi_1 = *arg2

void* eax_1 = esi_1 + (arg2[4] << 1)

if (ecx u>= 8)
    arg2 = *arg2

void** var_8 = arg2
int32_t ecx_2 = 0
int32_t var_c

if (sub_6af490(eax_1, &var_c, &var_8, eax_1) != 0)
    ecx_2 = var_c

return sub_5b80f0(arg4, ecx_2)

// 函数: sub_4c5ef9
// 地址: 0x4c5ef9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
void* esi = *(*(arg1 + 0x14) + (arg2 << 2))
int32_t eax_1 = *(esi + 8)
int32_t eax_2

if (eax_1 != 0xffffffff)
    eax_2 = sub_4c5ef9(eax_1, arg3)

if ((eax_1 == 0xffffffff || eax_2 s>= 0) && sub_4c5c00(arg1, esi) s>= 0
        && sub_4d546f(arg1, *(esi + 0x10) + (*(esi + 0xc) << 2)) s>= 0)
    int32_t* eax_8 = *(arg1 + 0x10c) + (arg3 << 2)
    *eax_8 += 1
    return 0

return 0x8007000e

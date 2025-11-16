// 函数: sub_57ee30
// 地址: 0x57ee30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *arg2
int32_t eax

if (esi s>= 0 && esi u<= 0x1ff)
    *(esi * 0x74 + &data_13747ac) -= 1
    
    if (*(esi * 0x74 + &data_13747ac) s<= 0)
        sub_4d6c40(esi * 0x74 + 0x13747b0, esi * 0x74 + 0x13747b4)
        eax = sub_425320(esi)

*arg2 = 0xffffffff
int32_t result = sub_4d1ba0(eax, 0x24, arg1, 0)
*(arg1 + 0x24) = 0xffffffff
return result

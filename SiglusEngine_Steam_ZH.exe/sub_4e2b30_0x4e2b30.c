// 函数: sub_4e2b30
// 地址: 0x4e2b30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_2 = _malloc(arg1 + 0x10)

if (eax_2 == 0)
    return eax_2

void* eax_4 = (eax_2 + 0x10) & 0xfffffff0
*(eax_4 - 1) = eax_4.b - eax_2.b
return eax_4

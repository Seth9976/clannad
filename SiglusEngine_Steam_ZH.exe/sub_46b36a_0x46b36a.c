// 函数: sub_46b36a
// 地址: 0x46b36a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void*** esi = nullptr
int32_t edi
int32_t var_10 = edi

if (arg2 != 0)
    *arg2 = 0

if (arg1 == 0 || arg2 == 0)
    return 0x8876086c

int32_t eax_2 = *arg1 & 0xffff0000

if (eax_2 == 0xfffe0000 || eax_2 == 0xffff0000)
    void*** eax_3 = sub_745f3f(0x20)
    
    if (eax_3 != 0)
        esi = sub_49dbc1(eax_3)
    
    if (esi == 0)
        return 0x8007000e
    
    int32_t result = sub_49dbe2(esi, arg1, 0)
    
    if (result s< 0)
        sub_46b25c(esi, 1)
        return result

*arg2 = esi
return 0

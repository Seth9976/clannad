// 函数: sub_43ef68
// 地址: 0x43ef68
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x18) == 0)
    return nullptr

int32_t edi
int32_t var_10_1 = edi
void*** eax = sub_42cfa1(0x24)
void*** edi_1

if (eax == 0)
    edi_1 = nullptr
else
    edi_1 = sub_46be22(eax)

void*** eax_7

if (edi_1 != 0)
    edi_1[4] = 1
    void* eax_2 = *(arg1 + 0x18)
    
    if (arg2 == 0)
        if (*(eax_2 + 0x20) != 0)
            int32_t var_14_2 = *(*(arg1 + 0x10) + 0x14)
            sub_43713d(arg1, arg1 + 0x20, 0xc08, "'%s': function must return a value")
    else if (*(eax_2 + 0x20) != 0)
        edi_1[5] = sub_43eb4f(arg1, 0x15, *(eax_2 + 0x2c), arg2, 1)
    else
        int32_t var_14_1 = *(*(arg1 + 0x10) + 0x14)
        sub_43713d(arg1, arg1 + 0x20, 0xc07, "'%s': void functions cannot return a value")
    
    eax_7 = sub_42cfa1(0x14)

void*** result

if (edi_1 == 0 || eax_7 == 0)
    result = nullptr
else
    result = sub_46b602(eax_7, edi_1, 0, "Stmts")

return result

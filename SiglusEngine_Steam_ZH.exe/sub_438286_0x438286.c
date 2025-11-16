// 函数: sub_438286
// 地址: 0x438286
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi

if (*(arg1 + 0x18) == 0)
    return nullptr

void*** eax = sub_42cfa1(0x24)
void*** esi_1

if (eax == 0)
    esi_1 = nullptr
else
    esi_1 = sub_46be22(eax)

if (esi_1 != 0)
    esi_1[4] = 6
    void*** eax_2 = sub_42cfa1(0x50)
    void*** eax_3
    
    if (eax_2 == 0)
        eax_3 = nullptr
    else
        eax_3 = sub_46bee5(eax_2, 0, 0, 0, 0, 1, arg1 + 0x20)
    
    if (eax_3 != 0)
        esi_1[6] = eax_3
        void*** eax_4 = sub_42cfa1(0x14)
        void*** result
        
        if (eax_4 == 0)
            result = nullptr
        else
            result = sub_46b602(eax_4, esi_1, 0, "Stmts")
        
        if (result != 0)
            return result

return nullptr

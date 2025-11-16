// 函数: sub_438224
// 地址: 0x438224
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void*** eax = sub_42cfa1(0x24)
void*** esi

if (eax == 0)
    esi = nullptr
else
    esi = sub_46be22(eax)

if (esi != 0)
    esi[4] = 0
    
    if (arg1 == 0)
    label_43825f:
        void*** eax_4 = sub_42cfa1(0x14)
        void*** result
        
        if (eax_4 == 0)
            result = nullptr
        else
            result = sub_46b602(eax_4, esi, 0, "Stmts")
        
        if (result != 0)
            return result
    else
        int32_t eax_3 = (*(*arg1 + 4))()
        esi[5] = eax_3
        
        if (eax_3 != 0)
            goto label_43825f

return nullptr

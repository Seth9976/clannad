// 函数: sub_46bd68
// 地址: 0x46bd68
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi

if (sub_46b56e(arg1, arg2) != 0 && *(arg1 + 0x10) == *(arg2 + 0x10)
        && *(arg1 + 0x14) == *(arg2 + 0x14) && *(arg1 + 0x18) == *(arg2 + 0x18)
        && *(arg1 + 0x1c) == *(arg2 + 0x1c) && *(arg1 + 0x34) == *(arg2 + 0x34)
        && sub_46b589(*(arg1 + 0x20), *(arg2 + 0x20)) != 0
        && sub_46b589(*(arg1 + 0x24), *(arg2 + 0x24)) != 0
        && sub_46b589(*(arg1 + 0x28), *(arg2 + 0x28)) != 0
        && sub_46b589(*(arg1 + 0x2c), *(arg2 + 0x2c)) != 0
        && sub_46b589(*(arg1 + 0x30), *(arg2 + 0x30)) != 0)
    int32_t eax_11 = *(arg1 + 0x34)
    bool cond:1_1
    
    if (eax_11 != 0)
        char* edi_2 = *(arg2 + 0x38)
        char* esi_1 = *(arg1 + 0x38)
        int32_t i = eax_11 << 2
        cond:1_1 = false
        
        while (i != 0)
            char temp1_1 = *esi_1
            char temp2_1 = *edi_2
            cond:1_1 = temp1_1 != temp2_1
            esi_1 = &esi_1[1]
            edi_2 = &edi_2[1]
            i -= 1
            
            if (temp1_1 != temp2_1)
                break
    
    if (eax_11 == 0 || not(cond:1_1))
        return 1

return 0

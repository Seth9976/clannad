// 函数: sub_438677
// 地址: 0x438677
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_14 = edi
void*** edi_1 = arg2

if (edi_1 != 0 && edi_1[1] == 3 && edi_1[4] == 0xa && arg3 != 0 && *(arg3 + 4) == 3
        && *(arg3 + 0x10) == 0xa)
    void*** eax_1 = sub_42cfa1(0x30)
    
    if (eax_1 == 0)
        arg2 = nullptr
    else
        arg2 = sub_46b809(eax_1, &edi_1[4])
    
    if (arg2 != 0)
        char* eax_3 = edi_1[6]
        char* ebx_2 = *(arg3 + 0x18)
        arg3 = eax_3
        void* ecx_1 = &eax_3[1]
        char i
        
        do
            i = *eax_3
            eax_3 = &eax_3[1]
        while (i != 0)
        
        char* eax_5 = ebx_2
        void* esi_2 = &eax_5[1]
        
        do
            i = *eax_5
            eax_5 = &eax_5[1]
        while (i != 0)
        
        char* eax_8 = sub_46b465(*(arg1 + 4), eax_5 - esi_2 + eax_3 - ecx_1 + 1, 1)
        
        if (eax_8 != 0)
            char* var_18_2 = ebx_2
            char* var_1c_2 = arg3
            sub_74aa1b(eax_8, eax_5 - esi_2 + eax_3 - ecx_1 + 1, "%s%s")
            *(eax_8 + eax_5 - esi_2 + eax_3 - ecx_1 + 1 - 1) = 0
            arg2[6] = eax_8
            return arg2

return nullptr

// 函数: sub_438816
// 地址: 0x438816
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *(arg1 + 0x10)

if (eax == 0)
    sub_437200(arg1, eax, eax, "internal error: scope missing")
    return 0x80004005

int32_t edi
int32_t var_10_1 = edi
void* edi_2 = arg2[5] + 0x10
void* eax_1 = sub_437434(edi_2, eax)
int32_t result

while (true)
    int32_t var_1c_1
    char const* const var_18_3
    
    if (eax_1 != 0)
        void* ecx_1 = *(eax_1 + 8)
        
        if (*(ecx_1 + 0x2c) != 0)
            eax_1 = *(eax_1 + 0xc)
            continue
        else if (arg2[4] == 2 && *(ecx_1 + 0x10) == 2)
            eax_1 = *(eax_1 + 0xc)
            continue
        
        if (arg3 != 0 && sub_46b589(arg2, *(eax_1 + 8)) != 0)
            result = 0
            break
            break
        
        int32_t var_14_5 = *(edi_2 + 8)
        var_18_3 = "redefinition of '%s'"
        var_1c_1 = 0xbbb
    else
        void* eax_2 = *(arg1 + 0x10)
        void* ecx_2 = *(eax_2 + 0x20)
        int32_t eax_3
        
        if (ecx_2 != 0 && *(eax_2 + 0x10) == 3 && *(ecx_2 + 0x10) == 2)
            eax_3 = sub_437434(edi_2, ecx_2)
        
        if (ecx_2 == 0 || *(eax_2 + 0x10) != 3 || *(ecx_2 + 0x10) != 2 || eax_3 == 0)
            void*** eax_5 = sub_42cfa1(0x14)
            void*** edi_3 = nullptr
            
            if (eax_5 != 0)
                edi_3 = sub_46b602(eax_5, 0, 0, "Stmts")
            
            void* eax_7
            
            if (edi_3 != 0)
                eax_7 = sub_46b5aa(arg2)
                edi_3[2] = eax_7
            
            if (edi_3 == 0 || eax_7 == 0)
                result = 0x8007000e
                break
            
            *(eax_7 + 0x20) = *(*(arg1 + 0x10) + 0x14)
            arg2[8] = edi_3[2][8]
            edi_3[2][9] = *(arg1 + 0x4c)
            arg2[9] = edi_3[2][9]
            *(arg1 + 0x4c) += 1
            edi_3[3] = *(*(arg1 + 0x10) + 0x18)
            *(*(arg1 + 0x10) + 0x18) = edi_3
            result = sub_437301(*(arg1 + 0x10), edi_3[2])
            
            if (result s< 0)
                break
            
            result = 0
            break
        
        int32_t var_14_3 = *(edi_2 + 8)
        var_18_3 = "redefinition of formal parameter '%s'"
        var_1c_1 = 0xbdc
    
    sub_43713d(arg1, edi_2, var_1c_1, var_18_3)
    result = 0x80004005
    break

return result

// 函数: sub_4669bd
// 地址: 0x4669bd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* i = arg3

if (i u> 8)
    i = 8
label_4669d8:
    
    if (arg2 u<= 7)
        int32_t edi
        int32_t var_c_1 = edi
        
        if (arg2 + i u> 8)
            i = 8 - arg2
        
        char* edi_1 = arg2 + 0xac40a8
        char* esi_2 = arg1 + arg2
        bool c_1 = false
        bool z_1 = arg2 == arg2
        
        while (i != 0)
            char temp3_1 = *esi_2
            char temp4_1 = *edi_1
            c_1 = temp3_1 u< temp4_1
            z_1 = temp3_1 == temp4_1
            esi_2 = &esi_2[1]
            edi_1 = &edi_1[1]
            i -= 1
            
            if (not(z_1))
                break
        
        if (z_1)
            return 0
        
        bool c_2 = unimplemented  {sbb eax, eax}
        return sbb.d(sbb.d(0, 0, c_1), 0xffffffff, c_2)
else if (i u>= 1)
    goto label_4669d8

return 0

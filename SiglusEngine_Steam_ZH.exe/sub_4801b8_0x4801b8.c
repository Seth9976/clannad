// 函数: sub_4801b8
// 地址: 0x4801b8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi

while (true)
    if (sub_42eebc(*(arg1 + 4), arg1 + 0x10) s>= 0)
        int32_t eax_1 = *(arg1 + 0x10)
        
        if (eax_1 s<= 9)
            if (eax_1 != 9)
                if (eax_1 != 0)
                    if (eax_1 == 1)
                        if (*(arg1 + 0x19) == 0)
                            return sx.d(*(arg1 + 0x18))
                    else if (eax_1 s> 1)
                        if (eax_1 s<= 4)
                            return 0x10e
                        
                        if (eax_1 s<= 8)
                            return 0x10f
                
                break
            
            char* eax_7 = *(arg1 + 0x18)
            char const* const edi_2 = "entrypoint"
            char* esi_1 = eax_7
            int32_t i = 0xb
            bool cond:2_1 = false
            
            while (i != 0)
                char temp3_1 = *esi_1
                char const temp4_1 = *edi_2
                cond:2_1 = temp3_1 != temp4_1
                esi_1 = &esi_1[1]
                edi_2 = &edi_2[1]
                i -= 1
                
                if (temp3_1 != temp4_1)
                    break
            
            if (not(cond:2_1))
                return 0x101
            
            char const* const edi_3 = "true"
            char* esi_2 = eax_7
            int32_t i_1 = 5
            bool cond:4_1 = false
            
            while (i_1 != 0)
                char temp5_1 = *esi_2
                char const temp6_1 = *edi_3
                cond:4_1 = temp5_1 != temp6_1
                esi_2 = &esi_2[1]
                edi_3 = &edi_3[1]
                i_1 -= 1
                
                if (temp5_1 != temp6_1)
                    break
            
            if (not(cond:4_1))
                return 0x111
            
            char* esi_3 = eax_7
            char const* const edi_4 = "false"
            int32_t i_2 = 6
            bool cond:6_1 = false
            
            while (i_2 != 0)
                char temp7_1 = *esi_3
                char const temp8_1 = *edi_4
                cond:6_1 = temp7_1 != temp8_1
                esi_3 = &esi_3[1]
                edi_4 = &edi_4[1]
                i_2 -= 1
                
                if (temp7_1 != temp8_1)
                    break
            
            if (not(cond:6_1))
                return 0x112
            
            if (*(arg1 + 0x38) == 0xffffffff)
                return 0x10d
            
            return sub_47e30e(arg1, arg1 + 0x10)
        
        if (eax_1 == 0xa)
            break
        
        if (eax_1 == 0xc)
            continue
        else if (eax_1 != 0xd)
            break
    else
        *(arg1 + 0x4c) = 1
        *(arg1 + 0x50) = 1
    
    return 0xffffffff

return 0x110

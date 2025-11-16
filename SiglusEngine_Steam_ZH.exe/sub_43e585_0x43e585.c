// 函数: sub_43e585
// 地址: 0x43e585
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
int32_t result = 0
int32_t* edi_1 = &result

if (arg3 != 0)
    while (*(arg3 + 8) != 0)
        void*** eax_2 = sub_42cfa1(0x14)
        void*** eax_3
        
        if (eax_2 == 0)
            eax_3 = nullptr
        else
            eax_3 = sub_46b602(eax_2, 0, 0, "Stmts")
        
        *edi_1 = eax_3
        
        if (eax_3 == 0)
            break
        
        void*** eax_4 = sub_42cfa1(0x30)
        void*** ebx_1
        
        if (eax_4 == 0)
            ebx_1 = nullptr
        else
            ebx_1 = sub_46b9d6(eax_4, 0, 0, 0, 0)
        
        if (ebx_1 == 0)
            break
        
        *(*edi_1 + 8) = ebx_1
        int32_t* eax_8 = *edi_1 + 0xc
        int32_t var_c_1 = 1
        int32_t var_10_1 = 0
        
        if (arg2 != 0)
            int32_t eax_9 = sub_46b5aa(arg2)
            ebx_1[6] = eax_9
            
            if (eax_9 == 0)
                break
        
        int32_t* edi_2 = *(arg3 + 8)
        
        while (edi_2[1] != 3)
            void*** eax_11 = sub_42cfa1(0x18)
            void*** eax_12
            
            if (eax_11 == 0)
                eax_12 = nullptr
            else
                eax_12 = sub_46bb21(eax_11)
            
            if (eax_12 == 0)
                return 0
            
            eax_12[4] = ebx_1[6]
            ebx_1[6] = eax_12
            void* ecx_4 = edi_2[3]
            
            if (ecx_4 == 0)
                var_10_1 = 0xc00
                eax_12[5] = 1
            else if (sub_43e52c(ecx_4, &eax_12[5]) s< 0)
                var_10_1 = 0xbf2
                eax_12[5] = 1
            
            edi_2 = edi_2[2]
            var_c_1 *= eax_12[5]
        
        int32_t eax_16 = sub_46b5aa(edi_2)
        ebx_1[5] = eax_16
        
        if (eax_16 == 0)
            break
        
        int32_t var_30_1
        char* var_2c_3
        
        if (var_10_1 == 0xbf2)
            int32_t var_28_6 = edi_2[6]
            var_2c_3 = "'%s': array dimensions must be literal scalar expressions"
            var_30_1 = 0xbf2
        else if (var_10_1 == 0xc00)
            int32_t var_28_5 = edi_2[6]
            var_2c_3 = "'%s': array dimensions of type must be explicit"
            var_30_1 = 0xc00
        else
            if (var_c_1 u>= 1 && var_c_1 u<= 0x10000)
                if (sub_438816(arg1, ebx_1, 1) s< 0)
                    break
                
                void* eax_19 = *(arg3 + 0xc)
                arg3 = eax_19
                
                if (eax_19 == 0)
                    return result
                
                edi_1 = eax_8
                continue
            
            int32_t var_28_4 = edi_2[6]
            var_2c_3 = "'%s': array dimension must be between 1 and 65536"
            var_30_1 = 0xbf3
        
        sub_43713d(arg1, &edi_2[4], var_30_1, var_2c_3)
        break

return 0

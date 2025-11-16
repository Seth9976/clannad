// 函数: sub_4b97c0
// 地址: 0x4b97c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* result_9 = data_702ff0
int32_t eax = data_702fec
int32_t* result = data_702fe8
int32_t* result_8 = result

if (*(arg3 + 8) != 0 && *(arg4 + 0x4c) != 0 && *(arg4 + 0x48) != 0 && arg2 u<= 0x1ff)
    sub_425430(arg2, 1)
    
    if (*(arg3 + 0xc) == 1)
        sub_4257e0(arg2)
    
    result = arg2 * 0x74 + 0x13747b0
    int32_t* result_7 = result
    
    if (*result != 0)
        int32_t var_b4
        sub_4d1c30(result, arg4, &var_b4, 0x8c)
        void* ebx_1 = arg3
        int32_t* result_13 = *(ebx_1 + 0x54)
        int32_t* result_12 = *(ebx_1 + 0x58)
        int32_t edx_1 = *(ebx_1 + 0x5c)
        int32_t esi_2 = *(ebx_1 + 0x60)
        int32_t* result_5
        int32_t* result_6
        int32_t var_34_1
        int32_t var_30_1
        
        if (result_13 != 0xffffffff || result_12 != result_13 || edx_1 != result_13
                || esi_2 != result_13)
            if (result_13 s< data_702ff4)
                result_13 = data_702ff4
            
            result_5 = result_13
            
            if (edx_1 s> data_702ffc)
                edx_1 = data_702ffc
            
            var_34_1 = edx_1
            
            if (result_12 s< data_702ff8)
                result_12 = data_702ff8
            
            result_6 = result_12
            
            if (esi_2 s> data_703000)
                esi_2 = data_703000
            
            var_30_1 = esi_2
        else
            result_5 = data_702ff4
            var_34_1 = data_702ffc
            result_6 = data_702ff8
            var_30_1 = data_703000
        
        result = result_5
        
        if (result s<= var_34_1)
            result = result_6
            
            if (result s<= var_30_1)
                int32_t var_144
                
                if (*(ebx_1 + 0x1c) == 3)
                    sub_4d1c30(result, &var_b4, &var_144, 0x8c)
                
                result = *(ebx_1 + 0xc)
                void* result_10
                
                if (result == 0)
                    result_10 = &result[1]
                label_4b992c:
                    bool cond:4_1 = *ebx_1 s<= 0
                    void* edi_1 = *(ebx_1 + 8)
                    data_20740d8 = result_8
                    data_20740dc = eax
                    result = result_9
                    void* result_11 = result_10
                    data_20740e0 = result
                    int32_t var_8 = 0
                    
                    if (not(cond:4_1))
                        int32_t* edi_2 = edi_1 + 0x118
                        bool cond:5_1
                        
                        do
                            if (edi_2[-0x1e] != 0 && edi_2[-0x1f] s> 0
                                    && (*edi_2 != 0 || edi_2[1] != 0))
                                void* esi_3 = &edi_2[-0x1c]
                                
                                if (*(ebx_1 + 0x1c) != 3)
                                    result.b = *edi_2
                                    char var_6c_2 = result.b
                                    var_b4 = edi_2[-0x1d]
                                    result = edi_2[-0x1f]
                                    int32_t* result_4 = result
                                    int32_t* result_2 = result
                                    
                                    if (result_10 s> 0)
                                        void* i_3 = result_10
                                        void* i
                                        
                                        do
                                            if (*(esi_3 + 0x10) != 0)
                                                result = *esi_3
                                                
                                                if (result s<= var_34_1)
                                                    result = *(esi_3 + 8)
                                                    
                                                    if (result s>= result_5)
                                                        result = *(esi_3 + 4)
                                                        
                                                        if (result s<= var_30_1)
                                                            result = *(esi_3 + 0xc)
                                                            
                                                            if (result s>= result_6)
                                                                int32_t* edx_6 = &var_b4
                                                                int32_t var_b0_2 = *(esi_3 + 0x14)
                                                                int32_t var_ac_2 = *(esi_3 + 0x18)
                                                                
                                                                if (edi_2[-0x1f] != 0x3e8)
                                                                    result = sub_4b9560(result_7, edx_6)
                                                                else
                                                                    result = sub_425d50(arg2, edx_6)
                                            
                                            esi_3 += 0x1c
                                            i = i_3
                                            i_3 -= 1
                                        while (i != 1)
                                        ebx_1 = arg3
                                else
                                    char var_fc_1 = edi_2[1].b
                                    var_144 = *(ebx_1 + 0x20)
                                    int32_t eax_10 = edi_2[-0x1f]
                                    int32_t var_e8_1 = eax_10
                                    int32_t var_ec_1 = eax_10
                                    char var_6c_1 = *edi_2
                                    var_b4 = *(ebx_1 + 0x24)
                                    result = edi_2[-0x1f]
                                    int32_t* result_3 = result
                                    int32_t* result_1 = result
                                    
                                    if (result_10 s> 0)
                                        void* i_2 = result_10
                                        void* i_1
                                        
                                        do
                                            if (*(esi_3 + 0x10) != 0)
                                                result = *esi_3
                                                
                                                if (result s<= var_34_1)
                                                    result = *(esi_3 + 8)
                                                    
                                                    if (result s>= result_5)
                                                        result = *(esi_3 + 4)
                                                        
                                                        if (result s<= var_30_1)
                                                            result = *(esi_3 + 0xc)
                                                            
                                                            if (result s>= result_6)
                                                                int32_t* edx_3 = &var_144
                                                                int32_t var_b0_1 = *(esi_3 + 0x14)
                                                                int32_t var_ac_1 = *(esi_3 + 0x18)
                                                                int32_t var_140_1 = *(esi_3 + 0x14)
                                                                int32_t var_13c_1 = *(esi_3 + 0x18)
                                                                
                                                                if (edi_2[-0x1f] != 0x3e8)
                                                                    sub_4b9560(result_7, edx_3)
                                                                    result = sub_4b9560(result_7, &var_b4)
                                                                else
                                                                    sub_425d50(arg2, edx_3)
                                                                    result = sub_425d50(arg2, &var_b4)
                                            
                                            esi_3 += 0x1c
                                            i_1 = i_2
                                            i_2 -= 1
                                        while (i_1 != 1)
                                        ebx_1 = arg3
                            
                            edi_2 = &edi_2[0x6d]
                            cond:5_1 = var_8 + 1 s< *ebx_1
                            var_8 += 1
                            result_10 = result_11
                        while (cond:5_1)
                else if (result == 1)
                    result_10 = result
                    goto label_4b992c

return result

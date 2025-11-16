// 函数: sub_46eb60
// 地址: 0x46eb60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ecx
int32_t* edx
ecx, edx = __chkstk(0x1f60)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t edx_1 = 0
int32_t esi = 0
data_1cd539c = 0
int32_t* result = edx[2]
data_1cd53c8 = 0

if (result != 0)
    result = *edx
    
    if (result s> 0)
        int32_t edi_1 = 0
        int32_t i = 0
        int32_t var_1f50_1 = 0
        
        if (result s> 0)
            int32_t ebx_2 = 0
            result = edx[2] + 0xb8
            int32_t var_1f48[0x3e8]
            int32_t var_fa8[0x3e2]
            
            do
                if (result[0x36] != 0)
                    edx_1 += 1
                    
                    if (*result != 0 && result[-1].b != 0)
                        if (result[0xa2] == 0)
                            var_fa8[ebx_2] = i
                            var_1f50_1 = ebx_2 + 1
                        else
                            var_1f48[edi_1] = i
                            edi_1 += 1
                        
                        esi += 1
                
                i += 1
                result = &result[0x1f6]
                ebx_2 = var_1f50_1
            while (i s< *edx)
            
            data_1cd539c = edx_1
            data_1cd53c8 = esi
            
            if (edi_1 s> 0)
                sub_46eaf0(&var_1f48, edx, ecx, &var_1f48, edi_1)
                sub_46eaf0(&var_fa8, edx, ecx, &var_fa8, ebx_2)
                result = nullptr
                int32_t edi_2 = 0
                int32_t* result_1 = nullptr
                
                if (edi_1 s> 0)
                    do
                        int32_t ecx_3 = var_1f48[result]
                        int32_t esi_1 = 0
                        int32_t eax_5 = 0
                        int32_t var_1f64_1 = ecx_3
                        int32_t var_1f58_1 = 0
                        
                        if (ebx_2 s> 0)
                            do
                                int32_t ebx_5 = var_fa8[esi_1]
                                bool cond:1_1 = sub_46e840(eax_5, edx, ecx, ecx_3, ebx_5) == 0
                                eax_5 = var_1f58_1
                                
                                if (cond:1_1)
                                    var_fa8[eax_5] = ebx_5
                                    eax_5 += 1
                                    var_1f58_1 = eax_5
                                else
                                    *((edi_2 << 2) + &data_1cd5450) = ebx_5
                                    edi_2 += 1
                                
                                ecx_3 = var_1f64_1
                                esi_1 += 1
                            while (esi_1 s< var_1f50_1)
                        
                        ebx_2 = eax_5
                        *((edi_2 << 2) + &data_1cd5450) = ecx_3
                        edi_2 += 1
                        result = result_1 + 1
                        var_1f50_1 = ebx_2
                        result_1 = result
                    while (result s< edi_1)
                
                if (ebx_2 s> 0)
                    __builtin_memcpy((edi_2 << 2) + &data_1cd5450, &var_fa8, ebx_2 << 2)
            else if (ebx_2 s> 0)
                result = sub_46eaf0(&var_fa8, edx, ecx, &var_fa8, ebx_2)
                
                if (ebx_2 s> 0)
                    __builtin_memcpy(&data_1cd5450, &var_fa8, ebx_2 << 2)

int32_t entry_ebx
sub_5f02dd(entry_ebx ^ &__saved_ebp)
return result

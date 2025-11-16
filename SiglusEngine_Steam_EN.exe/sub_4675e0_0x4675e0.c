// 函数: sub_4675e0
// 地址: 0x4675e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* result = data_7031bc
int32_t ebx = 0
int32_t var_14 = 0
void* edi_1 = arg3 * 0x650 + &data_72d6b0
void* var_8 = edi_1

if (result s> 0)
    char* edx = arg5
    void** ecx_1 = arg3 * 0x7a0 + 0x98c180
    void** var_18_1 = ecx_1
    
    do
        if (*(edi_1 + 0xc) == 8)
            void* esi_1
            
            if (ebx s>= 0 && ebx s< result)
                esi_1 = *ecx_1
            
            if (ebx s< 0 || ebx s>= result || esi_1 == 0)
                result = sub_476410(result, arg3, ebx, 0)
                edx = arg5
            else
                int32_t i_1 = ecx_1[-2]
                
                if (i_1 s> 0)
                    int32_t i
                    
                    do
                        result = sub_478d20(result, arg2, esi_1, arg4, edx)
                        edx = arg5
                        esi_1 += 0x7d8
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    ebx = var_14
                
                edi_1 = var_8
        
        sub_466e60(result, edx, edi_1, arg2, arg4, edx)
        ebx += 1
        result = data_7031bc
        edi_1 += 0xca0
        edx = arg5
        ecx_1 = &var_18_1[0x3d0]
        var_8 = edi_1
        var_14 = ebx
        var_18_1 = ecx_1
    while (ebx s< result)

return result

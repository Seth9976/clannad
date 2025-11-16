// 函数: sub_4e1a60
// 地址: 0x4e1a60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *(arg1 + 0x1cc)
int32_t edx = *(eax + 0x18)
int32_t* ecx_1 = *(arg1 + 0x70)
int32_t edx_1 = *(eax + 0x1c)
int32_t edx_2 = *(eax + 0x20)
int32_t edx_3 = *(eax + 0x24)
int32_t edx_4 = *(eax + 0x28)
int32_t edx_5 = *(eax + 0x2c)
int32_t edx_6 = *(eax + 0x30)
int32_t edx_7 = *(eax + 0x34)
int32_t edx_8 = *(eax + 0x38)
int32_t* result = *(eax + 0x3c)
int32_t* result_1 = result

if (arg5 - 1 s>= 0)
    int32_t ecx_2 = arg2[1]
    int32_t edi
    int32_t var_58_1 = edi
    int32_t* edi_2 = *arg2 - ecx_2
    int32_t* ebx_2 = arg2[2] - ecx_2
    int32_t* edx_11 = arg2[3] - ecx_2
    result = ecx_2 + (arg3 << 2)
    int32_t* var_8_1 = edi_2
    int32_t* var_c_1 = ebx_2
    arg3 = arg5
    
    while (true)
        int32_t edx_12 = *(ebx_2 + result)
        int32_t ebx_3 = *(edx_11 + result)
        int32_t ecx_3 = *(edi_2 + result)
        char* edi_3 = *result
        arg1 = *arg4
        arg4 = &arg4[1]
        result = &result[1]
        
        if (ecx_1 u> 0)
            void* eax_3 = ecx_3 - edi_3
            void* edx_13 = edx_12 - edi_3
            void* ebx_4 = ebx_3 - edi_3
            void* var_18_1 = eax_3
            void* var_1c_1 = edx_13
            void* var_20_1 = ebx_4
            arg2 = ecx_1
            
            while (true)
                int32_t eax_4 = 0xff - zx.d(*(eax_3 + edi_3))
                int32_t ecx_5 = 0xff - zx.d(*edi_3)
                int32_t esi_8 = 0xff - zx.d(*(edx_13 + edi_3))
                int32_t edx_16 = *(edx + ((0xff - zx.d(*(ebx_4 + edi_3))) << 2))
                *arg1 = ((((((*(edx_1 + (eax_4 << 2)) * edx_16) u>> 0x10) * *(edx_4 + (ecx_5 << 2)))
                    u>> 0x10) * *(edx_7 + (esi_8 << 2))) u>> 0x18).b
                *(arg1 + 1) = ((((((*(edx_5 + (ecx_5 << 2)) * edx_16) u>> 0x10) *
                    *(edx_8 + (esi_8 << 2))) u>> 0x10) * *(edx_2 + (eax_4 << 2))) u>> 0x18).b
                *(arg1 + 2) = ((((((result_1[esi_8] * edx_16) u>> 0x10) * *(edx_3 + (eax_4 << 2)))
                    u>> 0x10) * *(edx_6 + (ecx_5 << 2))) u>> 0x18).b
                edi_3 = &edi_3[1]
                bool cond:2_1 = arg2 != 1
                arg1 += 3
                arg2 -= 1
                
                if (not(cond:2_1))
                    break
                
                eax_3 = var_18_1
                edx_13 = var_1c_1
                ebx_4 = var_20_1
        
        int32_t temp2_1 = arg3
        arg3 -= 1
        
        if (temp2_1 == 1)
            break
        
        edi_2 = var_8_1
        ebx_2 = var_c_1

return result

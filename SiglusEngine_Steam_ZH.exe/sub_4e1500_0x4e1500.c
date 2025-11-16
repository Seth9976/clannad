// 函数: sub_4e1500
// 地址: 0x4e1500
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *(arg1 + 0x1cc)
int32_t edx = *(arg1 + 0x70)
void* ecx_1 = *(arg1 + 0x148)
int32_t edx_1 = *(eax + 8)
int32_t ecx_2 = *(eax + 0xc)
int32_t edx_2 = *(eax + 0x10)
char* result = *(eax + 0x14)
char* result_1 = result

if (arg5 - 1 s>= 0)
    int32_t eax_1 = arg2[1]
    int32_t edi
    int32_t var_3c_1 = edi
    int32_t* edi_2 = *arg2 - eax_1
    int32_t* ebx_2 = arg2[2] - eax_1
    int32_t* ecx_5 = arg2[3] - eax_1
    int32_t* edx_4 = eax_1 + (arg3 << 2)
    arg3 = edi_2
    int32_t* var_8_1 = ebx_2
    int32_t* var_c_1 = ecx_5
    arg2 = arg5
    
    while (true)
        int32_t esi_3 = *(edi_2 + edx_4)
        int32_t edi_3 = *(ebx_2 + edx_4)
        int32_t ecx_6 = *(ecx_5 + edx_4)
        int32_t* ebx_3 = arg4
        result = *edx_4
        char* ecx_7 = *ebx_3
        arg4 = &ebx_3[1]
        edx_4 = &edx_4[1]
        
        if (edx u> 0)
            void* edx_6 = esi_3 - result
            void* edi_4 = edi_3 - result
            char* esi_5 = ecx_6 - result
            void* var_14_1 = edx_6
            void* var_18_1 = edi_4
            arg5 = edx
            
            while (true)
                uint32_t esi_6 = zx.d(*(edx_6 + result))
                uint32_t edi_5 = zx.d(*(edi_4 + result))
                void* edx_9
                edx_9.b = *(ecx_1 - *(edx_1 + (edi_5 << 2)) - esi_6 + 0xff)
                *ecx_7 = edx_9.b
                int32_t edx_13
                edx_13.b = *(ecx_1
                    - ((*(result_1 + (zx.d(*result) << 2)) + *(edx_2 + (edi_5 << 2))) s>> 0x10)
                    - esi_6 + 0xff)
                ecx_7[1] = edx_13.b
                ecx_7 = &ecx_7[4]
                uint32_t edx_14
                edx_14.b = *(ecx_1 - *(ecx_2 + (zx.d(*result) << 2)) - esi_6 + 0xff)
                ecx_7[0xfffffffe] = edx_14.b
                char* edx_15
                edx_15.b = *(esi_5 + result)
                ecx_7[0xffffffff] = edx_15.b
                result = &result[1]
                bool cond:2_1 = arg5 != 1
                arg5 -= 1
                
                if (not(cond:2_1))
                    break
                
                edx_6 = var_14_1
                edi_4 = var_18_1
        
        int32_t* temp2_1 = arg2
        arg2 -= 1
        
        if (temp2_1 == 1)
            break
        
        edi_2 = arg3
        ebx_2 = var_8_1
        ecx_5 = var_c_1

return result

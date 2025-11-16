// 函数: sub_4e1180
// 地址: 0x4e1180
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = *(arg1 + 0x70)
void* eax = *(arg1 + 0x1cc)
int32_t edx_1 = *(arg1 + 0x148)
int32_t ecx_1 = *(eax + 8)
int32_t ecx_2 = *(eax + 0xc)
int32_t edi
int32_t var_2c = edi
int32_t ecx_3 = *(eax + 0x10)
char* result = *(eax + 0x14)
int32_t var_20 = edx_1
char* result_1 = result

if (arg5 - 1 s>= 0)
    int32_t eax_1 = arg2[1]
    int32_t* ebx_2 = *arg2 - eax_1
    int32_t* ecx_6 = arg2[2] - eax_1
    int32_t* esi_2 = eax_1 + (arg3 << 2)
    arg3 = ebx_2
    arg2 = ecx_6
    
    while (true)
        int32_t edi_4 = *(ebx_2 + esi_2)
        void* ecx_7 = *(ecx_6 + esi_2)
        int32_t* ebx_3 = arg4
        result = *esi_2
        char* ecx_8 = *ebx_3
        arg4 = &ebx_3[1]
        esi_2 = &esi_2[1]
        char* result_2 = result
        
        if (edx u> 0)
            void* esi_4 = edi_4 - result
            void* edi_6 = ecx_7 - result
            void* var_10_1 = esi_4
            void* var_c_1 = edi_6
            arg1 = edx
            
            while (true)
                uint32_t edi_7 = zx.d(*(edi_6 + result))
                uint32_t esi_5 = zx.d(*(esi_4 + result))
                edx_1.b = (*(ecx_1 + (edi_7 << 2)) + esi_5)[edx_1]
                *ecx_8 = edx_1.b
                edx_1 = var_20
                uint32_t edi_8 = zx.d(*result)
                int32_t ebx_13
                ebx_13.b = *(((*(result_1 + (zx.d(*result) << 2)) + *(ecx_3 + (edi_7 << 2)))
                    s>> 0x10) + esi_5 + edx_1)
                ecx_8[1] = ebx_13.b
                int32_t ebx_14
                ebx_14.b = (*(ecx_2 + (edi_8 << 2)) + esi_5)[edx_1]
                ecx_8[2] = ebx_14.b
                ecx_8 = &ecx_8[3]
                result = &result[1]
                bool cond:2_1 = arg1 != 1
                arg1 -= 1
                
                if (not(cond:2_1))
                    break
                
                esi_4 = var_10_1
                edi_6 = var_c_1
        
        int32_t temp2_1 = arg5
        arg5 -= 1
        
        if (temp2_1 == 1)
            break
        
        ecx_6 = arg2
        ebx_2 = arg3

return result

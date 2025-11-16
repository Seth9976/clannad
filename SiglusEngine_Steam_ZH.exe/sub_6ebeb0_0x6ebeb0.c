// 函数: sub_6ebeb0
// 地址: 0x6ebeb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = arg4 << 5
void* ecx_1 = *(arg1 + (arg4 << 2) + 0x264)
int32_t ebx = *(eax_1 + arg1 + 0x78)
void* esi = *(eax_1 + arg1 + 0x70)
int32_t eax_3 = *(eax_1 + arg1 + 0x7c) + ebx
void* var_c = esi
arg5 = esi * arg5 + ebx
int32_t* eax_7 = *(arg1 + 0xd4)
int32_t edi_2 = esi * arg6 + ebx
int32_t ebx_1 = *(arg1 + 0xd0)
int32_t eax_9 = *(arg1 + (arg3 << 2) + 0x24c)
void* result = arg5

if (result s< edi_2)
    void* edx_1 = result + esi
    char* edi_3 = ebx_1 + (result << 2)
    arg1 = edx_1
    char* var_14_1 = edi_3
    char* var_10_1 = ebx_1 + (edx_1 << 2)
    
    do
        void* result_1 = result
        
        if (result s< edx_1)
            char* edx_2 = var_10_1
            void* ecx_4 = ecx_1
            void* esi_1 = arg1
            arg6 = edx_2
            
            do
                if ((*edi_3 & 1) != 0)
                    char* esi_3 = *(eax_7 - ebx_1 + edi_3) + eax_9
                    
                    if (result_1 s> result)
                        sub_6eb640(result, ecx_4, esi_3, arg2 + 0x7f)
                        result = arg5
                        ecx_4 = ecx_1
                    
                    if (result s> ebx)
                        sub_6eba10(result, ecx_4, esi_3, arg2 + 0x7f)
                    
                    void* eax_12 = var_c + result_1 + 1 - esi
                    
                    if (eax_12 s< arg1 && (edi_3[4] & 1) == 0)
                        sub_6eb640(eax_12, ecx_1, &esi_3[8], arg2 + 0x7f)
                    
                    if (var_c + result_1 s< eax_3 && (*arg6 & 1) == 0)
                        sub_6eba10(ecx_1, ecx_1, &esi_3[ecx_1 << 3], arg2 + 0x7f)
                    
                    result = arg5
                    ecx_4 = ecx_1
                    edx_2 = arg6
                    esi_1 = arg1
                
                result_1 += 1
                edx_2 = &edx_2[4]
                edi_3 = &edi_3[4]
                arg6 = edx_2
            while (result_1 s< esi_1)
            
            edx_1 = arg1
            esi = var_c
            edi_3 = var_14_1
        
        int32_t ebx_3 = esi << 2
        result += esi
        var_10_1 = &var_10_1[ebx_3]
        edi_3 = &edi_3[ebx_3]
        edx_1 += esi
        arg5 = result
        var_14_1 = edi_3
        arg1 = edx_1
    while (result s< edi_2)

return result

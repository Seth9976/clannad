// 函数: sub_4a035b
// 地址: 0x4a035b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
void* edx = arg1
int32_t* ecx = arg2
int32_t i_4 = *ecx
int32_t edi
int32_t var_18 = edi
void* var_c_1 = edx

if (i_4 == 0xffffffff && *arg3 == 0)
    *arg3 = arg5
    i_4 = arg4
label_4a0444:
    *ecx = i_4
else if (arg4 != 0xffffffff || arg5 != 0)
    int32_t i = i_4
    int32_t ecx_1 = 0
    int32_t var_8_1 = 0
    
    while (i != 0xffffffff)
        i = *(*(*(edx + 0x14) + (i << 2)) + 0x14)
        ecx_1 += 1
    
    int32_t i_1 = arg4
    
    if (i_1 != 0xffffffff)
        do
            i_1 = *(*(*(edx + 0x14) + (i_1 << 2)) + 0x14)
            var_8_1 += 1
        while (i_1 != 0xffffffff)
        
        edx = var_c_1
    
    int32_t edi_3 = *arg3
    
    if (ecx_1 u> var_8_1)
        int32_t i_6 = ecx_1 - var_8_1
        int32_t i_2
        
        do
            void* eax_1 = *(*(edx + 0x14) + (i_4 << 2))
            edi_3 = *(eax_1 + 0x18)
            i_4 = *(eax_1 + 0x14)
            ecx_1 -= 1
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
    
    int32_t esi_5 = arg5
    int32_t edx_2 = arg4
    
    if (var_8_1 u> ecx_1)
        int32_t i_5 = var_8_1 - ecx_1
        int32_t i_3
        
        do
            i_3 = i_5
            i_5 -= 1
            void* edx_3 = *(*(var_c_1 + 0x14) + (edx_2 << 2))
            esi_5 = *(edx_3 + 0x18)
            edx_2 = *(edx_3 + 0x14)
        while (i_3 != 1)
    
    while (true)
        if (edi_3 == esi_5 && i_4 == edx_2)
            *arg3 = edi_3
            ecx = arg2
            goto label_4a0444
        
        if (i_4 == 0xffffffff || edx_2 == 0xffffffff)
            *arg3 = 0
            *arg2 = 0xffffffff
            break
        
        int32_t esi_9 = *(var_c_1 + 0x14)
        void* eax_2 = *(esi_9 + (i_4 << 2))
        void* edx_4 = *(esi_9 + (edx_2 << 2))
        edi_3 = *(eax_2 + 0x18)
        esi_5 = *(edx_4 + 0x18)
        i_4 = *(eax_2 + 0x14)
        edx_2 = *(edx_4 + 0x14)
        continue

return 0

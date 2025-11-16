// 函数: sub_46f8f0
// 地址: 0x46f8f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg2
void* esi_1 = arg3 * 0x650 + &data_72d6b0
void* edi_1 = arg3 * 0x7a0 + &data_98bf04

if (arg3 != 0)
    int32_t ecx_4 = data_7031bc
    arg1 = 0
    int32_t var_10_3 = 0
    
    if (ecx_4 s> 0)
        void* ebx_2 = &data_12b926c
        
        do
            if (*ebx_2 s>= arg2)
                sub_46f7e0(esi_1, edi_1)
                ecx_4 = data_7031bc
                arg1 = var_10_3
                arg2 = var_8
            
            arg1 += 1
            esi_1 += 0xca0
            edi_1 += 0xf40
            var_10_3 = arg1
            ebx_2 += 0x24
        while (arg1 s< ecx_4)
    
    return 

int32_t edx = data_7031bc
int32_t ebx_1 = 0

if (arg5 != 0)
    if (edx s> 0)
        void* eax_3 = &data_12b926c
        void* ecx_2 = esi_1 + 0x65c
        void* var_c_1 = &data_12b926c
        void* var_10_2 = ecx_2
        int32_t edx_4
        
        do
            edx_4 = data_7031bc
            
            if (*eax_3 s>= var_8 && *ecx_2 == 0 && *((ebx_1 << 2) + &data_8c16b0) == 0)
                sub_46f7e0(esi_1, edi_1)
                edx_4 = data_7031bc
                eax_3 = var_c_1
                ecx_2 = var_10_2
            
            ecx_2 += 0xca0
            eax_3 += 0x24
            ebx_1 += 1
            var_10_2 = ecx_2
            esi_1 += 0xca0
            var_c_1 = eax_3
            edi_1 += 0xf40
        while (ebx_1 s< edx_4)
else if (edx s> 0)
    void* eax = &data_12b926c
    void* ecx = esi_1 + 0x65c
    void* var_10_1 = &data_12b926c
    void* var_c = ecx
    int32_t edx_1
    
    do
        int32_t eax_1 = *eax
        edx_1 = data_7031bc
        
        if (eax_1 s>= var_8 && (eax_1 s<= arg4 || *ecx != 0 || *((ebx_1 << 2) + &data_8c16b0) != 0))
            sub_46f7e0(esi_1, edi_1)
            edx_1 = data_7031bc
            ecx = var_c
        
        ecx += 0xca0
        eax = var_10_1 + 0x24
        var_c = ecx
        ebx_1 += 1
        var_10_1 = eax
        esi_1 += 0xca0
        edi_1 += 0xf40
    while (ebx_1 s< edx_1)

// 函数: sub_46ce14
// 地址: 0x46ce14
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* esi = arg2
int32_t eax = *(esi + 0x14)
int32_t i = 0
void* ebx = arg1
int32_t edi
int32_t var_14 = edi
void* var_8_1 = ebx

if (eax != 0 && *(esi + 0x28) != 0 && *(esi + 0x38) == 0)
    *(esi + 0x34) = 0
    
    if (eax u> 0)
        int32_t ecx_1 = *(esi + 0x10) << 2
        
        do
            int32_t eax_5 = *(*(*(*(ebx + 8) + 0x14) + (*(ecx_1 + *(ebx + 0x18)) << 2)) + 0x70) + 1
            
            if (*(esi + 0x34) u< eax_5)
                *(esi + 0x34) = eax_5
            
            i += 1
            ecx_1 += 4
        while (i u< *(esi + 0x14))
    
    int32_t eax_8 = sub_46b465(data_b97498, *(esi + 0x34) << 2, 0x10)
    *(esi + 0x38) = eax_8
    int32_t eax_11
    
    if (eax_8 != 0)
        eax_11 = sub_46b465(data_b97498, *(esi + 0x14) << 2, 0x10)
        *(esi + 0x3c) = eax_11
    
    if (eax_8 == 0 || eax_11 == 0)
        return 0x8007000e
    
    int32_t ecx_5 = *(esi + 0x34) << 2
    arg2 = nullptr
    __builtin_memset(__builtin_memset(*(esi + 0x38), 0, ecx_5 u>> 2 << 2), 0, ecx_5 & 3)
    int32_t ecx_10 = *(esi + 0x14) << 2
    __builtin_memset(__builtin_memset(*(esi + 0x3c), 0, ecx_10 u>> 2 << 2), 0, ecx_10 & 3)
    void* i_1 = *(*(esi + 0x28) + 0x20)
    
    if (*(esi + 0x14) u> 0)
        while (i_1 != 0)
            void* edx_2 = *(ebx + 8)
            void* ecx_17 =
                *(*(edx_2 + 0x14) + (*(*(ebx + 0x18) + ((*(esi + 0x10) + arg2) << 2)) << 2))
            
            if ((*(*(*(edx_2 + 0x10) + (*(ecx_17 + 4) << 2)) + 4) & 0x80) == 0)
                *(*(esi + 0x38) + (*(ecx_17 + 0x70) << 2)) = *(i_1 + 8) + 0x10
                ebx = var_8_1
                *(*(esi + 0x3c) + (*(ecx_17 + 0x64) << 2)) = *(i_1 + 8) + 0x10
            
            arg2 += 1
            i_1 = *(i_1 + 0xc)
            
            if (arg2 u>= *(esi + 0x14))
                break

return 0

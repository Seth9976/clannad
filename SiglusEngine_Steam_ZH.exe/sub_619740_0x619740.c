// 函数: sub_619740
// 地址: 0x619740
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = data_bac450

if (*(arg1 + 0x1c38) == *edi)
    void* eax_1 = &edi[0x13]
    int32_t edx_1 = *(eax_1 + 0x10)
    
    if (edi[0x18] u>= 8)
        eax_1 = *eax_1
    
    int32_t var_10_1 = edx_1
    int32_t eax_2 = sub_536340(arg1 + 0x1c3c, arg1 + 0x1c3c, *(arg1 + 0x1c4c), eax_1)
    
    if (eax_2 == 0)
        void* edx_2 = &edi[2]
        void* ecx_1 = arg1 + 0x1c54
        int32_t esi_1 = eax_2 + 0x1c
        
        while (*ecx_1 == *edx_2)
            ecx_1 += 4
            edx_2 += 4
            int32_t temp0_1 = esi_1
            esi_1 -= 4
            
            if (temp0_1 u< 4)
                int32_t eax_3
                eax_3.b = 0
                return eax_3

*(arg1 + 0x1c38) = *edi

if (arg1 + 0x1c3c != &edi[0x13])
    sub_52e3c0(arg1 + 0x1c3c, &edi[0x13], 0, 0xffffffff)
    edi = data_bac450

void* eax_5
eax_5.b = 1
*(arg1 + 0x1c54) = *(edi + 8)
*(arg1 + 0x1c64) = *(edi + 0x18)
return eax_5

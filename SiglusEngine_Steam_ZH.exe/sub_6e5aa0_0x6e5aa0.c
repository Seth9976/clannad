// 函数: sub_6e5aa0
// 地址: 0x6e5aa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0xc9f0)
int32_t ebx = *(arg1 + 0xc9ec)
void* edi = arg1 + 0xc9e4
void* var_8 = edi

if (eax s< 1)
    ebx = sub_6ec810(edi, 1)
    eax = *(edi + 0xc)

uint32_t ebx_1 = ebx u>> 0x1f
*(edi + 8) = ebx * 2
*(edi + 0xc) = eax - 1
int32_t eax_2 = *(arg1 + 0xe4)
int32_t ecx_3 = *(arg1 + 0xe8)
char* esi_1 = nullptr
int32_t result = 0
int32_t result_1 = 0

if (ecx_3 != 0)
    int32_t edx_6
    
    do
        uint32_t eax_3
        int32_t ecx_5
        eax_3, ecx_5 = sub_6ec760(edi, 0xadc074)
        uint32_t edi_1 = eax_3
        
        if (edi_1 s>= 0x10)
            int32_t eax_4 = eax_3 & 0x1f
            void* eax_5 = var_8
            int32_t edi_3 = (edi_1 - eax_4) s>> 4
            int32_t edx_1 = *(eax_5 + 8)
            int32_t ecx_6 = *(eax_5 + 0xc)
            int32_t var_14_1 = edx_1
            int32_t var_10_1 = ecx_6
            
            if (edi_3 != 0)
                if (ecx_6 s< edi_3)
                    int32_t eax_6 = sub_6ec810(eax_5, edi_3)
                    edx_1 = eax_6
                    var_14_1 = eax_6
                    eax_5 = var_8
                    var_10_1 = *(eax_5 + 0xc)
                
                *(eax_5 + 8) = (edx_1 * 2) << (edi_3.b - 1)
                *(eax_5 + 0xc) = var_10_1 - edi_3
                eax_3 = var_14_1 u>> (0x20 - edi_3.b)
            else
                eax_3 = 0
            
            edi_1 = eax_4 + 6 + eax_3
        
        ecx_5.b = ebx_1.b
        ecx_5.b &= 1
        int32_t eax_9 = sbb.d(eax_3, eax_3, edi_1 u< 0x1021) + 1
        ecx_5.b *= 2
        
        do
            int32_t eax_10
            eax_10.b = esi_1[eax_2]
            eax_10.b &= 0xfd
            eax_10.b |= ecx_5.b
            eax_10.b &= 0xfe
            esi_1[eax_2] = eax_10.b
            esi_1 = &esi_1[1]
            edx_6 = ecx_3
            result = result_1 + ebx_1
            result_1 = result
            uint32_t temp0_1 = edi_1
            edi_1 -= 1
            
            if (temp0_1 == 1)
                break
        while (esi_1 u< edx_6)
        
        if (eax_9 == 0 || esi_1 u>= edx_6)
            edi = var_8
            uint32_t ecx_15
            ecx_15.b = ebx_1 == 0
            ebx_1 = ecx_15
        else
            edi = var_8
            int32_t ecx_13 = *(edi + 0xc)
            int32_t ebx_2 = *(edi + 8)
            
            if (ecx_13 s< 1)
                int32_t eax_12 = sub_6ec810(edi, 1)
                ecx_13 = *(edi + 0xc)
                ebx_2 = eax_12
                edx_6 = ecx_3
            
            ebx_1 = ebx_2 u>> 0x1f
            *(edi + 8) = ebx_2 * 2
            *(edi + 0xc) = ecx_13 - 1
            result = result_1
    while (esi_1 u< edx_6)

return result

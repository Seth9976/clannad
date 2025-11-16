// 函数: sub_6e5c20
// 地址: 0x6e5c20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* esi = nullptr
char* ecx = *(arg1 + 0xe4)
int32_t eax = *(arg1 + 0xe8)

if ((*ecx & 2) != 0)
    do
        esi = &esi[1]
    while ((*(esi + ecx) & 2) != 0)

int32_t eax_1 = *(arg1 + 0xc9f0)
void* edi_1 = arg1 + 0xc9e4
void* var_8 = edi_1
int32_t ebx = *(edi_1 + 8)

if (eax_1 s< 1)
    ebx = sub_6ec810(edi_1, 1)
    eax_1 = *(edi_1 + 0xc)

uint32_t result_1 = ebx u>> 0x1f
*(edi_1 + 8) = ebx * 2
*(edi_1 + 0xc) = eax_1 - 1
uint32_t result
int32_t edx_5

do
    uint32_t eax_3
    char* ecx_5
    eax_3, ecx_5 = sub_6ec760(edi_1, 0xadc074)
    uint32_t edi_2 = eax_3
    
    if (edi_2 s>= 0x10)
        char* eax_4 = eax_3 & 0x1f
        void* eax_5 = var_8
        int32_t edi_4 = (edi_2 - eax_4) s>> 4
        int32_t edx_1 = *(eax_5 + 8)
        int32_t ecx_6 = *(eax_5 + 0xc)
        int32_t var_14_1 = edx_1
        int32_t var_10_1 = ecx_6
        
        if (edi_4 != 0)
            if (ecx_6 s< edi_4)
                int32_t eax_6 = sub_6ec810(eax_5, edi_4)
                edx_1 = eax_6
                var_14_1 = eax_6
                eax_5 = var_8
                var_10_1 = *(eax_5 + 0xc)
            
            *(eax_5 + 8) = (edx_1 * 2) << (edi_4.b - 1)
            *(eax_5 + 0xc) = var_10_1 - edi_4
            eax_3 = var_14_1 u>> (0x20 - edi_4.b)
        else
            eax_3 = 0
        
        edi_2 = &eax_4[6 + eax_3]
    
    edx_5 = eax
    
    if (esi u< edx_5)
        char* eax_10 = ecx
        uint32_t edi_6 = edi_2
        
        do
            ecx_5.b = *(esi + eax_10)
            
            if ((ecx_5.b & 2) == 0)
                uint32_t eax_11 = edi_6
                edi_6 -= 1
                
                if (eax_11 == 0)
                    break
                
                eax_11.b = ecx_5.b
                eax_11.b ^= result_1.b
                eax_11.b &= 1
                eax_11.b ^= ecx_5.b
                *(esi + ecx) = eax_11.b
                eax_10 = ecx
            
            esi = &esi[1]
        while (esi u< edx_5)
    
    if (sbb.d(eax_3, eax_3, edi_2 u< 0x1021) == 0xffffffff || esi u>= edx_5)
        edi_1 = var_8
        result.b = result_1 == 0
        result_1 = result
    else
        edi_1 = var_8
        int32_t ecx_13 = *(edi_1 + 0xc)
        int32_t ebx_1 = *(edi_1 + 8)
        
        if (ecx_13 s< 1)
            int32_t eax_12 = sub_6ec810(edi_1, 1)
            ecx_13 = *(edi_1 + 0xc)
            ebx_1 = eax_12
            edx_5 = eax
        
        result_1 = ebx_1 u>> 0x1f
        *(edi_1 + 8) = ebx_1 * 2
        result = ecx_13 - 1
        *(edi_1 + 0xc) = result
while (esi u< edx_5)
return result

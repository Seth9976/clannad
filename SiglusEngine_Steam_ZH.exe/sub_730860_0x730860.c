// 函数: sub_730860
// 地址: 0x730860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = *arg4
int32_t ecx = *(arg1 + 0x1b8)
int32_t* var_8 = edi
int32_t i_1 = 0
int32_t i = *(arg2 + 4)
uint32_t esi = zx.d(*(i + ecx + 0x8c))
uint32_t ecx_1 = zx.d(*(i + ecx + 0x96))
uint32_t var_14 = esi
uint32_t var_c = ecx_1

if (*(arg1 + 0x11c) s> 0)
    int32_t ebx
    int32_t var_24_1 = ebx
    
    do
        void* edx_1 = *edi
        arg2 = edx_1
        void* eax_4 = *(arg1 + 0x5c) + edx_1
        char* ebx_3 = *arg3
        void* var_18_1 = eax_4
        
        if (edx_1 u< eax_4)
            do
                ecx_1.b = *ebx_3
                ebx_3 = &ebx_3[1]
                arg4:3.b = ecx_1.b
                
                if (esi s> 0)
                    int32_t eax_6 = zx.d(arg4:3.b) * 0x1010101
                    int32_t ecx_4
                    int32_t edi_2
                    edi_2, ecx_4 = __memfill_u32(edx_1, eax_6, esi u>> 2)
                    uint32_t ecx_5 = esi
                    esi = var_14
                    edx_1 = arg2 + esi
                    int32_t edi_3
                    edi_3, ecx_1 = __memfill_u8(edi_2, eax_6.b, ecx_5 & 3)
                    eax_4 = var_18_1
                    arg2 = edx_1
            while (edx_1 u< eax_4)
            
            edi = var_8
            ecx_1 = var_c
        
        if (ecx_1 s> 1)
            void* esi_1 = &edi[1]
            int32_t j = ecx_1 - 1
            int32_t* edx_3 = *(arg1 + 0x5c)
            arg4 = edx_3
            
            if (j s> 0)
                int32_t* ebx_5 = var_8 - esi_1
                
                do
                    int32_t* eax_8 = *(ebx_5 + esi_1)
                    esi_1 += 4
                    sub_748840(*(esi_1 - 4), eax_8, edx_3)
                    edx_3 = arg4
                    j -= 1
                while (j s> 0)
                
                ecx_1 = var_c
            
            edi = var_8
        
        arg3 = &arg3[1]
        edi = &edi[ecx_1]
        i = i_1 + ecx_1
        esi = var_14
        i_1 = i
        var_8 = edi
    while (i s< *(arg1 + 0x11c))

return i

// 函数: sub_41055d
// 地址: 0x41055d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
uint32_t eax = *(arg1 + 0x23c)
uint32_t ecx = *(arg1 + 0x264)

if (eax u<= ecx)
    eax = ecx

int32_t eax_1 = sub_745f3f(eax)

if (eax_1 != 0)
    int32_t edi
    int32_t var_1c_1 = edi
    
    if ((*(arg1 + 0x218) & 2) != 0)
        int32_t i = 0
        
        if (*(arg1 + 0x23c) u> 0)
            do
                if (*(arg2 + (i << 2)) != 0xffff)
                    int16_t* ecx_3 = *(arg1 + 0x244) + (i << 1)
                    
                    if (*(arg2 + (zx.d(*ecx_3) << 2)) == 0xffff)
                        uint32_t edi_1
                        edi_1.w = *ecx_3
                        *ecx_3 = i.w
                        
                        for (int32_t j = i + 1; j u< *(arg1 + 0x23c); j += 1)
                            int16_t* edx_3 = *(arg1 + 0x244) + (j << 1)
                            
                            if (*edx_3 == edi_1.w)
                                *edx_3 = i.w
                
                i += 1
            while (i u< *(arg1 + 0x23c))
    
    int32_t ecx_4 = *(arg1 + 0x23c)
    __builtin_memset(__builtin_memset(eax_1, 0, ecx_4 u>> 2 << 2), 0, ecx_4 & 3)
    void* i_1 = nullptr
    void* i_3 = nullptr
    
    if (*(arg1 + 0x23c) u> 0)
        do
            if (*(i_1 + eax_1) == 0)
                char* edi_4 = *(arg2 + (i_1 << 2))
                
                if (edi_4 != 0xffff)
                    if (edi_4 != i_1)
                        do
                            sub_40d2dc(arg1, i_3, edi_4, arg3)
                            sub_40d241(arg1, edi_4, arg2)
                            edi_4[eax_1] = 1
                            edi_4 = *(arg2 + (edi_4 << 2))
                            
                            if (edi_4 == 0xffff)
                                goto label_41067b
                            
                            if (edi_4[eax_1] != 0)
                                goto label_41067b
                        while (edi_4 != i_3)
                    
                    sub_40d241(arg1, i_3, arg2)
            
        label_41067b:
            i_1 = i_3 + 1
            i_3 = i_1
        while (i_1 u< *(arg1 + 0x23c))
    
    int32_t i_2 = 0
    int32_t edx_5 = 0
    
    if (*(arg1 + 0x23c) u> 0)
        do
            int32_t* eax_5 = arg2 + (i_2 << 2)
            
            if (*eax_5 == 0xffff)
                *eax_5 = 0xffffffff
            else
                edx_5 += 1
            
            i_2 += 1
        while (i_2 u< *(arg1 + 0x23c))
    
    *(arg1 + 0x23c) = edx_5
else
    result = 0x8007000e

j__free(eax_1)
return result

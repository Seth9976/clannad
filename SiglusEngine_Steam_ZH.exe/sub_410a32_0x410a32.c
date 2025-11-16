// 函数: sub_410a32
// 地址: 0x410a32
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t result = 0
uint32_t eax = *(arg1 + 0x23c)
uint32_t ecx = *(arg1 + 0x264)

if (eax u<= ecx)
    eax = ecx

int32_t eax_1 = sub_745f3f(eax)

if (eax_1 != 0)
    int32_t edi
    int32_t var_18_1 = edi
    int32_t i
    
    if ((*(arg1 + 0x218) & 2) != 0)
        i = 0
    
    int32_t edx_1
    
    if ((*(arg1 + 0x218) & 2) == 0 || *(arg1 + 0x23c) u<= 0)
        edx_1 = arg2
    else
        do
            edx_1 = arg2
            
            if (*(edx_1 + (i << 2)) != 0xffffffff)
                int32_t* eax_3 = *(arg1 + 0x244) + (i << 2)
                int32_t edi_1 = *eax_3
                
                if (*(edx_1 + (edi_1 << 2)) == 0xffffffff)
                    *eax_3 = i
                    
                    for (int32_t j = i + 1; j u< *(arg1 + 0x23c); j += 1)
                        int32_t* edi_3 = *(arg1 + 0x244) + (j << 2)
                        
                        if (*edi_3 == edi_1)
                            *edi_3 = i
            
            i += 1
        while (i u< *(arg1 + 0x23c))
    
    int32_t ecx_2 = *(arg1 + 0x23c)
    char* i_1 = nullptr
    __builtin_memset(__builtin_memset(eax_1, 0, ecx_2 u>> 2 << 2), 0, ecx_2 & 3)
    
    if (*(arg1 + 0x23c) u> 0)
        do
            if (i_1[eax_1] == 0)
                char* edi_6 = *(edx_1 + (i_1 << 2))
                
                if (edi_6 != 0xffffffff)
                    if (edi_6 != i_1)
                        do
                            sub_40d6dd(arg1, i_1, edi_6, arg3)
                            sub_40d652(arg1, edi_6, arg2)
                            edi_6[eax_1] = 1
                            edi_6 = *(arg2 + (edi_6 << 2))
                            
                            if (edi_6 == 0xffffffff)
                                goto label_410b40
                            
                            if (edi_6[eax_1] != 0)
                                goto label_410b40
                        while (edi_6 != i_1)
                        
                        edx_1 = arg2
                    
                    sub_40d652(arg1, i_1, edx_1)
                label_410b40:
                    edx_1 = arg2
            
            i_1 = &i_1[1]
        while (i_1 u< *(arg1 + 0x23c))
    
    int32_t i_2 = 0
    int32_t ecx_10 = 0
    
    if (*(arg1 + 0x23c) u> 0)
        do
            if (*(edx_1 + (i_2 << 2)) == 0xffffffff)
                *(edx_1 + (i_2 << 2)) = 0xffffffff
            else
                ecx_10 += 1
            
            i_2 += 1
        while (i_2 u< *(arg1 + 0x23c))
    
    *(arg1 + 0x23c) = ecx_10
else
    result = 0x8007000e

j__free(eax_1)
return result

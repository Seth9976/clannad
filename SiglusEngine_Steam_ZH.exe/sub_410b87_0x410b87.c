// 函数: sub_410b87
// 地址: 0x410b87
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t result = 0
uint32_t eax = *(arg1 + 0x23c)
uint32_t ecx = *(arg1 + 0x264)
int32_t edi
int32_t var_14 = edi

if (eax u<= ecx)
    eax = ecx

int32_t eax_1 = sub_745f3f(eax)

if (eax_1 != 0)
    int32_t ecx_2 = *(arg1 + 0x264)
    __builtin_memset(__builtin_memset(eax_1, 0, ecx_2 u>> 2 << 2), 0, ecx_2 & 3)
    int32_t* i = nullptr
    
    if (*(arg1 + 0x264) u> 0)
        do
            if (*(i + eax_1) == 0)
                int32_t* esi_1 = *(arg2 + (i << 2))
                
                if (esi_1 != 0xffffffff)
                    do
                        if (esi_1 == i)
                            sub_40d67a(arg1, i, arg3, arg2)
                            break
                        
                        sub_40d78b(arg1, i, esi_1)
                        sub_40d67a(arg1, esi_1, arg3, arg2)
                        *(esi_1 + eax_1) = 1
                        esi_1 = *(arg2 + (esi_1 << 2))
                        
                        if (esi_1 == 0xffffffff)
                            break
                    while (*(esi_1 + eax_1) == 0)
            
            i += 1
        while (i u< *(arg1 + 0x264))
    
    int32_t i_1 = 0
    int32_t edx_2 = 0
    
    if (*(arg1 + 0x264) u> 0)
        do
            int32_t* eax_6 = arg2 + (i_1 << 2)
            
            if (*eax_6 == 0xffffffff)
                *eax_6 = 0xffffffff
            else
                edx_2 += 1
            
            i_1 += 1
        while (i_1 u< *(arg1 + 0x264))
    
    *(arg1 + 0x264) = edx_2
else
    result = 0x8007000e

j__free(eax_1)
return result

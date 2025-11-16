// 函数: sub_46c6b0
// 地址: 0x46c6b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg2
void* esi = arg3

if (esi s> edi)
    arg1 = esi
    esi = edi
    edi = arg1

if (esi s< 0)
    return 

int32_t ecx = data_7031bc

if (edi s>= ecx)
    return 

void* i_1 = edi - esi + 1

if (i_1 s<= 0)
    return 

int32_t eax_1 = arg4 + (esi << 1)
int32_t* ebx_2 = eax_1 * 0x650 + 0x72d788
arg1 = eax_1 * 0x7a0 + &data_98c1f8
void* i

do
    if (esi s>= 0 && esi s< ecx)
        int32_t ecx_1 = *ebx_2
        ebx_2[1] = arg5
        
        if (arg5 s>= 0 && arg5 s< ecx_1)
            ecx_1 = arg5
        
        *(arg1 - 0x258) = ecx_1
        
        if (arg4 == 1)
            void* edx_1 = *(arg1 - 0x264)
            
            if (edx_1 != 0)
                int32_t j = 0
                
                if (*(arg1 - 0x26c) s> 0)
                    int32_t* edx_2 = edx_1 + 0x6c
                    
                    do
                        if (j s>= *(arg1 - 0x258))
                            *edx_2 = 0xffffffff
                        
                        j += 1
                        edx_2 = &edx_2[0x6d]
                    while (j s< *(arg1 - 0x26c))
        
        *arg1 += 1
        ecx = data_7031bc
    
    esi += 1
    ebx_2 = &ebx_2[0x328]
    arg1 += 0xf40
    i = i_1
    i_1 -= 1
while (i != 1)

// 函数: sub_6e4e20
// 地址: 0x6e4e20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = *arg2
int32_t edi = 0
void* ebx = arg2[3]
int32_t* var_34 = arg2[2]
uint32_t ecx_1 = zx.d(*(esi + 4))
uint32_t edx = zx.d(*(esi + 5))
int32_t var_30 = edx & 2
int32_t eax_1
int32_t edx_2
eax_1, edx_2 = sub_6e4740(arg2)
uint32_t edx_9 = ((zx.d(*(esi + 0x11)) << 8 | zx.d(*(esi + 0x10))) << 8 | zx.d(*(esi + 0xf))) << 8
    | zx.d(*(esi + 0xe))
uint32_t ecx_14 = ((zx.d(*(esi + 0x15)) << 8 | zx.d(*(esi + 0x14))) << 8 | zx.d(*(esi + 0x13))) << 8
    | zx.d(*(esi + 0x12))
uint32_t eax_6 = zx.d(*(esi + 0x1a))

if (arg1 != 0)
    int32_t* ecx_15 = *arg1
    
    if (ecx_15 != 0)
        void* eax_7 = arg1[3]
        int32_t edx_10 = arg1[9]
        int32_t var_38_1 = edx_10
        
        if (eax_7 != 0)
            int32_t temp0_1 = arg1[2]
            arg1[2] -= eax_7
            
            if (temp0_1 != eax_7)
                _memcpy(ecx_15, eax_7 + ecx_15, arg1[2])
                edx_10 = var_38_1
            
            arg1[3] = 0
        
        if (edx_10 != 0)
            int32_t eax_9 = arg1[7]
            
            if (eax_9 != edx_10)
                int32_t* ecx_16 = arg1[4]
                _memcpy(ecx_16, &ecx_16[edx_10], (eax_9 - edx_10) << 2)
                int32_t* ecx_17 = arg1[5]
                _memcpy(ecx_17, &ecx_17[var_38_1 * 2], (arg1[7] - var_38_1) << 3)
                edx_10 = var_38_1
            
            arg1[7] -= edx_10
            arg1[8] -= edx_10
            arg1[9] = 0
        
        if (edx_9 == arg1[0x54] && ecx_1 s<= 0 && sub_6e4940(arg1, eax_6 + 1) == 0)
            int32_t eax_19 = arg1[0x55]
            
            if (ecx_14 != eax_19)
                int32_t edx_14 = arg1[8]
                
                if (edx_14 s< arg1[7])
                    int32_t ecx_19 = arg1[2]
                    int32_t i_1 = arg1[7] - edx_14
                    char* edx_15 = arg1[4] + (edx_14 << 2)
                    int32_t i
                    
                    do
                        uint32_t eax_21 = zx.d(*edx_15)
                        edx_15 = &edx_15[4]
                        ecx_19 -= eax_21
                        arg1[2] = ecx_19
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    eax_19 = arg1[0x55]
                
                arg1[7] = edx_14
                
                if (eax_19 != 0xffffffff)
                    *(arg1[4] + (edx_14 << 2)) = 0x400
                    arg1[7] += 1
                    arg1[8] += 1
            
            if ((edx & 1) != 0)
                int32_t ecx_20 = arg1[7]
                
                if (ecx_20 s< 1 || *(arg1[4] + (ecx_20 << 2) - 4) == 0x400)
                    var_30 = 0
                    
                    if (eax_6 s> 0)
                        int32_t* edx_16 = var_34
                        
                        do
                            uint32_t eax_25 = zx.d(*(esi + edi + 0x1b))
                            edi += 1
                            edx_16 += eax_25
                            ebx -= eax_25
                            var_34 = edx_16
                            
                            if (eax_25 s< 0xff)
                                break
                        while (edi s< eax_6)
            
            if (ebx == 0)
                goto label_6e504c
            
            if (sub_6e48e0(arg1, ebx) == 0)
                sub_748840(arg1[2] + *arg1, var_34, ebx)
                arg1[2] += ebx
            label_6e504c:
                int32_t ebx_2 = 0xffffffff
                
                if (edi s< eax_6)
                    do
                        uint32_t edx_18 = zx.d(*(esi + edi + 0x1b))
                        *(arg1[4] + (arg1[7] << 2)) = edx_18
                        int32_t ecx_24 = arg1[5]
                        int32_t eax_31 = arg1[7]
                        *(ecx_24 + (eax_31 << 3)) = 0xffffffff
                        *(ecx_24 + (eax_31 << 3) + 4) = 0xffffffff
                        
                        if (var_30 != 0)
                            int32_t ecx_25 = arg1[7]
                            int32_t eax_32 = arg1[4]
                            *(eax_32 + (ecx_25 << 2)) |= 0x100
                            var_30 = 0
                        
                        if (edx_18 s< 0xff)
                            ebx_2 = arg1[7]
                        
                        arg1[7] += 1
                        edi += 1
                        
                        if (edx_18 s< 0xff)
                            arg1[8] = arg1[7]
                    while (edi s< eax_6)
                    
                    if (ebx_2 != 0xffffffff)
                        int32_t eax_34 = arg1[5]
                        *(eax_34 + (ebx_2 << 3)) = eax_1
                        *(eax_34 + (ebx_2 << 3) + 4) = edx_2
                
                if ((edx & 4) != 0)
                    int32_t ecx_28 = arg1[7]
                    arg1[0x52] = 1
                    
                    if (ecx_28 s> 0)
                        int32_t eax_35 = arg1[4]
                        *(eax_35 + (ecx_28 << 2) - 4) |= 0x200
                
                arg1[0x55] = ecx_14 + 1
                return 0

return 0xffffffff

// 函数: sub_442fd3
// 地址: 0x442fd3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int16_t* ebx = arg3
int16_t* esi = arg4
int32_t edi
int32_t var_14 = edi
int16_t* edi_1 = arg2
*edi_1 = 0
edi_1[1] = 0
edi_1[2] = 0
edi_1[3] = 0
*ebx = 0xffff
ebx[1] = 0xffff
ebx[2] = 0xffff
ebx[3] = 0xffff
int32_t* arg_4
bool cond:0 = arg_4 == 0
*esi = 0
esi[1] = 0
esi[2] = 0
esi[3] = 0
*arg1 = 0

if (not(cond:0))
    arg3 = nullptr
    
    if (sub_46ad8d(arg_4, 0x42415443, &arg3, &arg_4) s< 0)
        return 0
    
    int16_t* ecx_2 = arg3
    
    if (ecx_2 != 0)
        int32_t edx_1
        
        if (arg_4 u>= 0x1c)
            edx_1 = *(ecx_2 + 0xc)
        
        if (arg_4 u< 0x1c || arg_4 u< (edx_1 << 2) + 0x1c)
            return 0x80004005
        
        arg4 = nullptr
        void* eax_5 = *(ecx_2 + 0x10) + ecx_2
        
        if (edx_1 u> 0)
            do
                arg2 = nullptr
                
                for (char* j = *eax_5; j u< arg_4; j = &j[1])
                    if (*(j + arg3) == 0)
                        break
                    
                    arg2 += 1
                
                if (arg_4 u<= *eax_5 + arg2)
                    return 0x80004005
                
                uint32_t ecx_5 = zx.d(*(eax_5 + 4))
                
                if (ecx_5 == 0)
                    int32_t ecx_6
                    ecx_6.w = *(eax_5 + 8)
                    edi_1[1] += ecx_6.w
                    uint32_t ecx_23 = zx.d(esi[1])
                    arg2 = 4
                    
                    if (ecx_23 u<= zx.d(*(eax_5 + 8)) + zx.d(*(eax_5 + 6)))
                        ecx_23 = zx.d(*(eax_5 + 8)) + zx.d(*(eax_5 + 6))
                    
                    esi[1] = ecx_23.w
                    ecx_23.w = ebx[1]
                    uint32_t edx_11
                    edx_11.w = *(eax_5 + 6)
                    int16_t ecx_25 = ecx_23.w
                    
                    if (ecx_23.w u>= edx_11.w)
                        ecx_25 = edx_11.w
                    
                    ebx[1] = ecx_25
                else if (ecx_5 == 1)
                    int32_t ecx_7
                    ecx_7.w = *(eax_5 + 8)
                    edi_1[2] += ecx_7.w
                    uint32_t ecx_19 = zx.d(esi[2])
                    arg2 = 0x10
                    
                    if (ecx_19 u<= zx.d(*(eax_5 + 8)) + zx.d(*(eax_5 + 6)))
                        ecx_19 = zx.d(*(eax_5 + 8)) + zx.d(*(eax_5 + 6))
                    
                    esi[2] = ecx_19.w
                    ecx_19.w = ebx[2]
                    uint32_t edx_9
                    edx_9.w = *(eax_5 + 6)
                    int16_t ecx_21 = ecx_19.w
                    
                    if (ecx_19.w u>= edx_9.w)
                        ecx_21 = edx_9.w
                    
                    ebx[2] = ecx_21
                else if (ecx_5 == 2)
                    int32_t ecx_8
                    ecx_8.w = *(eax_5 + 8)
                    *edi_1 += ecx_8.w
                    uint32_t ecx_15 = zx.d(*esi)
                    arg2 = 0x10
                    
                    if (ecx_15 u<= zx.d(*(eax_5 + 8)) + zx.d(*(eax_5 + 6)))
                        ecx_15 = zx.d(*(eax_5 + 8)) + zx.d(*(eax_5 + 6))
                    
                    *esi = ecx_15.w
                    ecx_15.w = *ebx
                    uint32_t edx_7
                    edx_7.w = *(eax_5 + 6)
                    int16_t ecx_17 = ecx_15.w
                    
                    if (ecx_15.w u>= edx_7.w)
                        ecx_17 = edx_7.w
                    
                    *ebx = ecx_17
                else
                    if (ecx_5 != 3)
                        return 0x80004005
                    
                    edi_1[3] += *(eax_5 + 8)
                    arg2 = nullptr
                    uint32_t ecx_11 = zx.d(esi[3])
                    
                    if (ecx_11 u<= zx.d(*(eax_5 + 8)) + zx.d(*(eax_5 + 6)))
                        ecx_11 = zx.d(*(eax_5 + 8)) + zx.d(*(eax_5 + 6))
                    
                    esi[3] = ecx_11.w
                    ecx_11.w = ebx[3]
                    uint32_t edx_5
                    edx_5.w = *(eax_5 + 6)
                    int16_t ecx_13 = ecx_11.w
                    
                    if (ecx_11.w u>= edx_5.w)
                        ecx_13 = edx_5.w
                    
                    ebx[3] = ecx_13
                
                int32_t ecx_27 = zx.d(*(eax_5 + 8)) * arg2
                
                if (ecx_27 != 0 && arg_4 u<= *(eax_5 + 0x10) + ecx_27)
                    return 0x80004005
                
                arg4 += 1
                ecx_2 = arg3
                eax_5 += 0x14
            while (arg4 u< *(ecx_2 + 0xc))
        
        *arg1 = ecx_2

return 0

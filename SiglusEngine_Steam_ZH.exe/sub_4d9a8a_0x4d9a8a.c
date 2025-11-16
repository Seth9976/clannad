// 函数: sub_4d9a8a
// 地址: 0x4d9a8a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edx = *(arg1 + (arg3 << 2) + 0x1054)
int32_t edx_1 = *(arg1 + 0x48)
int32_t ecx_2 = arg3 * 2
bool cond:2 = ecx_2 s>= edx_1

if (ecx_2 s<= edx_1)
    int32_t ebx
    int32_t var_c_1 = ebx
    int32_t edx_6
    
    do
        if (not(cond:2))
            int32_t esi_1 = *(arg1 + (ecx_2 << 2) + 0x1058)
            ebx.w = *(arg2 + (esi_1 << 2))
            int32_t edx_2
            edx_2.w = *(arg2 + (*(arg1 + (ecx_2 << 2) + 0x1054) << 2))
            
            if (ebx.w u< edx_2.w)
                ecx_2 += 1
            else if (ebx.w == edx_2.w)
                edx_2.b = *(esi_1 + arg1 + 0x1948)
                
                if (edx_2.b u<= *(*(arg1 + (ecx_2 << 2) + 0x1054) + arg1 + 0x1948))
                    ecx_2 += 1
        
        int32_t esi_3 = *(arg1 + (ecx_2 << 2) + 0x1054)
        int32_t edx_3
        edx_3.w = *(arg2 + (edx << 2))
        ebx.w = *(arg2 + (esi_3 << 2))
        
        if (edx_3.w u< ebx.w)
            break
        
        if (edx_3.w == ebx.w)
            int32_t edx_4
            edx_4.b = *(edx + arg1 + 0x1948)
            
            if (edx_4.b u<= *(esi_3 + arg1 + 0x1948))
                break
        
        *(arg1 + (arg3 << 2) + 0x1054) = esi_3
        edx_6 = *(arg1 + 0x48)
        arg3 = ecx_2
        ecx_2 <<= 1
        cond:2 = ecx_2 s>= edx_6
    while (ecx_2 s<= edx_6)

*(arg1 + (arg3 << 2) + 0x1054) = edx

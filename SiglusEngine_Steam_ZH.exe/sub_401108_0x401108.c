// 函数: sub_401108
// 地址: 0x401108
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0

if (arg3 u> 0)
    int32_t edi
    int32_t var_10_1 = edi
    
    do
        int32_t edx
        edx.w = *(arg2 + (ebx << 1))
        uint32_t ecx_2 = zx.d(edx.w)
        
        if ((ecx_2 & 0xffff7c00) != 0)
            edx = ((ecx_2 & 0xffff8000) << 3 | (ecx_2 & 0x3ff)) << 0xd
                | ((ecx_2 u>> 0xa & 0x1f) + 0x70) << 0x17
        else
            int32_t ecx_8
            
            if ((0x3ff & edx.w) == 0)
                ecx_8 = (ecx_2 & 0xffff8000) << 0x10
            else
                int32_t edi_1 = 0xfffffff2
                int32_t edx_2 = ecx_2 & 0x3ff
                
                while ((0x400 & edx_2) == 0)
                    edi_1 -= 1
                    edx_2 <<= 1
                
                ecx_8 = (((ecx_2 & 0xffff8080) << 3 | edx_2) & 0xfffffbff) << 0xd
                    | (edi_1 + 0x7f) << 0x17
            
            edx = ecx_8
        
        *(arg1 + (ebx << 2)) = edx
        ebx += 1
    while (ebx u< arg3)

return arg1

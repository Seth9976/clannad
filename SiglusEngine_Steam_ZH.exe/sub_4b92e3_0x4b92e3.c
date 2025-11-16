// 函数: sub_4b92e3
// 地址: 0x4b92e3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
int32_t i = 0
int32_t edi
int32_t var_c = edi

if (*(arg1 + 0xc) u> 0)
    void* edi_1 = arg1 + 0x450
    
    do
        int32_t edx_2 = **(*(arg1 + 0x18) + (i << 2)) & 0xfff00000
        
        if (sub_4b4917(edx_2) != 0 || edx_2 == 0x72100000 || edx_2 == 0x11000000)
            if (ebx u>= 0xc)
                return 0xffffffff
            
            *edi_1 = i
            ebx += 1
            edi_1 += 4
        
        i += 1
    while (i u< *(arg1 + 0xc))

*(arg1 + 0x480) = ebx
return 1 << ebx.b

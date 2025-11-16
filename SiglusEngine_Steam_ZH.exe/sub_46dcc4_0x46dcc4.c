// 函数: sub_46dcc4
// 地址: 0x46dcc4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = 0
int32_t edi
int32_t var_c = edi

if (arg3 u> 0)
    void* ecx = *(arg1 + 8)
    
    do
        int32_t eax_2 = *(arg2 + (edx << 2))
        void* const eax_3
        
        if (eax_2 u>= *(ecx + 8))
            eax_3 = nullptr
        else
            eax_3 = *(*(ecx + 0x14) + (eax_2 << 2))
        
        if (eax_3 == 0 || *(eax_3 + 0x68) == 0)
            return 0
        
        edx += 1
    while (edx u< arg3)

return 1

// 函数: sub_4429a7
// 地址: 0x4429a7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x10c)
*(arg1 + 0x119) &= 0xfe

if (eax != 0)
    int32_t i = 0
    
    if (eax u> 0)
        int32_t edi
        int32_t var_c_1 = edi
        
        do
            int16_t* eax_2 = *(arg1 + 0x108) + (i << 2)
            void* eax_5 = zx.d(eax_2[1]) * 0x64 + *(zx.d(*eax_2) * 0x64 + *(arg1 + 0x2c) + 4)
            *(eax_5 + 0x30) &= 0xfffffffd
            i += 1
        while (i u< *(arg1 + 0x10c))
    
    *(arg1 + 0x10c) = 0

return 0

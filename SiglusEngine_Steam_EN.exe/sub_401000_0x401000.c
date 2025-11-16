// 函数: sub_401000
// 地址: 0x401000
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0)
    sub_403980(&arg1[0x94])
    sub_403d90(&arg1[0x78])
    sub_4100a0(&arg1[0x1e])
    
    if (arg1[0x12] != 0)
        int32_t eax_3 = arg1[0xd]
        
        if (eax_3 != 0)
            int32_t i = 0
            
            if (eax_3 s> 0)
                int32_t ebx_1 = 0
                void* esi_1 = nullptr
                
                do
                    sub_403140(esi_1 + arg1[0x12])
                    sub_403080(arg1[0x13] + ebx_1)
                    i += 1
                    esi_1 += 0x20
                    ebx_1 += 0x10
                while (i s< arg1[0xd])
            
            _free(arg1[0x12])
            _free(arg1[0x13])
    
    int32_t eax_8 = arg1[0xf]
    
    if (eax_8 != 0)
        _free(eax_8)
    
    int32_t eax_9 = arg1[0x11]
    
    if (eax_9 != 0)
        _free(eax_9)
    
    int32_t eax_10 = arg1[0x10]
    
    if (eax_10 != 0)
        _free(eax_10)
    
    int32_t eax_11 = arg1[0xe]
    
    if (eax_11 != 0)
        _free(eax_11)
    
    sub_410240(&arg1[6])
    int32_t eax_12 = *arg1
    
    if (eax_12 != 0)
        arg1[0xb2](eax_12)
    
    __builtin_memset(arg1, 0, 0x2d0)

return 0

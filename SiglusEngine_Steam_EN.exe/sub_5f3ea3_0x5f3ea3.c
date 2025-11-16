// 函数: sub_5f3ea3
// 地址: 0x5f3ea3
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0)
    int32_t eax_1 = arg1[3]
    
    if ((eax_1.b & 0x83) != 0 && (eax_1.b & 0x40) == 0)
        if ((eax_1.b & 2) == 0)
            int32_t eax_3 = eax_1 | 1
            arg1[3] = eax_3
            
            if ((eax_3 & 0x10c) != 0)
                *arg1 = arg1[2]
            else
                __getbuf(arg1)
            
            int32_t eax_6 = sub_5f41f0(__fileno(arg1), arg1[2], arg1[6])
            arg1[1] = eax_6
            
            if (eax_6 != 0 && eax_6 != 0xffffffff)
                if ((arg1[3].b & 0x82) == 0)
                    int32_t eax_7 = __fileno(arg1)
                    int32_t eax_8
                    
                    if (eax_7 != 0xffffffff)
                        eax_8 = __fileno(arg1)
                    
                    void* eax_13
                    
                    if (eax_7 == 0xffffffff || eax_8 == 0xfffffffe)
                        eax_13 = &data_63be30
                    else
                        int32_t esi_2 = __fileno(arg1) s>> 5
                        eax_13 = ((__fileno(arg1) & 0x1f) << 6) + (&data_640ff8)[esi_2]
                    
                    eax_13.b = *(eax_13 + 4)
                    eax_13.b &= 0x82
                    
                    if (eax_13.b == 0x82)
                        arg1[3] |= 0x2000
                
                if (arg1[6] == 0x200 && (arg1[3].b & 8) != 0 && (arg1[3] & 0x400) == 0)
                    arg1[6] = 0x1000
                
                char* ecx_6 = *arg1
                arg1[1] -= 1
                uint32_t result = zx.d(*ecx_6)
                *arg1 = &ecx_6[1]
                return result
            
            int32_t eax_14 = neg.d(eax_6)
            arg1[3] |= (sbb.d(eax_14, eax_14, eax_6 != 0) & 0x10) + 0x10
            arg1[1] = 0
        else
            arg1[3] = eax_1 | 0x20
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()

return 0xffffffff

// 函数: sub_45ef40
// 地址: 0x45ef40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_71929c != 0x15)
    sub_48c7b0()

sub_41a410()
uint32_t edx = data_7037a4
uint32_t ecx = edx

if (data_1321ec4 != 0)
    ecx = edx
else
    int32_t eax_1 = data_71929c
    
    if (eax_1 == 0x20)
        uint32_t eax_13 = zx.d(data_108f5ac)
        
        if (eax_13 != 0xffffffff)
            ecx = eax_13
    else
        uint32_t eax_4
        int32_t eax_3
        
        if (eax_1 == 0x23)
        label_45efcd:
            eax_4 = data_129996c
        label_45efa6:
            
            if (eax_4 != 0xffffffff)
                ecx = eax_4
        else
            switch (data_1320e5c)
                case 0
                    eax_3 = data_1320e68
                label_45ef96:
                    
                    if (eax_3 u<= 0xf)
                        eax_4 = zx.d((&data_108f5ac)[eax_3])
                        goto label_45efa6
                case 1
                    eax_3 = data_1320e74
                    goto label_45ef96
                case 2
                    int32_t eax_5 = data_1320e60
                    
                    if (eax_5 == 0)
                        eax_4 = data_1299970
                        goto label_45efa6
                    
                    if (eax_5 == 1)
                        eax_4 = data_1299974
                        goto label_45efa6
                    
                    if (eax_5 == 2)
                        goto label_45efcd
                case 3
                    ecx = data_f89960
                case 4
                    if (data_1374234 != 0xffffffff)
                        eax_4 = data_12a2910
                        goto label_45efa6
                case 5
                    if (data_108f2d4 == 2)
                        int32_t eax_9 = data_131d2d0
                        
                        if (eax_9 != 0xffffffff && data_13130dc != 0xffffffff)
                            uint32_t eax_12 = *(eax_9 * 0x10c + 0x1098080)
                            
                            if (eax_12 != 0xffffffff)
                                ecx = eax_12
    
    if (ecx s< 0 || ecx s>= 0x40)
        ecx = edx

return sub_45ee40(ecx, 0)

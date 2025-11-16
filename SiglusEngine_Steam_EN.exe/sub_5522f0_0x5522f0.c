// 函数: sub_5522f0
// 地址: 0x5522f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
SendMessageA(GetDlgItem(data_20c2b5c, 0x4f34), 0x1009, 0, 0)
int32_t result = sub_4d6c40(&data_20c2ca0, &data_20c2ca4)
data_20c2c9c = 0

if (arg1 != 0xffffffff)
    result = data_20c2b70
    
    if (result != 0xffffffff)
        data_20c2b78 = arg1
        int32_t var_94_1
        BOOL var_90_1
        void var_88
        BOOL eax_3
        
        if (result s< 0)
            int32_t esi_1
            
            switch (result)
                case 0xffffff9d
                    var_90_1 = 0
                    var_94_1 = 0x2be
                    sub_5502d0(0x2be)
                    int32_t i = 0
                    int32_t edi_4 = data_20c2b70
                    BOOL var_8c_2 = data_1333e40
                    
                    do
                        sub_551c50(&var_88, i, edi_4, &var_88)
                        eax_3 = var_8c_2
                        
                        if (eax_3 != 0)
                            eax_3(0, &var_88, i, i, data_20c2b5c, 0x4f34)
                            eax_3 = data_1333e40
                            edi_4 = data_20c2b70
                            var_8c_2 = eax_3
                        
                        if (i s< data_20c2c9c)
                            eax_3 = data_20c2ca4
                            *(eax_3 + (i << 3)) = edi_4
                            *(eax_3 + (i << 3) + 4) = i
                        
                        i += 1
                    while (i s< 0x2be)
                    
                    goto label_55277e
                case 0xffffff9e
                    var_90_1 = 0
                    var_94_1 = 0x2be
                    sub_5502d0(0x2be)
                    int32_t i_1 = 0
                    int32_t edi_5 = data_20c2b70
                    BOOL var_8c_3 = data_1333e40
                    
                    do
                        sub_551c50(&var_88, i_1, edi_5, &var_88)
                        eax_3 = var_8c_3
                        
                        if (eax_3 != 0)
                            eax_3(0, &var_88, i_1, i_1, data_20c2b5c, 0x4f34)
                            eax_3 = data_1333e40
                            edi_5 = data_20c2b70
                            var_8c_3 = eax_3
                        
                        if (i_1 s< data_20c2c9c)
                            eax_3 = data_20c2ca4
                            *(eax_3 + (i_1 << 3)) = edi_5
                            *(eax_3 + (i_1 << 3) + 4) = i_1
                        
                        i_1 += 1
                    while (i_1 s< 0x2be)
                    
                    goto label_55277e
                case 0xffffffeb
                    esi_1 = result + 0x28
                    goto label_55265e
                case 0xffffffec
                    esi_1 = result + 0x26
                    goto label_55265e
                case 0xffffffed
                    esi_1 = result + 0x24
                    goto label_55265e
                case 0xffffffee
                    esi_1 = result + 0x22
                    goto label_55265e
                case 0xffffffef
                    esi_1 = result + 0x20
                    goto label_55265e
                case 0xfffffff0
                    esi_1 = result + 0x1e
                    goto label_55265e
                case 0xfffffff1
                    esi_1 = result + 0x1c
                    goto label_55265e
                case 0xfffffff2
                    esi_1 = result + 0x1a
                    goto label_55265e
                case 0xfffffff3
                    esi_1 = result + 0x18
                    goto label_55265e
                case 0xfffffff4
                    esi_1 = result + 0x16
                    goto label_55265e
                case 0xfffffff5
                    esi_1 = result + 0x14
                    goto label_55265e
                case 0xfffffff6
                    esi_1 = result + 0x12
                    goto label_55265e
                case 0xfffffff7
                    esi_1 = result + 0x10
                    goto label_55265e
                case 0xfffffff8
                    esi_1 = result + 0xe
                    goto label_55265e
                case 0xfffffff9
                    esi_1 = result + 0xc
                    goto label_55265e
                case 0xfffffffa
                    esi_1 = result + 0xa
                    goto label_55265e
                case 0xfffffffb
                    esi_1 = result + 8
                    goto label_55265e
                case 0xfffffffc
                    esi_1 = result + 6
                    goto label_55265e
                case 0xfffffffd
                    esi_1 = result + 4
                    goto label_55265e
                case 0xfffffffe
                    esi_1 = 0
                label_55265e:
                    int32_t i_5 = data_134ce60
                    int32_t ecx_10 = 0
                    var_94_1 = 0
                    BOOL var_98
                    
                    if (i_5 s> 0)
                        int32_t* eax_9 = data_134ce68 + 0xc
                        int32_t i_2
                        
                        do
                            if (*eax_9 == esi_1)
                                ecx_10 += 1
                            
                            eax_9 = &eax_9[8]
                            i_2 = i_5
                            i_5 -= 1
                        while (i_2 != 1)
                        var_94_1 = ecx_10
                        
                        if (ecx_10 != 0)
                            int32_t i_6 = i_5
                            sub_5502d0(ecx_10)
                            int32_t ecx_11 = data_134ce60
                            BOOL eax_10 = 0
                            var_98 = 0
                            
                            if (ecx_11 s> 0)
                                int32_t* edi_7 = data_134ce68 + 8
                                int32_t var_8c_4 = data_1333e40
                                
                                do
                                    if (edi_7[1] == esi_1)
                                        sub_551c50(&var_88, *edi_7, edi_7[-1], &var_88)
                                        
                                        if (var_8c_4 != 0)
                                            var_8c_4(0, &var_88, i_6, i_6, data_20c2b5c, 0x4f34)
                                            var_8c_4 = data_1333e40
                                        
                                        int32_t eax_13 = *edi_7
                                        
                                        if (i_6 s< data_20c2c9c)
                                            int32_t* ecx_14 = data_20c2ca4 + (i_6 << 3)
                                            *ecx_14 = edi_7[-1]
                                            ecx_14[1] = eax_13
                                        
                                        ecx_11 = data_134ce60
                                        eax_10 = var_98
                                        i_6 += 1
                                    
                                    eax_10 += 1
                                    edi_7 = &edi_7[8]
                                    var_98 = eax_10
                                while (eax_10 s< ecx_11)
                    
                    eax_3 = var_98
                    var_90_1 = eax_3
                    goto label_55277e
        else
            BOOL ecx = *((arg1 << 2) + &data_6125c0)
            result = (&data_63ecb0)[result]
            int32_t edi_1 = *((arg1 << 2) + &data_6124c0)
            var_90_1 = ecx
            
            if (ecx s< result)
                if (edi_1 s>= result)
                    edi_1 = result - 1
                
                var_94_1 = edi_1 - ecx + 1
                
                if (edi_1 - ecx + 1 s> 0)
                    int32_t ecx_2
                    eax_3, ecx_2 = sub_5502d0(edi_1 - ecx + 1)
                    int32_t i_3 = 0
                    
                    if (edi_1 - ecx + 1 s> 0)
                        eax_3 = data_1333e40
                        BOOL var_8c_1 = eax_3
                        
                        do
                            sub_551c50(eax_3, var_90_1 + i_3, data_20c2b70, &var_88)
                            eax_3 = var_8c_1
                            
                            if (eax_3 != 0)
                                eax_3(0, &var_88, i_3, i_3, data_20c2b5c, 0x4f34)
                                eax_3 = data_1333e40
                                var_8c_1 = eax_3
                            
                            if (i_3 s< data_20c2c9c)
                                eax_3 = data_20c2ca4
                                *(eax_3 + (i_3 << 3)) = data_20c2b70
                                *(eax_3 + (i_3 << 3) + 4) = var_90_1 + i_3
                            
                            i_3 += 1
                        while (i_3 s< edi_1 - ecx + 1)
                    
                label_55277e:
                    int32_t* ecx_21 = data_20c2ca4
                    int32_t* var_8c_5 = ecx_21
                    
                    if (data_20c2c9c s> 0)
                        int32_t esi_2 = data_1333e3c
                        int32_t i_4 = 0
                        
                        do
                            int32_t ecx_15 = *ecx_21
                            
                            if (ecx_15 == 0xc)
                                eax_3 = *(data_20c2d04 + (var_8c_5[1] << 3) + 4)
                                
                                if (eax_3 != 0 && esi_2 != 0)
                                    goto label_552896
                            else if (ecx_15 == 0x12)
                                eax_3 = *(data_20c2d0c + (var_8c_5[1] << 3) + 4)
                                
                                if (eax_3 != 0 && esi_2 != 0)
                                    goto label_552896
                            else if (ecx_15 == 0xffffff9d)
                                eax_3 = *(data_20c2d14 + (var_8c_5[1] << 3) + 4)
                                
                                if (eax_3 != 0 && esi_2 != 0)
                                    goto label_552896
                            else if (ecx_15 != 0xffffff9e)
                                if (*((ecx_15 << 2) + &data_610fb0) == 3)
                                    eax_3 = var_8c_5[1]
                                
                                if (*((ecx_15 << 2) + &data_610fb0) != 3
                                        || (eax_3 s>= 0 && eax_3 s< (&data_63ecb0)[ecx_15]))
                                    uint32_t var_a8_6 = sub_5507a0(ecx_15, var_8c_5[1])
                                    eax_3 = sub_4c84d0(&var_88, "%$d")
                                    
                                    if (esi_2 != 0)
                                        eax_3 = &var_88
                                    label_552896:
                                        int32_t var_a8_7 = 0x4f34
                                        eax_3 = esi_2(1, eax_3, i_4, i_4, data_20c2b5c, 0x4f34)
                                        esi_2 = data_1333e3c
                                else if (esi_2 != 0)
                                    int32_t var_a8_5 = 0x4f34
                                    eax_3 = esi_2(1, &data_620c50, i_4, i_4, data_20c2b5c, 0x4f34)
                                    esi_2 = data_1333e3c
                            else
                                eax_3 = *(data_20c2d1c + (var_8c_5[1] << 3) + 4)
                                
                                if (eax_3 != 0 && esi_2 != 0)
                                    goto label_552896
                            
                            i_4 += 1
                            ecx_21 = &var_8c_5[2]
                            var_8c_5 = ecx_21
                        while (i_4 s< data_20c2c9c)
                    
                    int32_t var_a8_8 = var_94_1
                    result = sub_550300(eax_3, var_90_1, ecx_21)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

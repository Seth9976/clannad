// 函数: sub_550300
// 地址: 0x550300
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg3
int32_t var_c = arg2
int32_t esi = data_20c2b70

if (eax s> 0)
    if (esi s>= 0)
        int32_t ecx_1 = 0
        eax = eax - 1 + arg2
        int32_t var_8_1 = 0
        
        if (data_134ce60 s> 0)
            int32_t* edi_2 = data_134ce68 + 8
            arg3 = data_1333e3c
            int32_t eax_3 = data_134ce60
            
            do
                if (edi_2[-1] == esi)
                    int32_t eax_4 = *edi_2
                    
                    if (eax_4 s>= arg2 && eax_4 s<= eax && edi_2[5] != 0xffffffff)
                        int32_t eax_5 = eax_4 - arg2
                        
                        if (arg3 != 0)
                            arg3(2, data_134ce50:4 + edi_2[5], eax_5, eax_5, data_20c2b5c, 0x4f34)
                            arg2 = var_c
                            ecx_1 = var_8_1
                            arg3 = data_1333e3c
                    
                    eax_3 = data_134ce60
                
                ecx_1 += 1
                edi_2 = &edi_2[8]
                var_8_1 = ecx_1
            while (ecx_1 s< eax_3)
            
            return eax_3
    else if (esi == 0xffffff9d)
        int32_t ecx_3 = eax - 1 + arg2
        int32_t edi_3 = 0
        int32_t var_8_2 = ecx_3
        
        if (data_134ce60 s> 0)
            int32_t* esi_2 = data_134ce68 + 8
            arg3 = data_1333e3c
            int32_t eax_10 = data_134ce60
            
            do
                if (esi_2[-1] == 0xffffff9d)
                    int32_t eax_11 = *esi_2
                    
                    if (eax_11 s>= arg2 && eax_11 s<= ecx_3)
                        int32_t ecx_4 = esi_2[5]
                        
                        if (ecx_4 != 0xffffffff)
                            int32_t eax_12 = eax_11 - arg2
                            
                            if (arg3 != 0)
                                arg3(2, data_134ce50:4 + ecx_4, eax_12, eax_12, data_20c2b5c, 
                                    0x4f34)
                                arg2 = var_c
                                arg3 = data_1333e3c
                        
                        ecx_3 = var_8_2
                    
                    eax_10 = data_134ce60
                
                edi_3 += 1
                esi_2 = &esi_2[8]
            while (edi_3 s< eax_10)
            
            return eax_10
    else if (esi == 0xffffff9e)
        int32_t ecx_7 = eax - 1 + arg2
        int32_t edi_4 = 0
        int32_t var_8_3 = ecx_7
        
        if (data_134ce60 s> 0)
            int32_t* esi_4 = data_134ce68 + 8
            arg3 = data_1333e3c
            int32_t eax_16 = data_134ce60
            
            do
                if (esi_4[-1] == 0xffffff9e)
                    int32_t eax_17 = *esi_4
                    
                    if (eax_17 s>= arg2 && eax_17 s<= ecx_7)
                        int32_t ecx_8 = esi_4[5]
                        
                        if (ecx_8 != 0xffffffff)
                            int32_t eax_18 = eax_17 - arg2
                            
                            if (arg3 != 0)
                                arg3(2, data_134ce50:4 + ecx_8, eax_18, eax_18, data_20c2b5c, 
                                    0x4f34)
                                arg2 = var_c
                                arg3 = data_1333e3c
                        
                        ecx_7 = var_8_3
                    
                    eax_16 = data_134ce60
                
                edi_4 += 1
                esi_4 = &esi_4[8]
            while (edi_4 s< eax_16)
            
            return eax_16
    else
        int32_t esi_5
        
        if (esi != 0xfffffffe)
            switch (esi)
                case 0xffffffeb
                    esi_5 = 0x13
                    goto label_5505e0
                case 0xffffffec
                    esi_5 = 0x12
                    goto label_5505e0
                case 0xffffffed
                    esi_5 = 0x11
                    goto label_5505e0
                case 0xffffffee
                    esi_5 = 0x10
                    goto label_5505e0
                case 0xffffffef
                    esi_5 = 0xf
                    goto label_5505e0
                case 0xfffffff0
                    esi_5 = 0xe
                    goto label_5505e0
                case 0xfffffff1
                    esi_5 = 0xd
                    goto label_5505e0
                case 0xfffffff2
                    esi_5 = 0xc
                    goto label_5505e0
                case 0xfffffff3
                    esi_5 = 0xb
                    goto label_5505e0
                case 0xfffffff4
                    esi_5 = 0xa
                    goto label_5505e0
                case 0xfffffff5
                    esi_5 = 9
                    goto label_5505e0
                case 0xfffffff6
                    esi_5 = 8
                    goto label_5505e0
                case 0xfffffff7
                    esi_5 = 7
                    goto label_5505e0
                case 0xfffffff8
                    esi_5 = 6
                    goto label_5505e0
                case 0xfffffff9
                    esi_5 = 5
                    goto label_5505e0
                case 0xfffffffa
                    esi_5 = 4
                    goto label_5505e0
                case 0xfffffffb
                    esi_5 = 3
                    goto label_5505e0
                case 0xfffffffc
                    esi_5 = 2
                    goto label_5505e0
                case 0xfffffffd
                    esi_5 = 1
                    goto label_5505e0
        else
            esi_5 = 0
        label_5505e0:
            eax = 0
            int32_t ecx_10 = 0
            int32_t var_c_1 = 0
            int32_t var_8_4 = 0
            
            if (data_134ce60 s> 0)
                int32_t* edi_6 = data_134ce68 + 0x1c
                arg3 = data_1333e3c
                int32_t edx_1 = data_134ce60
                
                do
                    if (edi_6[-4] == esi_5)
                        int32_t edx_2 = *edi_6
                        
                        if (edx_2 != 0xffffffff && arg3 != 0)
                            arg3(2, data_134ce50:4 + edx_2, eax, eax, data_20c2b5c, 0x4f34)
                            eax = var_c_1
                            ecx_10 = var_8_4
                            arg3 = data_1333e3c
                        
                        edx_1 = data_134ce60
                        eax += 1
                        var_c_1 = eax
                    
                    ecx_10 += 1
                    edi_6 = &edi_6[8]
                    var_8_4 = ecx_10
                while (ecx_10 s< edx_1)

return eax

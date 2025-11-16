// 函数: sub_4b58e0
// 地址: 0x4b58e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = data_7030b0
int32_t ecx = data_7030ac
int32_t var_14 = data_702ff4
int32_t var_10 = data_702ff8
int32_t var_c = data_702ffc
int32_t var_8 = data_703000
void* result
int32_t ecx_1
result, ecx_1 =
    sub_4d2220(&var_14, edx, ecx, data_7030b4, data_7030b8, &var_14, &var_10, &var_c, &var_8)

if (result == 0)
    return result

if (data_7030d8 == 1)
    return sub_4b0380(result, var_10, var_14.b, var_c, var_8)

uint32_t eax_6 = data_703050
int32_t var_1c_11
int32_t var_18_11
int32_t ecx_12
int32_t edx_11

if (eax_6 s< 0 || eax_6 s>= 0x1f4)
label_4b5b1f:
    var_18_11 = var_8
    edx_11 = var_10
    var_1c_11 = var_c
    ecx_12 = var_14
else
    if (eax_6 s>= 0x64)
        if (eax_6 s>= 0xc8)
            if (eax_6 s>= 0x12c)
                if (eax_6 s< 0x190 && eax_6 s< 0x140)
                    eax_6 -= 0x12c
                    
                    switch (eax_6)
                        case 0
                            return sub_4b5360(eax_6, var_10, var_14, var_c, var_8)
                        case 1
                            return sub_4b54e0(eax_6, var_10, var_14, var_c, var_8)
                        case 2
                            return sub_4b5630(eax_6, var_10, var_14, var_c, var_8)
                        case 3
                            return sub_4b57c0(eax_6, var_10, var_14, var_c, var_8)
            else if (eax_6 s< 0xdc)
                eax_6 -= 0xc8
                
                if (eax_6 u<= 4)
                    return sub_4b3580()
            else if (eax_6 s< 0xf0)
                eax_6 -= 0xdc
                
                if (eax_6 u<= 0xe)
                    eax_6 = zx.d(lookup_table_4b5f80[eax_6])
                    
                    switch (eax_6)
                        case 0
                            return sub_4b3580()
            else if (eax_6 s< 0x104)
                eax_6 -= 0xf0
                
                if (eax_6 u<= 4)
                    return sub_4b3580()
            else if (eax_6 s>= 0x118)
                eax_6 -= 0x118
                
                switch (eax_6)
                    case 0
                        return sub_4b46a0(eax_6, var_10, var_14, var_c, var_8, 0, 0, 0)
                    case 1
                        return sub_4b46a0(eax_6, var_10, var_14, var_c, var_8, 0, 0xffffffff, 
                            0xffffffff)
                    case 2
                        return sub_4b46a0(eax_6, var_10, var_14, var_c, var_8, 0, 0x7d0, 0x7d0)
                    case 3
                        return sub_4b46a0(eax_6, var_10, var_14, var_c, var_8, 0xe10, 0, 0)
                    case 4
                        return sub_4b46a0(eax_6, var_10, var_14, var_c, var_8, 0xe10, 0xffffffff, 
                            0xffffffff)
                    case 5
                        return sub_4b46a0(eax_6, var_10, var_14, var_c, var_8, 0xe10, 0x7d0, 0x7d0)
                    case 0xa
                        return sub_4b4d10(eax_6, var_10, var_14, var_c, var_8, 0, 0, 0)
                    case 0xb
                        return sub_4b4d10(eax_6, var_10, var_14, var_c, var_8, 0, 0xffffffff, 
                            0xffffffff)
                    case 0xc
                        return sub_4b4d10(eax_6, var_10, var_14, var_c, var_8, 0, 0x7d0, 0x7d0)
                    case 0xd
                        return sub_4b4d10(eax_6, var_10, var_14, var_c, var_8, 0xe10, 0, 0)
                    case 0xe
                        return sub_4b4d10(eax_6, var_10, var_14, var_c, var_8, 0xe10, 0xffffffff, 
                            0xffffffff)
                    case 0xf
                        return sub_4b4d10(eax_6, var_10, var_14, var_c, var_8, 0xe10, 0x7d0, 0x7d0)
            else
                eax_6 -= 0x104
                
                if (eax_6 u<= 0xa)
                    uint32_t eax_32 = zx.d(lookup_table_4b5f9c[eax_6])
                    
                    switch (eax_32)
                        case 0
                            return sub_4b1570(eax_32, var_10, var_14, var_c, var_8)
                        case 1
                            return sub_4b1810(eax_32, var_10, var_14, var_c, var_8)
                        case 2
                            return sub_4b1a70(eax_32, var_10, var_14, var_c, var_8)
        else if (eax_6 s< 0x78)
            eax_6 -= 0x64
            
            if (eax_6 u<= 0x13)
                eax_6 = zx.d(lookup_table_4b5f04[eax_6])
                
                switch (eax_6)
                    case 1
                        return sub_4b2b60(var_c, var_8)
        else
            bool cond:0_1
            
            if (eax_6 s>= 0x8c)
                if (eax_6 s< 0xa0)
                    uint32_t temp1_1 = eax_6
                    eax_6 -= 0x8c
                    cond:0_1 = temp1_1 == 0x8c
                    goto label_4b5b1a
                
                if (eax_6 s>= 0xb4)
                    eax_6 -= 0xb4
                    
                    if (eax_6 u<= 0x11)
                        eax_6 = zx.d(lookup_table_4b5f64[eax_6])
                        
                        switch (eax_6)
                            case 1
                                return sub_4b2c20(eax_6, var_10, var_14.b, var_c, var_8)
                            case 2
                                return sub_4b2cd0(eax_6, var_10, var_14.b, var_c, var_8)
                            case 3
                                return sub_4b2da0(ecx_1)
                            case 4
                                return sub_4b45c0()
                            case 5
                                return sub_4b3f60()
                else
                    eax_6 -= 0xa0
                    
                    switch (eax_6)
                        case 0, 5
                            return sub_4b1040(eax_6, var_10, var_14.b, var_c, var_8)
                        case 1, 6
                            return sub_4b1150(eax_6, var_10, var_14.b, var_c, var_8)
                        case 2
                            return sub_4b1290(eax_6, var_10, var_14, var_c, var_8)
                        case 3
                            return sub_4b1330(eax_6, var_10, var_14, var_c, var_8)
                        case 4
                            return sub_4b1460(eax_6, var_10, var_14, var_c, var_8)
                        case 0xa, 0xb
                            return sub_4b3f60()
            else
                uint32_t temp0_1 = eax_6
                eax_6 -= 0x78
                cond:0_1 = temp0_1 == 0x78
            label_4b5b1a:
                
                if (not(cond:0_1))
                    eax_6 -= 0xa
        
        goto label_4b5b1f
    
    if (eax_6 s< 0x14)
        if (eax_6 u<= 0x12)
            eax_6 = zx.d(lookup_table_4b5ea0[eax_6])
            
            switch (eax_6)
                case 1
                    return sub_4b0330(eax_6, var_10, var_14.b, var_c, var_8)
                case 2
                    return sub_4b0ba0(var_c, var_8)
                case 3
                    return sub_4b0c90(var_c, var_8)
                case 4
                    return sub_4b0d90(var_c, var_8)
                case 5
                    return sub_4b0e80(var_c, var_8)
        
        goto label_4b5b1f
    
    if (eax_6 s< 0x28)
        eax_6 -= 0x14
        
        if (eax_6 u<= 0x13)
            eax_6 = zx.d(lookup_table_4b5ecc[eax_6])
            
            switch (eax_6)
                case 0
                    return sub_4b09c0(var_c, var_8)
                case 1
                    return sub_4b0ab0(var_c, var_8)
                case 3
                    return sub_4b1f70(eax_6, var_10, var_14, var_c, var_8)
                case 4
                    return sub_4b2210(eax_6, var_10, var_14, var_c, var_8)
        
        goto label_4b5b1f
    
    if (eax_6 s< 0x3c)
        eax_6 -= 0x28
        
        if (eax_6 u<= 0xe)
            eax_6 = zx.d(lookup_table_4b5ee8[eax_6])
        
        goto label_4b5b1f
    
    edx_11 = var_10
    ecx_12 = var_14
    var_18_11 = var_8
    var_1c_11 = var_c
    
    if (eax_6 s< 0x50)
        return sub_4b03e0(eax_6 - 0x3d, edx_11, ecx_12, var_1c_11, var_18_11)

return sub_4b03e0(eax_6, edx_11, ecx_12, var_1c_11, var_18_11)

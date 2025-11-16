// 函数: sub_4d4290
// 地址: 0x4d4290
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_20c02a4
uint32_t ecx = zx.d(*(arg1 + 0x17))

if (eax u<= 0x63)
    uint32_t eax_1 = zx.d(lookup_table_4d4328[eax])
    
    switch (eax_1)
        case 0
            if (*(arg1 + 0x1c) != 0x40)
            label_4d42bb:
                uint32_t var_c_1 = ecx
                
                if (sub_4d41b0(eax_1, arg1 + 0x1c, ecx.b) == 0)
                    return 0
        case 1
            if (*(arg1 + 0x1c) == 0x40)
                goto label_4d42bb
        case 2
            if (*(arg1 + 0x1c) == 0x40)
                sub_4d1360(&data_20c02cc, arg1 + 0x1c)
                return 1
            
            sub_4d1360(&data_20c02c0, arg1 + 0x1c)
        case 3
            if (*(arg1 + 0x1c) != 0x40)
                eax_1.b = *(arg1 + 0x1b)
                eax_1.b &= 3
                
                if (eax_1.b == 1)
                    goto label_4d42bb

return 1

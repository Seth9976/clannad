// 函数: sub_56ecc0
// 地址: 0x56ecc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 u> 0x111)
    int32_t var_20
    
    if (arg2 == 0x214)
        int32_t esi_2 = data_1af0a88
        int32_t eax_32
        int32_t edx_5
        eax_32, edx_5 = sub_4d7c70(sub_55a590(esi_2), esi_2, &data_20c3980, arg3, arg4)
        int32_t var_14_12 = arg4
        int32_t var_18_5 = arg3
        int32_t var_1c
        sub_4d7940(eax_32, edx_5, 0x20c399c, var_20, var_1c)
    else if (arg2 == 0x216)
        int32_t esi_1 = data_1af0a88
        int32_t eax_28
        int32_t ecx_3
        eax_28, ecx_3 = sub_55a590(esi_1)
        int32_t var_14_9 = arg4
        int32_t eax_29
        int32_t edx_3
        eax_29, edx_3 = sub_4d7bd0(eax_28, esi_1, &data_20c3980, ecx_3)
        int32_t var_14_10 = arg4
        sub_4d7740(eax_29, edx_3, 0x20c399c, var_20)
else if (arg2 != 0x111)
    if (arg2 == 0x10)
        if (data_1af0a88 != 0)
            sub_559ef0(0x1e, 0)
            EndDialog(data_1af0a88, 0)
            data_1af0a88 = 0
        
        return 1
    
    if (arg2 == 0x110)
        sub_56ebd0(arg1)
else if (zx.d(arg3.w) - 0x4f30 u<= 0x70)
    switch (arg3.w)
        case 0x4f30
            SetFocus(data_7027bc)
            
            if (data_139319c != 0)
                sub_4539b0(1)
        case 0x4f56
            sub_56eb10(0)
        case 0x4f57
            sub_56eb10(1)
        case 0x4f58
            sub_56eb10(2)
        case 0x4f59
            sub_56eb10(3)
        case 0x4f5a
            sub_56eb10(4)
        case 0x4f5b
            sub_56eac0(0)
        case 0x4f5c
            sub_56eac0(1)
        case 0x4f5d
            sub_56eac0(2)
        case 0x4f5e
            sub_56eac0(3)
        case 0x4f5f
            sub_56eac0(4)
        case 0x4f60
            sub_56ea70(0)
        case 0x4f61
            sub_56ea70(1)
        case 0x4f62
            sub_56ea70(2)
        case 0x4f63
            sub_56ea70(3)
        case 0x4f64
            sub_56ea70(4)
        case 0x4f8d
            SetFocus(data_7027bc)
            int32_t var_14_2 = 0
            PostMessageA(data_7027bc, 0x111, 0x2739, 0)
        case 0x4f8f
            sub_453750(SetFocus(data_7027bc), 1, 1, &data_6144d8)
        case 0x4f94
            SetFocus(data_7027bc)
            int32_t var_14_5 = 0
            PostMessageA(data_7027bc, 0x111, 0x273a, 0)
        case 0x4fa0
            SetFocus(data_7027bc)
            int32_t var_14_7 = 0
            PostMessageA(data_7027bc, 0x111, 0x273b, 0)

return 0

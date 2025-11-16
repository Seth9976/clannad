// 函数: sub_4a1640
// 地址: 0x4a1640
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_224
char* eax_1 = __security_cookie ^ &var_224
char* var_c = eax_1

if (arg2 != 0)
    var_224 = arg3
    eax_1 = sub_4a15e0(arg3)
    char* esi_1
    void* edi_1
    
    if (arg3 == 0xffffffff)
        edi_1 = 0xfffffffc
        esi_1 = nullptr
    label_4a179e:
        int32_t eax_8 = sub_482cf0(arg2)
        int32_t edx_6
        
        if (eax_8 == 0)
            char var_218[0x20c]
            sub_4cfd70(&var_218, arg2)
            edx_6.b = sub_49ede0(&var_218) s>= 0
        
        if (eax_8 != 0 || edx_6 != 0)
            if (eax_1 == 0)
                eax_1 = var_224
                
                if (eax_1 u<= 0xf)
                    eax_1 = sub_4a1a60(eax_1, 0)
                
                goto label_4a1899
            
            int32_t var_254_2
            
            var_254_2 = eax_8 == 0 ? 0 : eax_8
            
            eax_1 = sub_49db20(eax_8, edi_1, esi_1, nullptr, data_7031a8, arg2, 5, 0x1b, var_254_2, 
                arg4, arg5, 0xffffffff, 0xffffffff, 0xffffffff, 2, arg6, 0xff)
            
            if (edi_1 == 0xfffffffc)
                int32_t edi_3 = data_20740d4 - 0x30
                data_20740d4 = edi_3
                
                if (edi_3 u<= 7)
                    int32_t eax_14 = edi_3 * 9
                    sub_4cfd70((eax_14 << 2) + &data_1af1240, (eax_14 << 2) + &data_1af15a0)
                    *((edi_3 << 2) + &data_187c5e0) = *((edi_3 << 2) + &data_187c580)
                    sub_4cfd70((eax_14 << 2) + &data_1af15a0, arg2)
                    eax_1 = arg4
                    *((edi_3 << 2) + &data_187c580) = eax_1
        else
            char* eax_10 = var_224
            
            if (eax_10 u<= 0xf)
                sub_4a1a60(eax_10, edx_6)
            
            char* var_234_1 = arg2
            eax_1 = sub_4c84d0(&data_7027c0, 0x61b5c4)
            
            if (data_702fc0 != 0)
                eax_1 = sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_1, data_72d6ac, data_719b6c, 0x61b730, &data_7027c0), 
                        data_72d6ac, data_719b6c, 0x61b730, &data_7027c0), 
                    data_72d6ac, data_719b6c, 0x61b730, &data_7027c0)
                
                if (data_702fc0 != 0 && data_1af1734 s< 5)
                    char* var_234_2 = arg2
                    sub_4c84d0(&data_7027c0, 0x61b748)
                    eax_1 = MessageBoxA(data_7027bc, &data_7027c0, 0x61b788, MB_OK)
                    data_1af1734 += 1
            
        label_4a1899:
            
            if (esi_1 != 0)
                int32_t eax_13 = sub_49d230(eax_1, nullptr, esi_1, data_7031a8, arg2, 5, 0x1b, 
                    arg4, 0xffffffff, 0xffffffff, 0xffffffff, 2, arg6)
                sub_5f02dd(var_c ^ &var_224)
                return eax_13
    else if (arg3 u<= 0xf)
        void* eax_5 = arg3 * 9
        sub_4cfd70((eax_5 << 2) + &data_1af1000, (eax_5 << 2) + &data_1af1360)
        *((arg3 << 2) + &data_187c5a0) = *((arg3 << 2) + &data_187c540)
        sub_4cfd70((eax_5 << 2) + &data_1af1360, arg2)
        *((arg3 << 2) + &data_187c540) = arg4
        esi_1 = arg3 * 0x788 + 0x92b978
        edi_1 = &arg3[0x20]
        goto label_4a179e
else if (data_702fc0 != arg2)
    eax_1 = &arg2[1]
    
    if (data_13184f8 == arg2)
        if (data_13184e8:8 == arg2 && (data_704870 != arg2 || data_70486c != arg2))
            eax_1 = nullptr
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_1 = nullptr
        
        if (data_1af174c == 0 && eax_1 != 0)
            char* eax_4 = sub_55f390(
                sub_55f1e0(sub_55ef70(eax_1, data_72d6ac, data_719b6c, "PCMPLAY(null)", 0x61b54c), 
                    data_72d6ac, data_719b6c, "PCMPLAY(null)", 0x61b54c), 
                data_72d6ac, data_719b6c, "PCMPLAY(null)", 0x61b54c)
            sub_5f02dd(var_c ^ &var_224)
            return eax_4

sub_5f02dd(var_c ^ &var_224)
return eax_1

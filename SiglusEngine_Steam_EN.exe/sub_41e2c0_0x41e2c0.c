// 函数: sub_41e2c0
// 地址: 0x41e2c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg1
void* esi = &data_925270
void* edi = &data_f899ac

for (int32_t i = 0; i s< 0x10; )
    if (*esi != 0 && arg1 == *edi)
        SetTextColor(arg2, 
            (zx.d(*(esi + 0x1c)) << 8 | zx.d(*(esi + 0x18))) << 8 | zx.d(*(esi + 0x14)))
        COLORREF eax_5
        char ecx_10
        eax_5, ecx_10 = SetBkColor(arg2, 
            (zx.d(*(esi + 0x28)) << 8 | zx.d(*(esi + 0x24))) << 8 | zx.d(*(esi + 0x20)))
        void* esi_1 = *(edi + 0x10)
        
        if (esi_1 s<= 0)
            esi_1 = 0x10
        else if (esi_1 s>= 8)
            eax_5 = 0x100
            
            if (esi_1 s> 0x100)
                esi_1 = 0x100
        else
            esi_1 = 8
        
        if (data_1c04200 == esi_1 && data_13740ac == 0 && data_1c041fc == 0 && data_1c041f8 == 0)
            eax_5, ecx_10 = sub_4d0f10(0x1c041d4, &data_1af44a4)
        
        if (data_1c04200 != esi_1 || data_13740ac != 0 || data_1c041fc != 0 || data_1c041f8 != 0
                || eax_5 != 0)
            int32_t var_1c_2 = 0
            
            if (sub_4c5f40(eax_5, esi_1, &data_1af44a4, 0, 0, 0, ecx_10) != 0)
                int32_t j
                
                do
                    int32_t eax_10
                    char ecx_14
                    eax_10, ecx_14 = sub_4c6c70()
                    
                    if (eax_10 == 0)
                        break
                    
                    int32_t var_1c_3 = 0
                    j = sub_4c5f40(eax_10, esi_1, &data_1af44a4, data_131d2c8, data_1af44a0, 
                        data_1af449c, ecx_14)
                while (j != 0)
        else
            int32_t eax_6 = data_20a1b9c
            
            if (eax_6 != 0xffffffff)
                int32_t ecx_13 = eax_6 * 0xf
                int32_t eax_7 = *((ecx_13 << 2) + &data_20ae9c4)
                
                if (eax_7 s< 0x186a0)
                    *((ecx_13 << 2) + &data_20ae9c4) = eax_7 + 1
        
        LRESULT eax_11 = SendMessageA(*edi, 0x31, 0, 0)
        WPARAM wParam = data_1333e4c
        
        if (eax_11 != wParam)
            SendMessageA(*edi, 0x30, wParam, 1)
        
        return *(edi + 8)
    
    i += 1
    esi += 0x134
    edi += 0x14

return 0

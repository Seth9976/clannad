// 函数: sub_56fee0
// 地址: 0x56fee0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
WPARAM wParam = data_1af0acc

if (wParam != 0)
    int32_t esi_1 = data_1be4b04
    
    if (esi_1 != 0)
        int32_t ecx = data_1be4afc
        
        if (ecx s> 0)
            int32_t edx_1 = data_1be4af8
            int32_t var_110_1 = edx_1
            int32_t i = 0
            
            if (ecx s> 0)
                int32_t ecx_1 = data_1333e3c
                int32_t var_10c_1 = ecx_1
                int32_t* edi_3 = edx_1 * 0x2739a8 + esi_1
                
                do
                    int32_t edx_2 = *edi_3
                    void var_108
                    
                    if (edx_2 s<= 0)
                        int32_t i_1 = i
                        sub_4c84d0(&var_108, "%02d")
                        wParam = data_1af0acc
                        ecx_1 = var_10c_1
                    else
                        void* const edx_3
                        
                        if (edx_2 == 2)
                            edx_3 = &data_623fd8
                        label_56ff89:
                            sub_4cfd70(&var_108, edx_3)
                            wParam = data_1af0acc
                            ecx_1 = var_10c_1
                        else if (edx_2 == 1)
                            edx_3 = &data_623fdc
                            goto label_56ff89
                    
                    if (wParam != 0 && ecx_1 != 0)
                        ecx_1(0, &var_108, i, i, wParam, 0x4f32)
                        var_10c_1 = data_1333e3c
                    
                    uint32_t var_15c_1 = zx.d(edi_3[4].w)
                    uint32_t var_160_2 = zx.d(*(edi_3 + 0xe))
                    uint32_t var_164_3 = zx.d(edi_3[3].w)
                    sub_4c84d0(&var_108, "%02d")
                    int32_t eax_6 = data_1af0acc
                    
                    if (eax_6 != 0 && var_10c_1 != 0)
                        var_10c_1(1, &var_108, i, i, eax_6, 0x4f32)
                        var_10c_1 = data_1333e3c
                    
                    sub_561ce0(&edi_3[6], &var_108)
                    wParam = data_1af0acc
                    ecx_1 = var_10c_1
                    
                    if (wParam != 0 && ecx_1 != 0)
                        ecx_1(2, &var_108, i, i, wParam, 0x4f32)
                        ecx_1 = data_1333e3c
                        wParam = data_1af0acc
                        var_10c_1 = ecx_1
                    
                    edi_3 = &edi_3[0x9ce6a]
                    int32_t edx_6 = var_110_1 + 1
                    var_110_1 = edx_6
                    
                    if (edx_6 s>= data_1be4b00)
                        edi_3 = data_1be4b04
                        var_110_1 = 0
                    
                    i += 1
                while (i s< data_1be4afc)
            
            if (arg1 != 0 && data_1be4ae8 != 0)
                wParam = sub_4c1810(wParam, 0x4f32)
                
                if (wParam != 0xffffffff)
                    HWND hWnd = GetDlgItem(data_1af0acc, 0x4f32)
                    int32_t var_144_1 = SendMessageA(hWnd, 0x102c, wParam, 2) & 0xfffffffd
                    int32_t lParam = 8
                    WPARAM wParam_1 = wParam
                    int32_t var_140_1 = 2
                    SendMessageA(hWnd, 0x102b, wParam, &lParam)
                    
                    if (wParam s> 0)
                        wParam = sub_4c1570(wParam, data_1af0acc, wParam - 1, 0x4f32, 1)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return wParam

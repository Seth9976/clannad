// 函数: sub_560aa0
// 地址: 0x560aa0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t i = 0
HWND result = arg3
int32_t* edi = data_134ce68
WPARAM wParam = 0
HWND hDlg = result
int32_t* var_118 = edi
int32_t i_1 = 0

if (data_134ce60 s> 0)
    int32_t ecx = arg4
    int32_t* esi_1 = &edi[5]
    
    do
        if (esi_1[-2] == ecx)
            int32_t ecx_1 = esi_1[-4]
            char const* const var_170_1
            char* var_114_1
            uint32_t eax_6
            
            if (ecx_1 != 0xc)
                if (ecx_1 == 0x12)
                    if (*edi != 0)
                    label_560c81:
                        *edi = 0
                        sub_4d6c40(esi_1, &esi_1[1])
                        char* eax_11 = *((esi_1[-3] << 2) + &data_1354f80)
                        var_114_1 = eax_11
                        
                        if (eax_11 == 0)
                            goto label_560bf1
                        
                        eax_6 = sub_4cfc80(eax_11)
                        var_170_1 = "FDSTR_S"
                        goto label_560b85
                    
                    int32_t ecx_8 = *esi_1
                    char* edx_4 = *((esi_1[-3] << 2) + &data_1354f80)
                    
                    if (ecx_8 != 0)
                        if (edx_4 == 0)
                            goto label_560c81
                    else if (edx_4 != 0)
                        goto label_560c81
                    
                    if (ecx_8 == 0 || edx_4 == 0)
                        result = hDlg
                    else
                        if (sub_4d0f10(esi_1[1], edx_4) != 0)
                            goto label_560c81
                        
                        result = hDlg
                else if (ecx_1 != 0xffffff9d)
                    if (ecx_1 != 0xffffff9e)
                        int32_t edx_17
                        
                        if (*((ecx_1 << 2) + &data_610fb0) == 3)
                            edx_17 = esi_1[-3]
                        
                        if (*((ecx_1 << 2) + &data_610fb0) != 3
                                || (edx_17 s>= 0 && edx_17 s< (&data_63ecb0)[ecx_1]))
                            int32_t var_120
                            sub_4e76e0(&var_120, esi_1[-3], ecx_1, &var_120, &data_704898)
                            int32_t eax_27 = var_120
                            
                            if (*edi != 0 || esi_1[-1] != eax_27)
                                int32_t var_170_5 = eax_27
                                esi_1[-1] = eax_27
                                *edi = 0
                                void var_10c
                                sub_4c84d0(&var_10c, "%$d")
                            label_560e99:
                                int32_t var_170_6 = 0x4f32
                                sub_4c1110(wParam, wParam, hDlg, 0x4f32)
                                result = hDlg
                            else
                                result = hDlg
                        else if (*edi != 0)
                            int32_t var_170_4 = 0x4f32
                            *edi = 0
                            esi_1[-1] = 0xfffe7961
                            sub_4c1110(wParam, wParam, result, 0x4f32)
                            result = hDlg
                    else if (*edi != 0)
                    label_560db4:
                        *edi = 0
                        sub_4d6c40(esi_1, &esi_1[1])
                        char* eax_25 = esi_1[-3] * 0x21 + &data_710418
                        
                        if (*eax_25 == 0)
                            goto label_560e99
                        
                        sub_4cfe90(eax_25, &esi_1[1], esi_1, eax_25, "FDSTR_LNAME")
                        esi_1[1]
                        sub_4c1110(wParam, wParam, hDlg, 0x4f32)
                        result = hDlg
                    else
                        int32_t ecx_17 = esi_1[-3]
                        int32_t eax_20
                        eax_20.b = *(ecx_17 * 0x21 + &data_710418)
                        
                        if (*esi_1 != 0)
                            if (eax_20.b == 0)
                                goto label_560db4
                        else if (eax_20.b != 0)
                            goto label_560db4
                        
                        if (*esi_1 == 0 || eax_20.b == 0)
                            result = hDlg
                        else
                            if (sub_4d0f10(esi_1[1], ecx_17 * 0x21 + &data_710418) != 0)
                                goto label_560db4
                            
                            result = hDlg
                else if (*edi != 0)
                label_560d0a:
                    *edi = 0
                    sub_4d6c40(esi_1, &esi_1[1])
                    void* eax_18 = esi_1[-3] * 0x21 + &data_132a150
                    
                    if (*eax_18 == 0)
                        goto label_560bf1
                    
                    sub_4cfe90(eax_18, &esi_1[1], esi_1, eax_18, "FDSTR_NAME")
                    esi_1[1]
                    sub_4c1110(wParam, wParam, hDlg, 0x4f32)
                    result = hDlg
                else
                    int32_t ecx_12 = esi_1[-3]
                    int32_t eax_13
                    eax_13.b = *(ecx_12 * 0x21 + &data_132a150)
                    
                    if (*esi_1 != 0)
                        if (eax_13.b == 0)
                            goto label_560d0a
                    else if (eax_13.b != 0)
                        goto label_560d0a
                    
                    if (*esi_1 == 0 || eax_13.b == 0)
                        result = hDlg
                    else
                        if (sub_4d0f10(esi_1[1], ecx_12 * 0x21 + &data_132a150) != 0)
                            goto label_560d0a
                        
                        result = hDlg
            else if (*edi != 0)
            label_560b3d:
                *edi = 0
                sub_4d6c40(esi_1, &esi_1[1])
                char* eax_5 = *((esi_1[-3] << 2) + &data_1353040)
                var_114_1 = eax_5
                int32_t lParam
                
                if (eax_5 == 0)
                label_560bf1:
                    HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
                    lParam = 5
                    WPARAM wParam_2 = wParam
                    int32_t var_154_2 = 1
                    void* const var_148_2 = &data_6138e3
                    WPARAM wParam_4 = wParam
                    SendMessageA(hWnd_1, 0x102e, wParam, &lParam)
                    result = hDlg
                else
                    eax_6 = sub_4cfc80(eax_5)
                    var_170_1 = "FDSTR_M"
                label_560b85:
                    sub_4d1c30(sub_4d6960(eax_6, &esi_1[1], esi_1, eax_6, var_170_1), var_114_1, 
                        esi_1[1], eax_6)
                    int32_t edi_2 = esi_1[1]
                    HWND hWnd = GetDlgItem(hDlg, 0x4f32)
                    lParam = 5
                    WPARAM wParam_1 = wParam
                    int32_t var_154_1 = 1
                    int32_t var_148_1 = edi_2
                    WPARAM wParam_3 = wParam
                    SendMessageA(hWnd, 0x102e, wParam, &lParam)
                    edi = var_118
                    result = hDlg
            else
                int32_t ecx_2 = *esi_1
                char* edx = *((esi_1[-3] << 2) + &data_1353040)
                
                if (ecx_2 != 0)
                    if (edx == 0)
                        goto label_560b3d
                else if (edx != 0)
                    goto label_560b3d
                
                if (ecx_2 == 0 || edx == 0)
                    result = hDlg
                else
                    if (sub_4d0f10(esi_1[1], edx) != 0)
                        goto label_560b3d
                    
                    result = hDlg
            i = i_1
            wParam += 1
            ecx = arg4
        
        i += 1
        edi = &edi[8]
        esi_1 = &esi_1[8]
        var_118 = edi
        i_1 = i
    while (i s< data_134ce60)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

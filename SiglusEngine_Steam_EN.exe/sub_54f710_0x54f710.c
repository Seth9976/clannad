// 函数: sub_54f710
// 地址: 0x54f710
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

__chkstk(0x190c0)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
SendMessageA(GetDlgItem(data_20c2aa0, 0x4f32), 0x1009, 0, 0)
LRESULT result = data_13570f8
WPARAM wParam = 0
WPARAM wParam_15 = 0

if (data_13570f0 s> 0)
    int32_t* esi_1 = result + 4
    int32_t* var_1900c_1 = esi_1
    
    do
        HWND hWnd = GetDlgItem(data_20c2aa0, 0x4f32)
        int32_t lParam_2 = 5
        WPARAM wParam_7 = wParam
        int32_t var_19044_1 = 0
        void* const var_19038_1 = &data_6138e3
        WPARAM wParam_11 = wParam
        SendMessageA(hWnd, 0x1007, 0, &lParam_2)
        char* edx_1 = &esi_1[7]
        
        if (edx_1 == 0)
            edx_1 = &data_6138e3
        
        void var_19008
        sub_4cfd70(&var_19008, edx_1)
        HWND hWnd_1 = GetDlgItem(data_20c2aa0, 0x4f32)
        lParam_2 = 5
        void* var_19038_2 = &var_19008
        WPARAM wParam_8 = wParam
        int32_t var_19044_2 = 1
        WPARAM wParam_12 = wParam
        SendMessageA(hWnd_1, 0x102e, wParam, &lParam_2)
        int32_t eax_3 = *esi_1
        void* const edx_2
        
        if (eax_3 != 0)
            edx_2 = &data_61d904
            
            if (eax_3 != 1)
                edx_2 = &data_620260
        else
            edx_2 = &data_62025c
        
        sub_4cfd70(&var_19008, edx_2)
        HWND hWnd_2 = GetDlgItem(data_20c2aa0, 0x4f32)
        lParam_2 = 5
        void* var_19038_3 = &var_19008
        WPARAM wParam_9 = wParam
        int32_t var_19044_3 = 2
        WPARAM wParam_13 = wParam
        SendMessageA(hWnd_2, 0x102e, wParam, &lParam_2)
        int32_t var_14_7 = esi_1[1] + 0x41
        sub_4c84d0(&var_19008, "%c")
        HWND hWnd_3 = GetDlgItem(data_20c2aa0, 0x4f32)
        lParam_2 = 5
        void* var_19038_4 = &var_19008
        WPARAM wParam_10 = wParam
        int32_t var_19044_4 = 3
        WPARAM wParam_14 = wParam
        SendMessageA(hWnd_3, 0x102e, wParam, &lParam_2)
        int32_t eax_6 = esi_1[0xf]
        
        if (eax_6 s>= 0)
            int32_t var_14_10 = esi_1[0x10]
            int32_t var_18_10 = eax_6 + 0x41
            sub_4c84d0(&var_19008, "%c[%04d]")
        else if (eax_6 == 0xffffffff)
            sub_4cfd70(&var_19008, U"01")
        else if (eax_6 == 0xfffffffe)
            sub_4cfd70(&var_19008, U"1")
        
        HWND hWnd_4 = GetDlgItem(data_20c2aa0, 0x4f32)
        int32_t lParam_1 = 5
        void* var_19074_1 = &var_19008
        WPARAM wParam_3 = wParam
        int32_t var_19080_1 = 4
        WPARAM wParam_5 = wParam
        SendMessageA(hWnd_4, 0x102e, wParam, &lParam_1)
        int32_t var_14_13 = esi_1[0x16]
        sub_4c84d0(&var_19008, "%d")
        HWND hWnd_5 = GetDlgItem(data_20c2aa0, 0x4f32)
        lParam_1 = 5
        void* var_19074_2 = &var_19008
        WPARAM wParam_4 = wParam
        int32_t var_19080_2 = 5
        WPARAM wParam_6 = wParam
        SendMessageA(hWnd_5, 0x102e, wParam, &lParam_1)
        void* esi_2 = &var_19008
        int32_t j = 0
        
        if (var_1900c_1[0x16] s> 0)
            do
                int32_t* eax_10 = *(var_1900c_1[0x17] + (j << 2))
                void* var_14_16 = *eax_10 + eax_10
                sub_4c84d0(esi_2, "%s , ")
                int32_t edx_4 = 0
                void* eax_11 = esi_2
                
                if (esi_2 != 0)
                    if (*esi_2 != 0)
                        do
                            char ecx_6 = *eax_11
                            
                            if (ecx_6 u< 0x80)
                                edx_4 += 1
                                eax_11 += 1
                            else if (ecx_6 u< 0xa0)
                                if (ecx_6 u>= 0xfe)
                                    edx_4 += 1
                                    eax_11 += 1
                                else
                                    edx_4 += 2
                                    eax_11 += 2
                            else if (ecx_6 u<= 0xdf || ecx_6 u>= 0xfe)
                                edx_4 += 1
                                eax_11 += 1
                            else
                                edx_4 += 2
                                eax_11 += 2
                        while (*eax_11 != 0)
                    
                    edx_4 += 1
                
                j += 1
                esi_2 = esi_2 - 1 + edx_4
            while (j s< var_1900c_1[0x16])
            
            wParam = wParam_15
        
        HWND hWnd_6 = GetDlgItem(data_20c2aa0, 0x4f32)
        int32_t lParam = 5
        void* var_190b0_1 = &var_19008
        WPARAM wParam_1 = wParam
        int32_t var_190bc_1 = 6
        WPARAM wParam_2 = wParam
        result = SendMessageA(hWnd_6, 0x102e, wParam, &lParam)
        wParam += 1
        esi_1 = &var_1900c_1[0x19]
        wParam_15 = wParam
        var_1900c_1 = esi_1
    while (wParam s< data_13570f0)

int32_t entry_ebx
sub_5f02dd(entry_ebx ^ &__saved_ebp)
return result

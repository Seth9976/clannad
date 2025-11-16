// 函数: sub_56da50
// 地址: 0x56da50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t i_1 = __security_cookie ^ &__saved_ebp
int32_t i_4 = i_1
HWND hDlg = data_1af0a50

if (hDlg != 0)
    if (arg1 != 0)
        sub_4d1ba0(i_1, 0x8c8, &data_20ef270, 0xa5)
        hDlg = data_1af0a50
    
    int32_t eax_2
    
    if (data_20ef294 == data_187c538)
        eax_2 = sub_4d0f10(&data_20ef270, &data_1af16ec)
    
    int32_t lParam
    void var_108
    
    if (data_20ef294 != data_187c538 || eax_2 != 0 || data_20ef298 != data_92b938)
        sub_4cfd70(&data_20ef270, &data_1af16ec)
        bool cond:0_1 = data_20ef270 != 0
        int32_t eax_4 = data_187c538
        int32_t ecx = data_92b938
        data_20ef294 = eax_4
        data_20ef298 = ecx
        HWND hWnd
        
        if (cond:0_1)
            char* var_15c_1 = &data_20ef270
            void* const var_160_2
            
            if (ecx != 0)
                if (eax_4 != 0)
                    var_160_2 = &data_623e98
                else
                    var_160_2 = &data_623e80
            else if (data_1bfe26c != ecx)
                if (eax_4 != 0)
                    var_160_2 = &data_623e68
                else
                    var_160_2 = &data_623e50
            else if (eax_4 != 0)
                var_160_2 = &data_623e30
            else
                var_160_2 = &data_623e10
            
            sub_4c84d0(&var_108, var_160_2)
            
            if (hDlg != 0)
                hWnd = GetDlgItem(hDlg, 0x4f32)
                void* var_138_2 = &var_108
                goto label_56db93
        else if (hDlg != 0)
            hWnd = GetDlgItem(hDlg, 0x4f32)
            void* const var_138_1 = &data_6138e3
        label_56db93:
            lParam = 5
            int32_t var_148_1 = 0
            int32_t var_144_1 = 1
            int32_t var_12c_1 = 0
            SendMessageA(hWnd, 0x102e, 0, &lParam)
            hDlg = data_1af0a50
    
    int32_t eax_6
    
    if (data_20ef2c0 == data_187c53c)
        eax_6 = sub_4d0f10(&data_20ef29c, &data_1af16c8)
    
    if (data_20ef2c0 != data_187c53c || eax_6 != 0)
        sub_4cfd70(&data_20ef29c, &data_1af16c8)
        bool cond:4_1 = data_20ef29c != 0
        data_20ef2c0 = data_187c53c
        HWND hWnd_1
        
        if (cond:4_1)
            char* var_15c_3 = &data_20ef29c
            sub_4c84d0(&var_108, "%s")
            
            if (hDlg != 0)
                hWnd_1 = GetDlgItem(hDlg, 0x4f32)
                void* var_138_4 = &var_108
            label_56dc6a:
                lParam = 5
                int32_t var_148_2 = 0
                int32_t var_144_2 = 2
                int32_t var_12c_2 = 0
                SendMessageA(hWnd_1, 0x102e, 0, &lParam)
                hDlg = data_1af0a50
        else if (hDlg != 0)
            hWnd_1 = GetDlgItem(hDlg, 0x4f32)
            void* const var_138_3 = &data_6138e3
            goto label_56dc6a
    
    LRESULT eax_8 = data_92b930
    
    if (data_20ef2c4 != eax_8)
        data_20ef2c4 = eax_8
        
        if (eax_8 == 0)
            void* const var_15c_5 = &data_621c28
            eax_8 = sub_56da00(eax_8, 0, eax_8 + 3)
        else if (eax_8 != 0xff)
            LRESULT var_15c_7 = eax_8
            sub_4c84d0(&var_108, "%03d")
            void* var_168_3 = &var_108
            eax_8 = sub_56da00(&var_108, 0, 3)
        else
            void* const var_15c_6 = &data_621c2c
            eax_8 = sub_56da00(eax_8, 0, 3)
        
        hDlg = data_1af0a50
    
    int32_t edi_1 = data_1af16c4
    
    if (data_20ef2c8 != edi_1)
        data_20ef2c8 = edi_1
        
        if (edi_1 != 0xffffffff)
            uint32_t eax_10 = zx.d(data_70365c)
            char const* const var_164_4
            
            if (eax_10 == 0)
                int32_t var_15c_11 = edi_1 s% 0x2710
                int32_t var_160_8 = edi_1 s/ 0x2710
                var_164_4 = "%03d %04d"
            else if (eax_10 == 1)
                int32_t var_15c_10 = edi_1 s% 0x186a0
                int32_t var_160_7 = edi_1 s/ 0x186a0
                var_164_4 = "%03d %05d"
            else
                int32_t var_15c_9 = edi_1 s% 0x186a0
                int32_t var_160_6 = edi_1 s/ 0x186a0
                var_164_4 = "%04d %05d"
            
            sub_4c84d0(&var_108, var_164_4)
            eax_8 = &var_108
            void* var_15c_12 = &var_108
        else
            void* const var_15c_8 = &data_6138e3
        
        eax_8 = sub_56da00(eax_8, 1, 1)
        hDlg = data_1af0a50
    
    int32_t edi_5 = data_1af16c0
    
    if (data_20ef2cc != edi_5)
        data_20ef2cc = edi_5
        
        if (edi_5 != 0xffffffff)
            uint32_t ecx_11 = zx.d(data_70365c)
            char const* const var_164_5
            
            if (ecx_11 == 0)
                int32_t var_15c_16 = edi_5 s% 0x2710
                int32_t var_160_11 = edi_5 s/ 0x2710
                var_164_5 = "%03d %04d"
            else if (ecx_11 == 1)
                int32_t var_15c_15 = edi_5 s% 0x186a0
                int32_t var_160_10 = edi_5 s/ 0x186a0
                var_164_5 = "%03d %05d"
            else
                int32_t var_15c_14 = edi_5 s% 0x186a0
                int32_t var_160_9 = edi_5 s/ 0x186a0
                var_164_5 = "%04d %05d"
            
            sub_4c84d0(&var_108, var_164_5)
            eax_8 = &var_108
            void* var_15c_17 = &var_108
        else
            void* const var_15c_13 = &data_6138e3
        
        sub_56da00(eax_8, 1, 2)
        hDlg = data_1af0a50
    
    int32_t eax_23 = data_976b00
    
    if (data_20ef2d0 != eax_23)
        data_20ef2d0 = eax_23
        
        if (eax_23 == 0)
            void* const var_15c_18 = &data_621c28
            sub_56da00(eax_23, 1, 3)
        else if (eax_23 != 0xff)
            int32_t var_15c_20 = eax_23
            sub_4c84d0(&var_108, "%03d")
            void* var_168_6 = &var_108
            sub_56da00(&var_108, 1, 3)
        else
            void* const var_15c_19 = &data_621c2c
            sub_56da00(eax_23, 1, 3)
        
        hDlg = data_1af0a50
    
    int32_t eax_25 = 0
    void* i_2 = &data_92c0f8
    void* edx_11 = nullptr
    int32_t var_10c_1 = 0
    WPARAM wParam = 2
    void* var_110_1 = nullptr
    void* i
    
    do
        if (*((eax_25 << 2) + &data_20ef634) != *((eax_25 << 2) + &data_187c540))
            goto label_56df61
        
        int32_t eax_28
        
        if (sub_4d0f10(var_110_1 + 0x20ef2d4, edx_11 + &data_1af1360) == 0)
            eax_28 = var_10c_1
        else
            edx_11 = var_110_1
        label_56df61:
            sub_4cfd70(edx_11 + 0x20ef2d4, edx_11 + &data_1af1360)
            eax_28 = var_10c_1
            hDlg = data_1af0a50
            int32_t edx_14 = *((eax_28 << 2) + &data_187c540)
            *((eax_28 << 2) + &data_20ef634) = edx_14
            HWND hWnd_2
            
            if (*(var_110_1 + 0x20ef2d4) != 0)
                void* var_15c_21 = var_110_1 + 0x20ef2d4
                void* const var_160_13
                
                if (edx_14 != 0)
                    var_160_13 = &data_623ee4
                else
                    var_160_13 = &data_623ed4
                
                sub_4c84d0(&var_108, var_160_13)
                
                if (hDlg != 0)
                    hWnd_2 = GetDlgItem(hDlg, 0x4f32)
                    void* var_138_6 = &var_108
                    goto label_56dff3
                
                eax_28 = var_10c_1
            else if (hDlg != 0)
                hWnd_2 = GetDlgItem(hDlg, 0x4f32)
                void* const var_138_5 = &data_6138e3
            label_56dff3:
                lParam = 5
                WPARAM wParam_1 = wParam
                int32_t var_144_3 = 1
                WPARAM wParam_8 = wParam
                SendMessageA(hWnd_2, 0x102e, wParam, &lParam)
                hDlg = data_1af0a50
                eax_28 = var_10c_1
        
        int32_t eax_30
        
        if (*((eax_28 << 2) + &data_20ef9f4) == *((eax_28 << 2) + &data_187c5a0))
            eax_30 = sub_4d0f10(var_110_1 + 0x20ef694, var_110_1 + &data_1af1000)
        
        int32_t eax_31
        
        if (*((eax_28 << 2) + &data_20ef9f4) == *((eax_28 << 2) + &data_187c5a0) && eax_30 == 0)
            eax_31 = var_10c_1
        else
            sub_4cfd70(var_110_1 + 0x20ef694, var_110_1 + &data_1af1000)
            eax_31 = var_10c_1
            *((eax_31 << 2) + &data_20ef9f4) = *((eax_31 << 2) + &data_187c5a0)
            HWND hWnd_3
            
            if (*(var_110_1 + 0x20ef694) != 0)
                void* var_15c_23 = var_110_1 + 0x20ef694
                sub_4c84d0(&var_108, "%s")
                
                if (hDlg == 0)
                    eax_31 = var_10c_1
                else
                    hWnd_3 = GetDlgItem(hDlg, 0x4f32)
                    void* var_138_8 = &var_108
                label_56e0ef:
                    lParam = 5
                    WPARAM wParam_2 = wParam
                    int32_t var_144_4 = 2
                    WPARAM wParam_9 = wParam
                    SendMessageA(hWnd_3, 0x102e, wParam, &lParam)
                    hDlg = data_1af0a50
                    eax_31 = var_10c_1
            else if (hDlg != 0)
                hWnd_3 = GetDlgItem(hDlg, 0x4f32)
                void* const var_138_7 = &data_6138e3
                goto label_56e0ef
        
        if (eax_31 s< 0x10)
            int32_t ecx_32 = *i_2
            
            if (*((eax_31 << 2) + &data_20efa54) != ecx_32)
                *((eax_31 << 2) + &data_20efa54) = ecx_32
                
                if (ecx_32 == 0)
                    sub_4cfd70(&var_108, "min")
                else if (ecx_32 != 0xff)
                    int32_t var_15c_25 = ecx_32
                    sub_4c84d0(&var_108, "%03d")
                else
                    sub_4cfd70(&var_108, "MAX")
                
                if (hDlg != 0)
                    HWND hWnd_4 = GetDlgItem(hDlg, 0x4f32)
                    lParam = 5
                    void* var_138_9 = &var_108
                    WPARAM wParam_3 = wParam
                    int32_t var_144_5 = 3
                    WPARAM wParam_10 = wParam
                    SendMessageA(hWnd_4, 0x102e, wParam, &lParam)
                    hDlg = data_1af0a50
                
                eax_31 = var_10c_1
                uint32_t ecx_35 = zx.d(*(eax_31 + &data_12c41a4))
                
                if (ecx_35 u<= 3)
                    void* const edx_18
                    
                    switch (ecx_35)
                        case 0
                            edx_18 = &data_61d8dc
                        case 1
                            edx_18 = &data_623ef4
                        case 2
                            edx_18 = &data_623ef8
                        case 3
                            edx_18 = &data_623efc
                    
                    sub_4cfd70(&var_108, edx_18)
                    eax_31 = var_10c_1
                
                if (hDlg != 0)
                    HWND hWnd_5 = GetDlgItem(hDlg, 0x4f32)
                    lParam = 5
                    void* var_138_10 = &var_108
                    WPARAM wParam_4 = wParam
                    int32_t var_144_6 = 4
                    WPARAM wParam_11 = wParam
                    SendMessageA(hWnd_5, 0x102e, wParam, &lParam)
                    hDlg = data_1af0a50
                    eax_31 = var_10c_1
        
        eax_25 = eax_31 + 1
        i = i_2 + 0x788
        edx_11 = var_110_1 + 0x24
        var_10c_1 = eax_25
        wParam += 1
        var_110_1 = edx_11
        i_2 = i
    while (i s< 0x9375b8)
    i_1 = 0
    int32_t i_3 = 0
    
    do
        int32_t ecx_38 = *((i_1 << 2) + &data_1af0fc0)
        
        if (*((i_1 << 2) + &data_20efab4) != ecx_38)
            *((i_1 << 2) + &data_20efab4) = ecx_38
            HWND hWnd_6
            
            if (ecx_38 != 0xffffffff && ecx_38 u<= 0x1f)
                void* var_15c_28 = ecx_38 * 0x28 + &data_12c3ca4
                sub_4c84d0(&var_108, "%s")
                
                if (hDlg != 0)
                    hWnd_6 = GetDlgItem(hDlg, 0x4f32)
                    void* var_138_11 = &var_108
                    goto label_56e352
                
                i_1 = i_3
            else if (hDlg != 0)
                hWnd_6 = GetDlgItem(hDlg, 0x4f32)
                void* const var_138_12 = &data_6138e3
            label_56e352:
                lParam = 5
                WPARAM wParam_5 = wParam
                int32_t var_144_7 = 1
                WPARAM wParam_12 = wParam
                SendMessageA(hWnd_6, 0x102e, wParam, &lParam)
                hDlg = data_1af0a50
                i_1 = i_3
        
        int32_t ecx_39 = *((i_1 << 2) + &data_1af0f80)
        
        if (*((i_1 << 2) + &data_20efaf4) != ecx_39)
            *((i_1 << 2) + &data_20efaf4) = ecx_39
            HWND hWnd_7
            
            if (ecx_39 != 0xffffffff && ecx_39 u<= 0x1f)
                void* var_15c_30 = ecx_39 * 0x28 + &data_12c3ca4
                sub_4c84d0(&var_108, "%s")
                
                if (hDlg != 0)
                    hWnd_7 = GetDlgItem(hDlg, 0x4f32)
                    void* var_138_13 = &var_108
                    goto label_56e40e
                
                i_1 = i_3
            else if (hDlg != 0)
                hWnd_7 = GetDlgItem(hDlg, 0x4f32)
                void* const var_138_14 = &data_6138e3
            label_56e40e:
                lParam = 5
                WPARAM wParam_6 = wParam
                int32_t var_144_8 = 2
                WPARAM wParam_13 = wParam
                SendMessageA(hWnd_7, 0x102e, wParam, &lParam)
                hDlg = data_1af0a50
                i_1 = i_3
        
        if (i_1 == 0)
            int32_t ecx_40 = data_976378
            
            if (data_20efb34 != ecx_40)
                data_20efb34 = ecx_40
                HWND hWnd_8
                
                if (ecx_40 != 0)
                    if (data_20efb34 != 0xff)
                        int32_t var_15c_32 = data_20efb34
                        sub_4c84d0(&var_108, "%03d")
                        
                        if (hDlg != 0)
                            hWnd_8 = GetDlgItem(hDlg, 0x4f32)
                            void* var_138_17 = &var_108
                            goto label_56e4f4
                        
                        i_1 = i_3
                    else if (hDlg != 0)
                        hWnd_8 = GetDlgItem(hDlg, 0x4f32)
                        void* const var_138_16 = &data_621c2c
                        goto label_56e4f4
                else if (hDlg != 0)
                    hWnd_8 = GetDlgItem(hDlg, 0x4f32)
                    void* const var_138_15 = &data_621c28
                label_56e4f4:
                    lParam = 5
                    WPARAM wParam_7 = wParam
                    int32_t var_144_9 = 3
                    WPARAM wParam_14 = wParam
                    SendMessageA(hWnd_8, 0x102e, wParam, &lParam)
                    hDlg = data_1af0a50
                    i_1 = i_3
        
        i_1 += 1
        wParam += 1
        i_3 = i_1
    while (i_1 s< 0x10)

sub_5f02dd(i_4 ^ &__saved_ebp)
return i_1

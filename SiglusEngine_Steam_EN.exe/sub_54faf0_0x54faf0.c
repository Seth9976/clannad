// 函数: sub_54faf0
// 地址: 0x54faf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

__chkstk(0x19140)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
LRESULT result = data_13570f8
WPARAM wParam_11 = 0

if (data_13570f0 s> 0)
    int32_t entry_ebx
    var_8 = entry_ebx
    int32_t* var_1900c
    void* edi_1 = &var_1900c:3
    int32_t* esi_1 = result + 0x5c
    void* var_19018_1 = &var_1900c:3
    var_1900c = esi_1
    bool cond:1_1
    
    do
        int32_t ebx = 0
        char var_19008
        char* edx_1 = &var_19008
        void* const ecx_1 = &data_620284
        
        do
            result.b = *ecx_1
            
            if (result.b u< 0x80)
            label_54fb72:
                *edx_1 = result.b
                edx_1 = &edx_1[1]
                ecx_1 += 1
            else
                if (result.b u< 0xa0)
                    if (result.b u>= 0xfe)
                        goto label_54fb72
                else if (result.b u<= 0xdf || result.b u>= 0xfe)
                    goto label_54fb72
                
                *edx_1 = result.b
                result.b = *(ecx_1 + 1)
                edx_1[1] = result.b
                edx_1 = &edx_1[2]
                ecx_1 += 2
        while (*ecx_1 != 0)
        
        *edx_1 = 0
        char* eax_2 = &var_19008
        int32_t edx_2 = 0
        
        if (var_19008 != 0)
            do
                ecx_1.b = *eax_2
                
                if (ecx_1.b u< 0x80)
                    edx_2 += 1
                    eax_2 = &eax_2[1]
                else if (ecx_1.b u< 0xa0)
                    if (ecx_1.b u>= 0xfe)
                        edx_2 += 1
                        eax_2 = &eax_2[1]
                    else
                        edx_2 += 2
                        eax_2 = &eax_2[2]
                else if (ecx_1.b u<= 0xdf || ecx_1.b u>= 0xfe)
                    edx_2 += 1
                    eax_2 = &eax_2[1]
                else
                    edx_2 += 2
                    eax_2 = &eax_2[2]
            while (*eax_2 != 0)
        
        int32_t eax_3 = esi_1[-0x16]
        void* edi_3 = edi_1 + 1 + edx_2
        HWND hWnd_2
        int32_t* lParam_3
        WPARAM wParam
        
        if (eax_3 != 0)
            if (eax_3 == 1)
                int32_t i_3 = 0
                
                if (*esi_1 s<= 0)
                    goto label_54fdc8
                
                int32_t i = 0
                
                do
                    int32_t* eax_10 = *(esi_1[1] + (i << 2))
                    void* esi_6 = *eax_10 + eax_10
                    
                    if (sub_42bde0(esi_6) == 0)
                        void* var_14_3 = esi_6
                        sub_4c84d0(edi_3, "%s , ")
                        int32_t edx_4 = 0
                        void* eax_12 = edi_3
                        
                        if (edi_3 != 0)
                            if (*edi_3 != 0)
                                do
                                    char ecx_5 = *eax_12
                                    
                                    if (ecx_5 u< 0x80)
                                        edx_4 += 1
                                        eax_12 += 1
                                    else if (ecx_5 u< 0xa0)
                                        if (ecx_5 u>= 0xfe)
                                            edx_4 += 1
                                            eax_12 += 1
                                        else
                                            edx_4 += 2
                                            eax_12 += 2
                                    else if (ecx_5 u<= 0xdf || ecx_5 u>= 0xfe)
                                        edx_4 += 1
                                        eax_12 += 1
                                    else
                                        edx_4 += 2
                                        eax_12 += 2
                                while (*eax_12 != 0)
                            
                            edx_4 += 1
                        
                        ebx = 1
                        edi_3 = edi_3 - 1 + edx_4
                    
                    esi_1 = var_1900c
                    i = i_3 + 1
                    i_3 = i
                while (i s< *esi_1)
                
                if (ebx == 0)
                    goto label_54fdc8
                
                HWND hWnd_1 = GetDlgItem(data_20c2aa0, 0x4f32)
                wParam = wParam_11
                char* var_19130_1 = &var_19008
                int32_t var_19144
                LPARAM lParam_1 = &var_19144
                uint32_t Msg_1 = 0x102e
                var_19144 = 5
                WPARAM wParam_1 = wParam
                int32_t var_1913c_1 = 6
                WPARAM wParam_2 = wParam
                SendMessageA(hWnd_1, Msg_1, wParam, lParam_1)
                goto label_54fe69
            
            HWND hWnd_3 = GetDlgItem(data_20c2aa0, 0x4f32)
            wParam = wParam_11
            int32_t var_19090
            LPARAM lParam_2 = &var_19090
            uint32_t Msg_2 = 0x102e
            var_19090 = 5
            WPARAM wParam_7 = wParam
            int32_t var_19088_1 = 6
            int32_t var_1907c_1 = 0x6202a0
            WPARAM wParam_8 = wParam
            SendMessageA(hWnd_3, Msg_2, wParam, lParam_2)
        label_54fe69:
            hWnd_2 = GetDlgItem(data_20c2aa0, 0x4f32)
            int32_t var_190cc = 5
            lParam_3 = &var_190cc
            WPARAM wParam_5 = wParam
            int32_t var_190c4_1 = 0
            int32_t var_190b8_1 = 0x6202c0
            WPARAM wParam_6 = wParam
        else
            int32_t* eax_4 = var_1900c
            int32_t i_1 = 0
            int32_t i_2 = 0
            
            if (*eax_4 s> 0)
                do
                    int32_t* eax_6 = *(eax_4[1] + (i_1 << 2))
                    void* esi_3 = *eax_6 + eax_6
                    
                    if ((*esi_3 != 0x3f || *(esi_3 + 1) != 0) && sub_463bb0(esi_3) == 0)
                        void* var_14_1 = esi_3
                        sub_4c84d0(edi_3, "%s , ")
                        int32_t edx_3 = 0
                        void* eax_8 = edi_3
                        
                        if (edi_3 != 0)
                            if (*edi_3 != 0)
                                do
                                    char ecx_3 = *eax_8
                                    
                                    if (ecx_3 u< 0x80)
                                        edx_3 += 1
                                        eax_8 += 1
                                    else if (ecx_3 u< 0xa0)
                                        if (ecx_3 u>= 0xfe)
                                            edx_3 += 1
                                            eax_8 += 1
                                        else
                                            edx_3 += 2
                                            eax_8 += 2
                                    else if (ecx_3 u<= 0xdf || ecx_3 u>= 0xfe)
                                        edx_3 += 1
                                        eax_8 += 1
                                    else
                                        edx_3 += 2
                                        eax_8 += 2
                                while (*eax_8 != 0)
                            
                            edx_3 += 1
                        
                        ebx = 1
                        edi_3 = edi_3 - 1 + edx_3
                    
                    eax_4 = var_1900c
                    i_1 = i_2 + 1
                    i_2 = i_1
                while (i_1 s< *eax_4)
                
                if (ebx != 0)
                    HWND hWnd = GetDlgItem(data_20c2aa0, 0x4f32)
                    wParam = wParam_11
                    char* var_19040_1 = &var_19008
                    int32_t var_19054
                    LPARAM lParam = &var_19054
                    uint32_t Msg = 0x102e
                    var_19054 = 5
                    WPARAM wParam_9 = wParam
                    int32_t var_1904c_1 = 6
                    WPARAM wParam_10 = wParam
                    SendMessageA(hWnd, Msg, wParam, lParam)
                    esi_1 = var_1900c
                    goto label_54fe69
            
            esi_1 = var_1900c
        label_54fdc8:
            hWnd_2 = GetDlgItem(data_20c2aa0, 0x4f32)
            wParam = wParam_11
            int32_t var_19108
            lParam_3 = &var_19108
            var_19108 = 5
            WPARAM wParam_3 = wParam
            int32_t var_19100_1 = 0
            void* const var_190f4_1 = &data_6202c8
            WPARAM wParam_4 = wParam
        
        result = SendMessageA(hWnd_2, 0x102e, wParam, lParam_3)
        esi_1 = &esi_1[0x19]
        cond:1_1 = wParam + 1 s< data_13570f0
        wParam_11 = wParam + 1
        edi_1 = var_19018_1
        var_1900c = esi_1
    while (cond:1_1)

sub_5f02dd(var_8 ^ &__saved_ebp)
return result

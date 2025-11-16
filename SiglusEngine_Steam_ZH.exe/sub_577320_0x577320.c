// 函数: sub_577320
// 地址: 0x577320
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
HWND hWnd_1 = *(arg1 + 0x14c)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0x1009, 0, 0)

for (int32_t* i = *(arg1 + 0x3688); i != *(arg1 + 0x368c); i = &i[1])
    HWND hWnd_2 = *(*i + 4)
    
    if (hWnd_2 != 0)
        SendMessageW(hWnd_2, 0x1009, 0, 0)

HWND hWnd_18 = *(arg1 + 0x351c)
int32_t edx

if (hWnd_18 != 0)
    int32_t eax_1
    eax_1, edx = GetWindowLongW(hWnd_18, 0xfffffff0)
    
    if ((eax_1 & 0x10000000) s> 0)
        ShowWindow(*(arg1 + 0x351c), SW_HIDE)

for (int32_t* i_1 = *(arg1 + 0x3688); i_1 != *(arg1 + 0x368c); i_1 = &i_1[1])
    void* ecx = *i_1
    HWND hWnd_19 = *(ecx + 4)
    
    if (hWnd_19 != 0)
        int32_t eax_2
        eax_2, edx = GetWindowLongW(hWnd_19, 0xfffffff0)
        
        if ((eax_2 & 0x10000000) s> 0)
            ShowWindow(*(ecx + 4), SW_HIDE)

int32_t hWnd_22 = *(arg1 + 0x3680)
int32_t hWnd_20 = hWnd_22
int32_t hWnd_3 = *(hWnd_22 + 4)

while (*(hWnd_3 + 0xd) == 0)
    if (*(hWnd_3 + 0x10) u>= *(arg1 + 0x36a0))
        hWnd_20 = hWnd_3
        hWnd_3 = *hWnd_3
    else
        hWnd_3 = *(hWnd_3 + 8)

int32_t hWnd_21

if (hWnd_20 != hWnd_22)
    hWnd_3 = *(arg1 + 0x36a0)
    hWnd_21 = hWnd_20

if (hWnd_20 == hWnd_22 || hWnd_3 u< *(hWnd_20 + 0x10))
    hWnd_21 = hWnd_22

if (hWnd_21 != *(arg1 + 0x3680))
    edx.b = 0
    sub_57a800(arg1 + 0x148, edx.b, *(hWnd_21 + 0x94), arg1 + 0x148)
    hWnd_3 = *(hWnd_21 + 0x94)
    HWND hWnd
    
    if (hWnd_3 s> 0x4b1)
        hWnd_3 -= 0x4bb
        
        if (hWnd_3 u<= 0xf0)
            hWnd_3 = zx.d(lookup_table_577784[hWnd_3])
            
            switch (hWnd_3)
                case 0
                    HWND hWnd_17 = *(arg1 + 0x2e24)
                    
                    if (hWnd_17 == 0)
                        goto label_577733
                    
                    if ((GetWindowLongW(hWnd_17, 0xfffffff0) & 0x10000000) s> 0)
                        goto label_577733
                    
                    int32_t var_18_15 = 5
                    hWnd = *(arg1 + 0x2e24)
                    goto label_577731
                case 1
                    HWND hWnd_14 = *(arg1 + 0x2488)
                    
                    if (hWnd_14 == 0)
                        goto label_577733
                    
                    if ((GetWindowLongW(hWnd_14, 0xfffffff0) & 0x10000000) s> 0)
                        goto label_577733
                    
                    int32_t var_18_12 = 5
                    hWnd = *(arg1 + 0x2488)
                    goto label_577731
                case 2
                    HWND hWnd_9 = *(arg1 + 0x1484)
                    
                    if (hWnd_9 == 0)
                        goto label_577733
                    
                    if ((GetWindowLongW(hWnd_9, 0xfffffff0) & 0x10000000) s> 0)
                        goto label_577733
                    
                    int32_t var_18_7 = 5
                    hWnd = *(arg1 + 0x1484)
                    goto label_577731
                case 3
                    HWND hWnd_11 = *(arg1 + 0x1aec)
                    
                    if (hWnd_11 == 0)
                        goto label_577733
                    
                    if ((GetWindowLongW(hWnd_11, 0xfffffff0) & 0x10000000) s> 0)
                        goto label_577733
                    
                    int32_t var_18_9 = 5
                    hWnd = *(arg1 + 0x1aec)
                    goto label_577731
                case 4
                    HWND hWnd_10 = *(arg1 + 0x17b8)
                    
                    if (hWnd_10 == 0)
                        goto label_577733
                    
                    if ((GetWindowLongW(hWnd_10, 0xfffffff0) & 0x10000000) s> 0)
                        goto label_577733
                    
                    int32_t var_18_8 = 5
                    hWnd = *(arg1 + 0x17b8)
                    goto label_577731
                case 5
                    HWND hWnd_13 = *(arg1 + 0x2154)
                    
                    if (hWnd_13 == 0)
                        goto label_577733
                    
                    if ((GetWindowLongW(hWnd_13, 0xfffffff0) & 0x10000000) s> 0)
                        goto label_577733
                    
                    int32_t var_18_11 = 5
                    hWnd = *(arg1 + 0x2154)
                    goto label_577731
                case 6
                    HWND hWnd_12 = *(arg1 + 0x1e20)
                    
                    if (hWnd_12 == 0)
                        goto label_577733
                    
                    if ((GetWindowLongW(hWnd_12, 0xfffffff0) & 0x10000000) s> 0)
                        goto label_577733
                    
                    int32_t var_18_10 = 5
                    hWnd = *(arg1 + 0x1e20)
                    goto label_577731
                case 7
                    HWND hWnd_15 = *(arg1 + 0x27bc)
                    
                    if (hWnd_15 == 0)
                        goto label_577733
                    
                    if ((GetWindowLongW(hWnd_15, 0xfffffff0) & 0x10000000) s> 0)
                        goto label_577733
                    
                    int32_t var_18_13 = 5
                    hWnd = *(arg1 + 0x27bc)
                    goto label_577731
                case 8
                    HWND hWnd_16 = *(arg1 + 0x2af0)
                    
                    if (hWnd_16 == 0)
                        goto label_577733
                    
                    if ((GetWindowLongW(hWnd_16, 0xfffffff0) & 0x10000000) s> 0)
                        goto label_577733
                    
                    int32_t var_18_14 = 5
                    hWnd = *(arg1 + 0x2af0)
                    goto label_577731
    else if (hWnd_3 == 0x4b1)
        HWND hWnd_8 = *(arg1 + 0xe1c)
        
        if (hWnd_8 == 0)
            goto label_577733
        
        if ((GetWindowLongW(hWnd_8, 0xfffffff0) & 0x10000000) s> 0)
            goto label_577733
        
        int32_t var_18_6 = 5
        hWnd = *(arg1 + 0xe1c)
    label_577731:
        ShowWindow(hWnd, SW_SHOW)
    label_577733:
        hWnd_3 = *(arg1 + 0x351c)
        
        if (hWnd_3 != 0)
            hWnd_3 = GetWindowLongW(hWnd_3, 0xfffffff0)
            
            if ((hWnd_3 & 0x10000000) s<= 0)
                return ShowWindow(*(arg1 + 0x351c), SW_SHOW)
    else
        if (hWnd_3 == 0x3fd)
            HWND hWnd_7 = *(arg1 + 0x3158)
            
            if (hWnd_7 == 0)
                goto label_577733
            
            if ((GetWindowLongW(hWnd_7, 0xfffffff0) & 0x10000000) s> 0)
                goto label_577733
            
            int32_t var_18_5 = 5
            hWnd = *(arg1 + 0x3158)
            goto label_577731
        
        if (hWnd_3 == 0x47f)
            HWND hWnd_6 = *(arg1 + 0x1150)
            
            if (hWnd_6 == 0)
                goto label_577733
            
            if ((GetWindowLongW(hWnd_6, 0xfffffff0) & 0x10000000) s> 0)
                goto label_577733
            
            int32_t var_18_4 = 5
            hWnd = *(arg1 + 0x1150)
            goto label_577731
        
        if (hWnd_3 == 0x15)
            HWND hWnd_5 = *(arg1 + 0xae8)
            
            if (hWnd_5 == 0)
                goto label_577733
            
            if ((GetWindowLongW(hWnd_5, 0xfffffff0) & 0x10000000) s> 0)
                goto label_577733
            
            int32_t var_18_3 = 5
            hWnd = *(arg1 + 0xae8)
            goto label_577731
        
        if (hWnd_3 == 0xb || hWnd_3 == 0x10)
            HWND hWnd_4 = *(arg1 + 0x7b4)
            
            if (hWnd_4 == 0)
                goto label_577733
            
            if ((GetWindowLongW(hWnd_4, 0xfffffff0) & 0x10000000) s> 0)
                goto label_577733
            
            int32_t var_18_2 = 5
            hWnd = *(arg1 + 0x7b4)
            goto label_577731

return hWnd_3

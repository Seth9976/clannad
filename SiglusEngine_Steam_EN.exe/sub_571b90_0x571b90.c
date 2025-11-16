// 函数: sub_571b90
// 地址: 0x571b90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx = 0xffffffff
int32_t edi = arg4
int32_t var_a4 = edi
int32_t var_70 = 0xffffffff
int32_t var_6c = 0xffffffff
int32_t y_7 = 0xffffffff
int32_t var_80 = 0xffffffff
int32_t y
int32_t cx
int32_t y_10

if (arg3 == data_20f0238 && data_20f023c == *(arg2 + 0x18))
    int32_t esi_1 = data_20f0240
    
    if (esi_1 != 0xfffe7961 && esi_1 - arg11 s< edi && esi_1 + arg11 s> edi)
        if (esi_1 s< edi)
            ebx = data_20f0284
            var_80 = ebx
            int32_t ecx_1 = data_20f028c
            int32_t y_9 = (esi_1 - edi + arg11) * ebx
            var_6c = ecx_1 - 1
            y_7 = y_9
            var_70 = data_20f0290 - 1
            HDC eax_12 = data_20f0288
            y_10 = y_9
            cx = ecx_1 - ebx
            y = 0
            BitBlt(eax_12, ebx, 0, cx, y_10, eax_12, ebx, (edi - esi_1) * ebx, SRCCOPY)
        else if (esi_1 s<= edi)
            ebx = 0x1869f
            var_70 = 0x1869f
            var_6c = 0x1869f
            y_7 = 0x1869f
            var_80 = 0x1869f
        else
            ebx = data_20f0284
            int32_t edx_3 = data_20f028c
            HDC ecx_3 = data_20f0288
            int32_t y_6 = (esi_1 - edi) * ebx
            var_80 = ebx
            var_6c = edx_3 - 1
            y_7 = 0
            var_70 = y_6 - 1
            y_10 = data_20f0290 - 1
            cx = edx_3 - ebx
            y = y_6
            BitBlt(ecx_3, ebx, y, cx, y_10, ecx_3, ebx, 0, SRCCOPY)

HBRUSH eax_17 = CreateSolidBrush(0xf0f0f0)
HBRUSH y_11 = CreateSolidBrush(0xffffff)
HBRUSH y_12 = CreateSolidBrush(0xdcdcdc)
HBRUSH ho = CreateSolidBrush(0xff0000)
HBRUSH eax_18 = CreateSolidBrush(0xffff)
HBRUSH eax_19 = CreateSolidBrush(0xffa0a0)
HBRUSH eax_20 = CreateSolidBrush(0xa0a0ff)
RECT lprc_3

if (data_20f0250 != 0)
    int32_t ecx_4 = data_20f024c
    
    if (ecx_4 != 0xffffffff)
        int32_t eax_24 = data_20f0284
        lprc_3.right = eax_24
        lprc_3.bottom = eax_24 + ecx_4
        lprc_3.left = 0
        lprc_3.top = ecx_4
        FillRect(data_20f0288, &lprc_3, y_12)
        data_20f024c = 0xffffffff
else
    y_10 = y_12
    cx = data_20f0290 - 1
    int32_t y_2 = data_20f0284 - 1
    y = y_2
    sub_571ae0(y_2, 0, 0, y, cx, y_10, ebx, y_7, var_6c, var_70)
    data_20f0250 = 1
    data_20f024c = 0xffffffff

int32_t ebx_1 = data_20f0284
int32_t y_1 = 0
int32_t var_84 = 0
int32_t var_88 = ebx_1
RECT lprc_4

if (edi s< 1)
    while (true)
        int32_t ecx_6 = y_1 - 1 + ebx_1
        int32_t eax_27 = data_20f028c - 1
        int32_t y_4 = y_1
        
        if (var_80 == 0xffffffff || y_7 == 0xffffffff || var_6c == 0xffffffff
            || var_70 == 0xffffffff)
        label_571e2e:
            lprc_4.left = ebx_1
            lprc_4.right = eax_27 + 1
            lprc_4.bottom = ecx_6 + 1
            lprc_4.top = y_4
            FillRect(data_20f0288, &lprc_4, eax_17)
            ebx_1 = data_20f0284
        else if (ebx_1 s<= var_6c && eax_27 s>= var_80 && y_1 s<= var_70 && ecx_6 s>= y_7)
            if (ebx_1 s< var_80)
                ebx_1 = var_80
            
            if (eax_27 s> var_6c)
                eax_27 = var_6c
            
            if (y_1 s< y_7)
                y_4 = y_7
            
            if (ecx_6 s> var_70)
                ecx_6 = var_70
            
            goto label_571e2e
        
        y_1 += ebx_1
        edi += 1
        var_a4 = edi
        
        if (y_1 s>= data_20f0290 || edi s>= *(arg2 + 0x10))
            var_84 = 1
            break
        
        if (edi s>= 1)
            break
        
        continue

int32_t eax_72 = 0
int32_t edx_5 = 0
int32_t ecx_7 = 0
int32_t var_b8 = 0
int32_t var_a0 = 0
int32_t var_94 = 0
int32_t var_9c = 0
RECT lprc_5

if (var_84 != 0)
    data_20f025c = 0xffffffff
    data_20f0260 = 0xffffffff
else
    var_84 = 0
    SelectObject(data_20f0288, data_20f027c)
    void* edx_6 = arg2
    ebx_1 = data_20f0284
    char* ecx_9 = *(*(edx_6 + 0xc) + (edi << 2) - 4) + *(edx_6 + 4)
    char* var_78 = ecx_9
    
    while (true)
        char* var_7c_1 = ecx_9
        
        if (*(edx_6 + 0x18) == data_20f0230 && edi == data_20f0234)
            HDC hdc = data_20f0288
            data_20f024c = y_1
            SetTextColor(hdc, 0xff0000)
            SetBkMode(data_20f0288, 1)
            y_10 = data_20f0288
            TextOutA(y_10, 0, y_1, &data_6240a4, 2)
            ebx_1 = data_20f0284
            ecx_9 = var_7c_1
            edx_6 = arg2
        
        if (*ecx_9 == 0)
            break
        
        int32_t eax_33 = *(edx_6 + 0x18)
        
        if (arg5 != eax_33 || arg6 != edi)
            int32_t ecx_12 = data_20f0230
            int32_t edx_10
            
            if (ecx_12 == eax_33)
                edx_10 = data_20f0234
            
            if (ecx_12 == eax_33 && edx_10 == edi)
                if (data_20f0274 != ecx_12 || data_20f0278 != edx_10)
                    RECT lprc_1
                    lprc_1.left = ebx_1
                    lprc_1.top = y_1 - 1
                    lprc_1.right = data_20f028c
                    lprc_1.bottom = ebx_1 - 1 + y_1
                    int32_t var_d0_9 = 0xffffffff
                    int32_t var_d4_11 = 0xffffffff
                    int32_t var_d8_10 = 0xffffffff
                    sub_5718d0(FillRect(data_20f0288, &lprc_1, eax_18), &var_78, var_7c_1, var_88, 
                        y_1, y, cx, y_10, 0xffffffff)
                    ebx_1 = data_20f0284
                else
                    sub_571890(var_7c_1, &var_78)
                
                if (ebx_1 + y_1 s< data_20f0290)
                    var_a0 = 1
            else if (arg9 == eax_33 && arg10 == edi)
                if (data_20f026c != arg9 || data_20f0270 != arg10)
                    RECT lprc
                    lprc.left = ebx_1
                    lprc.top = y_1 - 1
                    lprc.right = data_20f028c
                    lprc.bottom = ebx_1 - 1 + y_1
                    int32_t var_d0_11 = 0xffffffff
                    int32_t var_d4_13 = 0xffffffff
                    int32_t var_d8_12 = 0xffffffff
                    sub_5718d0(FillRect(data_20f0288, &lprc, eax_20), &var_78, var_7c_1, var_88, 
                        y_1, y, cx, y_10, 0xffffffff)
                    ebx_1 = data_20f0284
                else
                    sub_571890(var_7c_1, &var_78)
                
                if (ebx_1 + y_1 s< data_20f0290)
                    var_9c = 1
            else if (arg7 != eax_33 || arg8 != edi)
                int32_t var_dc_4
                int32_t eax_65
                
                if ((data_20f025c != eax_33 || data_20f0260 != edi)
                        && (data_20f0274 != eax_33 || data_20f0278 != edi)
                        && (data_20f0264 != eax_33 || data_20f0268 != edi)
                        && (data_20f026c != eax_33 || data_20f0270 != edi))
                    y_10 = y_11
                    cx = y_1 - 2 + ebx_1
                    int32_t y_3 = data_20f028c - 1
                    y = y_3
                    eax_65 =
                        sub_571ae0(y_3, y_1 - 1, ebx_1, y, cx, y_10, var_80, y_7, var_6c, var_70)
                    int32_t var_d0_17 = var_70
                    int32_t var_d4_19 = var_6c
                    int32_t y_8 = y_7
                    var_dc_4 = var_80
                else
                    lprc_5.left = ebx_1
                    lprc_5.top = y_1 - 1
                    lprc_5.right = data_20f028c
                    lprc_5.bottom = ebx_1 - 1 + y_1
                    eax_65 = FillRect(data_20f0288, &lprc_5, y_11)
                    int32_t var_d0_15 = 0xffffffff
                    int32_t var_d4_17 = 0xffffffff
                    int32_t var_d8_16 = 0xffffffff
                    var_dc_4 = 0xffffffff
                
                sub_5718d0(eax_65, &var_78, var_7c_1, var_88, y_1, y, cx, y_10, var_dc_4)
                ebx_1 = data_20f0284
            else
                if (data_20f0264 != arg7 || data_20f0268 != arg8)
                    RECT lprc_2
                    lprc_2.left = ebx_1
                    lprc_2.top = y_1 - 1
                    lprc_2.right = data_20f028c
                    lprc_2.bottom = ebx_1 - 1 + y_1
                    int32_t var_d0_13 = 0xffffffff
                    int32_t var_d4_15 = 0xffffffff
                    int32_t var_d8_14 = 0xffffffff
                    sub_5718d0(FillRect(data_20f0288, &lprc_2, eax_19), &var_78, var_7c_1, var_88, 
                        y_1, y, cx, y_10, 0xffffffff)
                    ebx_1 = data_20f0284
                else
                    sub_571890(var_7c_1, &var_78)
                
                if (ebx_1 + y_1 s< data_20f0290)
                    var_94 = 1
        else
            if (data_20f025c != arg5 || data_20f0260 != arg6)
                lprc_4.right = data_20f028c
                lprc_4.left = ebx_1
                lprc_4.bottom = ebx_1 - 1 + y_1
                lprc_4.top = y_1 - 1
                int32_t var_d0_6 = 0xffffffff
                int32_t var_d4_8 = 0xffffffff
                int32_t var_d8_8 = 0xffffffff
                sub_5718d0(FillRect(data_20f0288, &lprc_4, eax_18), &var_78, var_7c_1, var_88, y_1, 
                    y, cx, y_10, 0xffffffff)
                int32_t ecx_11 = data_20f0284
                lprc_3.right = data_20f028c
                lprc_3.left = ecx_11
                lprc_3.top = y_1 - 1
                lprc_3.bottom = ecx_11 - 1 + y_1
                InvertRect(data_20f0288, &lprc_3)
                ebx_1 = data_20f0284
                edi = var_a4
            else
                sub_571890(ecx_9, &var_78)
            
            if (ebx_1 + y_1 s< data_20f0290)
                var_b8 = 1
        
        y_1 += ebx_1
        
        if (y_1 s>= data_20f0290)
            var_84 = 1
            break
        
        edx_6 = arg2
        edi += 1
        var_a4 = edi
        
        if (edi s>= *(edx_6 + 0x10))
            break
        
        ecx_9 = var_78
    
    ecx_7 = var_9c
    edx_5 = var_a0
    
    if (var_b8 == 0)
        eax_72 = var_94
        data_20f025c = 0xffffffff
        data_20f0260 = 0xffffffff
    else
        data_20f025c = arg5
        data_20f0260 = arg6
        eax_72 = var_94

if (eax_72 == 0)
    data_20f0264 = 0xffffffff
    data_20f0268 = 0xffffffff
else
    data_20f0264 = arg7
    data_20f0268 = arg8

if (ecx_7 == 0)
    data_20f026c = 0xffffffff
    data_20f0270 = 0xffffffff
else
    data_20f026c = arg9
    data_20f0270 = arg10

if (edx_5 == 0)
    data_20f0274 = 0xffffffff
    data_20f0278 = 0xffffffff
else
    data_20f0274 = data_20f0230
    data_20f0278 = data_20f0234

if (var_84 == 0)
    do
        int32_t ecx_24 = y_1 - 1 + ebx_1
        int32_t eax_80 = data_20f028c - 1
        int32_t y_5 = y_1
        
        if (var_80 == 0xffffffff || y_7 == 0xffffffff || var_6c == 0xffffffff
            || var_70 == 0xffffffff)
        label_57243c:
            lprc_5.left = ebx_1
            lprc_5.right = eax_80 + 1
            lprc_5.bottom = ecx_24 + 1
            lprc_5.top = y_5
            FillRect(data_20f0288, &lprc_5, eax_17)
            ebx_1 = data_20f0284
        else if (ebx_1 s<= var_6c && eax_80 s>= var_80 && y_1 s<= var_70 && ecx_24 s>= y_7)
            if (ebx_1 s< var_80)
                ebx_1 = var_80
            
            if (eax_80 s> var_6c)
                eax_80 = var_6c
            
            if (y_1 s< y_7)
                y_5 = y_7
            
            if (ecx_24 s> var_70)
                ecx_24 = var_70
            
            goto label_57243c
        
        y_1 += ebx_1
    while (y_1 s< data_20f0290)

DeleteObject(eax_17)
DeleteObject(y_11)
DeleteObject(y_12)
DeleteObject(ho)
DeleteObject(eax_18)
DeleteObject(eax_19)
BOOL result = DeleteObject(eax_20)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

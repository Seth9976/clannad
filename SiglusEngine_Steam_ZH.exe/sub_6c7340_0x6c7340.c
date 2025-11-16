// 函数: sub_6c7340
// 地址: 0x6c7340
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_88
int32_t eax_1 = __security_cookie ^ &var_88
*arg2 = 0
int32_t eax_3

if (*(arg1 + 0x54) != *(arg1 + 0x58) && *(arg1 + 0x60) != *(arg1 + 0x64))
    int32_t* esi_1 = *(arg1 + 0x54)
    int32_t edi_1 = *(arg1 + 0x58)
    RECT rect
    __builtin_memset(&rect, 0, 0x10)
    int32_t x
    uint128_t xmm0_1 = *sub_6c1350(*esi_1, &x)
    bool cond:0_1 = *(arg1 + 0x50) == 0
    int32_t eax_5 = xmm0_1
    rect.left = xmm0_1.d
    rect.top = xmm0_1:4.d
    rect.right = xmm0_1:8.d
    rect.bottom = xmm0_1:0xc.d
    int32_t xmm0_2 = _mm_bsrli_si128(xmm0_1, 4)
    
    if (cond:0_1)
        eax_5 = xmm0_2
    
    void* i = &esi_1[1]
    int32_t var_80_1 = eax_5
    
    for (; i != edi_1; i += 4)
        int128_t xmm0_3 = *sub_6c1350(*i, &x)
        rect.left = xmm0_3.d
        rect.top = xmm0_3:4.d
        rect.right = xmm0_3:8.d
        rect.bottom = xmm0_3:0xc.d
        int32_t eax_8
        
        if (*(arg1 + 0x50) != 0)
            eax_8 = var_80_1
            
            if (eax_8 s< rect.left)
                eax_8 = rect.left
            
            var_80_1 = eax_8
        else
            eax_8 = rect.top
            
            if (var_80_1 s< eax_8)
                var_80_1 = eax_8
    
    int32_t* esi_2 = *(arg1 + 0x60)
    int32_t edi_2 = *(arg1 + 0x64)
    int32_t var_78_1 = 0
    uint128_t xmm1_1 = *sub_6c1350(*esi_2, &x)
    rect.left = xmm1_1.d
    rect.top = xmm1_1:4.d
    rect.right = xmm1_1:8.d
    rect.bottom = xmm1_1:0xc.d
    int32_t y_5 = _mm_bsrli_si128(xmm1_1, 8)
    bool cond:1_1 = *(arg1 + 0x50) == 0
    int32_t y_6 = _mm_bsrli_si128(xmm1_1, 0xc)
    int32_t y_4 = y_5
    
    if (cond:1_1)
        y_4 = y_6
    
    void* esi_3 = &esi_2[1]
    int32_t y_2 = y_4
    uint32_t eax_16 = (edi_2 - esi_3 + 3) u>> 2
    
    if (esi_3 u> edi_2)
        eax_16 = 0
    
    if (eax_16 != 0)
        int32_t eax_22
        
        do
            void* edi_3 = *esi_3
            RECT rect_1
            __builtin_memset(&rect_1, 0, 0x10)
            GetWindowRect(*(edi_3 + 4), &rect_1)
            int32_t hWnd = GetWindowLongW(*(edi_3 + 4), 0xfffffff8)
            POINT point_1
            point_1.x = rect_1.left
            point_1.y = rect_1.top
            ScreenToClient(hWnd, &point_1)
            POINT point
            point.y = rect_1.bottom
            point.x = rect_1.right
            ScreenToClient(hWnd, &point)
            int32_t x_1 = point.x
            int32_t y_1 = point.y
            x = point_1.x
            int32_t y = point_1.y
            int32_t x_2 = x_1
            int32_t y_3 = y_1
            int128_t xmm0_5 = x.o
            rect.left = xmm0_5.d
            rect.top = xmm0_5:4.d
            rect.right = xmm0_5:8.d
            rect.bottom = xmm0_5:0xc.d
            
            if (*(arg1 + 0x50) != 0)
                int32_t x_3 = y_2
                
                if (x_3 s> x_1)
                    x_3 = x_1
                
                y_2 = x_3
            else if (y_2 s> y_1)
                y_2 = y_1
            
            esi_3 += 4
            eax_22 = var_78_1 + 1
            var_78_1 = eax_22
        while (eax_22 != eax_16)
    
    int128_t xmm0_6 = *sub_6c7260(arg1, &x)
    rect.left = xmm0_6.d
    rect.top = xmm0_6:4.d
    rect.right = xmm0_6:8.d
    rect.bottom = xmm0_6:0xc.d
    int32_t eax_24
    int32_t ecx_9
    
    if (*(arg1 + 0x50) != 0)
        eax_24 = rect.right
        ecx_9 = rect.left
    else
        eax_24 = rect.bottom
        ecx_9 = rect.top
    
    *(arg2 + 8) = ecx_9
    *(arg2 + 4) = eax_24 - ecx_9
    GetClientRect(GetWindowLongW(*(**(arg1 + 0x54) + 4), 0xfffffff8), &rect)
    *(arg2 + 0x14) = 0
    int32_t eax_30
    
    if (*(arg1 + 0x50) != 0)
        eax_30 = rect.right - rect.left
    else
        eax_30 = rect.bottom - rect.top
    
    *(arg2 + 0x18) = eax_30
    eax_3 = y_2 - *(arg2 + 4) - 0x11
    *(arg2 + 0xc) = var_80_1 + 0x10
    *(arg2 + 0x10) = eax_3
    
    if (var_80_1 + 0x10 s<= eax_3)
        int32_t nNumerator = *(arg1 + 8)
        
        if (nNumerator s<= *(arg1 + 0xc))
            *(arg1 + 0x1c) = 0
            eax_3.b = 1
            *arg2 = 1
            sub_745f2b(eax_1 ^ &var_88)
            return eax_3
        
        if (nNumerator s< *(arg1 + 0x10))
            *(arg1 + 0x1c) = MulDiv(0x186a0, nNumerator, *(arg1 + 0x18) - *(arg1 + 0x14))
            int32_t eax_36
            eax_36.b = 1
            *arg2 = 1
            sub_745f2b(eax_1 ^ &var_88)
            return eax_36
        
        *(arg1 + 0x1c) = 0x186a0
        eax_3.b = 1
        *arg2 = 1
        sub_745f2b(eax_1 ^ &var_88)
        return eax_3

eax_3.b = 0
sub_745f2b(eax_1 ^ &var_88)
return eax_3

// 函数: sub_5a8130
// 地址: 0x5a8130
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = *(arg1 + 0x148)
int32_t ebx = *(arg1 + 0x28)
int32_t eax_3 = *(arg1 + 0x14c)

if (arg3 != 0 || arg2[0xa] != *(arg1 + 0x38))
    arg3 = 1
else
    int32_t ecx_1 = *(arg1 + 0x4c)
    
    if (ecx_1 == 0xfffe7961)
        arg3 = 1
    else
        int32_t edx_1 = arg2[0xf]
        int32_t esi_1 = arg2[0x11]
        
        if (ecx_1 - esi_1 s>= edx_1 || esi_1 + ecx_1 s<= edx_1)
            arg3 = 1
        else if (ecx_1 s< edx_1)
            sub_5a6de0(arg1 + 0x60, ebx, (edx_1 - ecx_1) * ebx, eax_2, eax_3, ebx, 0)
        else if (ecx_1 s> edx_1)
            int32_t ecx_4 = (ecx_1 - edx_1) * ebx
            sub_5a6de0(arg1 + 0x60, ebx, 0, eax_2, eax_3 - ecx_4, ebx, ecx_4)

HBRUSH eax_10 = CreateSolidBrush(0xf0f0f0)
HBRUSH eax_11 = CreateSolidBrush(0xdcdcdc)
HBRUSH ho = CreateSolidBrush(0xffffff)
HBRUSH ho_1 = CreateSolidBrush(0x40ffff)
HBRUSH ho_2 = CreateSolidBrush(0xffdcdc)
HBRUSH ho_3 = CreateSolidBrush(0xd2d2ff)
int32_t* ecx_6 = arg2
int32_t esi_2 = *(arg1 + 0x28)
int32_t var_88 = 0
int32_t eax_12 = ecx_6[0xf]
int32_t var_b0 = esi_2
int32_t var_70 = eax_12

if (eax_3 s> 0)
    void* edi_1 = arg1 + 0x60
    int32_t var_94_1 = eax_12 + 1
    int32_t edx_5 = var_70
    int32_t var_90_1 = eax_12 * 0x18
    int32_t eax_15 = 1 - esi_2
    void* var_78_1 = edi_1
    int32_t eax_16 = ebx
    int32_t ebx_1 = 0
    
    do
        int32_t esi_5 = esi_2 + ebx_1
        int32_t var_80_1 = eax_16
        
        if (eax_16 s> 0 && ebx_1 s< esi_5)
            RECT var_48
            var_48.right = eax_16
            var_48.left = 0
            var_48.top = ebx_1
            var_48.bottom = esi_5
            FillRect(*(edi_1 + 0xfc), &var_48, eax_11)
            HWND hWnd = *(edi_1 + 4)
            
            if (hWnd != 0)
                InvalidateRect(hWnd, &var_48, 0)
            
            edx_5 = var_70
            eax_16 = ebx
            ecx_6 = arg2
        
        if (edx_5 s< 0)
            goto label_5a8570
        
        void* esi_3 = *ecx_6
        int32_t eax_17
        int32_t edx_8
        edx_8:eax_17 = muls.dp.d(0x2aaaaaab, ecx_6[1] - esi_3)
        int32_t edx_9 = edx_8 s>> 2
        
        if (var_70 s>= (edx_9 u>> 0x1f) + edx_9)
            eax_16 = ebx
        label_5a8570:
            
            if (eax_16 s< eax_2 && ebx_1 s< esi_5)
                RECT var_38
                var_38.left = eax_16
                var_38.top = ebx_1
                var_38.right = eax_2
                var_38.bottom = esi_5
                FillRect(*(edi_1 + 0xfc), &var_38, eax_10)
                HWND hWnd_4 = *(edi_1 + 4)
                
                if (hWnd_4 != 0)
                    InvalidateRect(hWnd_4, &var_38, 0)
                
                eax_16 = ebx
                ecx_6 = arg2
        else
            int16_t* esi_4 = esi_3 + var_90_1
            int32_t edx_11 = var_70 << 2
            int32_t* edi_3 = ecx_6[3] + edx_11
            int32_t* eax_22 = ecx_6[6] + edx_11
            
            if (var_94_1 == ecx_6[0xc])
                *edi_3 = 2
            else if (var_94_1 == ecx_6[0xb])
                *edi_3 = 3
            else if (var_94_1 != ecx_6[0xd])
                int32_t edx_12
                edx_12.b = var_94_1 == ecx_6[0xe]
                *edi_3 = (edx_12 << 2) + 1
            else
                *edi_3 = 4
            
            if (arg3 != 0 || *edi_3 != *eax_22)
                int32_t eax_24 = *edi_3 - 2
                HBRUSH hbr
                
                if (eax_24 u> 3)
                    hbr = ho
                else
                    switch (eax_24)
                        case 0
                            hbr = ho_2
                        case 1
                            hbr = ho_1
                        case 2, 3
                            hbr = ho_3
                
                int32_t edx_14 = *(esi_4 + 0x14)
                int16_t* ecx_8
                
                if (edx_14 u< 8)
                    ecx_8 = esi_4
                else
                    ecx_8 = *esi_4
                
                void* edi_4 = &ecx_8[*(esi_4 + 0x10)]
                
                if (edx_14 u>= 8)
                    esi_4 = *esi_4
                
                if (esi_4 != edi_4)
                    int32_t ebx_4 = ebx
                    
                    while (ebx_4 s< eax_2)
                        uint32_t eax_26 = zx.d(*esi_4)
                        int32_t eax_30
                        
                        if (eax_26 != 9)
                            if ((data_b9c398.b & 1) == 0)
                                data_b9c398 |= 1
                                sub_6ad730()
                            
                            int32_t eax_33 = *(arg1 + 0x24)
                            
                            if (*(zx.d(eax_26.w) + 0xb9c3a0) != 2)
                                int32_t eax_34
                                int32_t edx_16
                                edx_16:eax_34 = sx.q(eax_33)
                                eax_33 = (eax_34 - edx_16) s>> 1
                            
                            eax_30 = eax_33 + ebx_4
                            
                            if (eax_33 + ebx_4 s>= 0)
                                int32_t eax_36 = esi_5
                                var_80_1 = eax_30
                                void* ecx_12
                                
                                if (ebx_4 s>= eax_30 || var_88 s>= eax_36)
                                    ecx_12 = arg1
                                else
                                    RECT var_28
                                    var_28.bottom = eax_36
                                    var_28.left = ebx_4
                                    var_28.top = var_88
                                    var_28.right = eax_30
                                    FillRect(*(arg1 + 0x15c), &var_28, hbr)
                                    ecx_12 = arg1
                                    HWND hWnd_2 = *(ecx_12 + 0x64)
                                    
                                    if (hWnd_2 == 0)
                                        eax_36 = esi_5
                                    else
                                        InvalidateRect(hWnd_2, &var_28, 0)
                                        eax_36 = esi_5
                                        ecx_12 = arg1
                                
                                void* var_c0_5 = ecx_12
                                sub_5a6e70(var_78_1, *esi_4, ebx_4, eax_36 + eax_15, 
                                    *(ecx_12 + 0x20))
                        else
                            int32_t eax_29 = *(arg1 + 0x24) * 2
                            eax_30 = eax_29 + ebx_4
                            
                            if (eax_29 + ebx_4 s>= 0)
                                var_80_1 = eax_30
                                
                                if (ebx_4 s< eax_30 && var_88 s< esi_5)
                                    RECT var_58
                                    var_58.left = ebx_4
                                    var_58.right = eax_30
                                    var_58.top = var_88
                                    var_58.bottom = esi_5
                                    FillRect(*(var_78_1 + 0xfc), &var_58, hbr)
                                    HWND hWnd_1 = *(var_78_1 + 4)
                                    
                                    if (hWnd_1 != 0)
                                        InvalidateRect(hWnd_1, &var_58, 0)
                        
                        esi_4 = &esi_4[1]
                        ebx_4 = eax_30
                        
                        if (esi_4 == edi_4)
                            break
                
                if (var_80_1 s< eax_2 && var_88 s< esi_5)
                    RECT var_18
                    var_18.top = var_88
                    var_18.left = var_80_1
                    var_18.right = eax_2
                    var_18.bottom = esi_5
                    FillRect(*(var_78_1 + 0xfc), &var_18, hbr)
                    HWND hWnd_3 = *(var_78_1 + 4)
                    
                    if (hWnd_3 != 0)
                        InvalidateRect(hWnd_3, &var_18, 0)
            
            eax_16 = ebx
            
            if (esi_5 s>= eax_3)
                *edi_3 = 0
            
            edi_1 = var_78_1
            ecx_6 = arg2
        
        ebx_1 = esi_5
        var_90_1 += 0x18
        edx_5 = var_70 + 1
        var_94_1 += 1
        var_88 = esi_5
        esi_2 = var_b0
        var_70 = edx_5
    while (ebx_1 s< eax_3)

DeleteObject(eax_10)
DeleteObject(eax_11)
DeleteObject(ho)
DeleteObject(ho_1)
DeleteObject(ho_2)
DeleteObject(ho_3)
char* result = arg2[3]

if (result != arg2[4])
    char* result_1 = result
    void* edi_7 = (arg2[4] - result) & 0xfffffffc
    
    if (result_1 == arg2[4])
        result_1 = nullptr
    
    int32_t* eax_41 = arg2[6]
    
    if (eax_41 == arg2[7])
        eax_41 = nullptr
    
    sub_748840(eax_41, result_1, edi_7)
    char* eax_42 = arg2[3]
    
    if (eax_42 == arg2[4])
        eax_42 = nullptr
    
    result = _memset(eax_42, 0, edi_7)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result

// 函数: sub_45c417
// 地址: 0x45c417
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_3c = edi
int32_t eax = 0
int32_t var_c = 0

if (arg3 s> 0)
    do
        char* ebx_1 = arg2 + (eax << 1)
        uint32_t eax_1 = zx.d(ebx_1[1])
        
        if (*(arg1 + (eax_1 << 2) + 0x90) == 0)
            int32_t eax_3 = sub_745f3f(0x1000)
            *(arg1 + (eax_1 << 2) + 0x90) = eax_3
            
            if (eax_3 == 0)
                return 0x8007000e
            
            __builtin_memset(eax_3, 0, 0x1000)
            
            if (*(arg1 + 0x8c) u<= eax_1)
                *(arg1 + 0x8c) = eax_1 + 1
        
        int32_t* eax_9 = (zx.d(*ebx_1) << 4) + *(arg1 + (eax_1 << 2) + 0x90)
        int32_t* var_10_2 = eax_9
        
        if (arg4 != 0)
            *(arg4 + (var_c << 2)) = eax_9
        
        if (*eax_9 == 0)
            eax_9.w = *ebx_1
            void* x
            void* x_1
            
            if (data_b95af8 == 0)
                HDC hdc = *(arg1 + 0x10)
                int16_t string = eax_9.w
                int16_t var_16_1 = 0
                MoveToEx(hdc, 0, 0, nullptr)
                ExtTextOutA(*(arg1 + 0x10), 0, 0, ETO_OPAQUE | ETO_GLYPH_INDEX, nullptr, &string, 
                    1, nullptr)
                POINT lppt
                MoveToEx(*(arg1 + 0x10), 0, 0, &lppt)
                x = lppt.x
                x_1 = x
            else
                wchar16 string_1 = eax_9.w
                int16_t var_12_1 = 0
                ExtTextOutW(*(arg1 + 0x10), 0, 0, ETO_OPAQUE | ETO_GLYPH_INDEX, nullptr, &string_1, 
                    1, nullptr)
                
                if ((*(arg1 + 0x67) & 4) == 0)
                    data_b97304(*(arg1 + 0x10), zx.d(*ebx_1), 1, 0, &x_1)
                    x = x_1
                else
                    void* var_30
                    data_b97300(*(arg1 + 0x10), zx.d(*ebx_1), 1, 0, &var_30)
                    int32_t var_2c
                    x = var_30 + var_2c
                    x_1 = x
            
            if (x != 0)
                void* ecx_7 = arg1 + 0x4a4
                
                if (x u> *(arg1 + 0x4ac))
                    ecx_7 = arg1 + 0x4c0
                
                int32_t result
                int16_t x87control
                result, x87control =
                    sub_45ba31(arg1, x87control, 0, x, *(arg1 + 0x30), ecx_7, var_10_2)
                
                if (result s< 0)
                    return result
            else
                *var_10_2 = 0xffffffff
        
        eax = var_c + 1
        var_c = eax
    while (eax s< arg3)

return 0

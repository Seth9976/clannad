// 函数: sub_67a1a0
// 地址: 0x67a1a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9c72de
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_18 = arg3
void* ecx = __chkstk(0x12ac)
int32_t eax_2 = __security_cookie ^ &var_18
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
int32_t arg_1298
int32_t* result = &arg_1298
fsbase->NtTib.ExceptionList = &arg_1298

if (*(ecx + 8) != 0)
    sub_67acd0(ecx)
    HWND hWnd = *(ecx + 0x3f4)
    char eax_5
    
    if (hWnd != 0)
        eax_5 = SendMessageW(hWnd, 0xf0, 0, 0)
    else
        eax_5 = 0
    
    char edx = *(data_bac4e4 + 0x19b)
    
    if (edx != (eax_5 & 1))
        HWND hWnd_3 = *(ecx + 0x3f4)
        
        if (hWnd_3 != 0)
            WPARAM wParam
            wParam.b = edx != 0
            SendMessageW(hWnd_3, 0xf1, wParam, 0)
    
    LRESULT hWnd_1 = *(ecx + 0x488)
    
    if (hWnd_1 != 0)
        hWnd_1 = SendMessageW(hWnd_1, 0xf0, 0, 0)
    
    hWnd_1.b &= 1
    edx = *(data_bac4e4 + 0x19c)
    
    if (edx != hWnd_1.b)
        HWND hWnd_4 = *(ecx + 0x488)
        
        if (hWnd_4 != 0)
            WPARAM wParam_1
            wParam_1.b = edx != 0
            SendMessageW(hWnd_4, 0xf1, wParam_1, 0)
    
    data_bac504
    int32_t eax_6 = sub_6a53f0()
    HWND hWnd_5 = *(ecx + 0x51c)
    int32_t ebx
    ebx.b = eax_6 != 0xffffffff
    int32_t var_8_1 = eax_6
    
    if (hWnd_5 != 0)
        eax_6.b = IsWindowEnabled(hWnd_5) != 0
    else
        eax_6.b = 0
    
    if (eax_6.b != ebx.b)
        HWND hWnd_2 = *(ecx + 0x51c)
        
        if (hWnd_2 != 0)
            BOOL eax_7
            eax_7.b = IsWindowEnabled(hWnd_2) != 0
            
            if (eax_7.b != ebx.b)
                EnableWindow(*(ecx + 0x51c), zx.d(ebx.b))
    
    result = *(ecx + 0x6ec)
    
    if (result != *(ecx + 0x6f0))
        int32_t arg_40 = 7
        int32_t arg_3c = 0
        int16_t arg_2c = 0
        int32_t arg_12a0 = 0
        void* ecx_6 = *(ecx + 0x6f0) - *(ecx + 0x6ec)
        int32_t ebx_1 = *(ecx + 0x6e4)
        WPARAM i_1 = 0
        
        if (ecx_6 s/ 0x122c s> 0)
            int32_t var_10_1 = 0
            WPARAM i = 0
            
            do
                void arg_5c
                _memset(&arg_5c, 0, 0x122c)
                
                if (ebx_1 s< 0)
                label_67a49f:
                    char ecx_21 = i_1.b & 0x1f
                    uint32_t edi_1 = i u>> 5
                    
                    if ((*(*(ecx + 0x6f8) + (edi_1 << 2)) & 1 << ecx_21) != 0)
                        int16_t* eax_25 = sub_67add0(ecx, &var_4, ebx_1, nullptr)
                        arg_12a0.b = 2
                        
                        if (&arg_2c != eax_25)
                            sub_52e3c0(&arg_2c, eax_25, 0, 0xffffffff)
                        
                        arg_12a0.b = 0
                        
                        if (arg4 u>= 8)
                            j__free(var_4)
                        
                        sub_6c4d60(ecx + 0xb8, i_1, 1, &arg_2c)
                        int32_t edx_8 = *(ecx + 0x6f8)
                        *(edx_8 + (edi_1 << 2)) &= not.d(1 << ecx_21)
                    
                    i = i_1
                else
                    void* eax_13 = data_bac510
                    
                    if (*(eax_13 + 0x10b90) + *(eax_13 + 0x10b8c) + *(eax_13 + 0x10b88) s<= ebx_1)
                        goto label_67a49f
                    
                    if (sub_6a50c0(data_bac504 + 0x4b068, ebx_1, &arg_5c) == 0)
                        goto label_67a49f
                    
                    uint32_t eax_17 = i u>> 5 << 2
                    char ecx_13 = i.b & 0x1f
                    char eax_19
                    
                    if ((*(*(ecx + 0x6f8) + eax_17) & 1 << ecx_13) != 0)
                        eax_19 = sub_678440(*(ecx + 0x6ec) + var_10_1, &arg_5c)
                    
                    if ((*(*(ecx + 0x6f8) + eax_17) & 1 << ecx_13) == 0 || eax_19 != 0)
                        int16_t* eax_20 = sub_67add0(ecx, &var_4, ebx_1, &arg_5c)
                        arg_12a0.b = 1
                        
                        if (&arg_2c != eax_20)
                            sub_52e3c0(&arg_2c, eax_20, 0, 0xffffffff)
                        
                        arg_12a0.b = 0
                        
                        if (arg4 u>= 8)
                            j__free(var_4)
                        
                        sub_6c4d60(ecx + 0xb8, i, 1, &arg_2c)
                        sub_748840(*(ecx + 0x6ec) + var_10_1, &arg_5c, 0x122c, eax_4)
                        int32_t* edx_6 = *(ecx + 0x6f8) + eax_17
                        *edx_6 |= 1 << ecx_13
                
                ecx_6 = *(ecx + 0x6f0) - *(ecx + 0x6ec)
                i += 1
                var_10_1 += 0x122c
                ebx_1 += 1
                i_1 = i
            while (i s< ecx_6 s/ 0x122c)
        
        int32_t eax_32 = *(ecx + 0x708)
        int32_t arg_c
        int16_t arg_14
        int32_t arg_24
        
        if (eax_32 != var_8_1)
            if (eax_32 != 0xffffffff && *(ecx + 0x6e4) s<= eax_32 && eax_32 s< *(ecx + 0x6e8))
                arg5 = 7
                arg_24 = 0
                arg_14 = 0
                sub_52e720(&arg_14, &data_ad7c90, nullptr)
                arg_12a0.b = 3
                sub_6c4d60(ecx + 0xb8, *(ecx + 0x708) - *(ecx + 0x6e4), 0, &arg_14)
                arg_12a0.b = 0
                ecx_6 = sub_52e8a0(&arg_14)
            
            *(ecx + 0x708) = var_8_1
            
            if (var_8_1 != 0xffffffff && *(ecx + 0x6e4) s<= var_8_1 && var_8_1 s< *(ecx + 0x6e8))
                arg4 = 7
                arg_c = 0
                var_4.w = 0
                sub_52e720(&var_4, 0xaf97c4, 3)
                arg_12a0.b = 4
                sub_6c4d60(ecx + 0xb8, *(ecx + 0x708) - *(ecx + 0x6e4), 0, &var_4)
                arg_12a0.b = 0
                ecx_6 = sub_52e8a0(&var_4)
        
        result = *(ecx + 0x708)
        int32_t* result_1 = 0xffffffff
        
        if (result s>= 0)
            ecx_6 = data_bac510
            
            if (result s< *(ecx_6 + 0x10b88))
                *(ecx + 0x6d8)
                result = divs.dp.d(sx.q(result), *(ecx + 0x6d8))
                
                if (result s>= 0 && result s< *(ecx + 0x6d4))
                    result_1 = result
        
        int32_t edx_13 = *(ecx + 0x70c)
        
        if (edx_13 != result_1)
            if (edx_13 != 0xffffffff)
                void* var_2c_13 = ecx_6
                int16_t* eax_38 = sub_6ad9b0(&arg_14)
                arg_12a0.b = 5
                int16_t* eax_39 = sub_548cb0(eax_38, 0xaf4300, &var_4, eax_38)
                arg_12a0.b = 6
                ecx_6 = sub_6c3a10(ecx + 0x20, *(ecx + 0x70c), eax_39)
                
                if (arg4 u>= 8)
                    ecx_6 = j__free(var_4)
                
                result = nullptr
                arg4 = 7
                arg_12a0.b = 0
                arg_c = 0
                var_4.w = 0
                
                if (arg5 u>= 8)
                    result, ecx_6 = j__free(arg_14.d)
            
            *(ecx + 0x70c) = result_1
            
            if (result_1 != 0xffffffff)
                void* var_2c_18 = ecx_6
                int32_t arg_44
                int16_t* eax_40 = sub_6ad9b0(&arg_44)
                arg_12a0.b = 7
                int16_t* eax_41 = sub_548cb0(eax_40, 0xaf4300, &arg_14, eax_40)
                arg_12a0.b = 8
                int16_t* eax_42 = sub_532b80(eax_41, eax_41, &var_4, 0xaf97b4)
                arg_12a0.b = 9
                sub_6c3a10(ecx + 0x20, *(ecx + 0x70c), eax_42)
                
                if (arg4 u>= 8)
                    j__free(var_4)
                
                arg4 = 7
                arg_c = 0
                var_4.w = 0
                
                if (arg5 u>= 8)
                    j__free(arg_14.d)
                
                result = nullptr
                arg5 = 7
                arg_24 = 0
                arg_14 = 0
                
                if (arg6 u>= 8)
                    result = j__free(arg_44)
        
        if (arg_40 u>= 8)
            result = j__free(arg_2c.d)

fsbase->NtTib.ExceptionList = arg_1298
sub_745f2b(eax_2 ^ &var_18)
return result

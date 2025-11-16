// 函数: sub_53d2f0
// 地址: 0x53d2f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b0828
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t var_7c
int32_t eax_2 = __security_cookie ^ &var_7c
int32_t __saved_edi
int32_t var_8c = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** hWnd = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 8) != 0)
    int32_t* edi_2 = data_bac4e4 + 0x11c
    int32_t* eax_5
    
    if (edi_2[5] u< 8)
        eax_5 = edi_2
    else
        eax_5 = *edi_2
    
    int32_t var_90_1 = edi_2[4]
    
    if (sub_536340(arg1 + 0x4c0, arg1 + 0x4c0, *(arg1 + 0x4d0), eax_5) != 0)
        sub_53d680(arg1, edi_2)
        bool cond:0_1 = *(arg1 + 0x4b4) u< 8
        void* eax_7 = arg1 + 0x4a0
        *(eax_7 + 0x10) = 0
        
        if (not(cond:0_1))
            eax_7 = *eax_7
        
        *eax_7 = 0
    
    int32_t var_4c
    sub_53c420(arg1, &var_4c)
    int32_t var_c_1 = 0
    int32_t var_3c
    int16_t var_64
    
    if (var_3c != 0)
        int32_t var_68_1 = 7
        int32_t var_6c_1 = 0
        var_7c = 0
        var_c_1.b = 2
        void* ecx_5 = data_bac4e4
        int32_t eax_8
        
        if (*(ecx_5 + 0x140) == 0)
            eax_8 = *(ecx_5 + 0x13c)
        
        int32_t ecx_11
        
        if (*(ecx_5 + 0x140) != 0 || eax_8 s<= 0)
            ecx_11 = sub_52e3c0(&var_7c, &var_4c, 0, 0xffffffff)
        else
            int32_t temp1_1 =
                mods.dp.d(sx.q(*(arg1 + 0x18) + *(arg1 + 0x49c)), var_3c * eax_8 + 0x1f4)
            *(arg1 + 0x49c) = temp1_1
            *(ecx_5 + 0x13c)
            var_c_1.b = 3
            void var_34
            sub_532840(&var_34, 
                sub_53d730(&var_4c, &var_64, 0, divs.dp.d(sx.q(temp1_1), *(ecx_5 + 0x13c)) + 1))
            var_c_1.b = 4
            sub_52e3c0(&var_7c, &var_34, 0, 0xffffffff)
            sub_52e8a0(&var_34)
            var_c_1.b = 2
            ecx_11 = sub_52e8a0(&var_64)
        
        int16_t* eax_17 = &var_7c
        int32_t var_90_7 = var_6c_1
        
        if (var_68_1 u>= 8)
            eax_17 = var_7c.d
        
        if (sub_536340(arg1 + 0x4a0, ecx_11, *(arg1 + 0x4b0), eax_17) != 0)
            sub_6c2db0(arg1 + 0x13c, &var_7c)
            
            if (arg1 + 0x4a0 != &var_7c)
                sub_52e3c0(arg1 + 0x4a0, &var_7c, 0, 0xffffffff)
        
        if (var_68_1 u>= 8)
            j__free(var_7c.d)
        
        int32_t var_68_2 = 7
        int32_t var_6c_2 = 0
        var_7c = 0
    else
        int32_t var_50_1 = 7
        int32_t var_54_1 = 0
        var_64 = 0
        sub_52e720(&var_64, &data_ad7c90, nullptr)
        var_c_1.b = 1
        sub_6c2db0(arg1 + 0x13c, &var_64)
        
        if (var_50_1 u>= 8)
            j__free(var_64.d)
        
        int32_t var_50_2 = 7
        int32_t var_54_2 = 0
        var_64 = 0
    HWND hWnd_1 = *(arg1 + 0xb0)
    LRESULT eax_19
    
    if (hWnd_1 != 0)
        eax_19 = SendMessageW(hWnd_1, 0x400, 0, 0)
    else
        eax_19 = 0
    
    int32_t ebx_1 = *(data_bac4e4 + 0x13c)
    
    if (ebx_1 != 0x64 - eax_19)
        HWND hWnd_2 = *(arg1 + 0xb0)
        
        if (hWnd_2 != 0)
            SendMessageW(hWnd_2, 0x405, 1, 0x64 - ebx_1)
    
    hWnd = *(arg1 + 0x2f0)
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0xf0, 0, 0)
    
    hWnd.b &= 1
    char edx_5 = *(data_bac4e4 + 0x140)
    
    if (edx_5 != hWnd.b)
        HWND hWnd_3 = *(arg1 + 0x2f0)
        
        if (hWnd_3 != 0)
            WPARAM wParam
            wParam.b = edx_5 != 0
            hWnd = SendMessageW(hWnd_3, 0xf1, wParam, 0)
    
    int32_t var_38
    
    if (var_38 u>= 8)
        hWnd = j__free(var_4c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_7c)
return hWnd

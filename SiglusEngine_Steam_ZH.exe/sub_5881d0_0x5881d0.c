// 函数: sub_5881d0
// 地址: 0x5881d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b7238
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT hWnd

if (arg3 != 0)
    int32_t ebx_1 = 0
    LRESULT (__stdcall* const ecx_2)(HWND hWnd, uint32_t Msg, WPARAM wParam, LPARAM lParam) =
        SendMessageW
    int32_t eax_7 = (*(arg3 + 0xa4) - *(arg3 + 0xa0)) s/ 0x118
    
    if (eax_7 s> 0)
        void* var_30_1 = nullptr
        
        do
            LRESULT hWnd_1 = arg2[1]
            
            if (hWnd_1 != 0)
                hWnd_1, ecx_2 = SendMessageW(hWnd_1, 0x1004, 0, 0)
            
            if (*arg4 s>= hWnd_1)
                int32_t eax_9 = *(data_bac4e0 + 0x14)
                
                if (eax_9 != 0)
                    ecx_2 = eax_9(arg2[1], eax_2)
            
            LRESULT (__stdcall* const var_50_3)(HWND hWnd, uint32_t Msg, WPARAM wParam, 
                LPARAM lParam) = ecx_2
            int32_t var_34 = 1
            int16_t var_2c
            int16_t* eax_10 = sub_6ad9b0(&var_2c)
            int32_t var_8_1 = 0
            int32_t ecx_5 = *(data_bac4e0 + 0x34)
            
            if (ecx_5 != 0)
                ecx_5(arg2[1], *arg4, 0, eax_10, eax_2)
            
            int32_t var_8_2 = 0xffffffff
            int32_t var_18
            
            if (var_18 u>= 8)
                j__free(var_2c.d)
            
            var_2c = 0
            var_18 = 7
            int32_t var_1c_1 = 0
            void* ecx_7 = var_30_1 + *(arg3 + 0xa0)
            int32_t* var_50_6 = &var_34
            sub_585900(&var_34, *(ecx_7 + 0x80), ecx_7, arg2, arg4, &var_34)
            *arg4 += 1
            ebx_1 += 1
            var_30_1 += 0x118
            ecx_2 = SendMessageW
        while (ebx_1 s< eax_7)
    
    hWnd = arg2[1]
    int32_t edi_1 = *arg4
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0x1004, 0, 0)
    
    if (hWnd s> edi_1)
        hWnd = *(data_bac4e0 + 0x30)
        
        if (hWnd != 0)
            hWnd = hWnd(arg2[1], edi_1, eax_2)
else
    hWnd = arg2[1]
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0x1009, arg3, arg3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return hWnd

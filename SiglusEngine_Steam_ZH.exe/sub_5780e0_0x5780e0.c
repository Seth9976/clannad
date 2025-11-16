// 函数: sub_5780e0
// 地址: 0x5780e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_1c = ebx
int32_t i = 0

if (((*(arg1 + 0x3698) - *(arg1 + 0x3694)) & 0xfffffff8) s> 0)
    do
        void* ebx_2 = *(*(arg1 + 0x3694) + (i << 3))
        HWND hWnd_1 = *(ebx_2 + 4)
        
        if (hWnd_1 != 0)
            BOOL eax_5
            eax_5.b = IsWindowEnabled(hWnd_1) != 0
            
            if (eax_5.b != 0)
                HWND hWnd = *(ebx_2 + 4)
                RECT rect
                __builtin_memset(&rect, 0, 0x10)
                GetWindowRect(hWnd, &rect)
                
                if (rect.left s<= arg2 && arg2 s< rect.right && rect.top s<= arg3
                        && arg3 s< rect.bottom)
                    int32_t eax_7
                    eax_7.b = 1
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_7
        
        i += 1
    while (i s< (*(arg1 + 0x3698) - *(arg1 + 0x3694)) s>> 3)

int32_t eax_3
eax_3.b = 0
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_3

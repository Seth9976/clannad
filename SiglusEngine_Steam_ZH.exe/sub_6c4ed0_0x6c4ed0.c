// 函数: sub_6c4ed0
// 地址: 0x6c4ed0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* edx = arg1
*arg4 = 0xffffffff
WPARAM wParam = 0
int32_t edi
int32_t var_34 = edi
void* var_20 = edx
*arg5 = 0xffffffff
int32_t lParam

while (true)
    LRESULT hWnd = *(edx + 4)
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0x1004, 0, 0)
        edx = var_20
    
    if (wParam s>= hWnd)
        break
    
    int32_t esi = 1
    
    while (true)
        LRESULT hWnd_1 = *(edx + 4)
        
        if (hWnd_1 != 0)
            hWnd_1 = SendMessageW(hWnd_1, 0x101f, 0, 0)
        
        if (esi s>= SendMessageW(hWnd_1, 0x1200, 0, 0))
            break
        
        int32_t ecx_1 = 0
        edi = 0
        int32_t var_10_1 = 0
        int32_t lParam_1 = 0
        int32_t var_c_1 = 0
        lParam = 0
        HWND hWnd_3 = *(var_20 + 4)
        
        if (hWnd_3 != 0)
            SendMessageW(hWnd_3, 0x1038, wParam, &lParam)
            edi = var_c_1
            ecx_1 = var_10_1
            lParam_1 = lParam
        
        if (lParam_1 s<= arg2 && arg2 s< ecx_1 && esi s<= arg3 && arg3 s< edi)
            *arg4 = wParam
            *arg5 = esi
            int32_t* eax_5
            eax_5.b = 1
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return eax_5
        
        edx = var_20
        esi += 1
    
    edx = var_20
    wParam += 1

WPARAM wParam_1 = 0
LRESULT hWnd_2

while (true)
    hWnd_2 = *(edx + 4)
    
    if (hWnd_2 != 0)
        hWnd_2 = SendMessageW(hWnd_2, 0x1004, 0, 0)
        edx = var_20
    
    if (wParam_1 s>= hWnd_2)
        break
    
    HWND hWnd_4 = *(edx + 4)
    int32_t eax_6 = 0
    int32_t ecx_6 = 0
    int32_t var_10_2 = 0
    int32_t var_c_2 = 0
    int32_t var_14_2 = 0
    lParam = 0
    
    if (hWnd_4 != 0)
        SendMessageW(hWnd_4, 0x1038, wParam_1, &lParam)
        eax_6 = var_c_2
        ecx_6 = var_14_2
        edx = var_20
    
    if (ecx_6 s<= arg3 && arg3 s< eax_6)
        *arg4 = wParam_1
        *arg5 = 0
        int32_t* eax_7
        eax_7.b = 1
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_7
    
    wParam_1 += 1

hWnd_2.b = 0
sub_745f2b(eax_1 ^ &__saved_ebp)
return hWnd_2

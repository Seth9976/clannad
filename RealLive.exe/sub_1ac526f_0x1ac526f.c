// 函数: sub_1ac526f
// 地址: 0x1ac526f
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t* var_8 = arg1
HLOCAL lpTlsValue = TlsGetValue(*arg1)
int32_t* ebx

if (lpTlsValue == 0)
    HLOCAL lpTlsValue_2 = sub_1ac5035(0x10)
    
    if (lpTlsValue_2 == 0)
        lpTlsValue = nullptr
    else
        *lpTlsValue_2 = 0x1ad37c0
        lpTlsValue = lpTlsValue_2
    
    *(lpTlsValue + 8) = 0
    *(lpTlsValue + 0xc) = 0
    ebx = lpTlsValue + 8
    HLOCAL lpTlsValue_1 = lpTlsValue
    EnterCriticalSection(&arg1[7])
    sub_1ac4fdc(&arg1[5], lpTlsValue)
    LeaveCriticalSection(&arg1[7])
    goto label_1ac52e2

ebx = lpTlsValue + 8

if (arg2 s>= *ebx && arg3 != 0)
label_1ac52e2:
    HLOCAL hMem = *(lpTlsValue + 0xc)
    HLOCAL eax_6
    int32_t ecx_1
    
    if (hMem != 0)
        eax_6, ecx_1 = LocalReAlloc(hMem, arg1[3] << 2, 2)
    else
        eax_6, ecx_1 = LocalAlloc(LMEM_FIXED, arg1[3] << 2)
    
    *(lpTlsValue + 0xc) = eax_6
    
    if (eax_6 == 0)
        sub_1aab087(ecx_1)
        noreturn
    
    int32_t eax_7 = *ebx
    sub_1a917d0(*(lpTlsValue + 0xc) + (eax_7 << 2), 0, (eax_7 * 0x3fffffff + arg1[3]) << 2)
    *ebx = arg1[3]
    TlsSetValue(*arg1, lpTlsValue)

int32_t result = *(lpTlsValue + 0xc)
*(result + (arg2 << 2)) = arg3
return result

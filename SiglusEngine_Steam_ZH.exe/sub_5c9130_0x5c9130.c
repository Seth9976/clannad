// 函数: sub_5c9130
// 地址: 0x5c9130
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb7b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT result

if (arg2 == 1)
    OleInitialize(nullptr)
    int32_t eax_11 = GetWindowTextLengthW(arg1)
    int32_t* lpString
    
    if ((eax_11 << 1) + 0xa u<= (eax_11 << 1) + 2)
        lpString = nullptr
    else if ((eax_11 << 1) + 0xa u> 0x400)
        lpString = _malloc((eax_11 << 1) + 0xa)
        
        if (lpString != 0)
            *lpString = 0xdddd
            lpString = &lpString[2]
    else
        __alloca_probe_16((eax_11 << 1) + 0xa)
        lpString = &var_3c
        
        if (&var_3c != 0)
            var_3c = 0xcccc
            int32_t __saved_esi
            lpString = &__saved_esi
    
    int32_t* lpString_1 = lpString
    int32_t var_8_1 = 0
    
    if (lpString == 0)
        result = 0xffffffff
    else
        GetWindowTextW(arg1, lpString, eax_11 + 1)
        SetWindowTextW(arg1, &data_ad7c90)
        uint32_t dwBytes = 0
        int32_t dwNewLong = 0
        uint32_t dwBytes_1 = 0
        
        if (arg4 != 0)
            int16_t* ecx_3 = *arg4
            
            if (ecx_3 != 0)
                dwBytes = zx.d(*ecx_3)
                dwBytes_1 = dwBytes
        
        struct IStream ppstm = 0
        var_8_1.b = 1
        HGLOBAL hMem_1
        
        if (dwBytes != 0)
            HGLOBAL hMem = GlobalAlloc(GHND, dwBytes)
            hMem_1 = hMem
            
            if (hMem != 0)
                sub_5c49b0(_memcpy_s(GlobalLock(hMem), dwBytes_1, *arg4 + 2, dwBytes_1))
                GlobalUnlock(hMem_1)
                CreateStreamOnHGlobal(hMem_1, 1, &ppstm)
        
        hMem_1 = nullptr
        int32_t* var_24 = nullptr
        var_8_1.b = 3
        int32_t eax_17 = sub_5c96d0(ppstm, &var_24, 0)
        int32_t eax_19
        
        if (eax_17 s>= 0)
            int32_t* eax_18 = var_24
            eax_19 = (**eax_18)(eax_18, 0xaf24ec, &dwNewLong)
        
        if (eax_17 s< 0 || eax_19 s< 0)
            var_8_1.b = 2
            int32_t* eax_21 = var_24
            
            if (eax_21 != 0)
                (*(*eax_21 + 8))(eax_21)
            
            sub_5cbbd0(&hMem_1)
            var_8_1.b = 0
            struct IStream ppstm_2 = ppstm
            
            if (ppstm_2 != 0)
                (*(*ppstm_2 + 8))(ppstm_2)
            
            if (lpString[-2] == 0xdddd)
                _free(&lpString[-2])
            
            result = 0xffffffff
        else
            SetWindowLongW(arg1, 0xffffffeb, dwNewLong)
            var_8_1.b = 2
            int32_t* eax_20 = var_24
            
            if (eax_20 != 0)
                (*(*eax_20 + 8))(eax_20)
            
            sub_5cbbd0(&hMem_1)
            var_8_1.b = 0
            struct IStream ppstm_1 = ppstm
            
            if (ppstm_1 != 0)
                (*(*ppstm_1 + 8))(ppstm_1)
            
            sub_5cc110(&lpString_1)
            result = DefWindowProcW(arg1, arg2, arg3, arg4)
else if (arg2 == 0x82)
    int32_t eax_10 = GetWindowLongW(arg1, 0xffffffeb)
    
    if (eax_10 != 0)
        (*(*eax_10 + 8))(eax_10)
    
    OleUninitialize()
    result = DefWindowProcW(arg1, arg2, arg3, arg4)
else if (arg2 != 0x210 || arg3.w != 1 || arg4 == 0)
    result = DefWindowProcW(arg1, arg2, arg3, arg4)
else if ((GetWindowLongW(arg4, 0xffffffec) & 0x10000) == 0)
    result = DefWindowProcW(arg1, arg2, arg3, arg4)
else
    SetWindowLongW(arg1, 0xffffffec, GetWindowLongW(arg1, 0xffffffec) | 0x10000)
    result = DefWindowProcW(arg1, arg2, arg3, arg4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

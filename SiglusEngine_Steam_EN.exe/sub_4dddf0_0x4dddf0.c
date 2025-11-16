// 函数: sub_4dddf0
// 地址: 0x4dddf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??0system_error@std@@QAE@HABVerror_category@1@PBD@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT result

if (arg2 == 1)
    OleInitialize(nullptr)
    int32_t eax_11 = GetWindowTextLengthA(arg1)
    char* lpString
    
    if (eax_11 + 9 u<= eax_11 + 1)
        lpString = nullptr
    else if (eax_11 + 9 u> 0x400)
        lpString = _malloc(eax_11 + 9)
        
        if (lpString != 0)
            *lpString = 0xdddd
            lpString = &lpString[8]
    else
        __alloca_probe_16(eax_11 + 9)
        lpString = &var_44
        
        if (&var_44 != 0)
            var_44 = 0xcccc
            int32_t __saved_esi
            lpString = &__saved_esi
    
    char* lpString_1 = lpString
    int32_t var_8_1 = 0
    
    if (lpString == 0)
        result = 0xffffffff
    else
        GetWindowTextA(arg1, lpString, eax_11 + 1)
        SetWindowTextA(arg1, &data_6138e3)
        uint32_t dwBytes = 0
        int32_t dwNewLong = 0
        LPARAM hMem
        
        if (arg4 != 0)
            hMem = *arg4
            
            if (hMem != 0)
                dwBytes = zx.d(*hMem)
        
        struct IStream ppstm = 0
        var_8_1.b = 1
        char* var_54
        int32_t* hMem_1
        
        if (dwBytes != 0)
            hMem = GlobalAlloc(GHND, dwBytes)
            hMem_1 = hMem
            
            if (hMem != 0)
                var_54 = GlobalLock(hMem)
                sub_4d9360(_memcpy_s(var_54, dwBytes, *arg4 + 2, dwBytes))
                int32_t* hMem_2 = hMem_1
                GlobalUnlock(hMem_2)
                CreateStreamOnHGlobal(hMem_2, 1, &ppstm)
        
        int32_t var_20 = 0
        hMem_1 = nullptr
        char* lpString_2 = lpString
        var_8_1.b = 3
        
        do
            hMem.b = *lpString_2
            lpString_2 = &lpString_2[1]
        while (hMem.b != 0)
        
        void* eax_17
        int32_t edx_2
        edx_2:eax_17 = sx.q(lpString_2 - &lpString_2[1] + 1)
        void* esi_4 = eax_17 * 2
        int32_t edx_4 = adc.d(edx_2 << 1 | eax_17 u>> 0xffffffe1, 0, esi_4 u>= 0x80000000)
        int32_t var_30_1 = edx_4
        void* eax_22
        
        if (edx_4 != 0 || esi_4 - 0x80000000 u> 0xffffffff)
            eax_22 = nullptr
        else
            char eax_20
            
            if (esi_4 s<= 0x400)
                eax_20 = sub_4d9150(esi_4)
            
            if (esi_4 s> 0x400 || eax_20 == 0)
                eax_22 = sub_4d9200(sub_4ded10(&var_20, esi_4), lpString, esi_4 u>> 1, 3)
            else
                __alloca_probe_16(esi_4)
                eax_22 = sub_4d9200(&var_44, lpString, esi_4 u>> 1, 3)
        
        int32_t var_48_13 = 0
        int32_t eax_24 = sub_4de430(eax_22, arg1, ppstm, &hMem_1, var_54)
        int32_t* hMem_3 = hMem_1
        int32_t eax_26
        
        if (eax_24 s>= 0)
            eax_26 = (**hMem_3)(hMem_3, 0x61d58c, &dwNewLong)
        
        if (eax_24 s< 0 || eax_26 s< 0)
            var_8_1.b = 2
            
            if (hMem_3 != 0)
                (*(*hMem_3 + 8))(hMem_3)
            
            sub_4ded60(&var_20)
            var_8_1.b = 0
            struct IStream ppstm_2 = ppstm
            
            if (ppstm_2 != 0)
                (*(*ppstm_2 + 8))(ppstm_2)
            
            if (*(lpString - 8) == 0xdddd)
                _free(&lpString[0xfffffff8])
            
            result = 0xffffffff
        else
            SetWindowLongA(arg1, 0xffffffeb, dwNewLong)
            var_8_1.b = 2
            (*(*hMem_3 + 8))(hMem_3)
            sub_4ded60(&var_20)
            var_8_1.b = 0
            struct IStream ppstm_1 = ppstm
            
            if (ppstm_1 != 0)
                (*(*ppstm_1 + 8))(ppstm_1)
            
            sub_4df250(&lpString_1)
            result = DefWindowProcA(arg1, arg2, arg3, arg4)
else if (arg2 == 0x82)
    int32_t eax_10 = GetWindowLongA(arg1, 0xffffffeb)
    
    if (eax_10 != 0)
        (*(*eax_10 + 8))(eax_10)
    
    OleUninitialize()
    result = DefWindowProcA(arg1, arg2, arg3, arg4)
else if (arg2 != 0x210 || arg3.w != 1 || arg4 == 0)
    result = DefWindowProcA(arg1, arg2, arg3, arg4)
else if ((GetWindowLongA(arg4, 0xffffffec) & 0x10000) == 0)
    result = DefWindowProcA(arg1, arg2, arg3, arg4)
else
    SetWindowLongA(arg1, 0xffffffec, GetWindowLongA(arg1, 0xffffffec) | 0x10000)
    result = DefWindowProcA(arg1, arg2, arg3, arg4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_5f02dd(eax_2 ^ &__saved_ebp)
return result

// 函数: sub_4de100
// 地址: 0x4de100
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_605678
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
HWND hWnd = arg1
LRESULT result

if (arg2 == 1)
    OleInitialize(nullptr)
    int32_t eax_11 = GetWindowTextLengthA(hWnd)
    uint8_t* lpString
    
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
    
    uint8_t* lpString_1 = lpString
    int32_t var_8_1 = 0
    
    if (lpString == 0)
        result = 0xffffffff
    else
        GetWindowTextA(hWnd, lpString, eax_11 + 1)
        SetWindowTextA(hWnd, &data_6138e3)
        uint32_t dwBytes = 0
        int32_t dwNewLong = 0
        
        if (arg4 != 0)
            int16_t* eax_15 = *arg4
            
            if (eax_15 != 0)
                dwBytes = zx.d(*eax_15)
        
        struct IStream ppstm = 0
        var_8_1.b = 1
        char* var_54
        int32_t* hMem_1
        
        if (dwBytes != 0)
            HGLOBAL hMem = GlobalAlloc(GHND, dwBytes)
            hMem_1 = hMem
            
            if (hMem != 0)
                var_54 = GlobalLock(hMem)
                sub_4d9360(_memcpy_s(var_54, dwBytes, *arg4 + 2, dwBytes))
                int32_t* hMem_3 = hMem_1
                GlobalUnlock(hMem_3)
                CreateStreamOnHGlobal(hMem_3, 1, &ppstm)
        
        BSTR bstrString_2 = nullptr
        var_8_1.b = 2
        int32_t eax_18 = sub_4da1f0(ppstm, &bstrString_2)
        BSTR bstrString = bstrString_2
        
        if (eax_18 s< 0)
        label_4de3d6:
            SysFreeString(bstrString)
            var_8_1.b = 0
            struct IStream ppstm_2 = ppstm
            
            if (ppstm_2 != 0)
                (*(*ppstm_2 + 8))(ppstm_2)
            
            if (*(lpString - 8) == 0xdddd)
                _free(&lpString[0xfffffff8])
            
            result = 0xffffffff
        else
            int32_t var_20 = 0
            hMem_1 = nullptr
            uint8_t* lpString_2 = lpString
            var_8_1.b = 4
            void* ecx_7 = &lpString_2[1]
            
            do
                eax_18.b = *lpString_2
                lpString_2 = &lpString_2[1]
            while (eax_18.b != 0)
            
            void* var_48_12 = ecx_7
            void* var_24 = lpString_2 - ecx_7 + 1
            BSTR eax_20
            
            if (sub_4d9120(&var_24, lpString_2 - ecx_7 + 1) s>= 0)
                void* esi = var_24
                char eax_21
                
                if (esi s<= 0x400)
                    eax_21 = sub_4d9150(esi)
                
                void* eax_23
                
                if (esi s> 0x400 || eax_21 == 0)
                    eax_23 = sub_4ded10(&var_20, esi)
                else
                    __alloca_probe_16(esi)
                    eax_23 = &var_44
                
                eax_20 = sub_4d9200(eax_23, lpString, esi u>> 1, 3)
                hWnd = arg1
            else
                eax_20 = nullptr
            
            BSTR bstrString_1 = bstrString
            int32_t eax_24 = sub_4de430(eax_20, hWnd, ppstm, &hMem_1, var_54)
            int32_t* hMem_2 = hMem_1
            int32_t eax_26
            
            if (eax_24 s>= 0)
                eax_26 = (**hMem_2)(hMem_2, 0x61d57c, &dwNewLong)
            
            if (eax_24 s< 0 || eax_26 s< 0)
                var_8_1.b = 3
                
                if (hMem_2 != 0)
                    (*(*hMem_2 + 8))(hMem_2)
                
                sub_4ded60(&var_20)
                goto label_4de3d6
            
            SetWindowLongA(arg1, 0xffffffeb, dwNewLong)
            var_8_1.b = 3
            (*(*hMem_2 + 8))(hMem_2)
            sub_4ded60(&var_20)
            SysFreeString(bstrString)
            var_8_1.b = 0
            struct IStream ppstm_1 = ppstm
            
            if (ppstm_1 != 0)
                (*(*ppstm_1 + 8))(ppstm_1)
            
            sub_4df250(&lpString_1)
            result = DefWindowProcA(arg1, arg2, arg3, arg4)
else if (arg2 == 0x82)
    int32_t eax_10 = GetWindowLongA(hWnd, 0xffffffeb)
    
    if (eax_10 != 0)
        (*(*eax_10 + 8))(eax_10)
    
    OleUninitialize()
    result = DefWindowProcA(hWnd, arg2, arg3, arg4)
else if (arg2 != 0x210 || arg3.w != 1 || arg4 == 0)
    result = DefWindowProcA(hWnd, arg2, arg3, arg4)
else if ((GetWindowLongA(arg4, 0xffffffec) & 0x10000) == 0)
    result = DefWindowProcA(hWnd, arg2, arg3, arg4)
else
    SetWindowLongA(hWnd, 0xffffffec, GetWindowLongA(hWnd, 0xffffffec) | 0x10000)
    result = DefWindowProcA(hWnd, arg2, arg3, arg4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_5f02dd(eax_2 ^ &__saved_ebp)
return result

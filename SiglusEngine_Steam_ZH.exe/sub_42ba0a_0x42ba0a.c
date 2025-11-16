// 函数: sub_42ba0a
// 地址: 0x42ba0a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_130 = edi
wchar16* lpFileName = arg2
arg1[0x16] = arg7

if (arg3 != 0)
    void multiByteStr
    WideCharToMultiByte(0xfde9, 0, arg2, 0xffffffff, &multiByteStr, 0x104, nullptr, nullptr)
    lpFileName = &multiByteStr

int32_t result
void* esi_3
void* edi_6

if (arg7 == 0)
    uint32_t nBufferLength = GetFullPathNameA(lpFileName, 0, nullptr, nullptr)
    int32_t eax_6 = sub_46b465(arg4, nBufferLength + 1, 1)
    arg1[0x18] = eax_6
    
    if (eax_6 == 0)
        result = 0x8007000e
    else
        int32_t eax_7 = sub_46b465(arg4, nBufferLength + 1, 1)
        arg1[0x17] = eax_7
        
        if (eax_7 != 0)
            PSTR filePart
            GetFullPathNameA(lpFileName, nBufferLength, arg1[0x18], &filePart)
            arg1[0x18][nBufferLength] = 0
            int32_t esi_6
            int32_t edi_8
            edi_8, esi_6 = __builtin_memcpy(arg1[0x17], arg1[0x18], (nBufferLength + 1) u>> 2 << 2)
            __builtin_memcpy(edi_8, esi_6, (nBufferLength + 1) & 3)
            PSTR filePart_1 = filePart
            
            if (filePart_1 != 0)
                *filePart_1 = 0
            
            int32_t result_2 = sub_42929f(&arg1[0xf], arg1[0x17], 0)
            
            if (result_2 s>= 0)
                esi_3 = &arg1[0x19]
                *esi_3 = arg1[0x11]
                edi_6 = &arg1[0x1a]
                *edi_6 = arg1[0x12]
            label_42bc24:
                result = sub_42a684(arg1, *esi_3, *edi_6, arg1[0x17], 1, arg4, arg6)
                
                if (result s>= 0)
                    result = 0
            else
                wchar16* lpFileName_2 = lpFileName
                sub_42aba3(arg6, arg5, 0x5e3, "failed to open source file: '%s'")
                result = result_2
        else
            result = 0x8007000e
else
    wchar16* lpFileName_3 = lpFileName
    void* edi_2 = lpFileName_3 + 1
    int32_t ecx_3
    
    do
        ecx_3.b = *lpFileName_3
        lpFileName_3 += 1
    while (ecx_3.b != 0)
    int32_t eax_2 = sub_46b465(arg4, lpFileName_3 - edi_2 + 1, 1)
    arg1[0x17] = eax_2
    
    if (eax_2 == 0)
        result = 0x8007000e
    else
        int32_t esi_2
        int32_t edi_5
        edi_5, esi_2 = __builtin_memcpy(eax_2, lpFileName, (lpFileName_3 - edi_2 + 1) u>> 2 << 2)
        __builtin_memcpy(edi_5, esi_2, (lpFileName_3 - edi_2 + 1) & 3)
        int32_t* eax_4 = arg1[0x16]
        edi_6 = &arg1[0x1a]
        esi_3 = &arg1[0x19]
        int32_t result_1 = (**eax_4)(eax_4, arg8, arg1[0x17], arg9, esi_3, edi_6)
        
        if (result_1 s>= 0)
            goto label_42bc24
        
        wchar16* lpFileName_1 = lpFileName
        sub_42aba3(arg6, arg5, 0x5e3, "failed to open source file: '%s'")
        result = result_1
sub_745f2b(__security_cookie_1)
return result
